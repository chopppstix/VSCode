#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, i, j, p=1;
    cout << "Введите n: ";
    cin >>n;
    int mas[n][n];
        for (i = 0; i <n; i++)
            for (j = 0; j <n; j++)
                mas[i][j] = rand() % 9 + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
            cout << mas[i][j] << "";
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <n; j++)
        p*=mas[i][j];
    }
cout<<"Произведение всех элементов = "<<p;
        return 0;
}