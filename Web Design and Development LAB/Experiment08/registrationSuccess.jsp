<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <title>Registration Successful</title>
</head>
<body>
    <h2>Registration Successful</h2>
    <table border="1">
        <tr>
            <th>Student Name</th>
            <th>Father's Name</th>
            <th>Mother's Name</th>
            <th>Date of Birth</th>
            <th>Email</th>
            <th>Mobile</th>
            <th>Level</th>
            <th>Department</th>
        </tr>
        <tr>
            <td><%= request.getParameter("studentName") %></td>
            <td><%= request.getParameter("fatherName") %></td>
            <td><%= request.getParameter("motherName") %></td>
            <td><%= request.getParameter("dob") %></td>
            <td><%= request.getParameter("email") %></td>
            <td><%= request.getParameter("mobile") %></td>
            <td><%= request.getParameter("level") %></td>
            <td><%= request.getParameter("department") %></td>
        </tr>
    </table>
</body>
</html>
