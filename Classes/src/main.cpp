#include <iostream>
#include <vector>

class Student{ 

public: //anything under public is accessable out side.
    std::string name; //member variables
    int ID;
    int Year;
};


int main(){
    Student studentOne;
    studentOne.name = "Sam";
    studentOne.ID = 0001;
    studentOne.Year = 01;
    
    //std::cout << "The student name is: " << studentOne.name << " ID: " << studentOne.ID << " Year: " << studentOne.Year << std::endl;

    Student studentTwo;
    studentTwo.name = "Emily";
    studentTwo.ID = 0002;
    studentTwo.Year = 02;

    //std::cout << "The student name is: " << studentTwo.name << " ID: " << studentTwo.ID << " Year: " << studentTwo.Year << std::endl;
    
    std::vector<Student> students = {studentOne, studentTwo};

    for(Student& student : students){

        std::cout << "Student name: " << student.name << std::endl;
        std::cout << "Student ID: " << student.ID << std::endl;
        std::cout << "Student year" << student.Year << std::endl;

    }


}
