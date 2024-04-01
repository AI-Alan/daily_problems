// in this program we will create basic calcultor


#include <stdio.h>

int main(){
    float num1, num2;
    char opt,flag;

    printf("----CALCULATOR-----");

    printf(" \n Enter q or Q to exit \n ");
    
    scanf("%f",&num1);
    scanf(" %c",&opt);


    while(1){

     scanf("%f",&num2);
     
     if (opt == '+')
     {
        num1 = num1 + num2 ;
        printf("%f",num1);
     }
     else if (opt == '-')
     {

         num1 = num1 - num2 ;
        printf("%f",num1);
     }
     else if (opt == '/')
     {

         num1 = num1 / num2 ;
        printf("%f",num1);
     }

     else if (opt == '*')
     {

         num1 = num1*num2 ;
        printf("%f",num1);
     }

     scanf(" %c",&flag);

     if (flag == 'q'  || flag == 'Q')
     {
        printf("Thanks for  using !\n ");
        break;
     }

     else 
     {
        opt = flag ;
        continue;
        }







    }








}