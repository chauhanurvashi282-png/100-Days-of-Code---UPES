#include <stdio.h>

int main() 
{
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL) 
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.");

    fclose(fp);

    return 0;
}