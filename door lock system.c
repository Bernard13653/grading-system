#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char correctPIN[]="1234";
    char enteredPIN[20];
    int pinCorrect=1;
    int attempts=3;
    int choice;
    printf("ELECTRONIC DOOR LOCK\n");
    /*Allow the user 3 attempts*/
    while (attempts>0)
    {
        printf("Enter your PIN:\n");
        scanf("%19s",enteredPIN);
        /*Check PIN length using if-else-if*/
        if (strlen(enteredPIN)<4)
        {
            printf("PIN too short(must be 4 digits)\n");
        }
        else if (strlen(enteredPIN)>4)
        {
            printf("PIN is too long(must be 4 digits)\n");
        }
        else
        {
            printf("Pin is exactly 4 digits\n");
            /*Check whether the PIN is correct*/
            if (strcmp(enteredPIN,correctPIN)==0)
            {
                pinCorrect=1;
                break;
            }
            else
            {
                printf("Incorrect PIN!\n");
            }
        }
        attempts--;
        if (attempts>0)
        {
            printf("Remaining attempts:%d\n",attempts);
        }

    }
    /*if PIN was entered incorrectly 3 times*/
    if (pinCorrect==0)
    {
        printf("System locked!Wait for 5 seconds...\n");
        /*Countdown from 5 to 0*/
        for (int i=5;i>=1;i--)
        {
            printf("%d...\n",i);
            Sleep(1000);
        }
        printf("you can try again now.\n");
        return 0;
    }
    /*PIN was correct*/
    printf("Access granted!\n");
    /*Device menu*/
    printf("Device Menu\n");
    printf("1.Open Door\n");
    printf("2.Change Username\n");
    printf("3.Change PIN\n");
    printf("4.Exit/n");

    printf("choose an option:\n");
    scanf("%d",&choice);
    /*Handle menu choice using switch*/
    switch (choice)
    {
    case 1:
        printf("Access granted.Door unlocked\n");
        break;
    case 2:
        printf("Change username feature coming soon.\n");
        break;
    case 3:
        printf("change PIN feature coming soon.\n");
        break;
    case 4:
        printf("Exiting system.\n");
        break;
    default:
        printf("invalid option!Please try again.\n");
    }
    return 0;
}
