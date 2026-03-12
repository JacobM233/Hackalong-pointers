// Jacob Mijares
// 838781508

#include <string>
#include <iostream>

void double_int(int& x) {
    x = x * 2;
    std::cout << "x is " << x << "\n";
}

void double_int_pointer(int* x) {
    *(x + 1) = *(x + 1) * 2;
    std::cout << "x is " << *x << "\n";
}

int main () {
    int value []= {5, 7, 15, 17, 19};
    std::cout << "Value is " << value[0] << "\n";
    double_int_pointer(value);
    std::cout << "Value is " << *value << "\n";
}