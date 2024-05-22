#include<stdio.h>  
int main()  
{   
    int l, b, ar, pr;  
    printf("Enter the length of the rectangle : ");  
    scanf("%d", &l);  
    printf("Enter the breadth of the rectangle : ");  
    scanf("%d", &b);   
    ar = l * b;  
    pr = 2 * (l + b);  
    printf("\n Area of Rectangle is : %d", ar);  
    printf("\n Perimeter of Rectangle is : %d", pr); 
    printf("\n\n");               
}  