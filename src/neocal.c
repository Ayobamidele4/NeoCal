#include<stdio.h>
#include<math.h>
void power(){double a,b,c;
	printf("enter the first numberand second number:" );
	scanf("%lf  %lf",&a,&b);
	c = pow(a,b);
	printf("%lf raised to the power %lf is %lf",a,b,c);}
void squareroot(){double a,c;
	 printf("enter the  number: ");
    scanf("%lf", &a);
	c = sqrt(a);
    printf("the square-root  of %lf is %lf\n", a, c);}
void absolutevalue(){double  a,c;
   printf("enter the  number: ");
    scanf("%lf", &a);
        c = fabs(a);
    printf("The absolute value  of %lf is %lf\n", a, c);}
void  roundup(){double a,c;
         printf("enter the number: ");
    	scanf("%lf", &a);
        c = ceil(a);
    printf("the rounding up of %lf to the nearest interger  is %lf\n", a, c);
}
void rounddown(){double a,c;
         printf("enter the number: ");
        scanf("%lf", &a);
        c = floor(a);
    printf("the rounding down of %lf to the nearest interger  is %lf\n", a, c);}
void rounding(){double a,c;
         printf("enter the number: ");
        scanf("%lf", &a);
        c = round(a);
    printf("the rounding of %lf to the nearest interger  is %lf\n", a, c);
}
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
    printf("MENU\nchoose an option\n1. Addition\t\t2. subtraction\n3. Multiplication\t4. Division\n5. Power\t\t6. Square-root\n7. Absolute-value\t8. Round-up\n9. Round-down\t\t10. Round\n");
;
    scanf("%d", &option);
    if(option==1){
        addition();
    }else if(option==2){
        subtraction();
    }else if(option==4){ division();}
    else if(option==3){
        multiply();
    }else if(option==5){power();}
	else if(option==6){squareroot();}
	else if(option==7){absolutevalue();}
	else if(option==8){roundup();}
	else if(option==9){rounddown();}
	else if(option==10){rounding();}
	else{
        printf("invalid option\n");
    }
    return 0;   }
