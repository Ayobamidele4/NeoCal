#define _USE_MATH_DEFINES 
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// Conversion constants
#define DEG_TO_RAD (M_PI / 180.0)
#define RAD_TO_DEG (180.0 / M_PI)
#define GRAD_TO_RAD (M_PI / 200.0)
#define RAD_TO_GRAD (200.0 / M_PI)
#define DEG_TO_GRAD (200.0 / 180.0)
#define GRAD_TO_DEG (180.0 / 200.0)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// Function prototypes
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
    printf("Choose an option:\n1. Sine \t2. Cosine \n3. Tangent \t4. Arctangent \n5. Arccosine \t6. Arcsine\n7. Sinh \t8. Cosh \n9. Tanh\n");
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
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double a;
        printf("Enter number %d: sin(", i + 1);
        scanf("%lf", &a);
        
        int num;
        printf("Choose format:\n1. Degree\t2. Radian\n3. Convert Rad to Deg\t4. Convert Deg to Rad: ");
        scanf("%d", &num);
        
        if(num == 1){
            double e = degtorad(a); 
            p[i] = sin(e);
            printf("The sine of %lf degrees is %lf\n", a, p[i]);
        }
        else if(num == 2){
            p[i] = sin(a); 
            printf("The sine of %lf radians is %lf\n", a, p[i]);
        }
        else if(num == 3){
            p[i] = radtodeg(a);
            printf("The value of %lf in degrees is %lf\n", a, p[i]);
        }
        else if(num == 4){
            p[i] = degtorad(a);
            printf("The value of %lf in radians is %lf\n", a, p[i]);
        }
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

void cosine(){
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double a;
        printf("Enter number %d: cos(", i + 1);
        scanf("%lf", &a);
        p[i] = cos(a);
        printf("The cosine of %lf is %lf\n", a, p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

void tangent(){
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double a;
        printf("Enter number %d: tan(", i + 1);
        scanf("%lf", &a);
        p[i] = tan(a);
        printf("The tangent of %lf is %lf\n", a, p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

void sinhe(){
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double a;
        printf("Enter number %d: sinh(", i + 1);
        scanf("%lf", &a);
        p[i] = sinh(a);
        printf("The hyperbolic sine of %lf is %lf\n", a, p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

void cosineh() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val;
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = cosh(input_val);
        printf("Cosh: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void tangenthe() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = tanh(input_val);
        printf("Tanh: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void power() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double base, exponent; 
        printf("Enter base number %d: ", i + 1);
        scanf("%lf", &base);
        printf("Enter exponent number %d: ", i + 1);
        scanf("%lf", &exponent);
        p[i] = pow(base, exponent);
        printf("Result: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void squareroot() {     
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        if(input_val < 0) {
            printf("Error: Negative square root!\n");
            p[i] = 0;
        } else {
            p[i] = sqrt(input_val);
            printf("Square root: %lf\n", p[i]);
        }
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}
void angular_conversions() {
    int c, n, conv_choice;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { 
        printf("Memory allocation failed!\n");
        return; 
    }
    
    printf("\nChoose Conversion Type:\n");
    printf("1. Degrees to Radians\t\t2. Radians to Degrees\n");
    printf("3. Degrees to Gradians\t\t4. Gradians to Degrees\n");
    printf("5. Radians to Gradians\t\t6. Gradians to Radians\n");
    printf("Enter choice (1-6): ");
    scanf("%d", &conv_choice);
    
    for(int i = 0; i < n; i++) {
        double input_val;
        printf("Enter value %d to convert: ", i + 1);
        scanf("%lf", &input_val);
        
        switch(conv_choice) {
            case 1: 
                p[i] = input_val * DEG_TO_RAD; 
                printf("%lf Degrees = %lf Radians\n", input_val, p[i]); 
                break;
            case 2: 
                p[i] = input_val * RAD_TO_DEG; 
                printf("%lf Radians = %lf Degrees\n", input_val, p[i]); 
                break;
            case 3: 
                p[i] = input_val * DEG_TO_GRAD; 
                printf("%lf Degrees = %lf Gradians\n", input_val, p[i]); 
                break;
            case 4: 
                p[i] = input_val * GRAD_TO_DEG; 
                printf("%lf Gradians = %lf Degrees\n", input_val, p[i]); 
                break;
            case 5: 
                p[i] = input_val * RAD_TO_GRAD; 
                printf("%lf Radians = %lf Gradians\n", input_val, p[i]); 
                break;
            case 6: 
                p[i] = input_val * GRAD_TO_RAD; 
                printf("%lf Gradians = %lf Radians\n", input_val, p[i]); 
                break;
            default: 
                printf("Invalid variant, saving 0.\n"); 
                p[i] = 0; 
                break;
        }
    }
    
    char cd;
    printf("Do you want to look back at any conversion history? (y/n): ");
    scanf(" %c", &cd); 
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Converted value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}
void absolutevalue() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = fabs(input_val);
        printf("Absolute value: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void roundup() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = ceil(input_val);
        printf("Rounded up value: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void rounddown() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = floor(input_val);
        printf("Rounded down value: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void rounding() {
    int c, n;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        double input_val; 
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &input_val);
        p[i] = round(input_val);
        printf("Rounded value: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd); 
    
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void multiply(){
    int c, n;
    double a, b;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);
        p[i] = a * b;
        printf("Result: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd);
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void addition(){
    int c, n;
    double a, b;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; } 
    
    for (int i = 0; i < n; i++){
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);
        p[i] = a + b;
        printf("Result: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd);
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p); 
}

void subtraction(){
    int c, n;
    double a, b;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);
        p[i] = a - b;
        printf("Result: %lf\n", p[i]);
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd);
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

void division(){
    int c, n;
    double a, b;
    printf("Enter the number of memory slots needed: ");
    scanf("%d", &n);
    double *p = malloc(n * sizeof(double));
    if (p == NULL) { return; }
    
    for (int i = 0; i < n; i++){
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);
        
        if(b == 0){
            printf("Division by zero is not allowed!\n");
            p[i] = 0;
        }else{
            p[i] = a / b;
            printf("Result: %lf\n", p[i]);
        }
    }
    
    char cd;
    printf("Do you want to look back at any operation history? (y/n): ");
    scanf(" %c", &cd);
    if(cd == 'y'){
        printf("Enter the operation index (0 to %d): ", n - 1);
        scanf("%d", &c);
        if(c >= 0 && c < n) {
            printf("Value at index %d: %lf\n", c, p[c]);
        } else {
            printf("Invalid index!\n");
        }
    }
    free(p);
}

int main(){
    int option, menu; 
    printf("Welcome to neocal\n");
    
    while(1) {
        printf("\nEnter 1 to show menu or 0 to turn off: ");
        scanf("%d", &menu);
        
        if(menu == 0){
            printf("Turning off neocal. Goodbye!\n");
            break; 
        } else if (menu == 1) {
            printf("\n--- MENU ---\nChoose an option:\n");
            printf("1. Addition\t\t2. Subtraction\n3. Multiplication\t4. Division\n");
            printf("5. Power\t\t6. Square-root\n7. Absolute-value\t8. Round-up\n");
            printf("9. Round-down\t\t10. Round\n11. Trigonometry\n12. Angular Conversions\n");
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
            else if(option == 11){ trigonometry();}
            else if(option == 12){ angular_conversions(); }
            else{ printf("Invalid option!\n"); }
        } else {
            printf("Invalid input. Please choose 1 or 0.\n");
        }
    }
    return 0;   
}