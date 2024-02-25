#include <iostream>

int main() {
    int a = 0;
    int * ptr = &a;
    int& ref_var = a;

    a = 10; //I changed the value of a, and the value of pointer variable and referance variable are also changed
    std::cout << a << *ptr << ref_var; 
    *ptr = 20;
    std::cout << a << *ptr << ref_var; //I changed the value of a through pointer, and the value of a and referance variable are also changed
}