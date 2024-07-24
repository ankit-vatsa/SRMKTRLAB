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

Goto -> hadoop directory in C drive -> Create a folder "data" -> Inside data folder, create two new folders named "datanode" and "namenode".

Goto -> hadoop directory in C drive -> etc -> hadoop
<hr>

<h4>Files to be edited: </h4>

  - coresite.xml
```
<configuration>
  <property>
    <name>fs.defaulterFS</name>
    <value>hdfs://localhost:900</value>
  </property>
</configuration>
```
  - hdfs-site.xml
> replace the path with your installation path
```
<configuration>
  <property>
    <name>dfs.replication</name>
    <value>1</value>
  </property>
  <property>
    <name>dfs.namenode.name.dir</name>
    <value>C:\hadoop-3.4.0\data\namenode</value>
  </property>
  <property>
    <name>dfs.datanode.name.dir</name>
    <value>C:\hadoop-3.4.0\data\datanode</value>
  </property>
</configuration>
```
  - mapred-site.xml
```
<configuration>
  <property>
    <name>mapreduce.framework.name</name>
    <value>yarn</value>
  </property>
</configuration>
```
  - yarn-site.xml
```
<configuration>
  <property>
    <name>yarn.nodemanager.aux-services</name>
    <value>mapreduce_shuffle</value>
  </property>

  <property>
    <name>yarn.nodemanager.auxservices.mapreduce.shuffle</name>
    <value>org.apache.hadoop.mapred.shufflehandler</value>
  </property>
</configuration>
```
  - hadoop-env.cmd
> replace the path with your installation path
```
set JAVA_HOME=C:\java\jdk1.8
```

In the hadoop-env.cmd file, paste the path of the JDK kept in the java folder in C drive.

<hr>

<p align="center"><b>SETUP ENVIRONMENT VARIABLES</b></p>

- USER VARIABLE
```
User variable -> New -> Variable : "HADOOP_HOME" value: "path of bin folder inside hadoop path"
```
- SYSTEM VARIABLE
```
System variable -> Path -> Edit -> New -> "path of bin folder inside hadoop path"
System variable -> Path -> Edit -> New -> "path of sbin folder inside hadoop path"
```
<hr>

<h4>CHECK IF HADOOP IS INSTALLED IN THE SYSTEM USING THE CMD:</h4>

```
hdfs namenode -format
```

<hr>

> [!CAUTION]
> <p align="center"><b>POSSIBLE ERRORS AND THEIR SOLUTIONS:</b></p>


1. Error: could not open '............\amd64\jvm.cfg'
```
In the Environment Variables -> System Variables -> Path

Move the current path of Jave 8 to the top OR Remove any older version of JavaPath with ProgramFiles(x86) in the environment variables.  
```
2. Error: "Windows can't find winutils.exe"
```
Hadoop 3.4.0 and some newer versions do not include winutils.exe in their distributions, primarily because Hadoop traditionally runs on Unix-based systems and the need for winutils.exe has been less emphasized in newer Hadoop versions.

winutils.exe is a utility required by Hadoop to interact with the Windows operating system for various file system operations.

Solution 1:

You can build your own version of winutils.exe from the Hadoop source code. This involves compiling Hadoop code specifically for Windows.
https://github.com/apache/hadoop


Solution 2:

Use any pre-built winutils.exe from reliable and trusted sources.

Copy the winutils.exe to the \bin folder of hadoop installation path. 
```

<h3>EXTERNAL RESOURCES</h3>

- <a href="https://www.youtube.com/watch?v=GNHF0DZK3xQ">YouTube Video Reference</a>
- <a href="https://knowledge.informatica.com/s/article/000137592?language=en_US">jvm.cfg error</a>
- <a href="https://kontext.tech/article/1221/hadoop-3-4-0-winutils-for-windows-10-x64">winutils.exe</a>
