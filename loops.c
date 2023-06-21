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

#include<stdio.h>
int main(){
    // decrement operator
    //--i (pre increment)
    //i-- (post increment)
    int i = 1;
    printf("%d \n",i--); // use then increase 
    printf("%d",i);

    // printf("%d \n",--i); //increase then use 
    // printf("%d \n",i);
    return 0;
}

// *special things*
// increment operator
// decrement operator 
// loop counter can be float or even character 
// infinite loop 