# dotnet-runtime-windowsdesktop

building container 

exit
docker build -f Dockerfile.nano -t runtime-windesktop-nano . 
docker build -f Dockerfile.core -t runtime-windesktop-core . 

open powershell in the container
docker run -it runtime-windesktop-nano:latest cmd
exit