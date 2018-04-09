

#include<stdio.h>
#include<math.h>
struct complex
{
   double  real;
   double  imag;
}s1,s2;
float computeroots(int a,int b,int c,int d);
float det(int a,int b,int c)
{
    float d;
    d=b*b-4*a*c;
    printf("The value is %f",d);
    computeroots(a,b,c,d);
}
float computeroots(int a,int b,int c,int d)
{

     float r1,r2,real;
     if(d>0)
   {
     r1=-b+(sqrt(d))/(2*a);
     r2=-b-(sqrt(d))/(2*a);
     printf("The roots are real and distinct %f %f \n",r1,r2);
     return 0;
   }
    else if(d==0)
   {
    r1=r1=-b/(2*a);
    printf("The roots are real and equal %f\n",r1);
    return 0;
   }

     else if(d<0)
   {
    s1.real=s2.real=-b/(2*a);
    s1.imag=s2.imag=(sqrt(d*-1))/(2*a);
    printf("The roots are imaginary %.2f+i%.2f and %.2f-i%.2f\n",s1.real,s1.imag,s2.real,s2.imag);
   return 0;
   }
}
int main()
{
    int a,b,c;
    printf("Enter the coeffecients\n");
    scanf("%d%d%d",&a,&b,&c);
    det(a,b,c);
return 0;
}



