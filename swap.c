#include<stdio.h>


void
swap (int *x, int *y)
{
  //  call by address, call by reference
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}


void
main ()
{
  int a, b;

  a = 5;
  b = 10;

  swap (&a, &b);

  printf ("a = %d, b = %d", a, b);

}
