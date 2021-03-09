#include "defer.cpp"
#include <iostream>



void Test(){
    std::cout << "Testing\n";
}

int main(){
    defer(Test)

    std::cout << "BEFORE EXIT\n";
}
