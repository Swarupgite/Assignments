#include<stdio.h>
double SquareMeter(int iValue)
{
    double dAns = 0.0;
    dAns = iValue * 0.0929;
    return dAns;
    
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

   dRet = SquareMeter(iValue);
   printf("Area in square meter : %f\n",dRet);

    return 0;
}