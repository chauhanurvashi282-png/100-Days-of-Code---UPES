
#include <stdio.h>

int main() 
{
    int a[1000];
    int n = 0;
    int t;
    char c;

    while ((c = getchar()) != '[') 
    {
        if (c == EOF) return 0;
    }

    while (1) 
    {
        if (scanf("%d", &a[n]) != 1) break;
        n++;
        c = getchar();
        if (c == ']') break;
    }

    while ((c = getchar()) != '=')
     {
        if (c == EOF) return 0;
    }
    
    if (scanf("%d", &t) != 1) return 0;

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) 
    {
        if (a[i] == t)
         {
            if (first == -1)
             {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
}