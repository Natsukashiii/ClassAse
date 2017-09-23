//
//  main.c
//  menu.c
//
//  Created by Natsukashii on 2017/9/21.
//  Copyright © 2017年 Natsukashii. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmdHelp()
{
    printf(
           "1.\thelp\t\tShow this help list\t\t\t\n"
           "2.\thello\t\tSay Hello\t\t\t\t\n"
           "3.\tdate\t\tShow the time and date\t\t\t\n"
           "4.\tpwd\t\tShow the working directory\t\t\t\n"
           "5.\tls\t\tList the files\t\t\t\n"
           "6.\tcaculator\tA simple caculator\t\t\t\n"
           "7.\tgame\t\tGaming time\t\t\t\t\n"
           "8.\tquit\t\tQuit the menu program\t\t\t\n"
           "\t\t\t\t\t\t\t\t\n"
           );
    return 0;
}

int cmdCaculator()
{
    float num1 = 0.0,num2 = 0.0,sum = 0.0;
    char ope = '\0';
    printf("Please enter the number and operation (like'3+4') \n");
    scanf("%f %c %f", &num1,&ope,&num2);
    switch (ope) {
        case '+': sum = num1+num2; break;
        case '-': sum = num1-num2; break;
        case '*': sum = num1*num2; break;
        case '/': sum =(num2==0)?(0):(num1/num2); break;
        default:
            break;
    }
    printf("%g%c%g=%g\n",num1,ope,num2,sum);
    return 0;
}

int cmdHello()
{
    printf("WINNER WINNER ,CHICKEN DINNER!\n");
    return 0;
}

int cmdgame()
{
    printf("You should study now!\n");
    return 0;
}

int main()
{
    char cmd[128];
    while (1)
    {
        printf("Menu:");
        scanf("%s", cmd);
        if (strcmp(cmd, "help") == 0)
        {
            cmdHelp();
        }
        else if (strcmp(cmd, "ls") == 0)
        {
            system(cmd);
        }
        else if (strcmp(cmd, "game") == 0)
        {
            cmdgame();
        }
        else if (strcmp(cmd, "pwd") == 0)
        {
            system(cmd);
        }
        else if (strcmp(cmd, "date") == 0)
        {
            system(cmd);
        }
        else if (strcmp(cmd, "caculator") == 0)
        {
            cmdCaculator();
        }
        else if (strcmp(cmd, "hello") == 0)
        {
            cmdHello();
        }
        else if (strcmp(cmd, "quit") == 0)
        {
            exit(0);
        }
        else
        {
            printf("Error: undefined command, please enter 'help' to get help\n");
        }
    }
}
