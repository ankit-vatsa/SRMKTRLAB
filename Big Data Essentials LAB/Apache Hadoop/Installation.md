<h1>Apache Hadoop</h1>

**Apache Hadoop is an open source framework that is used to efficiently store and process large datasets ranging in size from gigabytes to petabytes of data.**

- Download latest binary (checksum signature) package using the following link:
```
https://hadoop.apache.org/releases.html
```

<hr>

<h2>Steps to install APACHE HADOOP in Windows 11:</h2>

- Requirements:
    - Java 8
      
<p align="center"><b>PREREQUISITE</b></p>

- Install Java8 and JDK in PC
- Create a new directory in C drive with name "java"
- Install Java8 in it.
- Copy the jdk from C drive Program Files folder into  java folder of C drive that we created


<p align="center"><b>HADOOP INSTALLATION</b></p>

Download Hadoop files from the website

Extract Zip file into C drive

Goto -> hadoop directory in C drive -> etc -> hadoop

> **Files to be edited:**

  - coresite.xml
  - hdfs-site.xml
  - mapred-site.xml
  - yarn-site.xml
  - hadoop-env.cmd

> **Create folders**
> 
In the hadoop directory in C drive -> Create a folder "data"

Inside data folder, create two new folders named "datanode" and "namenode".

In the hadoop-env.cmd file, paste the path of the JDK kept in the java folder in C drive.

<p align="center"><b>SETUP ENVIRONMENT VARIABLES</b></p>

- USER VARIABLE
```
User variable -> New -> Variable : "HADOOP_HOME" value: "bin folder inside hadoop path"
```
- SYSTEM VARIABLE
```
System variable -> Path -> Edit -> New -> "bin folder inside hadoop path"
System variable -> Path -> Edit -> New -> "sbin folder inside hadoop path"
```

CHECK IF HADOOP IS INSTALLED IN THE SYSTEM USING THE CMD:

```
hdfs namenode -format
```
