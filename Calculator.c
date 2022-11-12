#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//This is just for appearance,a pattern using the symbol '*'.
void logo (){
printf("================================================================================\n");
printf("*            *****                                **        * *      * *       *\n");
printf("*            *****                               **          * *    * *        *\n");
printf("*            *****                              **            * *  * *         *\n");
printf("*         ************      ********           **              ******          *\n");
printf("*         ************      ********          **               ******          *\n");
printf("*            *****                           **               * *  * *         *\n");
printf("*            *****                          **               * *    * *        *\n");
printf("*            *****                         **               * *      * *       *\n");
printf("*                                                                              *\n");
printf("*                              CALCULATOR                                      *\n");
printf("*                             created by Eva                                   *\n");
printf("================================================================================\n");
}
int main()
{
    logo();
    float numberOne;
    float numberTwo;
    float answer;
    char op;


    printf("Enter the first number: ");
    scanf("%f", &numberOne);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%f", &numberTwo);

    if(op == '+'){
    answer=numberOne+numberTwo;
    }

    else if(op == '/'){
        if(numberTwo == 0)
        {printf("Error, you cannot divide with 0");
         exit(0);
        }else{
        answer = numberOne/numberTwo;
        }
   } else if(op== '-'){
           answer=numberOne-numberTwo;
    }

    else if(op== '*'){
           answer=numberOne*numberTwo;
    }

    //The pow() function takes two arguments (base value and power value) and, returns the power raised to the base number. 
    else if(op == '^'){
           answer = pow(numberOne,numberTwo);
  
      }
    //The sqrt() function takes a single argument (in double) and returns its square root (also in double).  
    else if(op == 's'){
           answer = sqrt(numberTwo);
    }


   printf("%f%c%f=%f",numberOne,op,numberTwo,answer);



}
