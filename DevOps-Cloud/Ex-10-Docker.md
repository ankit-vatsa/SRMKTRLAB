- Go to : https://www.docker.com/
- Create an account
- Install Docker Desktop
- Register
- Login

- In CMD:

```
docker --version
```
```
docker pull nginx
```
```
docker run -d -p 8090:80 nginx
```

- Go to: http://localhost:8090

- Get container id using the following command:

```
docker ps
```

```
docker stop <container_id>
```

```
docker rm <container_id>
```
