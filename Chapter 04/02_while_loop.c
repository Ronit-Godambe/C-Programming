    #include <stdio.h> 

int main(){

    int i = 0;

    while(i<10){
        printf("Happy Birthday!\n");
        i = i + 1;
    }

    printf("%d", i);
    scanf("%d", &i);


    

    // While loop:
    /*
    While loop first checks condition, then proceeds to run block of code (anything inside {})
    it stops when the condition becomes false, and terminates.
    */

    /*
    how this works,
    first loop checks (i = 0) < 10, its true, so it prints the statement and incriments 1 to i (i = 1)

    next loop checks (i = 1) < 10, its true, so it prints the statement and incriments 1 to i (i = 2)

    next loop checks (i = 2) < 10, its true, so it prints the statement and incriments 1 to i (i = 3)

    next loop checks (i = 3) < 10, its true, so it prints the statement and incriments 1 to i (i = 4)

    next loop checks (i = 4) < 10, its true, so it prints the statement and incriments 1 to i (i = 5)

    next loop checks (i = 5) < 10, its true, so it prints the statement and incriments 1 to i (i = 6)

    next loop checks (i = 6) < 10, its true, so it prints the statement and incriments 1 to i (i = 7)

    next loop checks (i = 7) < 10, its true, so it prints the statement and incriments 1 to i (i = 8)

    next loop checks (i = 8) < 10, its true, so it prints the statement and incriments 1 to i (i = 9)

    next loop checks (i = 9) < 10, its true, so it prints the statement and incriments 1 to i (i = 10)

    now, loop checks (i = 10) < 10, its false, so the statement is terminated.
    
(Happy Birthday gets printed 10 times.)) 
    */
    return 0;
}