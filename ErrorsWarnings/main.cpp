//
// Created by austinkrz on 6/17/22.
//

#include <iostream>

int main(){

    //compile time error
    std::cout << "Hello World!" << std::endl

    //run time error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;

    return 0;
}