# Student-Management-System-C++-Project-using-LinkedList-Data-Structure

![image alt]()


This project is a console-based application developed in C++ that allows users to manage student records dynamically using a singly linked list. The system performs essential operations such as adding, viewing, searching, editing, and deleting student data. It serves as a basic model for understanding linked list operations and CRUD functionalities in C++.

🎯 Project Objectives:

To manage student information efficiently.

To implement core concepts of linked lists in real-world scenarios.

To provide an interactive menu-based interface for users.

To enhance problem-solving skills through dynamic memory management.

🛠️ Technologies Used:

Programming Language: C++

Data Structure: Singly Linked List

Compiler: Any standard C++ compiler (e.g., g++, Dev C++, Code::Blocks)

🧱 Data Structure Used:

Struct: Used to define the Student data model.

Pointer-based Linked List: Dynamically links each student record.

📂 Features and Functionalities:

1. Add Student:

Adds a new student at the end of the list.

Allocates memory dynamically using new.

Initializes roll number, name, and marks.

2. View Students:

Traverses the linked list and displays each student's record.

If no student exists, it shows a relevant message.

3. Search Student:

Searches for a student by roll number.

Displays student details if found, otherwise a not found message.

4. Edit Student:

Allows editing the name and marks of a student based on the roll number.

Performs in-place editing.

5. Delete Student:

Deletes a student node from the list by roll number.

Handles deletion from head, middle, or tail of the list.

6. Exit:

Safely exits the program loop.

🧠 How It Works (Flow):

The program starts and displays a menu.

The user selects an operation by entering a number.

The relevant function is called based on the selection.

The user is prompted for any required input.

After execution, the menu is shown again until the user exits.
