/*Write a C++ program to create a class Student with data members Roll_No,  Student_Name, Class.
 Write member functions to accept and display Student information  also display count of students. \
 (Use Static data member and Static member function)*/
#include <iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
    int Roll_No;
    string Student_Name;
    string  Class;
    static int studentCount;

	public:
    Student(int roll, string name, string cls) 
	{
        Roll_No = roll;
       Student_Name=name;
        Class = cls;
        studentCount++;
    }

    void display() 
	{
        cout << "Roll No: " << Roll_No << endl;
        cout << "Name: " << Student_Name << endl;
        cout << "Class: " << Class << endl;
    }
    static void displayCount() 
	{
        cout << "Total Students: " << studentCount << endl;
    }
};
 int Student::studentCount = 0;
int main() 
{
    Student s1(101, "jay", "fybca \n");
    Student s2(102, "shree", "sybca \n");
    Student s3(103, "ram", "tybca \n");
    
    cout << "Student Details:\n";
    s1.display();
    s2.display();
    s3.display();
    
    Student::displayCount();

}
