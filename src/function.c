#include<function.h>


//function for addition of two numbers
int add(float n1, float n2)
{
  float result = n1 + n2;
  return result;
}

//function for subtraction of two numbers
int subtract(float n1, float n2)
{
  float result = n1 - n2;
  return result;
}

//function for multiplication of two numbers
int multiply(float n1, float n2)
{
  float result = n1 * n2;
  return result;
}

//function for division of two numbers
int divide(float n1, float n2)
{
  float result = n1 / n2;
  return result;
}

//function for calculating remainder
int rem(float n1, float n2)
{
  //Modulus operator only works on int data type
  //Floating numbers are converted to int number
  int num1 = n1;
  int num2 = n2;
  int result = num1%num2;
  return result;
}

//function for calculating power
int power(float n1, float n2)
{
    float result=1.0;
    for(int i=1; i<=n2; i++)
    {
       result *= n1;
    }
   return result;
  
}

int area(float n1, float n2)
{
    float h=0.5;
    float result= h * n1 *n2;
    return result;
}
