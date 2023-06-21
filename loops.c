// types of loops 
// 1. for loop 
// 2. while loop 
// 3. do while loop
// for loop 
// for(initialisation; condition; updation){
    // do something 
//}


// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i=i+1){
//         printf("hello world \n");
//     }
    
//     return 0;
     
// }

// #include<stdio.h>
// int main(){
//     // i= iterator or counter variable 
//     for(int i = 1; i<=100; i = i+1){
//         printf("%d \n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i = 0; i<=10; i++){
//         printf("%d \n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     // increment operator
//     //++i (pre increment)
//     //i++ (post increment)
//     int i = 1;
//     // printf("%d \n",i++); // use then increase 
//     // printf("%d",i);

//     printf("%d \n",++i); //increase then use 
//     printf("%d \n",i);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     // decrement operator
//     //--i (pre increment)
//     //i-- (post increment)
//     int i = 1;
//     // printf("%d \n",i--); // use then increase 
//     // printf("%d",i);

//     printf("%d \n",--i); //increase then use 
//     printf("%d \n",i);
//     return 0;
// }


// *special things*
// increment operator
// decrement operator 
// loop counter can be float or even character 
// infinite loop

// #include<stdio.h>
// int main(){
//     // for(float i = 1.0;i<=7.0;i++){
//     //     printf("%f \n",i);
//     // }

//     for(char ch = 'A'; ch<='Z'; ch++){
//         printf("%c \n",ch);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=7){
//         printf("%d \n",i);
//         i++;
//     }
//     return 0; 
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d \n",&n);
//     // int i = 0;
//     // while(i<=n){
//     //     printf("%d \n",i);
//     //     i++;
//     // }
//     for(int i = 0 ; i<= n; i++){
//         printf("%d \n",i);
//     }

//     return 0;
// }


// do while loop 
// #include<stdio.h>
// int main(){
//     int i = 9;
//     do {
//         printf("%d \n",i);
//         i--;

//     }while(i>=1);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n ; 
//     printf("enter the number : ");
//     scanf("%d",&n);

//     int sum = 0;
//     for(int i = 1 ; i<=n;i++){
//     sum = sum +i; //sum +=i
//     }
//     printf("sum is %d\n", sum);

//     for(int i=n; i>=1; i--){
//         printf("%d \n", i);
//     }
//     return 0;
// }


//print the table of a number input by the user 
// #include<stdio.h>
// int main(){
//     int n ; 
//     printf("enter the number :");
//     scanf("%d",&n);

//     for(int i=1; i<=10; i++ ){
//         printf("%d\n",n*i);
//     }
//     return 0;

// }

//keep taking number from user as input from user until user enters an odd number 
// #include<stdio.h>
// int main(){
//     int n ;
//     do{
//         printf("enter the number :");
//         scanf("%d",&n);
//         printf("%d\n",n);

//         if(n%2!=0){
//             printf("its odd\n ");
//             break;
//         }

//     }while(1);
//     printf("thank you");


// }
// keep taking number as input from user until user enters a number 
// which is multiple of 7 

// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("enter the number :");
//         scanf("%d",&n);
//         printf("%d\n",n);

//         if(n % 7 ==0){ //multiple of 7
//             printf("its multiple of 7 ");
//             break ;
//         }
//     }while(1);
//     printf("thank you ");
// }

// comtinue statement -- skip to next iteration 
// #include<stdio.h>
// int main(){
//     for(int i = 1; i<=5; i++){
//         if(i == 3){ // skip
//             continue;
//         }
//         printf("%d\n",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==6){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0 ;
// }

// print all the odd numbers from 5 to 50 

// #include<stdio.h>
// int main(){
//     for(int i=5; i<=50; i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
// }

// print the factorial of number n 
// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter the the number :");
//     scanf("%d\n",&n);

//     int fact = 1;
//     for(int i = 1;i<=n;i++){
//         fact=fact*i ;
//     }
//     printf("final factorial is %d",fact);
//     return 0;
// }
//print reverse of the table for a number n 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     for(int i=10; i>=1; i--){
//         printf("%d \n",n*i);
//     }
// }

//calculate the sum of all numbers between 5 & 50
// #include<stdio.h>
// int main(){
    
//     int sum =0;
//     for(int i = 5;i<=50;i++){
//     sum = sum + i;
//     }
//     printf("sum is %d",sum);
//     return 0;
// }