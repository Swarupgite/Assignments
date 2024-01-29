#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dAns = 0.0;
    dAns = ((fTemp - 32) * (5.0/9.0));
    return dAns;
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Fh : \n");
    scanf("%f",&fValue);

   dRet = FhtoCs(fValue);
   printf("converted celsius is : %f\n",dRet);

    return 0;
}