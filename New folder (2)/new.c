#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float units ,bill ,SC , total;
    float price=5.0/100;
    printf("Enter the number of units consumed : ");
    scanf("%f" , &units);

    if(units<=300)
    {
        bill=units*3;
    }
    else if(units>300)
    {

        total=units*3.5;
        SC=price*total;
        bill=total+SC;
    }
    printf("Price : %.1f" , bill);
    system("pause");
    return 0;
}
