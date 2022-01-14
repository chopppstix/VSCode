#include <iostream>
 
int main()
{
 int a = 0;
 int i = 0, j = 0;
 int k = 0, l = 0, pr = 0;
 
    while (a >= 9);
  {
    printf ("Vvedite chislo: ");
        scanf ("%d", &a);
  }
    for(i = 1; i < 9; i++)
        for(j = i+1; j < 9; j++)
            for(l =  j+1; l < 9; l++)
                for(k = l+1; k < 9; k++)
 
    {
        if (  (i!=j) && (j!=l) && (l!=k) && (k!=j) && (k!=i) &&(i!=l) && (i+j+k+l==a))
                {
                    printf ("%d + %d + %d + %d = %d\n", i, j, l, k, i+j+k+l);
                    pr = 1;
                }
    }
 
    if (pr == 0)
        printf ("Net");
    return 0;
}
