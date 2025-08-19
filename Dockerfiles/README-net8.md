# dotnet-runtime-windowsdesktop NET8.0


## Windows Server Core
Windows Server Core with installation of windowsdesktop-runtime-8.0.19-win-x64 and vc_redist.x64.exe

### Build the Docker image - dotnet-runtime
```bat
docker build -f Dockerfile.core -t mpospisil/dotnet-runtime-windowsdesktop:8.0.19-windowsservercore-ltsc2022 .
```

```bat
REM Tag the image
docker tag mpospisil/dotnet-runtime-windowsdesktop:8.0.19-windowsservercore-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:8.0.19-windowsservercore-ltsc2022 

REM Log in to the container repository
docker login --username mpospisil --password dckr_pat_XXX 

REM  Log in to the container repository
docker push docker.io/dotnet-runtime-windowsdesktop:8.0.19-windowsservercore-ltsc2022
```

### Run the container with terminal
```bat
docker run -it mpospisil/dotnet-runtime-windowsdesktop:8.0.19-windowsservercore-ltsc2022 cmd
```

### Build the Docker image - aspnet
```bat
docker build -f Dockerfile.coreaspnet -t mpospisil/dotnet-runtime-windowsdesktop:8.0.19-aspnetservercore-ltsc2022 .
```

```bat
REM Tag the image
docker tag mpospisil/dotnet-runtime-windowsdesktop:8.0.19-aspnetservercore-ltsc2022  docker.io/mpospisil/dotnet-runtime-windowsdesktop:8.0.19-aspnetservercore-ltsc2022 

REM Log in to the container repository
docker login --username mpospisil --password dckr_pat_XXX

REM  Log in to the container repository
docker push docker.io/mpospisil/dotnet-runtime-windowsdesktop:8.0.19-aspnetservercore-ltsc2022
```

### Run the container with terminal
```bat
docker run -it mpospisil/dotnet-runtime-windowsdesktop:8.0.19-aspnetservercore-ltsc2022 cmd
```