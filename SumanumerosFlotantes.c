/*Sumas numeros flotantes*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10];
    
    numbers[0] =3.14;
    numbers[1] =5.15;
    numbers[2] =6.09;
    numbers[3] =7.11;
    numbers[4] =4.44;
    numbers[5] =2.56;
    numbers[6] =5.01;
    numbers[7] =4.09;
    numbers[8] =6.10;
    numbers[9] =1.10;

    printf("Elemento # 1: " "%.2f\n", numbers[0]);
    printf("Elemento # 2: " "%.2f\n", numbers[1]);
    printf("Elemento # 2: " "%.2f\n", numbers[1]);
    printf("Elemento # 3: " "%.2f\n", numbers[2]);
    printf("Elemento # 4: " "%.2f\n", numbers[3]);
    printf("Elemento # 5: " "%.2f\n", numbers[4]);
    printf("Elemento # 6: " "%.2f\n", numbers[5]);
    printf("Elemento # 7: " "%.2f\n", numbers[6]);
    printf("Elemento # 8: " "%.2f\n", numbers[7]);
    printf("Elemento # 9: " "%.2f\n", numbers[8]);
    printf("Elemento # 10 :" "%.2f\n", numbers[9]);

    printf("Suma\n");

    float sum =numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4]+numbers[5]+numbers[6]+numbers[7]+numbers[8]+numbers[9] ;
    printf("El resultado de la suma es %.2f\n", sum);
    
    
    return 0;



    return 0;
}



