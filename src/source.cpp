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
