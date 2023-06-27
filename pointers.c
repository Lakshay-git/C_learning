// A variable that stores the memory address of another memory 

// syntax 
// int age = 22 ;
// int *ptr = &age; // * = value at address operator // & = address of operator 
// int _age = *ptr;

// #include<stdio.h>

// int main(){
//     int age = 22 ; 
//     int *ptr = &age ;
//     int _age = *ptr;

//     printf("%d",_age);
//     return 0;
// }

// declaring point 
// int *ptr;
// char *ptr;
// float *ptr;

// format specifier
// printf("%p",&age);
// printf("%p",ptr);
// printf("%p",&ptr);

//printf("%d",age);
//printf("%d",*ptr);
//printf("%d",*(&age));

// #include<stdio.h>

// int main(){
//     int age = 22;
//     int *ptr = &age;

//     // //address
//     // //printf("%p\n",&age);
//     // printf("%u\n",&age);
//     // printf("%u\n",ptr);

//     // printf("%u\n", &ptr);

//     //value 
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0; //x=0
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);

//     *ptr += 5;
//      printf("x = %d\n",x);
//      printf("*ptr = %d\n",*ptr);

//     (*ptr)++;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);


//     return 0;
// }

//pointer to pointer 
// a variable that stores the memory address of another pointer 
// syntax 
// int **pptr;
// char **pptr;
// float **pptr;

// value = *
// address = &
// #include<stdio.h>

// int main(){
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("%d\n",**pptr);
//     return 0;

// }

// #include<stdio.h>

// void square(int n);
// void _square(int *n);

// int main(){
//     int number = 4;
//     square(number);
//     printf("number = %d\n", number);
//     _square(&number);
//     printf("number = %d\n", number);
//     return 0;
// }
// // call by value 
// void square(int n){
//     n = n * n;
//     printf("square = %d\n",n);
// }
// //call by referance 
// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("square = %d\n",*n);
// }

// swap 2 numbers a&b
// #include<stdio.h>
// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){
//     int x =3 , y = 5;
//     _swap(&x,&y);
//     printf("x = %d & y = %d\n",x ,y);
//     return 0;


// }
// void swap(int a , int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a=%d & b = %d\n",a,b);
// }
// // call by reference
// void _swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

