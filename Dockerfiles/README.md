# dotnet-runtime-windowsdesktop

## NanoServer

### Build the Docker image
docker build -f Dockerfile.nano -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022

### open command line in the container
docker run -it mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 cmd

## Server Core

### Build the Docker image
docker build -f Dockerfile.core -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022

