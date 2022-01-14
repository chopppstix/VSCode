#include <fstream>
#include <queue>
#include <string>
#include <iostream>
using namespace std;
struct Persona {
    int Id;
    char Lname[20];
    char Fname[20];
    int Age;
    int Salory;
};
int found(queue <int> i1)
{
    int r;
    int a;
    cout << "Vvedite iskomoe: ";
    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        if (i1.front() == a)
        {
            r = i;
        }
        i1.pop();
    }
    return r;
};
int main()
{
    queue <int> och1;
    queue <char> och2;
    queue <char> och3;
    queue <int> och4;
    queue <int> och5;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nacnite vvodit dannie" << endl;
        cout << "Vvedite id" << endl;
        int a;
        cin >> a;
        och1.push(a);
        cout << "Vvedite Lname" << endl;
        char b;
        cin >> b;
        och2.push(b);
        cout << "Vvedite Fname" << endl;
        char c;
        cin >> c;
        och3.push(c);
        cout << "Vvedite Age" << endl;
        int d;
        cin >> d;
        och4.push(d);
        cout << "Vvedite Salory" << endl;
        int e;
        cin >> e;
        och5.push(e);
    }

    int final;
    final = found(och1);
    cout << "Iskomaia stroka pod nomerom - " << final << endl;
    cout << endl;

    string op = "filedzd.txt";
    ofstream fout;
    fout.open(op, ofstream::app);
    if (!fout.is_open())
    {
        cout << " Error, try again, zapolnit" << endl;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            int a;
            a = och1.front();
            fout << a;
            fout << " ";
            char b;
            b = och2.front();
            fout << b;
            fout << " ";
            char c;
            c = och3.front();
            fout << c;
            fout << " ";
            int d;
            d = och4.front();
            fout << d;
            fout << " ";
            int e;
            e = och5.front();
            fout << e;
            fout << "\n";
            och1.pop();
            och2.pop();
            och3.pop();
            och4.pop();
            och5.pop();
        }
    }
    fout.close();

    ifstream fin;
    fin.open(op);
    if (!fin.is_open())
    {
        cout << " Error, try again, otkrit" << endl;
    }
    else
    {
        string str;
        while (!fin.eof())
        {
            str = "";
            getline(fin,str);
            cout << str << endl;
        }
    }
    fin.close();
}