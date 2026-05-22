#include<stdio.h>
void multiply(){int a,b;
     printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("the product of %d and %d is %d\n", a, b, a*b);
}
void addition(){int a,b;
     printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("the sum of %d and %d is %d\n", a, b, a+b);
}
void subtraction(){int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("the difference of %d and %d is %d\n", a, b, a-b);}
void division(){ int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b==0){
        printf("division by zero is not allowed\n");
    }else{
        printf("the quotient of %d and %d is %d\n", a, b, a/b);
    }
}
int main(){int option,menu; 
    printf("Welcome to neocal\n");
    printf("enter 1 to show menu: ");
    scanf("%d", &menu);
    printf("MENU\nchoose an option\n1. Addition\t\t2.subtraction\n3. Multiplication\t4. Division\n");
    scanf("%d", &option);
    if(option==1){
        addition();
    }else if(option==2){
        subtraction();
    }else if(option==4){ division();}
    else if(option==3){
        multiply();
    }else{
        printf("invalid option\n");
    }
    return 0;   }
