#include "inc/source.hpp"
#include <iostream>
#include <random>

MyClass::MyClass(int val_)
    : val(val_)
{
    std::cout << "Ctor::MyClass\n";
}

int MyClass::GetRandVal() const {
    return val + rand();
}
 
void MyClass::SetNewValue(int i) {

    std::cout << "MyClass::SetNewValue(i: "<< i << ");\n";    
}


// Comment added on 2023-03-21 12:16:38
