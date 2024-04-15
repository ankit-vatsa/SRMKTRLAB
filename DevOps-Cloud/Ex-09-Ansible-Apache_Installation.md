>> In your EC2-instance:

sudo systemctl status httpd

>> In your LOCAL Machine:

>>> Replace: IP-DNS-of_EC2 wih your EC2 Key

>>> Replace: SSH_KEY with your EC2 Key

>>> Replace: path-to-key with your EC2 Key Path

mkdir Ankit-Project

cd Ankit-Project

ansible-galaxy init apache-role

cd apache-role

cd tasks

echo "---
- name: Install Apache web server
  yum:
    name: httpd
    state: present

- name: Start Apache service
  service:
    name: httpd
    state: started
    enabled: true
- name: Copy custom index.html file
  copy:
    src: /home/ec2-user/index.html
    dest: /var/www/html/index.html
- name: Restart Apache service
  service:
    name: httpd
    state: restarted
">main.yml

cd 

cd Ankit-Project

echo "---
- name: Install and configure Apache on Amazon Linux 2023
  hosts: IP-DNS-of_EC2
  become: true
  roles:
    - apache-role
">install_apache.yml

cd 

cd Ankit-Project

mkdir ssh_key

echo "SSH_KEY">ansible_key.pem

chmod 400 ansible_key.pem

cd

cd Ankit-Project

echo "IP-DNS-of_EC2 ansible_ssh_private_key_file=/path-to-key/ansible_key.pem ansible_user=ec2-user">inventory

cd

cd Ankit-Project

echo "<html>
<head>
    <title>Ankit Vatsa</title>
</head>
<body>
    <h1>Ankit Vatsa</h1>
    <h2>Hello, world! Most welcome to my  website.</h2>
    <p>This is a custom text served by Apache on my EC2 instance.</p>
</body>
</html>
">index.

cd

cd Ankit-Project

ansible-playbook -i inventory install_apache.yml

>> In your EC2-instance :

sudo systemctl status httpd
