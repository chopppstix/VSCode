#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int m, n;

    m = 3 + (rand() % 4);
    n = 4 + (rand() % 4);
    float ** arr = new float*[m]; // создание динамического двумерного массива на m строк
    for (int i(0); i < m; i++) // создание каждого одномерного массива в динамическом двумерном массиве, или иначе - создание столбцов размерность n
        arr[i] = new float[n];


    //заполнение массива от -10 до 10
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }
    //вывод чисел
    cout << "Array: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    void BubbleSort(int* array, int N)
    {
    int temp;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - 1; j++)  {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
    }

    for (int i(0); i < m; i++) // освобождение памяти каждого одномерного массива в двумерном массиве - удаление столбцов
        delete arr[i];
    delete arr; // освобождение памяти двумерного массива

    return 0;
}