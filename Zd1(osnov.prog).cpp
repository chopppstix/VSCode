#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int n, k = 0;
    float buffer;
    cin >> n;
    float *mass = new float[n];
    for (int i = 0;i < n;++i)
    mass[i] = (rand() % 100)-50;
    for (int i = 0;i < n;++i)
    {
        if (mass[i] >= 0)
        {
            buffer = mass[k];
            mass[k] = mass[i];
            mass[i] = buffer;
            k++;
        }
    }   
    cout << endl;
    for (int i = 0;i < n;++i)
    cout <<" "<< mass[i];
    system("pause");
}

