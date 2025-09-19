#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> intUniquePtr = std::make_unique<int>(5);

    //it does not allow copy, but allows move. the std::move transfers the ownership of the raw ponter internally to the other one.
    std::unique_ptr<int> anotherUniquePtr = std::move(intUniquePtr);

    while (true) {
        std::cout << intUniquePtr.get() << std::endl;

    }
}