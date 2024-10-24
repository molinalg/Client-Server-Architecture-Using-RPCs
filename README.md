# Client-Server Architecture Using RPCs

## Description
Developed in 2023, "Client-Server Architecture Using RPCs" is a university project made during the third course of Computer Engineering at UC3M in collaboration with @EnriqueMorenoG88.

It was made for the subject "Distributed Systems" and corresponds to one of the practices of this course. The main goal of the project is to lean how to use **RPCs** and the **client-server architecture** using **C** programming language.

**NOTE:** The code and comments are in spanish.

## Table of Contents
- [Installation](#installation-linux)
- [Usage](#usage-linux)
- [Problem Proposed](#problem-proposed)
- [License](#license)
- [Contact](#contact)

## Installation (Linux)
To install the necessary libraries run the following command:

```sh
sudo apt-get install rpcbind libtirpc-dev dos2unix
```

## Usage (Linux)
Before you can execute the program you need to compile and generate the executables:

```sh
make
```

After this, you can automatically run the tests using:

```sh
dos2unix run_server_client.sh
./run_server_client.sh
```

## Problem Proposed
This repository includes a program in C using the client-server architecture with the use of RPCs. The functionality implemented serves as a system whose **mission is to exchange data in the form of tuples** that can contain different types of values with operations like copying, modifying and eliminating them from the server.

In the client script, **cliente.c**, a group of 17 tests are automatically passed to make sure everything works as expected.

## License
This project is licensed under the **MIT License**. This means you are free to use, modify, and distribute the software, but you must include the original license and copyright notice in any copies or substantial portions of the software.

## Contact
If necessary, contact the owner of this repository.
