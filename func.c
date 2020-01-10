#include "func.h"
void add (struct comp a,struct comp b)
{
	struct comp c;
      c.real = a.real + b.real;
      c.img = a.img + b.img;

      if (c.img >= 0)

        printf("Sum= %0.3lf + %0.3lfi\n", c.real, c.img);
      else
        printf("Sum= %0.3lf %0.3lfi\n", c.real, c.img);
}

void sub (struct comp a,struct comp b)
{
      c.real = a.real - b.real;
      c.img = a.img - b.img;

      if (c.img >= 0)
        printf("subtract= %0.3lf + %0.3lfi\n", c.real, c.img);
      else
        printf("subtract= %0.3lf %0.3lfi\n", c.real, c.img);
}
void mul (struct comp a,struct comp b){
	  c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;

      if (c.img >= 0)
        printf("multiplication= %0.3lf + %0.3lfi\n", c.real, c.img);
      else
        printf("multiplication= %0.3lf %0.3lfi\n", c.real, c.img);
}
void di (struct comp a,struct comp b)
{
	if (b.real == 0 && b.img == 0)
        printf("EROR division by 0 + 0i isn't allowed.");
    else
	   c.real = (a.real*b.real+a.img*b.img)/(b.real*b.real+b.img*b.img);
       c.img = (b.real*a.img-b.img*a.real)/(b.real * b.real+b.img*b.img);
	   printf("multiplication= %0.3lf + %0.3lfi\n", c.real, c.img);
}
