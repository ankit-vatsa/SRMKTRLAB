package com.servlet;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class gradeServlet extends HttpServlet {
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
	 	throws ServletException, IOException
	 {
		response.setContentType("text/html");
		String sub[];
		String grade = null;
		sub = new String[6];
		sub[1] = request.getParameter("subject1");
		sub[2] = request.getParameter("subject2");
		sub[3] = request.getParameter("subject3");
		sub[4] = request.getParameter("subject4");
		sub[5] = request.getParameter("subject5");
		int totalMarks = (Integer.parseInt(sub[1])+Integer.parseInt(sub[2])+Integer.parseInt(sub[3])+Integer.parseInt(sub[4])+Integer.parseInt(sub[5]))/5;

        if (totalMarks >= 90) {
            grade = "A+";
        } else if (totalMarks >= 80) {
            grade = "A";
        } else if (totalMarks >= 70) {
            grade = "B";
        } else if (totalMarks >= 60) {
            grade = "C";
        } else {
            grade = "FAIL";
        }
		    request.setAttribute("grade", grade);
        request.getRequestDispatcher("gradeResult.jsp").forward(request, response);
	 } 
}
