> > SERVLET
> 
>
> > Install Eclipse IDE (2022) as Java (1st option)
>
> > Install Java JDK
>
> > Install Apache Server
> 
> > Install MySQL - https://dev.mysql.com/downloads/installer/ , https://www.youtube.com/watch?v=bcrAdegPdAI
>
> > Help -> Eclipse Marketplace -> Search Java and Web -> Install Eclipse Enterprise Java and Web Developer Tools
> 
> > Click on Project name -> Java Build Path -> Libraries -> Double click on JRE System Library -> Alternate JRE -> Installed JREs -> Select the Installed JDK -> Apply
> 
> > Click on Project name -> Java Build Path -> Libraries ->  Classpath -> Add External JARs -> Select the JAR file -> Apply
> 
> > Click Project name -> Properties -> Project Facet -> Change Java version to 9.
>
> > Restart the IDE
>
> > File -> Other -> Web -> Dynamic Web Project -> Name: Experiment07
>
> > Right click Experiment07 -> HTML File
>
> > Right click Experiment07 -> Class -> Package: com.servlet -> Name: loginServlet
> 
> > Right click WEB-INF (/src/main/webapp/WEB-INF) -> xml -> web.xml
> 
> > Add "mysql-connector-java-8.0.15.jar" file into apache-tomcat-9.0.16\lib folder i.e., installation path folder of Apache Tomcat server.
> 
> > How to create database in MySql? https://www.techrepublic.com/article/how-to-create-tables-and-add-data-to-mysql-database-with-mysql-workbench/
>
> > In HTML file -> Click Run On Server -> Manually define a new server -> Apache -> Tomcat v9.0 Server -> Next -> Browse -> Give installation path of the Tomcat Server -> Finish
>
> > In Servers tab (bottom of the page) -> Click on the server name and start
>
> >     NOTE: If server is not starting. ---->>>> Double click on the Server Name -> Overview page will open -> Maximize the tab -> Port Name -> Tomcat admin port -> Replace the "-" value with the value 9000 or above -> Save -> Run the server again
>
> > In HTML file -> Run the server 
