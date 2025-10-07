#include <iostream>

class Vehicle{
public:
    Vehicle(const std:: string& vehicleName, int vehicleCapacity)
        : name{vehicleName}, capacity{vehicleCapacity}
    {

    }

    void Run()
    {
        std::cout << name << " With " << capacity << std::endl;
    }

private: // private is a really strong protect anyone child class have access.
    int capacity;

protected: //Weak protection, the child class can access it, still not avaliable out side of the family
    std::string name; //and _ infront of the member indicates private.

};

class Car : public Vehicle // Car is inheriting from Vechile
{
public:
    Car(const std::string& carName, int carCapacity)
        :Vehicle{carName, carCapacity}
    {

    }

private:

};

int main()
{
    Vehicle vehicleOne {"LightYears", 100000};
    vehicleOne.Run(); 
    Car carOne {"Corolla", 5};
    carOne.Run();
}