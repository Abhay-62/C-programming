/// VARIABLES AND DATA TYPES

// Q1 write a program to display volume  of circle with given radius

// ans -
 #include <stdio.h>
 int main(){
    int r,volume; //defining radius of circle and volume
    r=4;
    volume=(4*3.14*r*r*r)/3;
    printf("%d",volume);  //use float data type for more define answer

    return 0;
}

// Q2 calculate the percentage of 4 subject whose marks is out of 40
// ans-

#include <stdio.h>
int main(){
   float physics,chemistry,math,english,percentage; //defining subjects and percentage variable
   physics=32;
   chemistry=23;
   math=33;
   english=35;
   percentage=(physics+chemistry+math+english)/4;
   printf("%f",percentage);

    return 0;
}

// Q3 CALCULATE THE SIMPLE INTREST
// ans-
#include <stdio.h>
int main(){
  float p,r,t,si; //defining principle,time,rate and simple intrest;
  p=100;
  r=10;
  t=2;
  si=(p*r*t)/100;
  printf("%f",si);

  return 0;
  }

// CONCEPT - taking input from user

// #include <stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x); //user will enter the value of x
// }
// now you can practice this topic in previous question

// Q4 write a program to sum two number
// ans-
 #include <stdio.h>
 int main(){
     int a,b,sum; //defining two numbers and variable
     printf("enter the first number: ");
     scanf("%d",&a);
     printf("enter the second number: ");
     scanf("%d",&b);
     sum=a+b;
     printf("the sum of %d and %d is %d",a,b,sum);

    return 0;

}

// Q5 Take two integers input, a and b : a>b, and find the remainder when a is divided by b.
// ans-

#include <stdio.h>
int main(){
   int a,b,quotient,remainder;
   printf("enter the number a: ");
   scanf("%d",&a);
   printf("enter the number b: ");
   scanf("%d",&b);
   quotient=a/b; //use divident ,divisor,quotient,theory
   remainder=a-(b*quotient);
   printf("%d",remainder);

 // you can make this code short by using "%" operator that will give direct remainder a%b=remainder %opeartor is used to only integer data type
    return 0;
}

// Q6 Ques : Take integer as input and print half of the number.

#include <stdio.h>
int main(){
    int a; //defining variable a
    printf("enter the number: ");
    scanf("%d",&a);
    float b; // using float variable for half number because half of the number can give you float value
    b=a/2;
    printf("%f",b);

    return 0;
}

// Q7 Take float input and print the fractional part of the real number.

// fractinal part means such the number is 5.17 then fractional part will be the 0.17;

#include <stdio.h>
int main(){
    float a,fractional;
    printf("enter the number: ");
    scanf("%f",&a);
    int y;
    y=a; //now  float number is assinged in int then number will convert in int such as 5.17 convet in 5
    fractional=a-y; //this such as 5.17-5
    printf("%f",fractional);

    return 0;

    }

// TOPIC - charcter data type means you can store any character like  intteger store number but in charcter store character in inverted commas char='a'

//TOPIC -WHEN YOU PRINT CHARCTER IN INTEGER FORMAT IT WILL GIVE A NUMBER the number is known as ASCII value
//EX- char a;
    //   a='a';
    // printf("%d",a);

    //ans -97

// charcter are only of single digit 

//mcq time

// MCQ 1
// Which of the following is NOT a character constant
// (1) ‘Thank You’
// (2) ‘Enter values of P, N, R’
// (3) ‘23.56E-03’
// (4) All the above
//ans-4


// MCQ 2
// In b = 6.6 / a + 2 * n ; which operation will be performed first?
// (1) 6.6 / a
// (2) a + 2
// (3) 2 * n
// (4) Depends upon compiler
//ans-1



//   MCQ 3
// Which of the following statements is false
// (1) Each new C instruction has to be written on a separate line
// (2) Usually all C statements are entered in small case letters
// (3) Blank spaces may be inserted between two words in a C statement
// (4) Blank spaces cannot be inserted within a variable name
//ans-1


// MCQ 4
// If a is an integer variable, a = 5 / 2 ; will return a value
// (1) 2.5
// (2) 3
// (3) 2
// (4) 0
//ans-3



// MCQ 5
// The expression, a = 7 / 22 * ( 3.14 + 2 ) * 3 / 5 ; evaluates to
// (1) 8.28
// (2) 6.28
// (3) 3.14
// (4) 0
//ans-4



// MCQ 6
// The expression, a = 30 * 1000 + 2768 ; evaluates to
// (1) 32768
// (2) -32768
// (3) 113040
// (4) 0
//ans-1



// MCQ 7
// The expression x = 4 + 2 % - 8 evaluates to
// (1) -6
// (2) 6
// (3) 4
// (4) None of the above
//ans-2



// MCQ 8
// What will be the value of d if d is a float after the operation
// d = 2 / 7.0?
// (1) 0
// (2) 0.2857
// (3) Cannot be determined
// (4) None of the above

//ans-4 beacause float will give the value till 7 decimal places