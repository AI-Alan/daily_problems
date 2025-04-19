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

     //********adding one more function in calculator:
     //adding modulo operator here
     else if(opt == '%'){
         int num1_m = (int)num1;
         int num2_m = (int)num2;

         num1 = num1_m%num2_m;
         printf("%d",(int)num1);
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