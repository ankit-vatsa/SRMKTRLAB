// Paste this code in the Class file that you have created in the Eclipse IDE.
package com.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;
import javax.servlet.http.*;


public class loginServlet extends HttpServlet {
	
@Override
 protected void doGet(HttpServletRequest request, HttpServletResponse response)
 	throws ServletException, IOException
 {
	response.setContentType("text/html");
	String bob = request.getParameter("babu");
	PrintWriter obj = response.getWriter();
	String col = request.getParameter("bab");
	obj.println("<font color="+col+">");
	obj.println("<h1>Welcome "+bob+"</h1>");
	obj.println("</font>");
	obj.close();
 }
}
