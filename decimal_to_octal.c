

/*
conversion of decimal to octal number
input:670
output:1236



*/

#include<stdio.h>

void decToOctal(int n) 
{ 
    // array to store binary number 
    int octalNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        octalNum[i] = n % 8; 
        n = n / 8; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        printf( "%d ",octalNum[j]); 
} 
  
// Driver program to test above function 
int main() 
{ 
    int inum=0;
    printf("enter a  decimal number\n");
    scanf("%d",&inum); 
    decToOctal(inum); 
    return 0; 
} 
