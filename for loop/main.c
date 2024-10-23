//for loop
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int i,sum=0;
    int start,stop;
    printf("Please enter the starting integer: ");
    scanf("%d", &start);
    printf("Please enter the stoping interger: ");
    scanf("%d", &stop);

    for(i=start;i<=stop;i++){
        int square=i*i;
        printf("Square of %d: %d \n",i,square);


        sum += square;
    }

     printf("Sum of squares: %d \n", sum);
    return 0;
}
