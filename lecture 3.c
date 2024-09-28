// LOOPS

//Q1-Print hello world ‘n’ times. Take ‘n’ as input from user
//ans-
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("hello world \n");
    }
    return 0;
}


//Q2-Print numbers from 1 to 100
//ans-
#include <stdio.h>
int main(){
    for (int i = 1; i<=100; i++)
    {
        printf("%d \n",i);
    }
    
    return 0;
}

//Q3-Print all the even numbers from 1 to 100
//ans-
#include <stdio.h>
 int main(){
     for (int i = 1; i<=100; i++)
     {
        if (i%2==0)
        {
            printf("%d \n",i);
        }
        
       
   }
    
     return 0;
  }


//Q4-Print all the odd numbers from 1 to 100
//ans-
#include <stdio.h>
 int main(){
     for (int i = 1; i<=100; i++)
     {
        if (i%2!=0)
        {
            printf("%d \n",i);
        }
        
       
   }
    
     return 0;
 }


//Q5- Print the table of 19.
//ans-
#include <stdio.h>
 int main(){
     for (int i = 1; i<=10; i++)
     {
       int t=19*i;
       printf("%d \n",t);
        
       
   }
    
     return 0;
 }

//Q6-Print the table of ‘n’. Here ‘n’ is a integer  which user will input
//ans-
#include <stdio.h>
 int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
     for (int i = 1; i<=10; i++)
     {
       int t=n*i;
       printf("%d \n",t);
        
       
   }
    
     return 0;
 }


//Q7- Display this AP - 1,3,5,7,9.. upto ‘n’ terms
//ans-
#include <stdio.h>
int main(){
    int n,a;
    a=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a=a+2;
    }
    // you can also solve by the nth formula of ap and put in for loop
    return 0;
}


//Q8- Display this AP - 4,7,10,13,16.. upto ‘n’  terms
//ans-
#include <stdio.h>
 int main(){
     int n,a;
     a=4;
     printf("enter the number: ");
     scanf("%d",&n);
     for (int i=1; i<=n; i++)
     {
         printf("%d ",a);
         a=a+3;
     }
     // you can also solve by the nth formula of ap and put in for loop
     return 0;
 }

//Q9- Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms
//ans-
#include <stdio.h>
      int n,a;
  int main(){
      a=1;
      printf("enter the number: ");
      scanf("%d",&n);
      for (int i=1; i<=n; i++)
      {
          printf("%d ",a);
          a=a*2;
      }
      // you can also solve by the nth formula of ap and put in for loop
      return 0;
  }


//Q10-Display this AP - 100,97,94,..upto all terms which are positive
//ans-
 int n,a;
   int main(){
       a=1;
       printf("enter the number: ");
       scanf("%d",&n);
       for (int i=1; i<=n; i++)
       {
           printf("%d ",a);
           a=a*2;
       }
       // you can also solve by the nth formula of ap and put in for loop
       return 0;
   }


