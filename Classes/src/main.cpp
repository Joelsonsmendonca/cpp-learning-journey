#include <iostream>
#include <vector>

class Student{ 

public: //anything under public is accessable out side.

    //constructor is a function that has no ruteurn type, and has the same name as the class.
    Student(const std::string& studentName, int studentID, int studentYear)
            :name{ new std::string{studentName}}, ID{studentID}, Year{studentYear} // more performant tha doing the assignement in the body of the contructor
    {
        //OR 
        //name = studentName;
        //ID  = studentID;
        //Year = studentYear;

        // this is a default constructor. if you do not provide any contructor, this will be automatically create.
        //  if you do provide a constructor, then default constructor will not be created for you.


    
        std::cout << "Default contructor called"<< std::endl;
    
    }


    void SayHello(){
        std::cout << "Hello, my name is " << *name << std::endl;
    }


    void incrementYear(){
        Year++;
        switch (Year)
        {   
            case 1:
                std::cout << *name << " Freshman" << std::endl;
                break;
            case 2:
                std::cout << *name << " Sophomore" << std::endl;
                break;
            case 3:
                std::cout << *name << " Junior" << std::endl;
                break;
            case 4:
                std::cout << *name << " Senior" << std::endl;
                break;
            default:
                std::cout << *name << " Graduated" << std::endl;
                break;
        }
        
    }

    bool isGraduated(){
        return Year > 4;
    }

        ~Student()
    {
        std::cout << "student " << *name << " is destructed" << std::endl;
        delete name; 
    }

    //setters
    void setId(int newID)
    {


        if(newID < 0){
            std::cout << "Wrong id value, should be positive" << std::endl;
            return;
        }

        ID = newID;
    }
    //getters
    int GetID()
    {
        return ID;
    } 

    std::string* name; //member variables
    private:
    int ID;
    int Year; //to have member in the private section. aand provide functions to ajust to alter the value.
    int secret;
};


int main(){

    Student student{"Sam", 0002, 0};
    student.SayHello();
    std::cout << student.GetID() << std::endl;

    while(!student.isGraduated()){
        student.incrementYear();
    }

        /*
    studentOne.name = "Sam";
    studentOne.ID = 0001;
    studentOne.Year = 01;
    */
    //std::cout << "The student name is: " << studentOne.name << " ID: " << studentOne.ID << " Year: " << studentOne.Year << std::endl;

    //Student studentTwo{"Emily", 0002,02};
    /*
    studentTwo.name = "Emily";
    studentTwo.ID = 0002;
    studentTwo.Year = 02;
*/
    //std::cout << "The student name is: " << studentTwo.name << " ID: " << studentTwo.ID << " Year: " << studentTwo.Year << std::endl;
    
    //std::vector<Student> students = {studentOne, studentTwo};

    /*for(Student& student : students){

        std::cout << "Student name: " << student.name << std::endl;
        std::cout << "Student ID: " << student.ID << std::endl;
        std::cout << "Student year" << student.Year << std::endl;

    }*/


}
