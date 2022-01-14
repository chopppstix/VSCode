#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, m, i,j;
    cout << "Введите n";
    cin >> n;
    cout << "Введите m";
    cin >> m;
    cout<<"1 массив: "<<endl;

    int **mas = new int *[n];
    for (int i = 0; i <n; i++)
        mas[i] = new int[m];
        
    for (int i = 0; i <n; i++)
        for (int j = 0; j < m; j++)
            mas[i][j] = 10 + rand() % 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mas[i][j]<<" ";
        cout << endl;
    }

    cout<<"2 массив: "<<endl;
    int **mas2 = new int *[n];
    for (int i = 0; i < n; i++)
        mas2[i] = new int[m];

    for (int i = 0; i <n; i++)
        for (int j = 0; j < m; j++)
            mas2[i][j] = 10 + rand() % 10;

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mas2[i][j]<<"";
        cout << endl;
    }
    cout<<"1 сортировка: "<<endl;
    int mas3[m * n];
    int k =0;
    for (i= 0; i <n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mas3[k] = mas[i][j];
            k++;
        }   
    }
    int bufer[n * m];
    for (i = 0; i< n * m; i++)
    {
        for (j= 0;j<n*m-i-1;j++)
        {
            if (mas3[j] > mas3[j + 1])
            {
                bufer[j] = mas3[j];
                mas3[j] = mas3[j + 1];
                mas3[j + 1] = bufer[j];
            }
        }
    }
    k=0;
    for (i = 0; i< n; i++)
    {
        for (j = 0; j < m; j++)
            {
                mas[i][j] = mas3[k];
                k++;
                cout << mas[i][j] << "";
            }
            cout<<endl;
        }
        cout<<"2 сортировка: "<<endl;
        cout << endl;
        int mas4[m * n];
        int I = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                mas4[I] = mas[i][j];
                I++;
            }
        }
        int bufer1[n * m];
        for (i = 0;i< n * m; i++)
        {
            for (j = 0;j<n*m-i-1;j++)
            {
                if (mas4[j] * mas4[j] < mas4[j + 1] * mas4[j + 1])
                {
                    bufer1[j] = mas4[j];
                    mas4[j] = mas4[j + 1];
                    mas4[j + 1] = bufer1[j];
                }
            }
        }
        I=0;
        for (i = 0; i <n; i++)
        {
            for (j = 0;j <m; j++)
            {
                mas[i][j] = mas4[I];
                I++;
                cout << mas[i][j] << ""; 
            }
            cout << endl;
        }
        return 0;
}