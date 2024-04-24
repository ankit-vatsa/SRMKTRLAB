package com.example.student.controller;

import com.example.student.service.studentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class studentController {

    @Autowired
    private studentService studentService;

    @PostMapping("/student")
    public String createStudent(@RequestBody StudentRequest request) {
        return studentService.getStudent(request.getName(), request.getAge());
    }

    public static class StudentRequest {
        private String name;
        private Integer age;

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public Integer getAge() {
            return age;
        }

        public void setAge(Integer age) {
            this.age = age;
        }
    }
}
