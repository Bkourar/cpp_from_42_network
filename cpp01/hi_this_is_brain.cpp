#include <iostream>

void swap_by_refrence(int&, int&);
void swap_by_pointer(int* a, int* b);

int main() {
    int i = 10;
    int j = 20;
    int *x = NULL;
    int *y = NULL;
    
    swap_by_refrence(i, j);
    std::cout << "swap by refrence : " << i << "  " << j << std::endl;
    x = &i;
    y = &j;
    swap_by_pointer(x, y);
    std::cout << "swap by pionter : " << i << "  " << j << std::endl;
}

void swap_by_refrence(int &a, int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swap_by_pointer(int* a, int* b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}