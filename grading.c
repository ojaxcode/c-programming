#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, result;
    printf("Enter marks obtained\n:");
    scanf(" %f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    int avg = 0;
    avg = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("average marks = %d\n", avg);

    if (avg >= 90)
    {
        printf("Grade A\n");
    }
    else if (avg >= 80)
    {
        printf("Grade B\n");
    }
    else if (avg >= 70)
    {
        printf("Grade C\n");
    }
    else if (avg >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}