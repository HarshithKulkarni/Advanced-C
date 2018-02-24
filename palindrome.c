#include <stdio.h>
#include <stdlib.h>
int compute(int tem);
int input()
{
    int n=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    return n;
}

int compute(int tem)

{
    int rev,digit;
    rev=0;
    int b;
    b=input();
    tem=b;
    while(tem!=0)
    {
        digit=tem%10;
        rev=(rev*10)+digit;
        tem=tem/10;
    }
    if(rev==b)
    {
        return 1;

    }
    else
    {
        return 0;
    }

}


int main()
{
   int tem,a;

   a=compute(tem);
   if(a==1)
   {
       printf("The number is palindrome\n");
   }
   else{
    printf("The number is not a palindromic\n");
   }
   return 0;
}
