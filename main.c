#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c;
   float root1,root2;
   float root_part,denominator;
   printf("Enter the values of a,b,c:\n");
   scanf("%f%f%f",&a,&b,&c);
   root_part=sqrt(b*b-4*a*c);
   denominator=2*a;
   root1=(-b+root_part)/denominator;
   root2=(-b-root_part)/denominator;
   printf("root1=%f\nroot2=%f",root1,root2);


    return 0;
}
