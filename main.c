#include <stdio.h>
#include <math.h>
#include <windows.h>

void sub()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|          SUB          |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float sub1, sub2;
    printf("Enter 2 Numbers For Sub: ");
    scanf("%f %f", &sub1, &sub2);
    printf("Sub = %.2f\n", sub1 - sub2);
}
void sum()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|          SUM          |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    int i, n;
    float sum = 0, num[50];
    printf("\t\tEnter How many You want to Sum: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("\t\tThe sum of %d numbers is: %.2f\n\n", n, sum);
}

void multi()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|         MULTI         |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    int i, n;
    float multi = 1, num[50];
    printf("\t\tEnter How many You want to Multiply: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        multi = multi * num[i];
    }
    printf("The multi is: %.2f\n", multi);
}

void divition()
{
    system("cls");
    printf("\t\t\t\t--------------------------\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t  |      Division      |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t--------------------------\n\n");
    float num1, num2;
    printf("\t\tEnter First Number: ");
    scanf("%f", &num1);
    printf("\t\tEnter Second Number: ");
    scanf("%f", &num2);
    printf("\nThe Division  is: %.2f\n", num1 / num2);
}

void sine()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t  |        Sin        |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float redian, degree, pi = 3.14159;
    printf("\t\t\tEnter angle: ");
    scanf("%f", &degree);
    redian = degree * (pi / 180.0);
    printf("\n\n\t\t\tsin(%.2f) = %f\n\n", degree, sin(redian));
}

void cose()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t  |        Cos        |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float redian, degree, pi = 3.14159;
    printf("\t\t\tEnter angle: ");
    scanf("%f", &degree);
    redian = degree * (pi / 180.0);
    printf("\n\n\t\t\tcos(%.2f) = %f\n\n", degree, cos(redian));
}

void tann()
{
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t  |        Tan        |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float redian, degree, pi = 3.14159;
    printf("\t\t\tEnter angle: ");
    scanf("%f", &degree);
    redian = degree * (pi / 180.0);
    printf("\n\n\t\t\ttan(%.2f) = %f\n\n", degree, tan(redian));
}


void c_to_f(){

    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t| Celsius To Fahrenheit |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n\n", celsius, fahrenheit);
}

void f_to_c(){
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t| Fahrenheit To Celsius |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius\n\n", fahrenheit, celsius);
}

void c_to_k(){
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   Celsius To kelvin   |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float celsius, kelvin;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.2f Celsius = %.2f Kelvin\n\n", celsius, kelvin);
}


void k_to_c(){
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   kelvin To Celsius   |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float kel, cel;
    printf("Enter the temperature in Kelvin: ");
    scanf("%f", &kel);
    cel = kel - 273.15;
    printf("%.2f Kelvin = %.2f Celsius\n\n", kel, cel);
}

void f_to_k(){
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t| Fahrenheit To Kelvin  |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float fah, kel;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fah);
    kel = (fah-32)*(5/9)+273.15;
    printf("%.2f Fahrenheit = %.2f Kelvin\n\n", fah, kel);
}


void centi_to_met_kilo()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|  Centimeter to meter & kilometer  |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float cm,m,km;
    printf("Enter length in cm: ");
    scanf("%f", &cm);
    m=cm/100.0;
    km=cm/100000.0;
    printf("length in meter = %.4f\n",m);
    printf("length in km = %.4f",km);
}

void met_to_centi_kilo()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|  Meter to centimeter & kilometer  |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float m,cm,km;
    printf("Enter length in Meter: ");
    scanf("%f", &m);
    cm= 100 * m;
    km=1000*m;
    printf ("Length in cm =  %.4f\n",cm);
    printf ("Length in km =  %.4f",km);
}

void kilo_to_centi_met()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|  Kilometer to Centimeter & Meter  |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float m,cm,km;
    printf("Enter length in Kilometer: ");
    scanf("%f", &km);
    m=km*1000.0;
    cm=km*100000.0;
    printf ("Length in cm =  %.4f\n",cm);
    printf ("Length in m =  %.4f",m);
}

void centigrm_to_grm()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|         Centigram To Gram         |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float Centigram,Gram;
    printf("Enter Mass is Centigram: ");
    scanf("%f", &Centigram);
    Gram=0.01*Centigram;
    printf ("Mass in Gram =  %.4f",Gram);
}

