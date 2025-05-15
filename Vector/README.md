# Student Management System

## Overview
This project implements a simple Student Management System using C++ templates and vectors. The system allows users to add, view, search, and remove student records through a command-line interface.

## Features
- Add new student records with ID and name
- View all student records
- Search for a specific student by ID
- Remove student records by ID
- Input validation to prevent duplicate student IDs

## Technical Implementation
The project uses:
- C++ templates for flexibility with different ID types
- STL vector for dynamic storage of student records
- Object-oriented programming principles with two main classes:
  - `MemoryCalculate`: Stores individual student details
  - `StudentManager`: Manages the collection of students and operations

## Requirements
- C++ compiler that supports C++11 or later
- Standard Template Library (STL)

## How to Compile
```bash
g++ -o student_manager Project.cpp -std=c++11
```

## How to Run
```bash
./student_manager
```

## Usage
The program displays a menu with the following options:

1. **Add Student Detail**: Add a new student by providing ID and name
2. **Get All Student Details**: Display information about all students
3. **Search Student Details by ID**: Find a specific student using their ID
4. **Remove Student Details by ID**: Delete a student record by ID
5. **Exit (0)**: Terminate the program

## Example Usage

```
---------- Student Manager ----------
1. Add Student Detail
2. Get All Student Details
3. Search Student Details by id
4. Remove Student Details by id
0. Exit
Enter your choice: 1
Enter student id: 101
Enter student name: John
Student added successfully...

---------- Student Manager ----------
1. Add Student Detail
2. Get All Student Details
3. Search Student Details by id
4. Remove Student Details by id
0. Exit
Enter your choice: 2
All Student Detail.
Student ID: 101, Name: John
```

## Extension Possibilities
- Add data persistence using file I/O
- Implement a more advanced search functionality
- Add more student attributes (age, grade, course, etc.)
- Create a graphical user interface
- Implement sorting and filtering options

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.