#include <stdio.h> 

int main(){
    printf("This program is to calculate your grades based on your marks from 1 to 100\n");
    int a;
    printf("Enter Your Marks: ");
    scanf("%d", &a);
    
    if(a>=90 && a<=100){
        printf("Your Grade: A");
    }
    else if(a>=80 && a<=90){
        printf("Your Grade: B");
    }
    else if(a>=70 && a<=80){
        printf("Your Grade: C");
    }
    else if(a>=60 && a<=70){
        printf("Your Grade: D");
    }
    else if(a>=50 && a<=60){
        printf("Your Grade: E");
    }
   else if (a>0 && a<50){
    printf("Your Grade: F");
   }
   else{
    printf("...INVALID MARKS...");
   }

    return 0;
}