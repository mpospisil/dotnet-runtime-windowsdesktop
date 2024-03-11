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

### Dockerfile.nano-kernel
The docker file [Dockerfile.nano-kernel32](Dockerfile.nano-kernel32) creates a Windows Nanoserver image which has kernel32.dll. The dll kernel32.dll was taken from  [Windows Server Core 2022](https://hub.docker.com/_/microsoft-dotnet-runtime).
It solves an issue of windows reverse forwaders - see a discussion  [Nano Server does not have kernel32.dll and advapi32.dl](https://stackoverflow.com/questions/33467943/running-asp-net-5-on-nano-server-throws-unable-to-load-dll-kernel32/33585300#33585300).
The file 'kernel32.dll' is copied to 'C:\Windows\System32' during docker build and it overrides a light version ok kernel.32 which is located in 'C:\Windows\System32\forwarders' in the original Windows Nanoserver image.

docker build -f Dockerfile.nano-kernel32 -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-kernel32-ltsc2022 .

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-kernel32-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022

docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-kernel32-ltsc2022

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

## Dockerfile.nano-kernel + node.js
Install node.js in 6.0.18-nanoserver-kernel32-ltsc2022

### Build the Docker image
docker build -f Dockerfile.nano-nodejs -t mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-nanoserver-nodejs-ltsc2022 .

### Tag the image

docker tag mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-nanoserver-nodejs-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-nanoserver-nodejs-ltsc2022

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-nanoserver-nodejs-ltsc2022


# Repository mpospisil/nanoserver-dotnet

## NanoServer + .NET Desktop Runtime (6.0.27)
Nanoserver with installation of aspnetcore-runtime-6.0.27

### Build the Docker image
docker build -f Dockerfile.nano -t mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27 .

### Tag the image

docker tag mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27 docker.io/mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27

## NanoServer + .NET Desktop Runtime (6.0.27) (modified kernel)
Nanoserver with installation of aspnetcore-runtime-6.0.27
The docker file [Dockerfile.nano-kernel32](Dockerfile.nano-kernel32) creates a Windows Nanoserver image which has kernel32.dll. The dll kernel32.dll was taken from  [Windows Server Core 2022](https://hub.docker.com/_/microsoft-dotnet-runtime).
It solves an issue of windows reverse forwaders - see a discussion  [Nano Server does not have kernel32.dll and advapi32.dl](https://stackoverflow.com/questions/33467943/running-asp-net-5-on-nano-server-throws-unable-to-load-dll-kernel32/33585300#33585300).
The file 'kernel32.dll' is copied to 'C:\Windows\System32' during docker build and it overrides a light version ok kernel.32 which is located in 'C:\Windows\System32\forwarders' in the original Windows Nanoserver image.

### Build the Docker image
docker build -f Dockerfile.nano -t mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27-kernel32 .

### Tag the image

docker tag mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27 docker.io/mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27-kernel32

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/nanoserver-dotnet:ltsc2022-desktop-runtime-6.0.27-kernel32


## NanoServer + aspnet (6.0.27)
Nanoserver with installation of aspnetcore-runtime-6.0.27

### Build the Docker image
docker build -f Dockerfile.nano -t mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27 .

### Tag the image

docker tag mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27 docker.io/mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27

## NanoServer + aspnet (6.0.27) + node.js (v20.11.1)
Nanoserver with installation of aspnetcore-runtime-6.0.27 and node.js v20.11.1

### Build the Docker image
docker build -f Dockerfile.nanoaspnet-nodejs -t mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27-nodejs20.11.1 .

### Tag the image

docker tag mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27-nodejs20.11.1 docker.io/mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27-nodejs20.11.1

### Log in to the container repository
docker login registry-url

### Push the image to the container repository
docker push docker.io/mpospisil/nanoserver-dotnet:ltsc2022-aspcore-6.0.27-nodejs20.11.1

