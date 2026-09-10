#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    if (scanf("%s", a) != 1)
     return 0;
    int b[10] = {0};
    int c = strlen(a);
    for (int i = 0; i < c; i++) 
    {
        b[a[i] - '0']++;
    }
    int d = 0;
    int e = -1;
    for (int i = 0; i < 10; i++)
     {
        if (b[i] > e)
         {
            e = b[i];
            d = i;
        }
    }
    printf("%d\n", d);
    return 0;
}