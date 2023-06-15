FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 AS base
WORKDIR /app

FROM mcr.microsoft.com/dotnet/sdk:6.0 AS build
WORKDIR /src
COPY ["WpfConsole.csproj", "./"]
RUN dotnet restore "./WpfConsole.csproj"
COPY . .
WORKDIR "/src/."
RUN dotnet build "WpfConsole.csproj" -c Release -o /app/build

FROM build AS publish
RUN dotnet publish "WpfConsole.csproj" -c Release -o /app/publish

FROM base AS final
WORKDIR /app
COPY --from=publish /app/publish .
#ENTRYPOINT ["dotnet", "WpfConsole.dll"]