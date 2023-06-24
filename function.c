// function - Block of code that performs particular task 
// take argument -- Do work -- Return result 
// it can be used multiple times 
// increace code reusability 
// syntax 1 
// function prototype or declaration 
// void printHello();
// syntax 2 
// Function definition
// void printHello(){
//    printf("Hello");
//}
//syntax 3 
//Function Call 
// int main(){
//   printHello();
//    return 0;
//} 

// #include<stdio.h>
// //declaration / prototype 
// void printHello();
// void printGoodbye();

// int main(){
//     printHello(); // function call
//     printGoodbye();
//     return 0;

// }

// //function definition 
// void printHello(){
//     printf("hello! \n");
// }
// void printGoodbye(){
//     printf("good bye \n");
// }
 
// #include<stdio.h>

// void namaste();
// void bonjour();

// int main(){
//     printf("enter i for indian or f for french :");
//     char ch;
//     scanf("%c", &ch);

//     if(ch=='i'){
//         namaste();
//     }else {
//         bonjour();
//     }
//     return 0;
// }

// void namaste(){
//     printf("namaste");
// }
// void bonjour(){
//     printf("bonjour");
// }

// #include<stdio.h>

// int sum(int a,int b);

// int main(){
//     int a,b;
//     printf("enter first number : ");
//     scanf("%d",&a);
//     printf("enter first number : ");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("sum is : %d  ", s);

// }

// int sum (int x, int y){
//     return x + y;
// }
// #include<stdio.h>


// void printtable(int n);

// int main(){
//     int n;
//     printf("enter first number : ");
//     scanf("%d",&n);

//     printtable(n); // argument or actual parameter 
    
//     return 0;
// }

// void printtable(int n){  // parameter or formal parameter 
//     for(int i = 0;i<=10;i++){
//         printf("%d\n",i*n);
//     }
// }

// #include<stdio.h>
 
//  void calculateprice(float value );

// int main(){
//     int value;
//     printf("enter  number : ");
//     scanf("%d",&value);

//     calculateprice( value);

    
//     return 0;
// }

// void calculateprice(float value){
//     value = value + (0.18*value);
//     printf("final price is : %f \n", value);
// }


// #include<stdio.h>
// #include<math.h>


// int main(){
//     int n ;
//     printf("enter the number : ");
//     scanf("%d",&n);

//     printf("%f", pow(n,2));

//     return 0;

// }      

#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a ,  float b);

int main(){
    float a = 5.0;
    float b = 10.0 ;
    printf("area is : %f",rectanglearea(a , b ));


    return 0;
}

float squarearea(float side){
    return side * side;
}
float circlearea(float rad ){
    return 3.14 *rad *rad;

}
float rectanglearea(float a , float b){
    return a * b;
}
