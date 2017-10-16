
typedef unsigned int UINT32;
typedef int          INT32;
typedef float        FLOAT;
typedef char         CHAR;

typedef struct CalcInfo
{
    FLOAT operNum;                  //操作数
    FLOAT opedNum;                  //被操作数
    CHAR  oper;                     //运算方式
    FLOAT result;
}CalcInfo;

typedef CalcInfo* PCalcInfo;

int cmdCalculator();

void calculatorInput();

void calculatorOutPut();