void grm_to_centigrm_kg()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|   Gram to Centigram & Kilogram    |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float Centigram,Gram,Kilogram;
    printf("Enter Mass in Gram: ");
    scanf("%f", &Gram);
    Centigram=100*Gram;
    Kilogram=Gram/1000;
    printf ("Mass in Centigram =  %.4f\n",Centigram);
    printf ("Mass in Kilogram =  %.4f",Kilogram);
}

void kg_to_centigrm_grm()
{
    system("cls");
    printf("\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t|   Kilogram To Centigram & Gram    |\n");
    printf("\t\t\t\t|                                   |\n");
    printf("\t\t\t\t-------------------------------------\n\n");
    float Centigram,Gram,Kilogram;
    printf("Enter Mass in Kilogram: ");
    scanf("%f", &Kilogram);
    Gram=Kilogram*1000;
    Centigram=Kilogram*100000;
    printf ("Mass in Gram =  %.4f\n",Gram);
    printf ("Mass in Centigram =  %.4f",Centigram);
}


void k_to_f(){
    system("cls");
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t| kelvin To Fahrenheit  |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t-------------------------\n\n");
    float kel, fah;
    printf("Enter the temperature in Kelvin: ");
    scanf("%f", &kel);
    fah=(kel-273.15)*(9/5)+32;
    printf("%.2f Kelvin = %.2f Celsius", kel, fah);
}

void matrix_addition()
{
    system("cls");
    printf("\t\t\t\t--------------------------\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t|     Matrix Addition     |\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t--------------------------\n\n");
     int row_size, column_size;
    printf("\nInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("Here Matrix A + B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("+");
            printf(" %d", array2[i][j]);
            printf("\t");
        }

    printf("\n");
    }
    //int sum = 0;
    printf("Summation of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        int sum = 0;
        //printf("\t\t\t\t\t        ");
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] + array2[i][j];
        printf("%d\t", sum);
        }
        printf("\n");

    }
    printf("\n");

}


void Matrix_sub()
{
    system("cls");
     printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Matrix Subtraction   |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t-------------------------\n\n");
     int row_size, column_size;
    printf("\nInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("Here Matrix A - B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("-");
            printf(" %d", array2[i][j]);
            printf("\t");
        }

    printf("\n");
    }
    printf("SubsTraction of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        int sum = 0;
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] - array2[i][j];
        printf("%d\t", sum);
        }
        printf("\n");
    }
    printf("\n");

}


