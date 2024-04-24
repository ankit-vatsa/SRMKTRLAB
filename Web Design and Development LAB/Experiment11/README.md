> Goto https://start.spring.io
  - Project - Maven
  - Language - Java
  - Dependencies - Spring Web
  - Artifact - ankit
  - Name - ankit
  - Package name - com.example.ankit
  - Generate
    
> Extract the downloaded file
  - Keep it in a separate directory
    
> Eclipse IDE
  - Help -> Eclipse Marketplace -> Spring Tools 4
  - File -> Open Projects from File System... -> Select the extracted Directory
  - Right click on **src/main/java** -> New -> Package ->  **com.example.ankit.controller**
  - Right click  on the package "**com.example.ankit.controller**" -> New -> Class -> Name : **ankitController**
  - Similarly, make a package **com.example.ankit.service** -> Create a class -> Name: **ankitService**
    
> Contents of the files:

> > ankitController.java

<a href="ankitController.java">ankitController.java</a>

> > ankitService.java

<a href="ankitService.java">ankitService.java</a>

> > application.properties

<a href="application.properties">application.properties</a>

> >
**To test the API:**

> > GET method
> > http://localhost:8090/index
> > 
> > Parameters:
> > 
> > a  5
> > 
> > b  6
> 
OR

> > http://localhost:8090/index?a=5&b=15
