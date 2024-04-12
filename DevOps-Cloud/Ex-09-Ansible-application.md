Ansible roles are a way to organize and reuse tasks in Ansible playbooks.

apache/

├── defaults

│   └── main.yml

├── files


├── handlers

│   └── main.yml

├── meta

│   └── main.yml

├── README.md

├── tasks

│   └── main.yml

├── templates

├── tests

│   ├── inventory

│   └── test.yml

└── vars

    └── main.yml

> Description of standard files:

defaults/main.yml: Contains default variables for the role.

handlers/main.yml: Contains handlers that can be triggered by tasks.

meta/main.yml: Contains metadata about the role, such as dependencies.

tasks/main.yml: Contains the main tasks for the role, such as installing and configuring Apache.

vars/main.yml: Contains variables used in the role.





