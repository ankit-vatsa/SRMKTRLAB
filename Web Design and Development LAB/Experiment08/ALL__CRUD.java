package com.servlet;

import java.io.*;
import java.sql.*;

import javax.servlet.*;
import javax.servlet.http.*;

public class StudentServlet extends HttpServlet {

    private static final String DB_URL = "jdbc:mysql://localhost:3306/simplelogin";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "password";

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        String studentName = request.getParameter("studentName");
        String mobile = request.getParameter("mobile");

        try (Connection con = getConnection(); 
             PreparedStatement ps = con.prepareStatement("INSERT INTO students (studentName, mobile) VALUES (?, ?)")) {

            ps.setString(1, studentName);
            ps.setString(2, mobile);
            ps.executeUpdate();

            RequestDispatcher rd = request.getRequestDispatcher("registrationSuccess.jsp");
            rd.forward(request, response);

        } catch (Exception e) {
            out.print("Error: " + e.getMessage());
        } 

        out.close();
    }

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        String studentId = request.getParameter("studentId");

        try (Connection con = getConnection(); 
             PreparedStatement ps = con.prepareStatement("SELECT studentName, mobile FROM students WHERE studentId = ?")) {

            ps.setString(1, studentId);
            ResultSet rs = ps.executeQuery();

            if (rs.next()) {
                out.print("Student Name: " + rs.getString("studentName") + "<br>");
                out.print("Mobile: " + rs.getString("mobile") + "<br>");
            } else {
                out.print("No student found with the given ID.");
            }

        } catch (Exception e) {
            out.print("Error: " + e.getMessage());
        } 

        out.close();
    }

    @Override
    protected void doPut(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        String studentId = request.getParameter("studentId");
        String studentName = request.getParameter("studentName");
        String mobile = request.getParameter("mobile");

        try (Connection con = getConnection(); 
             PreparedStatement ps = con.prepareStatement("UPDATE students SET studentName = ?, mobile = ? WHERE studentId = ?")) {

            ps.setString(1, studentName);
            ps.setString(2, mobile);
            ps.setString(3, studentId);

            int i = ps.executeUpdate();
            if (i > 0) {
                out.print("Student details updated successfully.");
            } else {
                out.print("Error updating student details.");
            }

        } catch (Exception e) {
            out.print("Error: " + e.getMessage());
        } 

        out.close();
    }

    @Override
    protected void doDelete(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        String studentId = request.getParameter("studentId");

        try (Connection con = getConnection(); 
             PreparedStatement ps = con.prepareStatement("DELETE FROM students WHERE studentId = ?")) {

            ps.setString(1, studentId);

            int i = ps.executeUpdate();
            if (i > 0) {
                out.print("Student deleted successfully.");
            } else {
                out.print("Error deleting student.");
            }

        } catch (Exception e) {
            out.print("Error: " + e.getMessage());
        } 

        out.close();
    }

    private Connection getConnection() throws SQLException, ClassNotFoundException {
        Class.forName("com.mysql.cj.jdbc.Driver");
        return DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
    }
}
