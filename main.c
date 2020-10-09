#include<function.h>
int main()
{
  float n1, n2, result;
  int ch;

  do{
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("\n*****************");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n6.Power (x^y)");
    printf("\n7.Area of Triangle");
    printf("\n8.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
      case 1:
        result=add(n1,n2);
        printf("%f",result);
        break;
      case 2:
        result=subtract(n1,n2);
        printf("%f",result);
        break;
      case 3:
        result=multiply(n1,n2);
        printf("%f",result);
        break;
      case 4:
        result=divide(n1,n2);
        printf("%f",result);
        break;
      case 5:
        result=rem(n1,n2);
        printf("%f",result);
        break;
      case 6:
        if(n2<0)
        {
          printf("n2 should be greater than 0");
        }
        else{
        result=power(n1,n2);
        }
        printf("%f",result);
        break;
      case 7:
        result=area(n1,n2);
        printf("%f",result);
        break;
      case 8:
        printf("Thank You.");
        exit(0);
      default:
        printf("Invalid input.");
        printf("Please enter correct input.");
    }

    printf("\n**********************************\n");
  }while(1);

  return 0;
}
