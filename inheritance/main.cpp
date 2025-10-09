#include <iostream>

class Vehicle{ //it is an abstract concept.
public:
    Vehicle(const std:: string& vehicleName, int vehicleCapacity)
        : name{vehicleName}, capacity{vehicleCapacity}
    {

    }


    //a pure virtual function. meaning the class is  abstract.
    virtual void Run() = 0;

    int GetCapacity() const { return capacity; } //getter function

    void SetCapacity(int newCapacity){
        if (newCapacity > 0) return;

        capacity = newCapacity;
    }

protected: //Weak protection, the child class can access it, still not avaliable out side of the family
    std::string name; //and _ infront of the member indicates private.
private:
    int capacity;

};

class Car : public Vehicle // Car is inheriting from Vechile
{
public:
    Car(const std::string& carName, int carCapacity, float carMileage)
        :Vehicle{carName, carCapacity}, mileage{carMileage}
    {

    }
    virtual void Run() override {
        std::cout << name << " With " << mileage << "  mileage "<< GetCapacity() << " peaple running!" << "\n";
    }

    float GetMileage() const { return mileage; }

private:
    float mileage;

};

int main()
{

    //Vehicle vehicle {"sdiaojsdioa",213};  Abstract class is not allowed to create instances.
    /*sVehicle vehicleOne {"LightYears", 100000}; Abstract class is not allowed to create instances.
    vehicleOne.Run();*/ 
    Car carOne {"Corolla", 5, 400000};
    carOne.Run();
}