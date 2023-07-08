#include <iostream>

int main() {
    int* array1 = new int[5] { 4, 8, 5, 3, 1 };
    int* array2 = new int[5] { 1, 2, 3, 4, 5 };

    std::cout << "첫번째 배열 ";
    for (int i = 0; i < 5; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "두번째 배열 ";
    for (int i = 0; i < 5; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    delete[] array1;
    delete[] array2;

    return 0;
}