#include <stdio.h>

int main() {
      float num1, num2, result;
      char operator;

      printf("enter first number\n: ");
      scanf("%f", &num1);

      printf("enter operator (+,-,*,/)\n: ");
      scanf(" %c", &operator);

      printf("enter second number\n: ");
      scanf("%f", &num2);

      switch (operator) {
            
        case '+':
        result = num1+num2;
        printf("result = %.2f\n", result);

break;

case '-':
result = num1-num2;
printf("result = %.2f\n", result);

break;

case '*':
result = num1*num2;
printf("result= %.2f\n", result);
break;

case'/':
if(num2 == 0) {
      printf("error: cannot divide by zero \n");
}
else {
      result = num1/num2;
      printf("result = %.2f\n", result);
}break;
default:
printf("error: invalid operator\n");
      }
return 0;
}