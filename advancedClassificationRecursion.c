#include "NumClass.h"
#include <stdio.h>

int isPalindromeHelper(int currentNum, int reversedNum, int originalNum) {
    // Base case: num == 0
    if (currentNum == 0) {
        return (originalNum == reversedNum);
    } else {
        // Reverse the num
        int digit = currentNum % 10;
        reversedNum = reversedNum * 10 + digit;
        return isPalindromeHelper(currentNum / 10, reversedNum, originalNum);
    }
}

int isPalindrome(int num) {
    return isPalindromeHelper(num, 0, num);
}

// Helper function to count the number of digits in a given number
int countDigits(int num) {
    if (num == 0) {//base case
        return 0;
    } else {
        return 1 + countDigits(num / 10);//get how many digit the number have
    }
}

// Helper function to calculate the power of a number
int power(int base, int exponent) {
    if (exponent == 0) {//base case
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

// Recursive helper function to calculate the sum of nth powers of digits
int isArmstrongHelper(int num, int n) {
    if (num == 0) {
        return 0; // Sum of nth powers of digits
    } else {
        int digit = num % 10;
        return power(digit, n) + isArmstrongHelper(num / 10, n);
    }
}

// Main function to check if a number is an Armstrong number using recursion
int isArmstrong(int num) {
    int n = countDigits(num); // Count the number of digits in the given number
    int sum = isArmstrongHelper(num, n); // Calculate the sum of nth powers of digits
    return (sum == num); // Check if the sum is equal to the original number
}