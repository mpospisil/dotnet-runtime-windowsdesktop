# dotnet-runtime-windowsdesktop

building container 

exit
docker build -f Dockerfile.nano -t nanoserver-runtime-windowsdesktop . 
docker build -f Dockerfile.core -t windowscore-runtime-windowsdesktop . 

open powershell in the container
docker run -it nanoserver-runtime-windowsdesktop:latest cmd
exit