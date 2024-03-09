// #include<stdio.h> //pre processor directive
// int main(){
//     int number = 25;
//     char star = '*';
//     int age = 22 ;

//     float pi = 3.14;

//     int a = 30;
//     int A = 40;

//     int _age = 20;
//     int final_price = 100;

//     int age = 22 ;
//     float pi = 3.14;
//     char hashtag = '#'; //these 3 are data types int, float, char


//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int age;
//     printf("enter age");
//     scanf("%d",&age);
//     printf("age is : %d",age);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value a ");
//     scanf("%d",&a);
//     printf("enter the value b ");
//     scanf("%d",&b);

//     int sum = a + b ;
//     printf("sum is %d", sum);
//     return 0;



// }

//are of square 
// #include<stdio.h>
// int main(){
//     int side ;
//     printf("enter the side ");
//     scanf("%d",&side);
//     printf("area of square is %d",side*side);
//     return 0;
// }

//area of circle 
// #include<stdio.h>
// int main(){
//     float radius;
// printf("enter the radius of circle ");
// scanf("%f",&radius);
// printf("area of circle is %f",3.14*radius*radius);
// return 0;
// }

/*1) write a program to calculate perimeter of rectangle 
    take sides a & b from the user .
2) take a number (n)from user & output its cube(n*n*n)
3) write comments for programs a & b.*/ 
// #include<stdio.h>
// int main(){
//     double length,breadth;
    
//     printf("enter the length");
//     scanf("%d",&length);
//     printf("enter the breadh");
//     scanf("%d",&breadth );
//     printf("perimeter of rectangle is %d", 2*(length+breadth));
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value n");
//     scanf("%d",&n);
//     printf("the value is %d",n*n*n);
//     return 0;
//}

// chapter 2 instruction and operators 

//#include<stdio.h>
//#include<math.h>

//int main() {
    // int a = 2;
    // int b = a ;
    // int c = b * 6;
    // int d = 1, e;

    // int oldAge = 22;
    // int years = 2;
    // int newAge = oldAge + years;

    // int x,y,z ;
    // x = y = z =4;

    // int a = 1 ,b = 2;
    // int sum = a + b;
    // int multiply = a * b;
    // int b,c;
    // b = c = 1;
    // int a = b + c;
    // int power = pow(b,c);
    // printf("%d",power);


  //  return 0;
//}

// MODULAR OPERATOR % it gives remider 
// 4 % 2 = 0
// 5 % 3 = 2 

// #include<stdio.h>
// int main(){
//     printf("%d \n",2 * 2);
//     return 0;
// }
// int op int = int 
// int op float = float 
// float op float = float 

// operator precedence 
//1) * , / , %
//2) + , -
//3) =
// x = 4+9*10
//associative (for same precedence)
//left to right 

// #include<stdio.h>
// int main(){
//     //int a = 5*2-3*2;
//     int b = 5*2/2*3;
//     printf("%d \n",b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int side;
//     printf("enter the side ");
//     scanf("%d",&side);
    
//     printf("area is:%d,side * side");
//     return 0;
// }
 
//  #include<stdio.h>
//  int main(){
//     int a = 1;
//     int b = 2 ;
//     //a += b ;
//     a -= b;
//     printf("%d \n",a);
//     return 0;

//  }

// #include<stdio.h>
// int main(){
//     int age ;
//     printf("enter the age ");
//     scanf("%d",&age);
//     if(age>18){
//         printf("you are an adult\n ");
//         printf("you can vote\n");
//         printf("you can drive\n");
    
//     }
//     else{
//         printf("you are an under age");
//     }
//     printf("thank you");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter the marks you got ");
//     scanf("%d",&marks);
//     if(marks>90){
//         printf("congratulation you got the grade A++");

//     }
//     else if (marks>80 && marks<90){
//         printf("congratulation you got the A+");

//     }
//     else {
//         printf("you got A");
//     }
//     return 0;


// }

// ternary operator 
// #include<stdio.h>
// int main(){
//     int age ;
//     printf("enter your age");
//     scanf("%d",&age);
//     age>=18 ? printf("adult \n"):printf("not adult \n");
//     return 0;

// }
//switch operator
// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter the day(1-7)");
//     scanf("%d",&day);

//     switch(day){
//         case 1 : printf("monday");
//                 break;
//         case 2 : printf("tuesday");
//                 break;
//         case 3 : printf("wednesday");
//                 break; 
//         case 4 : printf("thursday");
//                 break;
//         case 5 : printf("friday");
//                 break;
//         case 6 : printf("saturday");
//                 break;
//         case 7 : printf("sunday");
//                 break;  
//         default : printf("not a valid day! \n") ; 
//     }

// }

// #include<stdio.h>
// int main() {
//     int number;
//     printf("enter the number : ");
//     scanf("%d",&number);

//     if(number>=0) {
//         printf("it is positive number \n");
//         if (number % 2 == 0 ){
//             printf("it is even number \n");
//         }else {
//             printf("odd \n");
//         }
        

//     }else{
//         printf("negative \n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int number ;
//     printf("enter the number : ");
//     scanf("%d",&number);

//     if(number>30 && number <=100){
//         printf("pass \n");

//     }else {
//         if(number>100){
//             printf("wrong marks ");

//         } 
//         printf("fail \n");
//     }
// // }
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter the marks : ");
//     scanf("%d",&marks);

//     marks <= 30 ? printf("FAIL \n") : printf("pass \n");
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int marks;
//     printf("enter your marks : ");
//     scanf("%d",&marks);

//     if(marks<30){
//         printf("C \n");
//     }else if (marks<=30 && marks<70)
//     {
//         printf("B /n");

//     }else if (marks<= 70 && marks<90)
//     {
//         printf("A");

//     }else if (marks<=90 && marks <= 100)
//     {
//         printf("A+");

//     }else
//         printf("wrong marks");
    
//     return 0;
    
// }

// types of loops 
// 1. for loop 
// 2. while loop 
// 3. do while loop
// for loop 
// for(initialisation; condition; updation){
    // do something 
//}

//this is c language 