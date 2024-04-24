package com.example.student.service;

import org.springframework.stereotype.Service;

@Service
public class studentService {
    public String getStudent(String name, Integer age) {
        return name + ", your age is " + age;
    }
}
