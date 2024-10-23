//while loop
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int start,stop;
    printf("Please enter the starting integer: ");
    scanf("%d", &start);
    printf("Please enter the stoping interger: ");
    scanf("%d", &stop);
    int i=start, sum = 0;

    while(i<=stop){
        printf("%d \n",i);
        i++;
        sum = sum +i;
        sum +=i;
    }
    printf("The sum is %d", sum);
    return 0;
}
