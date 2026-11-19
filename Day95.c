#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) 
{
    struct Student top = s[0];
    for (int i = 1; i < n; i++) 
    {
        if (s[i].marks > top.marks) 
        {
            top = s[i];
        }
    }
    return top;
}

int main()
 {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        return 0;
    }

    struct Student s[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}
