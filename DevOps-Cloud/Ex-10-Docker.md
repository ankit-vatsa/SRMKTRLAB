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

## To modify the custom entry page of the nginx
- Make a new directory
> index.html
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ankit Vatsa</title>
</head>
<body style="background-color: burlywood;">
    <center>

        <h1 style="color:brown">This is my nginx entry page.</h1>

    </center>
    
</body>
</html>
```
- Make a new Dockerfile
> Dockerfile
```
FROM nginx
COPY index.html /usr/share/nginx/html
```
- Run the command in the cmd:
```
 docker run -p 8090:80 -v /pathto/custom/directory:/usr/share/nginx/html nginx
```
