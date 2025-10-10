#include <iostream>
#include <memory>

class IntContainer{
public:
    IntContainer(int value)
        : internalValue{value}
    {
    }

    void SetValue(int newValue){
        internalValue = newValue;
    }

    int GetValue() const{
        return internalValue;
    }

private:
    int internalValue;
};

int main(){
    IntContainer container = 2;
    std::cout << "Initial value: " << container.GetValue() << std::endl;
    container.SetValue(5);
    std::cout << "Updated value: " << container.GetValue() << std::endl;

    return 0;
}