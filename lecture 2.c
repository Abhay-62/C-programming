// control statements

// IF-ELSE

// Q1 -Take positive integer input and tell if it is even or odd
// ans-
 #include <stdio.h>
 int main(){
     int a;//defining a number
     printf("enter the number: ");
     scanf("%d",&a);
     if (a%2==0)
     {
         printf("the number is even");
     }else{
         printf("the number is odd");
     }

    return 0;
}

// Q2-Take positive integer input and tell if it is divisible by 5 or not.
// ans-

#include <stdio.h>
int main(){
    int a;//defining a number
    printf("enter the number: ");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("the number is divisible by 5");
    }else{
        printf("the number is not divisible by 5");
    }

    return 0;
}

// Q3-Take integer input and print the absolute value of that integer means if the number is negative print it positive
// ans-
 #include <stdio.h>
 int main(){
     int a;
     printf("enter the number: ");
     scanf("%d",&a);
     if (a==0)
     {
         printf("%d",a);
     }

    if (a<0)
    {
        a=a*(-1);
        printf("%d",a);

    }else{
        printf("%d",a);
    }

}

// Q4-If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit orincurred loss. Also determine how much profit he made or less he incurred.
// ans-

#include <stdio.h>
int main()
{
    int cp, sp, p, l;
    printf("enter the cost price: ");
    scanf("%d", &cp);
    printf("enter the selling price: ");
    scanf("%d", &sp);
    if (cp == sp)
    {
        printf("no loss no profit\n");
    }

    if (cp > sp)
    {
        l = sp - cp;
        printf("the loss is %d", l);
    }
    else
    {
        p = sp - cp;
        printf("the profit is %d", p);
    }

    return 0;
}

//Q5 Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
//ans-
#include <stdio.h>
int main(){
    int l,b,p,a;
    printf("enter the lenght: ");
    scanf("%d",&l);
    printf("enter the breadth: ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if (p>a)
    {
        printf("perimeter is greater than area");
    }else{
        printf("area is greater than perimeter");
    }

    return 0;
    
}



//// MULTIPLE CONDITION USING && AND ||

//Q1-Take positive integer input and tell if it is a three digit number or not.
//ans-
#include <stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a>99 && a<1000)
    {
        printf("the number is three digit number");
    }else{
        printf("the number is not three digit number");
    }

    return 0;
    
}


//Q2-Take positive integer input and tell if it is divisible by 5 and 3.
//ans-
 #include <stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a%5==0 && a%3==0)
    {
        printf("the number is divisible by 3 and 5");
    }else{
        printf("the number is not divisible by 3and 5");
        return 0; 
}
}

//Q3-Take positive integer input and tell if it is divisible by 5 or 3.
//ans-use or statement instead of and rest of the code will be the same as above


//Q4-Take 3 positive integers input and print the greatest of them.
//ans-
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("a is the greatest");
    }

    if (b>a && b>c)
    {
        printf("b is the greatest");
    }

    if (c>b && c>a)
    {
        printf("c is the greatest");
    }

    return 0;

    /// you can also solve by nested statements using if-else that will be solved in next topic 
    
    
    
}


//Q5-Take 3 numbers input and tell if they can be the sides of a triangle.
//ans-
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first side: ");
    scanf("%d",&a);
    printf("enter the second side: ");
    scanf("%d",&b);
    printf("enter the third side: ");
    scanf("%d",&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        printf("the sides are all of triangle");
    }else{
        printf("the sides are not of triangle");
    }

    return 0;
    
}



/// NESTED IF-ELSE

//Q1-Take positive integer input and tell if it  is divisible by 5 or 3 but not divisible by 15.
//ans-
#include <stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a%5==0 || a%3==0)
    {
        if (a%15==0)
        {
            printf("the number is divisible by 5 or 3 and 15");
        }else{
            printf("the number is divisible by 5 or 3 but not divisible by 15");
        }
        
    }else{
        printf("the number is not divisible by 5 and 3");
    }
    
    return 0;
}


//Q2-Take 3 positive integers input and print the greatest of them.
//ans-
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);

    if (a>b)
    {
       if (a>c) // a is the greatest
       {
        printf("a is the greatest");
       }else{
         //c>a c is the greatest
          printf("c is the greatest");
         
       }
       
    }else{
        //(b>a)
        if (b>c) // b is the greatest
        {
          printf("b is the greatest");   
        }else{
            //(c>b) c is the greatest
            printf("c is the greatest");
        }
        
    }

    return 0;
    
}


//Q3- If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
//ans-
#include <stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the age of ram: ");
    scanf("%d",&ram);
    printf("enter the age of shyam: ");
    scanf("%d",&ram);
    printf("enter the age of ajay: ");
    scanf("%d",&ram);

    if (ram<shyam)
    {
        if (ram<ajay) //ram is the youngest
        {
            printf("ram is the youngest");
        }else{
            // (ram>ajay)
            printf("ajay is the youngest");
            
        }
        
    }else{
        //ram>shyam
        if (shyam<ajay) //shyam is the youngest
        {
            printf("shyam is the youngest");
        }else{
            // ajay<shyam
            printf("ajay is the youngest");
        }
        
    }
    return 0;
}

// QUESTION RELATED TO MATHS

//Q1-Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
//ans-
#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,m1,m2;
    printf("enter the value of x1: ");
    scanf("%d",&x1);
     printf("enter the value of y1: ");
    scanf("%d",&y1);
     printf("enter the value of x2: ");
    scanf("%d",&x2);
     printf("enter the value of y2: ");
    scanf("%d",&y2);
     printf("enter the value of x3: ");
    scanf("%d",&x3);
     printf("enter the value of y3: ");
    scanf("%d",&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if (m1==m2)
    {
        printf("the line is straight line");
    }else{
        printf("the line is not straight line");
    }
    
   return 0;

 }