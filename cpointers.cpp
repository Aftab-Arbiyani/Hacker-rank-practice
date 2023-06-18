#include <iostream>
#include <cstdlib>

int main() {
    int a, b;
    int *pa = &a;
    int *pb = &b;
    int temp1 = 0;
    int temp2 = 0;

    std::cin >> a;
    std::cin >> b;

    temp1 = *pa + *pb;
    temp2 = abs(*pa - *pb);
    *pa = temp1;
    *pb = temp2;

    std::cout << *pa << std::endl << *pb;

    return 0;
}