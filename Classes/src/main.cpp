#include <iostream>

class Student{ 

public: //anything under public is accessable out side.
    std::string name; //member variables
    int ID;
    int Year;
};


int main(){
    Student studentOne;
    studentOne.name = "Sam";
    studentOne.ID = 001;
    studentOne.Year = 01;
    
    std::cout << "The student name is: " << studentOne.name << " ID: " << studentOne.ID << " Year: " << studentOne.Year << std::endl;
}