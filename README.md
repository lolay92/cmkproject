# CMake: What is it about? 
- Provides access to your host system 
- Configures variables environment for your build
- Generates the commands for compilation 
	- Defines lib targets and execuatbles targets
	- Specifies dependency graph
	- Specifies correct build and linking flags
	- Stores all of these commands in a single generated file

# cmkproject
CMAKE template structure for cpp projects 

# project structure
Project name is `cmkproject`and it is also the name of the folder that contains the files and folders below. There is also another folder with the same name `cmkproject/cmkproject` inside the base folder to keep a consistency for include files. 

This folder is there to contain libraries that will be linked to the main executable (`utils` here for example...)

```
.
├── CMakeLists.txt
├── README.md
├── cmkproject
│   ├── CMakeLists.txt
│   └── utils
│       ├── CMakeLists.txt
│       ├── utils.cpp
│       └── utils.h
├── executables
│   ├── CMakeLists.txt
│   └── main.cpp
└── external
```

# build & compilation
`mkdir -p build && cd build`  
`cmake -S .. -B .`  
`make`  