void  matrix_divide()
{
    system("cls");
    printf("\t\t\t\t--------------------------\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t |     Matrix Divide     |\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t--------------------------\n\n");
    int row_size, column_size;

    printf("\t\t\t\tInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("\t\t\t\tInsert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("\t\t\t\tInsert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t");
        for(j = 0; j < row_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\t\t\t\tInsert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        printf("\t\t\t\t");
        for(l = 0; l < row_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("\t\t\t\t  Here Matrix A / B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t");
        for(j = 0; j < row_size; j++){
            printf("%d ", array1[i][j]);
            printf("/");
            printf(" %d\t", array2[i][j]);
        }

    printf("\n");
    }
    //int sum = 0;
    printf("\t\t\t\tDivided of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        float divided = 0;
        printf("\t\t\t\t");
        for(j = 0; j < row_size; j++){
            divided = (float) array1[i][j] / (float) array2[i][j];
        printf("%.2f\t", divided);
        }
        printf("\n");

    }

}

void  matrix_multiply()
{
    system("cls");
    printf("\t\t\t\t--------------------------\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t |     Matrix Divide     |\n");
    printf("\t\t\t\t|                         |\n");
    printf("\t\t\t\t--------------------------\n\n");
     int a[10][10], b[10][10], mult[10][10], a_row_size, a_column_size, b_row_size, b_column_size, i, j, k;
    int row_size, column_size;
    printf("Enter 1st Matrix Rows and Column : ");
    scanf("%d %d", &a_row_size, &a_column_size);
    printf("Enter 2nd Matrix Rows and Column : ");
    scanf("%d %d", &b_row_size, &b_column_size);
    printf("\nInsert the %d * %d Matrix A :\n", a_row_size, a_column_size);
    for(i = 0; i < a_row_size; i++){
            for(j = 0; j < a_column_size; j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", b_row_size, b_column_size);
    for(i = 0; i < b_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
           mult[i][j]=0;
        }
    }
    printf("Here Matrix A * B\n", a_row_size, b_column_size);
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            int count = 0;
            for(k = 0; k < a_column_size; k++){
                printf("%d * %d", a[i][k], b[k][j]);
                mult[i][j] += a[i][k]*b[k][j];
                if(count == a_column_size - 1){
                break;
            }
            count++;
            printf(" + ");
            }
           printf("\t");
        }
        printf("\n");
    }
    printf("\nResult of Matrix A * B\n", row_size, column_size);
    for(i=0; i<a_row_size; ++i){
        for(j=0; j<b_column_size; ++j){
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void Trigonometry()
{
    system("cls");
    printf("\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t |            Trigonometry          |\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t---------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Sin\n");
    printf("\t\t\t\t 2.  Cos\n");
    printf("\t\t\t\t 3.  Tan\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");

    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        sine();
    }
    if(choice == 2)
    {
        cose();
    }
     if(choice == 3)
    {
        tann();
    }
}


void Matrix()
{
    system("cls");
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t |             Matrix           |\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Addition \n");
    printf("\t\t\t\t 2.  Subtraction\n");
    printf("\t\t\t\t 3.  Division\n");
    printf("\t\t\t\t 4.  Multiply\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        matrix_addition();
    }
    if(choice == 2)
    {
        Matrix_sub();
    }
     if(choice == 3)
    {
        matrix_divide();
    }
    if(choice == 4)
    {
        matrix_multiply();
    }
}


void simple_calculator()
{
    system("cls");
    printf("\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t|           Simple Calculator         |\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t---------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Addition\n");
    printf("\t\t\t\t 2.  Subtraction\n");
    printf("\t\t\t\t 3.  Multiply \n");
    printf("\t\t\t\t 4.  Division \n");
    
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        sum();
    }
    if(choice == 2)
    {
        sub();
    }
    if(choice == 3)
    {
        multi();
    }
    if(choice == 4)
    {
        divition();
    }

}



void scientific_calculator()
{
    system("cls");
    printf("\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t|         Scientific Calculator       |\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t---------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Trigonometry\n");
    printf("\t\t\t\t 2.  Matrix\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");

    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        Trigonometry();
    }
    if(choice == 2)
    {
        Matrix();
    }
}

void temprature()
{
    system("cls");
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t |            Temprature          |\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Celcius to Farenheit \n");
    printf("\t\t\t\t 2.  Celcius to Kalvin\n");
    printf("\t\t\t\t 3.  Farenheit to Celcius\n");
    printf("\t\t\t\t 4.  Farenheit to Kalvin\n");
    printf("\t\t\t\t 5.  Kalvin to Celcius\n");
    printf("\t\t\t\t 6.  Kalvin to Kalvin\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        c_to_f();
    }
    if(choice == 2)
    {
        c_to_k();
    }
     if(choice == 3)
    {
        f_to_c();
    }
    if(choice == 4)
    {
        f_to_k();
    }
    if(choice == 5)
    {
        k_to_c();
    }
    if(choice == 6)
    {
        k_to_f();
    }

}

void clear()
{
    system("PAUSE");
    system("CLS");
}

void mass()
{
    system ("cls");
    float convert_number;
    int mass_number;

    system("cls");
    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t|                             |\n");
    printf("\t\t\t\t |            Mass          |\n");
    printf("\t\t\t\t|                             |\n");
    printf("\t\t\t\t-------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Centigram to Gram \n");
    printf("\t\t\t\t 2.  Convert Centimeter to Kilogram\n");
    printf("\t\t\t\t 3.  Convert Gram to Centigram\n");
    printf("\t\t\t\t 4.  Convert Gram to Kilogram\n");
    printf("\t\t\t\t 5.  Convert Kilogram to Centigram\n");
    printf("\t\t\t\t 6.  Convert Kilogram to Gram\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");

    scanf("%d", &mass_number);
    system ("cls");
    while(mass_number > 0 && mass_number < 7){
        switch(mass_number){
            case 1:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Gram      : %.3f\n", convert_number / 100);
                clear();
                break;
            case 2:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Kilogram  : %.3f\n", convert_number / 1000);
                clear();
                break;
            case 3:
                printf("\nGram      : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 100);
                clear();
                break;
            case 4:
                printf("\nGram     : ");
                scanf("%f", &convert_number);
                printf("Kilogram : %.3f\n", convert_number / 100);
                clear();
                break;
            case 5:
                printf("\nKilogram  : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 1000);
                clear();
                break;
            case 6:
                printf("\nKilogram : ");
                scanf("%f", &convert_number);
                printf("Gram     : %.3f\n", convert_number * 100);
                clear();
                break;
            default:
                break;
        }
        system ("cls");
    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t|                             |\n");
    printf("\t\t\t\t |            Mass          |\n");
    printf("\t\t\t\t|                             |\n");
    printf("\t\t\t\t-------------------------------\n\n\n");
     printf("\t\t\t\t 1.  Centigram to Gram \n");
    printf("\t\t\t\t 2.  Convert Centimeter to Kilogram\n");
    printf("\t\t\t\t 3.  Convert Gram to Centigram\n");
    printf("\t\t\t\t 4.  Convert Gram to Kilogram\n");
    printf("\t\t\t\t 5.  Convert Kilogram to Centigram\n");
    printf("\t\t\t\t 6.  Convert Kilogram to Gram\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
    scanf("%d", &mass_number);

    }
}

void length()
{
    system("cls");
    printf("\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t |        Length converter        |\n");
    printf("\t\t\t\t|                                  |\n");
    printf("\t\t\t\t------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Centimeter to Meter and kilometer \n");
    printf("\t\t\t\t 2.  Meter to centimeter & kilometer\n");
    printf("\t\t\t\t 3.  Kilometer to Centimeter & Meter\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");

    printf("\n\n\t\t\tChoose a option to calculate: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        centi_to_met_kilo();
    }
    if(choice == 2)
    {
        met_to_centi_kilo();
    }
     if(choice == 3)
    {
        kilo_to_centi_met();
    }

}



void converter()
{
    system("cls");
    printf("\t\t\t\t--------------------------------------\n");
    printf("\t\t\t\t|                                    |\n");
    printf("\t\t\t\t |             converter           |\n");
    printf("\t\t\t\t|                                    |\n");
    printf("\t\t\t\t--------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Length convert \n");
    printf("\t\t\t\t 2.  Mass convert\n");
    printf("\t\t\t\t 3.  Temperature convert\n");
    printf("\t\t\t\t 0.  Exit & Menu \n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1)
    {
        length();
    }
    if(choice == 2)
    {
        mass();
    }
     if(choice == 3)
    {
        temprature();
    }
}



void menu()
{
    system("cls"); // system ("clear")
    system("color B0");
    // system("color 84");
    printf("\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t|           WELCOME TO THE            |\n");
    printf("\t\t\t\t|        SCIENTIFIC CALCULATOR        |\n");
    printf("\t\t\t\t|                                     |\n");
    printf("\t\t\t\t---------------------------------------\n\n\n");
    printf("\t\t\t\t 1.  Simple Calculator\n");
    printf("\t\t\t\t 2.  Scientific Calculator\n");
    printf("\t\t\t\t 3.  Converter \n");
    printf("\t\t\t\t 0.  Exit\n");
    printf("\n\n\t\t\tChoose a option to calculate: ");
}
void looop(int continuing)
{
    int n;
    while (continuing)
    {
        menu();
        scanf("%d", &n);
        if (n == 0)
        {
            printf("\n\n\t\tThank you for using our Scientific Calculator\n\n");
            break;
        }

        if (n == 1)
        {
            simple_calculator();
        }

        if (n == 2)
        {
            scientific_calculator();
        }
        if(n==3)
        {
            converter();
        }

        printf("\n\n\t\t\tPress 1 to go to menu, 0 to Exit : ");
        scanf("%d", &continuing);
        if (continuing == 1)
            continue;
        else
        {
            printf("\n\n\t\t\tThank you for using our Scientific Calculator!\n\n");
            break;
        }
    }
}
int main()
{
    int continuing = 1;
    looop(continuing);
}


