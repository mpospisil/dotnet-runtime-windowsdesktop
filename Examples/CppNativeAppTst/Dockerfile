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
FROM mcr.microsoft.com/dotnet/aspnet:6.0-nanoserver-ltsc2022 as nano-with-dotnet

ENV `
    # Enable detection of running in a container
    DOTNET_RUNNING_IN_CONTAINER=true

# copy windows c++ redistributable 
# copy the content of 'C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Redist\MSVC\14.34.31931\onecore\x64\Microsoft.VC143.CRT'
# to the directory'vc_redist.x64' (the subfolder in the directory with Dockerfile on your PC)
COPY ["vc_redist.x64", "/Program Files/vc_redist.x64"]  

# In order to set system PATH, ContainerAdministrator must be used
USER ContainerAdministrator
# RUN setx /M PATH "%PATH%;C:\Program Files\dotnet"
# RUN setx /M PATH "%PATH%;C:\Program Files\vc_redist.x64"
RUN setx /M PATH "%PATH%;C:\Program Files\vc_redist.x64"
USER ContainerUser

COPY --from=installer ["/Program Files/dotnet", "/Program Files/dotnet"]

FROM nano-with-dotnet AS final
WORKDIR /app
COPY x64/Release .

ENTRYPOINT ["CppNativeAppTst.exe"]