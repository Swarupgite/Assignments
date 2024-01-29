#include<stdio.h>
double RectArea(float fwidth, float fHeight)
{
    double Area = 0.0;
    Area = fwidth * fHeight;
    return Area;
    
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f",&fValue1);

    printf("Enter Height : \n");
    scanf("%f",&fValue2);

   dRet = RectArea(fValue1,fValue2);
   printf("Area of rectangle : %f\n",dRet);

    return 0;
}