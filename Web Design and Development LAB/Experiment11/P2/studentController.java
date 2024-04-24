package com.example.student.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.example.student.service.studentService;

@RestController

public class studentController {
@Autowired //automatic dependency injection
studentService studentService;
@GetMapping("/student")
public String getStudent(@RequestParam String name, @RequestParam Integer age) {
return studentService.getStudent(name, age);
}
}
