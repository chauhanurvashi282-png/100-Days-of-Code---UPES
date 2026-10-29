#include <stdio.h>

int main()
 {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceName);

    printf("Enter destination file name: ");
    scanf("%99s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL)
     {
        printf("Source file could not be opened.");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) 
    {
        printf("Destination file could not be opened.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) 
    {
        fputc(ch, destination);
    }

    printf("File copied successfully.");

    fclose(source);
    fclose(destination);

    return 0;
}