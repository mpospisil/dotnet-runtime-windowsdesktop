# escape=`

# Installer image
FROM mcr.microsoft.com/windows/servercore:ltsc2022 AS installer

SHELL ["powershell", "-Command", "$ErrorActionPreference = 'Stop'; $ProgressPreference = 'SilentlyContinue';"]

# Retrieve .NET Core Runtime
# USER ContainerAdministrator
RUN $dotnet_version = '6.0.18'; `
    Invoke-WebRequest -OutFile dotnet-installer.exe https://download.visualstudio.microsoft.com/download/pr/f76bace5-6cf4-41d8-ab54-fb7a3766b673/1cbc047d4547dfa9ecd59d5a71402186/windowsdesktop-runtime-6.0.18-win-x64.exe; `
    ./dotnet-installer.exe /S

# Runtime image 
# FROM mcr.microsoft.com/dotnet/aspnet:6.0-nanoserver-ltsc2022 as nano-with-dotnet
# FROM mcr.microsoft.com/dotnet/aspnet:6.0.18-windowsservercore-ltsc2022 as nano-with-dotnet
# FROM mcr.microsoft.com/dotnet/runtime:6.0.18-windowsservercore-ltsc2022 as nano-with-dotnet
FROM mcr.microsoft.com/dotnet/runtime:6.0-nanoserver-ltsc2022 as nano-with-dotnet

ENV `
    # Enable detection of running in a container
    DOTNET_RUNNING_IN_CONTAINER=true

# In order to set system PATH, ContainerAdministrator must be used
USER ContainerAdministrator
RUN setx /M PATH "%PATH%;C:\Program Files\dotnet"
USER ContainerUser

COPY --from=installer ["/Program Files/dotnet", "/Program Files/dotnet"]


FROM nano-with-dotnet AS base
WORKDIR /app

FROM mcr.microsoft.com/dotnet/sdk:6.0 AS build
WORKDIR /src
COPY ["WpfConsole.csproj", "./"]
RUN dotnet restore "./WpfConsole.csproj"
COPY . .
WORKDIR "/src/."
RUN dotnet build "WpfConsole.csproj" -c Release -o /app/build

FROM build AS publish
RUN dotnet publish "WpfConsole.csproj" -c Release --runtime win10-x64 -o /app/publish --self-contained false

FROM base AS final
WORKDIR /app
COPY --from=publish /app/publish .
#ENTRYPOINT ["dotnet", "WpfConsole.dll"]