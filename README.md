# Task Scheduler Program

Project for the [CMPS2131] Data Structures Final Project done by Jennessa Sierra for the 2024-1 semester.

## About

The Task Scheduler Program is designed to manage tasks by allowing users to add, delete, modify, and complete tasks.
Each task has attributes such as ID, priority, name, status, description, and various timestamps (created, modified, completed, and deadline).
The program uses a priority queue to manage tasks based on their priority and deadline, ensuring that higher priority tasks are handled first.

## Project Structure & Implementation

The Task Scheduler Program is implemented using C++ and consists of the following key features:

1. **Task Management**: Tasks are created with attributes like ID, priority, name, status, description, and timestamps.
2. **Priority Queue**: Tasks are stored in a priority queue, which is implemented as a min-heap to ensure tasks with higher priority and earlier deadlines are processed first.
3. **History Logging**: The program logs task operations (creation, modification, completion) to maintain a history of all tasks.

The project structure is described as follows:

- `main.cpp`: Main driver program used in `main`.
- `/src/`: Contains the source files for classes used in the task scheduler.
  - `/src/Task.cpp`: Contains the implementation of the `Task` class used to create and manage tasks.
  - `/src/Scheduler.cpp`: Contains the implementation of the `Scheduler` class used to manage tasks in the priority queue.
  - `/src/History.cpp`: Contains the implementation of the `History` class used to log task operations.
- `/headers/`: Contains the header files for the classes used in the task scheduler.
  - `/headers/Task.h`: Contains the header file for the `Task` class.
  - `/headers/Scheduler.h`: Contains the header file for the `Scheduler` class.
  - `/headers/History.h`: Contains the header file for the `History` class.

The project uses the C++ 20 standard and project files are provided for compilation with CMake in the `CMakeLists.txt` file.
The program should compile correctly on both Windows and Linux/macOS systems.

Further implementation details and reasoning can be found documented in the header files.

## Other Notes

The program is designed to be run in an IDE like CLion, which supports CMake for building and running the project.
However, it can also be run in Qt Creator or Visual Studio Code with the appropriate CMake configurations.
Ensure that the necessary dependencies and libraries are installed for smooth execution.

## Acknowledgements

Understanding of task scheduling and priority queues was referenced from various data structures and algorithms resources,
including the textbook "C++ Plus Data Structures (3rd Edition)" by Nell Dale.
The implementation of the program was guided by the requirements of the [CMPS2131] Data Structures course.