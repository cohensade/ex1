#include <stdio.h>
#include "NumClass.h"


//isprime
int isPrime(int num){
if (num<=1)
{
    return 0;
}
for (int i = 2; i * i <= num ; i++)
{
    if (num % i==0)
    {
       return 0;
    }
    
}
return 1;
}

//isStrong

int isStrong(int num) {
    int sum = 0;
int originalNum=num;
    while (num > 0) {
        int digit = num % 10;

        int atzeret = 1;
        for (int i = 1; i <= digit; i++) {
            atzeret *= i;
        }
        sum += atzeret;
        num /= 10; //num = num/10;
    }
    
   if(originalNum==sum){
       return 1;
   }
return 0;
}
