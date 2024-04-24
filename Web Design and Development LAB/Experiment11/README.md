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
  - 
> Contents of the files:

> > ankitController.java

package com.example.ankit.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.example.ankit.service.ankitService;

@RestController
@RequestMapping
public class ankitController {
@Autowired
ankitService ankitService;
@GetMapping("/index")
public Integer getData(@RequestParam Integer a, @RequestParam Integer b) {
return ankitService.getData(a, b);
}

}

> > ankitService.java

package com.example.ankit.service;

import org.springframework.stereotype.Service;

@Service

public class ankitService {

	public Integer getData(Integer a, Integer b)
{
Integer c=a+b;
return c;
}
}

> > application.properties

server.port = 8090

> > 
