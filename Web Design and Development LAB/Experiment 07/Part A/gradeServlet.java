package com.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;
import javax.servlet.http.*;

public class gradeServlet extends HttpServlet {
@Override
 protected void doGet(HttpServletRequest request, HttpServletResponse response)
 	throws ServletException, IOException
 {
	response.setContentType("text/html");
	int n=5; 
	String sub[];
	sub = new String[6];
	sub[1] = request.getParameter("subject1");
	sub[2] = request.getParameter("subject2");
	sub[3] = request.getParameter("subject3");
	sub[4] = request.getParameter("subject4");
	sub[5] = request.getParameter("subject5");
	PrintWriter obj = response.getWriter();
	obj.println("<h1>Welcome to the Grade evaluating system using Servlet.</h1>");
	obj.println("<font color=blue>");
	for (int i=1; i<=n;i++)
	{
		if (Integer.parseInt(sub[i])>=90)
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: A+.</p>");
		}
		else if (Integer.parseInt(sub[i])>=80)
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: A.</p>");
		}
		else if (Integer.parseInt(sub[i])>=70)
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: B.</p>");
		}
		else if (Integer.parseInt(sub[i])>=60)
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: C.</p>");
		}
		else if (Integer.parseInt(sub[i])>=50)
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: D.</p>");
		}
		else 
		{
			obj.println("<p>Grade for Subject "+i+" for "+sub[i]+" is: FAIL.</p>");
		}
	}
	obj.println("</font>");
	obj.close();
 }
}
