#include <iostream>
#include <algorithm>
 
int function(int a, int b, int c)
{
     int result = 0;
     if (a > 0)  ++result;
     if (b > 0)  ++result;
     if (c > 0)  ++result;
    return result;
}
 
int main()
 {
     int a, b ,c;
     std::cin >> a;
     std::cin >> b;
     std::cin >> c;
     std::cout << "\nResult is = " << function(a , b, c);
     system("pause>>null");
}