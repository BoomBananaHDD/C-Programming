// Autor: Luca Gaerisch
// Calculator V3

#include <stdio.h>
  
int main() 
{ 
    int rech[10]; 
    int sum,product,i;

    for(i=0; i<10; i++) 
    { 
        printf("[%d] : ",i+1); 
        scanf("%d",&rech[i]); 
    }
     
    sum=0;
    product=1;
    for(i=0; i<10; i++)
    {
        sum=sum+rech[i];
        product=product*rech[i];
    }
       
    printf("\nSum of array is     : %d"  ,sum); 
    printf("\nProduct of array is : %d\n",product); 
  
    return 0; 
}