//
// Created by Natsukashii on 2017/10/6.
//

#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>

PCalcInfo gpCalcInfo;

int cmdCalculator()
{
    FLOAT num1 = gpCalcInfo->operNum;
    FLOAT num2 = gpCalcInfo->opedNum;
    FLOAT sum = 0;
    CHAR oper = gpCalcInfo->oper;

    switch (oper) {
        case '+': sum = num1+num2; break;
        case '-': sum = num1-num2; break;
        case '*': sum = num1*num2; break;
        case '/': sum =(num2==0)?(0):(num1/num2); break;
        default:
            break;
    }

    gpCalcInfo->result = sum;

    return 0;
}

void calcInfoInit(FLOAT num, FLOAT numed, CHAR oper)
{
    gpCalcInfo = (PCalcInfo)malloc(sizeof(CalcInfo));

    gpCalcInfo->operNum = num;
    gpCalcInfo->opedNum = numed;
    gpCalcInfo->oper = oper;
}

void calcInfoDestory()
{
    free(gpCalcInfo);
}

void calculatorInput()
{
    FLOAT num,numed;
    CHAR oper;

    printf("Please Input operand,operanded and operation : ");

    scanf("%f%f%s",&num,&numed,&oper);

    calcInfoInit(num,numed,oper);
}

void calculatorOutPut()
{
    printf("%g%c%g=%g\n",gpCalcInfo->operNum,gpCalcInfo->oper,gpCalcInfo->opedNum,gpCalcInfo->result);

    calcInfoDestory();
}
