# dotnet-runtime-windowsdesktop

## NanoServer
Nanoserver with installation of windowsdesktop-runtime-6.0.18-win-x64

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

## NanoServer + Powershell
Poweshell is installed in the container  in '/Program Files/powershell'

### Build the Docker image
docker build -f Dockerfile.powershellnano -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-pwsh-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-pwsh-ltsc2022-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-pwsh-ltsc2022 

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-pwsh-ltsc2022

## Windows Server Core
Windows Server Core with installation of windowsdesktop-runtime-6.0.18-win-x64 and vc_redist.x64.exe

### Build the Docker image
docker build -f Dockerfile.core -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022

## Windows Server Core + ASP.NET
Windows Server Core + ASP.NET with installation of windowsdesktop-runtime-6.0.18-win-x64 and vc_redist.x64.exe

### Build the Docker image
docker build -f Dockerfile.coreaspnet -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-aspnetservercore-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-aspnetservercore-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-aspnetservercore-ltsc2022 

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-aspnetservercore-ltsc2022