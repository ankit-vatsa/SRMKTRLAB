package com.servlet;

import java.io.*;
import java.sql.*;

import javax.servlet.*;
import javax.servlet.http.*;

public class registerServlet extends HttpServlet {
@Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        String studentName = request.getParameter("studentName");
        String fatherName = request.getParameter("fatherName");
        String motherName = request.getParameter("motherName");
        String dob = request.getParameter("dob");
        String email = request.getParameter("email");
        String mobile = request.getParameter("mobile");
        String level = request.getParameter("level");
        String department = request.getParameter("department");

        Connection con = null;
        PreparedStatement ps = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/simplelogin", "root", "@nkit*Sql8294");

            ps = con.prepareStatement("INSERT INTO students (studentName, fatherName, motherName, dob, email, mobile, level, department) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
            ps.setString(1, studentName);
            ps.setString(2, fatherName);
            ps.setString(3, motherName);
            ps.setString(4, dob);
            ps.setString(5, email);
            ps.setString(6, mobile);
            ps.setString(7, level);
            ps.setString(8, department);

            int i = ps.executeUpdate();
            RequestDispatcher rd = request.getRequestDispatcher("registrationSuccess.jsp");
            rd.forward(request, response);

        } catch (Exception e) {
            out.print("Error: " + e.getMessage());
        } finally {
            try {
                if (ps != null) {
                    ps.close();
                }
                if (con != null) {
                    con.close();
                }
            } catch (SQLException e) {
                out.print("Error closing resources: " + e.getMessage());
            }
        }

        out.close();
    }
}

