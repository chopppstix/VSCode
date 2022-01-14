#include <iostream>
#include <queue>
using namespace std;
int main()

{
    queue <int> a;
    int count = 0;
    for (int i = -20; i <= 60; i++)
    {
    a.push(i);
    count += 1;
    }
    while(count !=0)
    {
    if ((a.front() % 5) == 0)
    {
    cout<<a.front()<<" ";
    }
    count -= 1;
    a.pop();
    }
}