#include <iostream>
#include <vector>

class Student{ 

public: //anything under public is accessable out side.

    //constructor is a function that has no ruteurn type, and has the same name as the class.
    Student(const std::string& studentName, int studentID, int studentYear)
            :name{studentName}, ID{studentID}, Year{studentYear} // more performant tha doing the assignement in the body of the contructor
    {
        //OR 
        //name = studentName;
        //ID  = studentID;
        //Year = studentYear;

        // this is a default constructor. if you do not provide any contructor, this will be automatically create.
        //  if you do provide a constructor, then default constructor will not be created for you.


    
        std::cout << "Default contructor called"<< std::endl;
    
    }

    std::string name; //member variables
    int ID;
    int Year;
private:
    int secret;
};


int main(){
    Student studentOne{"Sam", 0002, 1};
    /*
    studentOne.name = "Sam";
    studentOne.ID = 0001;
    studentOne.Year = 01;
    */
    //std::cout << "The student name is: " << studentOne.name << " ID: " << studentOne.ID << " Year: " << studentOne.Year << std::endl;

    Student studentTwo{"Emily", 0002,02};
    /*
    studentTwo.name = "Emily";
    studentTwo.ID = 0002;
    studentTwo.Year = 02;
*/
    //std::cout << "The student name is: " << studentTwo.name << " ID: " << studentTwo.ID << " Year: " << studentTwo.Year << std::endl;
    
    std::vector<Student> students = {studentOne, studentTwo};

    for(Student& student : students){

        std::cout << "Student name: " << student.name << std::endl;
        std::cout << "Student ID: " << student.ID << std::endl;
        std::cout << "Student year" << student.Year << std::endl;

    }


}
