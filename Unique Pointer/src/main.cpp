#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> intUniquePtr = std::make_unique<int>(5);

    std::cout << *intUniquePtr  << std::endl;
}