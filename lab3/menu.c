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
#include "calculator.h"

int cmdHelp()
{
    printf(
            "1.\thelp\t\tShow this help list\t\t\t\n"
                    "2.\thello\t\tSay Hello\t\t\t\t\n"
                    "3.\tdate\t\tShow the time and date\n"
                    "4.\tpwd\t\t\tShow the working directory\n"
                    "5.\tls\t\t\tList the files\n"
                    "6.\tcalculator\tA simple calculator\t\t\t\n"
                    "7.\tgame\t\tGaming time\t\t\t\t\n"
                    "8.\tquit\t\tQuit the menu program\t\t\t\n"
                    "\t\t\t\t\t\t\t\t\n"
    );
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

void calculatorProc()
{
    /* 1、操作数与被操作数输入 */
    calculatorInput();

    /* 2、计算 */
    cmdCalculator();

    /* 3、结果输出 */
    calculatorOutPut();
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
        else if (strcmp(cmd, "calculator") == 0)
        {
            calculatorProc();
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
