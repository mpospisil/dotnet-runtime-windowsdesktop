# dotnet-runtime-windowsdesktop

building container 


docker build -f Dockerfile.nano -t nanoserver-runtime-windowsdesktop . 
docker build -f Dockerfile.core -t windowscore-runtime-windowsdesktop . 

open powershell in the container
docker run -it nanoserver-runtime-windowsdesktop:latest cmd

# Build the Docker image
docker build -t mpospisil/nanoserver-runtime-windowsdesktop:v1 .

# Tag the image

docker tag mpospisil/nanoserver-runtime-windowsdesktop:v1 docker.io/mpospisil/nanoserver-runtime-windowsdesktop:v1

# Log in to the container repository
docker login registry-url

# Push the image to the container repository
docker push docker.io/mpospisil/nanoserver-runtime-windowsdesktop:v1