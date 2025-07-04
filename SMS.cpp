#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
    Student* next;   
};
Student* head = NULL;
    // Function to add a new student
    void addStudent(int rollNo, string name, float marks) {
        Student* newStudent = new Student;
        newStudent->rollNo = rollNo;
        newStudent->name = name;
        newStudent->marks = marks;
        newStudent->next = NULL;

        if (head == NULL) {
            head = newStudent;
        } else {
            Student* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }

        cout << "Student added successfully!" << endl;
    }

    // Function to view all students
    void viewStudents() {
        if (head == NULL) {
            cout << "No students found!" << endl;
        } else {
            cout << "Student List:" << endl;
            Student* temp = head;
            while (temp != NULL) {
                cout << "Roll No: " << temp->rollNo << endl;
                cout << "Name: " << temp->name << endl;
                cout << "Marks: " << temp->marks << endl;
                cout << "-------------------------" << endl;
                temp = temp->next;
            }
        }
    }

    // Function to search for a student
    void searchStudent(int rollNo) {
        if (head == NULL) {
            cout << "No students found!" << endl;
        } else {
            Student* temp = head;
            int found = 0;
            while (temp != NULL) {
                if (temp->rollNo == rollNo) {
                    cout << "Student found!" << endl;
                    cout << "Roll No: " << temp->rollNo << endl;
                    cout << "Name: " << temp->name << endl;
                    cout << "Marks: " << temp->marks << endl;
                    found=1 ;
                    break;
                }
                temp = temp->next;
            }
            if (found==0) {
                cout << "Student not found!" << endl;
            }
        }
    }

    // Function to edit student details
    void editStudent(int rollNo) {
        if (head == NULL) {
            cout << "No students found!" << endl;
        } else {
            Student* temp = head;
            int found = 0;
            while (temp != NULL) {
                if (temp->rollNo == rollNo) {
                    cout << "Enter new name: ";
                    string newName;
                    cin >> newName;
                    cout << "Enter new marks: ";
                    float newMarks;
                    cin >> newMarks;
                    temp->name = newName;
                    temp->marks = newMarks;
                    cout << "Student details updated successfully!" << endl;
                    found=1;
                    break;
                }
                temp = temp->next;
            }
            if (found==0) {
                cout << "Student not found!" << endl;
            }
        }
    }

    // Function to delete a student
    void deleteStudent(int rollNo) {
        if (head == NULL) {
            cout << "No students found!" << endl;
        } else {
            if (head->rollNo == rollNo) {
                Student* temp = head;
                head = head->next;
                delete temp;
                cout << "Student deleted successfully!" << endl;
                return;
            }
            Student* prev = head;
            Student* curr = head->next;
            while (curr != NULL) {
                if (curr->rollNo == rollNo) {
                    prev->next = curr->next;
                    delete curr;
                    cout << "Student deleted successfully!" << endl;
                    return;
                }
                prev = curr;
                curr = curr->next;
            }
            cout << "Student not found!" << endl;
        }
    }


int main() {
    //StudentManagementSystem sms;
    int choice;
    while (true) {
        cout << "\n\n-------------------------" << endl;
        cout << "Student Management System" << endl;
        cout << "-------------------------" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Edit Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int rollNo;
                string name;
                float marks;
                cout << "Enter Roll No: ";
                cin >> rollNo;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Marks: ";
                cin >> marks;
                addStudent(rollNo, name, marks);
                break;
            }
            case 2:
                viewStudents();
                break;
            case 3: {
                int rollNo;
                cout << "Enter Roll No to search: ";
                cin >> rollNo;
                searchStudent(rollNo);
                break;
            }
            case 4: {
                int rollNo;
                cout << "Enter Roll No to edit: ";
                cin >> rollNo;
                editStudent(rollNo);
                break;
            }
            case 5: {
                int rollNo;
                cout << "Enter Roll No to delete: ";
                cin >> rollNo;
                deleteStudent(rollNo);
                break;
            }
            case 6:
                cout   << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

