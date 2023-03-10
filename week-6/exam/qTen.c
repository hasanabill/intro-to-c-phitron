#include <stdio.h>
char findGrade(int mark)
{
    if (mark >= 80 && mark <= 100)
        return 'A';
    else if (mark >= 60 && mark <= 79)
        return 'B';
    else if (mark >= 40 && mark <= 59)
        return 'C';
    else
        return 'F';
}

int main()
{
    int mark;
    char grade;
    scanf("%d", &mark);
    grade = findGrade(mark);
    printf("%c", grade);
    return 0;
}