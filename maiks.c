#include<stdio.h>

int main(void)
{
    float sub1, sub2, sub3, sub4, sub5, Total_marks, Percantile;
    printf("Enter marks of your first Subject : ");
    scanf("%f", &sub1);
    if (sub1>100)
    {
        printf("Marks cannot be greater than 100.\n");
        printf("Enter your marks again : ");
        scanf("%f", &sub1);
    }

    printf("Enter marks of your Second Subject : ");
    scanf("%f", &sub2);
    if (sub2>100)
    {
        printf("Marks cannot be greater than 100.\n");
        printf("Enter your marks again : ");
        scanf("%f", &sub2);
    }

    printf("Enter marks of your Third Subject : ");
    scanf("%f", &sub3);
    if (sub3>100)
    {
        printf("Marks cannot be greater than 100.\n");
        printf("Enter your marks again : ");
        scanf("%f", &sub3);
    }

    printf("Enter marks of your Fourth Subject : ");
    scanf("%f", &sub4);
    if (sub4>100)
    {
        printf("Marks cannot be greater than 100.\n");
        printf("Enter your marks again : ");
        scanf("%f", &sub4);
    }

    printf("Enter marks of your Fifth Subject : ");
    scanf("%f", &sub5);
    if (sub5>100)
    {
        printf("Marks cannot be greater than 100.\n");
        printf("Enter your marks again : ");
        scanf("%f", &sub5);
    }

    Total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total Marks = %f\n", Total_marks);

    Percantile = (Total_marks / 500) * 100;
    printf("Percentile = %.4f\n", Percantile);

    // for grades
    if (Percantile>= 90)
    {
        printf("Your Grade = A+\n");
        printf("CGPA = 4.0\n");
    }
    else if (Percantile>= 85&&Percantile<= 89)
    {
        printf("Your Grade = A-\n");
        printf("CGPA = 3.7\n");
    }
    else if (Percantile>= 80&&Percantile<= 84)
    {
        printf("Your Grade = B+\n");
        printf("CGPA = 3.3\n");
    }
    else if (Percantile>= 75&&Percantile<= 79)
    {
        printf("Your Grade = B\n");
        printf("CGPA = 3.0\n");
    }
    else if (Percantile>= 70&&Percantile<= 74)
    {
        printf("Your Grade = B-\n");
        printf("CGPA = 2.7\n");
    }
    else if (Percantile>= 65&&Percantile<= 69)
    {
        printf("Your Grade = C+\n");
        printf("CGPA = 2.3\n");
    }
    else if (Percantile>= 60&&Percantile<= 64)
    {
        printf("Your Grade = C\n");
        printf("CGPA = 2.0\n");
    }
    else if (Percantile>= 55&&Percantile<= 59)
    {
        printf("Your Grade = C-\n");
        printf("CGPA = 1.7\n");
    }
    else if (Percantile>= 50&&Percantile<= 54)
    {
        printf("Your Grade = D\n");
        printf("CGPA = 1.3\n");
    }
    else
    {
        printf("Your Grade = F\n");
        printf("You are Failed.\n");
        printf("CGPA = 0.0\n");
    }
}
