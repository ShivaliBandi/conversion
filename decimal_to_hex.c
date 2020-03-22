#include<stdio.h>


void decToHexa(int inum) 
{    
    // char array to store hexadecimal number 
    char hexaDeciNum[100]; 
      
    // counter for hexadecimal number array 
    int i = 0; 
    while(inum!=0) 
    {    
      
        int itemp  = 0; 
          
        itemp = inum % 16; 
          
        
        if(itemp < 10) 
        { 
            hexaDeciNum[i] = itemp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = itemp + 55; 
            i++; 
        } 
          
        inum = inum/16; 
    } 
      
    
    for(int j=i-1; j>=0; j--) 
        printf("%c",hexaDeciNum[j]); 
} 
  
int main() 
{ 
     int inum=0;
    printf("enter a  decimal number\n");
    scanf("%d",&inum); 
   
    decToHexa(inum); 
      
    return 0; 
} 
