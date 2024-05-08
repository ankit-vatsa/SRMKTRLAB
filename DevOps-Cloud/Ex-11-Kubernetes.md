
- Docker Desktop app -> Settings -> Kubernetes -> Enable Kubernetes

- In cmd:

```
kubectl get nodes
```

```
kubectl version
```

```
kubectl create deployment nginx --image=nginx
```

```
kubectl get deployments
```

```
kubectl expose deployment nginx --port=8090 --type=LoadBalancer
```

```
kubectl get services
```
Goto : http://localhost:8090

```
kubectl delete deployment nginx
```
