// Topics

    // Introduction to C Programming Language
    // Basic Structure of a C Program
    // Data types and variables
    // Inputs
    // Operators in C
    // Control Flow statements
    // Functions in C
    // Arrays and Strings
    // Pointers


#include <stdio.h>
#include <stdbool.h>

int addition(int x, int y){
    int total = x + y;

    printf("The total is %d", total);
    return 1;
}


int main(){

    //printf("Hello World\n");

    // primitive data types
    // int
    // double
    // float
    // char
    //non-primite data types
    // string 
    // boolean

        // int num = 10;
        // double numd = 5.25;
        // float numf = 3.14;
        // char letter = 'A';

        // char fullname[20] = "Noel Blanco";
        // bool isStudent = true;

        // // note 1 -> true, 0 -> false

        // printf("%d\n", num);
        // printf("%.2f\n", numd);
        // printf("%.2f\n", numf);
        // printf("%c\n", letter);
        // printf("%s\n", fullname);
        // printf("%d\n", isStudent);

    // int number;

    // printf("Input a number here: \n");

    // scanf("%d", &number);

    // printf("You've entered %d", number);

    // single line comment
    /*
    
        multiple line comment
    
    */

        // char fullname[30];

        // printf("Input name here: ");

        // // scanf("%s", &fullname);

        // fgets(fullname, sizeof(fullname), stdin);

        // printf("Hello there %s", fullname);

    // if statements
    // if-else statements
    // if - if-else statements

    // int age = -21;
    // int choice = 1;

    // if (age == 21){
    //     printf("You are %d years old. Therefore, you are an adult\n", age);
    // } else if (age <= 0) {
    //     printf("Age cannot be zero or less than zero\n");
    // } else {
    //     printf("You are not an adult\n");
    // }


    // switch (choice){

    //     case 1:
    //     printf("You've chosen 1");
    //     break;

    //     case 2:
    //     printf("You've chosen 2");
    //     break;

    //     default:
    //     printf("hello");

    // }

    // for-loop
    // while loop
    // do while

    //for - loop
    // for (int i = 0; i < 10; i++){
    //     printf("%d\n", i);
    // }

    // int j = 0;

    // while(j < 10){
    //     printf("%d\n", j);
    //     j++;
    // }

    // int ii = 0;

    // do {
    //     printf("%d\n", ii);
    //     ii++;
    // }
    // while (ii <= 5);

    // nested for loop
    // for (int i = 0; i < 5; i++){
    //     printf("%d - Outer Loop\n", i);
    //     for(int j = 0; j < 5; j++){
    //         printf("        %d - Inner Loop\n", j);
    //     }
    // }


    // functions
        // addition(5,10);


    // arrays

    // int -> 4 bytes * 11 = 44bytes

    //int arr[] = {5,10,15,20,25,30,40,50,60, 90,100};

    // int length = sizeof(arr) / sizeof(arr[0]);

    // printf("%lu", sizeof(arr));

    // for (int i = 0; i < length; i++){
    //     printf("%d\n", arr[i]);
    // }

    int myNum = 10; // -> memory

    // pointer variable
    int *ptr = &myNum;

    // dereferencing
    printf("%d\n", *ptr);
    printf("%p\n", &myNum);




    return 0;
}








