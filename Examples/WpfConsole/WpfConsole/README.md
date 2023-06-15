# running the application in docker

docker build -t wpf-console .

docker run -it wpf-console:latest

docker run -it wpf-console:latest cmd



## it is possible to switch between nanoserver and server core in Dockerfile by choosing the right base image

FROM mcr.microsoft.com/dotnet/runtime:6.0.18-windowsservercore-ltsc2022 as application-base

FROM mcr.microsoft.com/dotnet/runtime:6.0-nanoserver-ltsc2022 as application-base
