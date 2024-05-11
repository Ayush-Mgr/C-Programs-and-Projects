#include <stdio.h>
#include <string.h>
int main()
{
    struct Student
    {
     char name[50]  ;
     int marks ;

    } std1,std2,std3 ;
    strcpy(std1.name, "hydr");
    strcpy(std2.name, "mya");
    strcpy(std3.name, "regna");

    std1.marks = 85;
    std2.marks = 90;
    std3.marks = 95;

    char inp[50];
    printf("name of the student : \n ");
    scanf("%s",&inp);

    if (strcmp(inp,std1.name) == 0)
    {
        printf("THE RESULT of %s IS %d ",std1.name, std2.marks);
    }

    if (strcmp(inp,std2.name) == 0)
    {
        printf("THE RESULT of %s IS %d ",std2.name, std2.marks);
    }
    if (strcmp(inp,std3.name) == 0)
    {
        printf("THE RESULT of %s IS %d ",std3.name, std3.marks);
    }
    


    return 0;
}
