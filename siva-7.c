#include<stdio.h>
#include<math.h>
int main()
{
    char name[100];
    double num1,num2,result;
    int choice;
    printf("Enter your name:",name);
    scanf("%s",&name);
    printf("welcome %s to calculator\n",name);
    while (1)
    {
      printf("\nSelect an operation:\n");
      printf("1.Select one for Addition\n 2.Select two for Subtraction\n 3.Select three for Multiplication\n 4.Select four for Division\n 5.Select five for Modulo division\n 6.Exit\n");
      printf("Enter your choice for above:");
      scanf("%d",&choice);
      if(choice == 6)
     {
     printf("Thank you for using the calculator,%s!Goodbye!\n",name);
     break;
     }
      printf("Enter num1 and num2:\n");
      scanf("%lf %lf",&num1,&num2);
      switch(choice)
     {
        case 1:
            {
                result=num1+num2;
                printf("%lf + %lf = %lf",num1,num2,result);
                break;
            }
        case 2:
            {
                result=num1-num2;
                printf("%lf - %lf = %lf",num1,num2,result);
                break;
            }
         case 3:
            {
                result=num1*num2;
                printf("%lf * %lf = %lf",num1,num2,result);
                break;
            }
        case 4:
            {
                result=num1/num2;
                printf("%lf / %lf = %lf",num1,num2,result);
                break;
            }
        case 5:
            {
                result=fmod(num1,num2);
                printf("%lf %% %lf = %lf",num1,num2,result);
                break;
            }
        default:
            printf("Invalid choice! Please select a valid option.\n");
            break;
     }
    }
    return 0;
}
