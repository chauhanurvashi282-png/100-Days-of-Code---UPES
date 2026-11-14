#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[3];
    int i, top = 0;

    for(i = 0; i < 3; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 1; i < 3; i++)
    {
        if(s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %.0f)", s[top].name, s[top].marks);

    return 0;
}