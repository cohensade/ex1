#include "NumClass.h"
#include <stdio.h>

//isAmstrong
int isArmstrong(int num){
    int originalNum =num;
    int n = 0;  //represent the num of digit
    int digit = 0; //represent the digit that we want at the moment
    int sum = 0; //represent the n`th power

//counting how many digit num have
while (originalNum !=0){
    originalNum /= 10;
    n += 1;
}

originalNum =num; //return to the starting number

while (originalNum !=0)
{
    int pow = 1;//atleast one number
    digit = originalNum % 10;  //how many num for pow
    for (int i = 0; i < n; i++)
    {
        pow *= digit;
    }
    sum += pow;
    
    originalNum /= 10;
}
if(sum==num){
return 1;
}else{
    
return 0;
}
}

//isPalindrome
int isPalindrome(int num){
int originalnum =num; //representing the original number
int reversednum = 0; //representing the reversed number

while(num>0){
int digit=num%10; //taking the digit
reversednum = reversednum * 10 + digit;
num /=  10;
}
if(originalnum == reversednum){
return 1;
}else{
    
return 0;

}
}
