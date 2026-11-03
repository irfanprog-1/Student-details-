
#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
    char city[20];
    char dream[20];
};

// Function to read student details
void readstudent(struct student s[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter the name: ");
        scanf("%19s", s[i].name);

        printf("Enter the roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter the city: ");
        scanf("%19s", s[i].city);

        printf("Enter the dream: ");
        scanf("%19s", s[i].dream);
    }
}

// Function to display student details
void writestudent(struct student s[], int n)
{
    int i;

    printf("\n----- STUDENT DETAILS -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
        printf("City: %s\n", s[i].city);
        printf("Dream: %s\n", s[i].dream);
    }
}

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    readstudent(s, n);

    writestudent(s, n);

    return 0;
}
