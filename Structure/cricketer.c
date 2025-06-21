#include <stdio.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[20];
        char lastname[20];
        int age;
        int number_of_match;
        float average_run;
    } cricketer;

    cricketer arr[20];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d no cricketer details(Name:age:number Of Match:avarage Run):\n", i + 1);
        scanf("%s", &arr[i].firstname);
        scanf("%s", &arr[i].lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].number_of_match);
        scanf("%f", &arr[i].average_run);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age: %d\n", arr[i].age);
        printf("Number of test match: %d\n", arr[i].number_of_match);
        printf("Avarage Run: %.2f\n\n", arr[i].average_run);
    }

    return 0;
}