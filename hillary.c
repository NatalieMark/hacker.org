#include <stdio.h>
#include <math.h>

int main()
{

    int x; 
    int BarackNo = 2118;
    int HillaryNo = 0;
    float c; 

    for(int i = 1;i<=BarackNo;i++) 
    { 
        printf("%d + %d      ", i, HillaryNo);
        
        c = sqrt(i); 
        x = floor(c); /*For routing up floor() is used*/ 
        if (c == x)
        {
            HillaryNo += i*2;
            printf("Perfect square      ");
        }
        else
            HillaryNo += i;

        printf(" = %d\n", HillaryNo);
    } 
}