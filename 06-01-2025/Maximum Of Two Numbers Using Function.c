/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int max(int a,int b){
    int maxmum=(a>b)?a:b;
    return maxmum;
}

int main()
{
    int a,b,maxofnum;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    maxofnum=max(a,b);
    
    printf("the maximum of two numbers : %d",maxofnum);
    
    

    return 0;
}