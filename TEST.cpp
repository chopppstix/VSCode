#include <iostream>
#include <string>
using namespace std;
 
struct team
{
    string surname;
    char sex;
    int year;
    double height;
};
 
int main()
{
    const int size = 5;
    double max=0.0;
    team s[size] = { { "Ivanov", 'M', 1990, 175.0 },
                     { "Petrov", 'M', 1995, 180.5 },
                     { "Tihonov", 'M', 1998, 178.7 },
                     { "Sokolova", 'W', 2001, 180.5 },
                     { "Smirnova", 'W', 2000, 165.2 } };
                 
    for (int i = 0; i< size; i++)    
        if (i==0 || s[i].height> max) max=s[i].height;
        
    for (int i = 0; i< size; i++)    
        if (s[i].height==max)              
    cout << s[i].surname << " " << s[i].sex << " " << s[i].year << " " << s[i].height << "\n";   
    
system("pause");
return 0;
}