#include <stdio.h>
#include <stdlib.h>
// a calculator program to compute the
// sum, difference, product, quotient and modulus of two numbers
/*
  inputs
  -num1, num2

  outputs
  -sum
  -diff
  -pro
  -quot
  -mod

  computations
  -sum = num1 + num2
  -diff = num1 - num2
  -pro = num1 * num2
  -quot = num1 / num2
  -mod = num1 % num2
  -
*/
int main()
{

    int num1;   // variable declarations.
    int num2;
    int sum;
    int diff;
    int pro;
    int mod;

    float quot;

    num1 = 200;
    num2 = 56;

    sum = num1 + num2;   // computations.
    diff = num1 - num2;
    pro = num1 * num2;
    quot =(float) num1 / num2;
    mod = num1 % num2;

    //output

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, pro);
    printf("%d / %d = %f\n", num1, num2, quot);
    printf("%d mod %d = %d\n", num1, num2, mod);



    return 0;
}
