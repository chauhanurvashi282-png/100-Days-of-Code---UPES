#include <stdio.h>

int main() 
{
    FILE *fp;
    char fileName[100];
    char line[200];

    printf("Enter file name: ");
    scanf("%99s", fileName);

    fp = fopen(fileName, "r");

    if (fp == NULL) 
    {
        printf("File does not exist or cannot be opened.");
        return 1;
    }

    printf("File contents:\n");

    while (fgets(line, sizeof(line), fp) != NULL) 
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}