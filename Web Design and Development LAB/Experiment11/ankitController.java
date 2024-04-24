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
