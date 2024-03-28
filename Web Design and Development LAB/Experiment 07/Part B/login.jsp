<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
		<form method="post" action="loginServlet">
        <table border="1" style="border-radius: 2.5%; border-color: violet; border-width: 5px;">
            <tr align="center";>
                <td>
                    <br><label for="uid">Username:</label>
                </td>
                <td>
                    <input type="text" name="username">
                </td>
            </tr>
            
            <tr align="center";>
                <td>                    
                    <label for="pwd">Password:</label>
                </td>
                <td>                    
                    <input type="password" name="password">
                </td>
            </tr>
            
            <tr align="center";>
                <td>
                    Submit:
                </td>
                <td>
                    <center ><input type="submit" value="Login"></center>
                </td>
            </tr>
        </table>
        </form>
</body>
</html>