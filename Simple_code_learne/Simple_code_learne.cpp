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
    cout << endl;
}

void main() {

    int size = 10;
    int* firstArray = new int[size];
    int* secondArray = new int[size];

    FillArray(firstArray, size);
    FillArray(secondArray, size);

    cout << "First Array = \t";
    ShowArray(firstArray, size);
    cout << "Second Array = \t";
    ShowArray(secondArray, size);

    delete[] firstArray;

    firstArray = new int[size];

    for (int i = 0; i < size; i++) {
        firstArray[i] = secondArray[i];
    }
    //Создаем новый массив и выполняем перенос каждого элемента
    //второго массива в первый массив

    cout << "=============================" << endl;

    cout << "First Array = \t";
    ShowArray(firstArray, size);
    cout << "Second Array = \t";
    ShowArray(secondArray, size);

    delete[] secondArray;
    delete[] firstArray;
}

