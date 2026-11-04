
#include <stdio.h>
#include <stdlib.h>

int main()
{//declare variables
char names[100];
char reg[100];
int mark;
int max;
//prompt lec
printf("How many students to be graded.\n");
scanf("%d", &max);
for (int i = 1; i < max; i++)
    {
        printf("\n--- Student %d ---\n", i);

printf("students name\n");
scanf(" %99[^\n]", names);

printf("students registration number\n");
scanf(" %99[^\n]", reg);


printf("students mark\n");
scanf(" %d", &mark);

if(mark >= 85)
{
    printf("%s, %s = A\n", names, reg);
}
else if (mark >=70)
{
    printf("%s, %s = B\n", names, reg);
}
else if(mark>=60)
{
    printf("%s, %s = C\n", names, reg);
}
else{
    printf(" %s, %s = D\n", names, reg);
}
}
return 0;
}

