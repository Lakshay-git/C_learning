// when a function calls itself , it's called recursion 
// #include<stdio.h>

// void printhlw(int count);

// int main(){
//     printhlw(5);
//     return 0;
// }

// //recursive function
// void printhlw(int count){
//     if(count == 0){
//         return;
//     }
//     printf("hello world \n");
//     printhlw(count-1);
    
// }

// #include<stdio.h>

// int sum(int n );

// int main(){
//     printf("sum is : %d\n",sum(5));

//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); // sum of 1 to n 
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// factorial n !

// #include<stdio.h>
// int fact(int n);

// int main(){
//     printf("factorial is : %d \n",fact(5));
//     return 0;
// }

// int fact(int n){
//     if(n==1){
//         return 1 ;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1*n;
//     return factN;
// }

// write a function to convert celsius to fahrenite 

// #include<stdio.h>
// float converttemp(float celsius);

// int main(){

//     float far = converttemp(32);
//     printf("far : %f",far);
//     return 0;

// }

// float converttemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far ;
// }

// #include<stdio.h>

// int calcpercentage(int science ,int math , int sanskrit );

// int main(){
//     int sc = 98 ;
//     int math = 95;
//     int sanskrit = 99;

//     printf("percentage is : %d ", calcpercentage(sc,math,sanskrit));
//     return 0;

// }
// int calcpercentage(int science,int math , int sanskrit){
//     return((science +math + sanskrit)/3);
// }

// write a function to print n terms of the fibonacci sequence 
#include<stdio.h>

int fib(int n);

int main(){
    fib(6);

    return 0;
}

int fib(int n ){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;
    printf("fib of %d is : %d \n",n,fibn);
    return fibn;
}