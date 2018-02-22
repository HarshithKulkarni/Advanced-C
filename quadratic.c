
#include<stdio.h>
#include<math.h>
struct complex
{
float real,imag;
};
float det(int a,int b,int c);
float det(int a,int b,int c)
{
    float det;
    det=b*b-4*a*c;
    printf("The value is %f",det);
     return det;
}
float computeroots(int a,int b,int c,struct complex *r1,struct complex *r2)
{
     struct complex r1,r2;
     if(det>0)
   {
     r1=-b+(sqrt(det))/(2*a);
     r2=-b-(sqrt(detr))/(2*a);
     printf("The roots are real and distinct %f %f \n",r1,r2);
     return 0;
   }
    else if(det==0)
   {
    r1=r1=-b/(2*a);
    printf("The roots are real and equal %f",r1);
    return 0;
   }

     else if(det<0)
   {
    r1.real=r2.real=-b/(2*a);
    r1.imag=r2.imag=(sqrt(det*-1))/(2*a);
    printf("The roots are imaginary %.2f+i%.2f and %.2f-i%.2f",real,imag,real,imag);
   return 0;
   }
}
}
int main()
{
    int a,b,c;
    printf("Enter the coeffecients\n");
    scanf("%d%d%d",&a,&b,&c);
    det(a,b,c);
    computeroots(a,b,c,&r1,&r2);
return 0;
}
