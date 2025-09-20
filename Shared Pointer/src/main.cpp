#include <iostream>
#include <memory>
#include <ostream>

int main(){
    // it is used when the pointer is supose to be shared
    std::shared_ptr<int> intSharedPtr = std::make_shared<int>(5); // ref count == 1;

    //shared pointer does allow copy. the raw memory will be free, when and only when the last shared pointer that holds it is deleted.
    std::shared_ptr<int> anotherSharedPtr = intSharedPtr; // ref count == 2

    std::cout << anotherSharedPtr << std::endl;
    std::cout << intSharedPtr << std::endl;

    

    // if I wnat to free the memory I can use reset();
    anotherSharedPtr.reset(); // ref count -=1
    
    std::cout << intSharedPtr << std::endl;

    std::cout << anotherSharedPtr << std::endl;

}// out of scope ref count == 0; automatic deletion.