/*how we can convert deciaml to a fractiona*/
/* First idea is to find fraction like we do in maths
1. divide by 10x
2.eleminate common factors
*/


int* factors (int num) {
    
     static int  facs[20];
     int index = 0;
    for (int i = 2; i <= num;){
        if((num%i) == 0){
            facs[index] = i;
            index++;
            num = num/i;
            }
        else if ((num%i) != 0) {
            i++;
        }  
        
    }
    return facs;
}
#include <stdio.h>

// char* test(){
//      static char x[] = "Aman";
//     return x;
// }
int main(){
    int num, len ;
    printf("Enter the number to find its prime factorization  : ");
    scanf("%d",&num);
    int* p = factors(num);
   
    

    for(int i = 0; i < 8 ; i++ )printf("%d ",p[i]);



    return 0;
}