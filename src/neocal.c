#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif


double radtodeg(double a);
double degtorad(double a);
void trigonometry();
void sine();
void cosine();
void tangent();
void sinhe();
void cosineh();
void tangenthe();
void power();
void squareroot();
void absolutevalue();
void roundup();
void rounddown();
void rounding();
void multiply();
void addition();
void subtraction();
void division();

double radtodeg(double a) { 
    return a * (180.0 / M_PI); 
}

double degtorad(double a) { 
    return a * (M_PI / 180.0); 
}

void trigonometry(){
    int b; 
    printf("choose an option:\n1. sine \t2. cosine \n3. tangent \t4. arctangent \n5. arccosine \t6. arcsine\n7. sinh \t8 cosh \n9. tanh\n");
    scanf("%d", &b);
    
    switch(b){
        case 1: sine();       break;
        case 2: cosine();     break;
        case 3: tangent();    break;
        case 7: sinhe();      break; 
        case 8: cosineh();    break;
        case 9: tangenthe();  break;
        default: printf("Option not implemented yet!\n"); break;
    }
}

void sine(){
    double a, c;
    printf("enter the number: sin(");
    scanf("%lf", &a);
    
    int num;
    printf("choose which do you want your answer to be in  1.Degree\t 2.Radian \nelseif you want to convert a number 3. from radian to degree 4.degree to radian:  ");
    scanf("%d", &num);
    
    if(num == 1){
        double e = degtorad(a); 
        c = sin(e);
        printf("the sine of %lf in degrees is %lf\n", a, c);
    }
    else if(num == 2){
        c = sin(a); 
        printf("the sine of %lf in radian is %lf\n", a, c);
    }
    else if(num == 3){
        double e = radtodeg(a);
        printf("the value of %lf in degree is %lf\n", a, e);
    }
    else if(num == 4){
        double e = degtorad(a);
        printf("the value of %lf in radian is %lf\n", a, e);
    }
}

void cosine(){
    double a, c;
    printf("enter the number: cos(");
    scanf("%lf", &a);
    c = cos(a);
    printf("the cosine  of  %lf is %lf\n", a, c);
}

void tangent(){
    double a, c;
    printf("enter the number: tan(");
    scanf("%lf", &a);
    c = tan(a);
    printf("the tangent  of  %lf is %lf\n", a, c);
}

void sinhe(){
    double a, c;
    printf("enter the number: sinh(");
    scanf("%lf", &a);
    c = sinh(a);
    printf("the hyperbolic sine  of  %lf is %lf\n", a, c);
}

void cosineh(){
    double a, c;
    printf("enter the number: cosh(");
    scanf("%lf", &a);
    c = cosh(a);
    printf("the hyperbolic cosine  of  %lf is %lf\n", a, c);
}

void tangenthe(){
    double a, c;
    printf("enter the number: tanh(");
    scanf("%lf", &a);
    c = tanh(a);
    printf("the hyperbolic tangent of  %lf is %lf\n", a, c);
}

void power(){
    double a, b, c;
    printf("enter the first number and second number: ");
    scanf("%lf %lf", &a, &b);
    c = pow(a, b);
    printf("%lf raised to the power %lf is %lf\n", a, b, c);
}

void squareroot(){
    double a, c;
    printf("enter the  number: ");
    scanf("%lf", &a);
    c = sqrt(a);
    printf("the square-root  of %lf is %lf\n", a, c);
}

void absolutevalue(){
    double a, c;
    printf("enter the  number: ");
    scanf("%lf", &a);
    c = fabs(a);
    printf("The absolute value  of %lf is %lf\n", a, c);
}

void roundup(){
    double a, c;
    printf("enter the number: ");
    scanf("%lf", &a);
    c = ceil(a);
    printf("the rounding up of %lf to the nearest integer is %lf\n", a, c);
}

void rounddown(){
    double a, c;
    printf("enter the number: ");
    scanf("%lf", &a);
    c = floor(a);
    printf("the rounding down of %lf to the nearest integer is %lf\n", a, c);
}

void rounding(){
    double a, c;
    printf("enter the number: ");
    scanf("%lf", &a);
    c = round(a);
    printf("the rounding of %lf to the nearest integer is %lf\n", a, c);
}

void multiply(){
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("the product of %d and %d is %d\n", a, b, a * b);
}

void addition(){
    int a, b, c, n;
    printf("enter the number of memory needed: ");
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));
    if (p == NULL) { return; } // Safety check for malloc
    
    for (int i = 0; i < n; i++){
        printf("enter the first number: ");
        scanf("%d", &a);
        printf("enter the second number: ");
        scanf("%d", &b);
        p[i] = a + b;
        printf("%d\n", p[i]);
    }
    
    getchar();
    char cd;
    printf("do you want to go back to any operation: ");
    scanf("%c", &cd);
    if(cd == 'y'){
        printf("enter the operation index you want to look at: ");
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("%d\n", p[c]);
        }
    }
    free(p); // Cleans memory leaks
}

void subtraction(){
    int a, b, c, n;
    printf("enter the number of memory needed: ");
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        printf("enter the first number: ");
        scanf("%d", &a);
        printf("enter the second number: ");
        scanf("%d", &b);
        p[i] = a - b;
        printf("%d\n", p[i]);
    }
    
    getchar();
    char cd;
    printf("do you want to go back to any operation: ");
    scanf("%c", &cd);
    if(cd == 'y'){
        printf("enter the operation index you want to look at: ");
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("%d\n", p[c]);
        }
    }
    free(p);
}

void division(){
    int a, b, c, n;
    printf("enter the number of memory needed: ");
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        printf("enter the first number: ");
        scanf("%d", &a);
        printf("enter the second number: ");
        scanf("%d", &b);
        
        if(b == 0){
            printf("division by zero is not allowed\n");
            p[i] = 0;
        }else{
            p[i] = a / b;
            printf("%d\n", p[i]);
        }
    }
    
    getchar();
    char cd;
    printf("do you want to go back to any operation: ");
    scanf("%c", &cd);
    if(cd == 'y'){
        printf("enter the operation index you want to look at: ");
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("%d\n", p[c]);
        }
    }
    free(p);
}

int main(){
    int option, menu; 
    printf("Welcome to neocal\n");
    printf("enter 1 to show menu or 0 to turn off: ");
    scanf("%d", &menu);
    
    if(menu == 0){
        exit(0);
    }else{
        printf("MENU\nchoose an option\n1. Addition\t\t2. subtraction\n3. Multiplication\t4. Division\n5. Power\t\t6. Square-root\n7. Absolute-value\t8. Round-up\n9. Round-down\t\t10. Round\n11. Trigonometry\n");
        scanf("%d", &option);
        
        if(option == 1){ addition(); }
        else if(option == 2){ subtraction(); }
        else if(option == 3){ multiply(); }
        else if(option == 4){ division(); }
        else if(option == 5){ power(); }
        else if(option == 6){ squareroot(); }
        else if(option == 7){ absolutevalue(); }
        else if(option == 8){ roundup(); }
        else if(option == 9){ rounddown(); }
        else if(option == 10){ rounding(); }
        else if(option == 11){ trigonometry(); }
        else{ printf("invalid option\n"); }
    }
    return 0;   
}
