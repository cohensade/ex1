#include "NumClass.h"
#include <stdio.h>

int main(){
 int num1,num2,max,min;
 
    printf("Enter the first number: ");

    scanf("%d", &num1);

     printf("Enter the second number: ");

    scanf("%d", &num2);

    if(num1>num2){
       max = num1;
       min=num2;
    }else{
        max=num2;
        min=num1;
    }
    int range = max-min+1;
    
    int armstrongNumbers[range];
    int palindromeNumbers[range];
    int primeNumbers[range];
     int strongNumbers[range];
    int armstrongCount = 0, palindromeCount = 0,primeCount = 0,strongCount = 0;
    
    for (int i = min; i <= max; i++) {
        if (isPrime(i) && primeCount<range) {
             primeNumbers[primeCount++] = i;
        }
        if (isArmstrong(i) && armstrongCount < range) {
            armstrongNumbers[armstrongCount++] = i;
        }
        if (isStrong(i) && strongCount<range ) {
           strongNumbers[strongCount++] = i;
        }
        if (isPalindrome(i) && palindromeCount < range) {
            palindromeNumbers[palindromeCount++] = i;
        }
    }
    
    
   // Print Armstrong numbers
    printf("Armstrong numbers: ");
    for (int i = 0; i < armstrongCount; i++) {
        printf("%d ", armstrongNumbers[i]);
    }
    printf("\n");

    // Print Palindrome numbers
    printf("Palindrome numbers: ");
    for (int i = 0; i < palindromeCount; i++) {
        printf("%d ", palindromeNumbers[i]);
    }
    printf("\n");
    
    // Print prime numbers
    printf("Prime numbers: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primeNumbers[i]);
    }
    printf("\n");
    
    // Print strong numbers
    printf("Strong numbers: ");
    for (int i = 0; i < strongCount; i++) {
        printf("%d ", strongNumbers[i]);
    }
    printf("\n");


return 0;
}