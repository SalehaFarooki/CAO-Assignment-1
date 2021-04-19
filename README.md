
# CAO-Assignment-1 - Making your own 64 bit Operating System
This repository holds the source code for a 64 bit Operating system following [this YouTube tutorial series](https://www.youtube.com/playlist?list=PLZQftyCk7_SeZRitx5MjBKzTtvk0pHMtp/).
## Prerequisites
 1. A text editor such as [VS Code](https://code.visualstudio.com/).
 2. [Docker](https://www.docker.com/) for creating our build-environment.
 3. [Qemu](https://www.qemu.org/) for emulating our operating system.
## Building a Docker Image
 - `docker build buildenv -t myos-buildenv`
## Build
 1. Linux or MacOS: `docker run --rm -it -v "$pwd":/root/env myos-buildenv`
 2. Windows (CMD): `docker run --rm -it -v "%cd%":/root/env myos-buildenv`
 3. Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" myos-buildenv`
## Build for x86 architectures:
 - `make build-x86_64`
 - To leave the build environment, enter `exit`.
## Emulate
You can emulate your operating system using "Qemu". To use qemu, you have to add qemu as an enviornment variable using [this YouTube Video](https://www.youtube.com/watch?v=al1cnTjeayk&t=180s/).
While Typing the command in the Terminal, you have to specify where Qemu is located. In my case it is in the Program File in C;
 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"` 
## Running C Code
 - In order to run C/C++ code from Visual Studio Code, you would need a gcc/g++ compilers. Follow [this YouTube video](https://www.youtube.com/watch?v=Ubfgi4NoTPk/) to find out how to install gcc and g++ compilers to run C and C++ program from Visual Studio Code.
## Cleanup
Remove the build-evironment image:
 - `docker rmi myos-buildenv -f`

## Output

![output](https://user-images.githubusercontent.com/67058974/115207923-7c7ec500-a115-11eb-98dd-99bfa027cdf6.jpg)

