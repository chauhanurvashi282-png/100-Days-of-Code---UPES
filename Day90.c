#include <stdio.h>
#include <string.h>

enum Gender
 {
    MALE,
    FEMALE,
    OTHER
};

struct Person
 {
    enum Gender gender;
};

int main() 
{
    struct Person p;
    char input[20];

    
    if (scanf("Gender=%s", input) == 1) 
    {
        if (strcmp(input, "MALE") == 0)
         {
            p.gender = MALE;
        } else if (strcmp(input, "FEMALE") == 0) 
        {
            p.gender = FEMALE;
        } else {
            p.gender = OTHER;
        }

        
        switch (p.gender)
         {
            case MALE:
                printf("Male\n");
                break;
            case FEMALE:
                printf("Female\n");
                break;
            case OTHER:
                printf("Other\n");
                break;
        }
    }

    return 0;
}
