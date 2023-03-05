// Simple_code_learne.cpp: определяет точку входа для приложения.
//

#include "Simple_code_learne.h"
#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void ShowArray(int* const arr, const int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
}

void main() {

    FillArray();

}
