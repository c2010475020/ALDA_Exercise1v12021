#define CATCH_CONFIG_RUNNER
#define TEST 1 // Always change to 1 before your final submission to Github Classroom.
#include "tests/catch.hpp"
#include "main.hpp"
#include <stdlib.h>

// DO NOT CHANGE THIS METHOD
int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

// =====================
// Exercise 1 - "Sieb des Eratosthenes"
// ---------------------
void eratosthenes(int n, int* sieve){
   //TODO
}

// =====================
// Exercise 2 - InversionCount
// ---------------------
int inversionCount(int size, int *numbers, int *inversions){
    //TODO
    return -1;
}

// =====================
// Exercise 3 - MemSwap
// ---------------------
void memswap(char *mem1, char *mem2, int size) {
    // TODO
}


/*
 Test your C knowledge in the main function, but leave the very last lines of code unchanged. 
 */
int main(int argc, char* const argv[] ){
    // TODO Call your functions and experiment with C
    
    // =====================
    // Exercise 1
    // ---------------------
    
    void eratosthenes(int n, int* sieve) {
    //TODO
    for (int i = 0; i < n + 1; i++)
        sieve[i] = 1;
    sieve[0] = 0;
    sieve[1] = 0;
    int j;
    for (int i = 2; i < sqrt(n); i++) {
        for (j = i * i; j < n; j = j + i) {
            sieve[j] = 0;
        }
    }
    for (int k = 0; k < n; k++) {
        if (sieve[k] != 0) {
            printf("%i ", k);
        }    
    }
}
    
    
 
    // read some int n from the console
    // or simply set a variable
    // create an dynamic array with the help of malloc (also free up the memory after usage again)
    // or some static array
    // call function eratosthenes...
    // print all prime numbers up to n - 1
    

    
    
    
    
    

    // =====================
    // Exercise 2
    // ---------------------
    int inversionCount(int size, int* numbers, int* inversions) {
    //TODO
    int totalinv = 0;
    for (int i = 0; i < size; i++) {
        int inversionsInt = 0;
        for (int j = i; j < size; j++) {         
            if (numbers[i] > numbers[j]) {
                inversionsInt++;
            }
        }
        inversions[i] = inversionsInt;
    }
    for (int k = 0; k < size; k++) {
        totalinv += inversions[k];
    }
    return totalinv;
}
   
    
    // Define two arrays of equal size n
    // Initialize one array with random ints
    // call inversionCount and pass the parameters
    // print all inversions and the total
   
    
    
    
    
    
    
    
    // =====================
    // Exercise 3
    // ---------------------
    
    void memswap(int* mem1, int* mem2, int size) {
    // TODO
    for (int i = 0; i < size; i++) {
        int tmp = mem2[i];
        mem2[i] = mem1[i];
        mem1[i] = tmp;
    }
    printf("After swap:\n");
    for (int j = 0; j < size; j++) {
        printf("%i ", mem1[j]);
    }
    printf("\n");
    for (int j = 0; j < size; j++) {
        printf("%i ", mem2[j]);
    }
}
    
    
    
    
    
    
    // Define two arrays of equal size n
    // The type can be any simple type
    // Print the two arrays before memswap
    // Call memswap
    // Print the two arrays after memswap
    
    
    
    
    int main() {
    // TODO Call your functions and experiment with C

    // =====================
    // Exercise 1
    // ---------------------
    // read some int n from the console
    // or simply set a variable
    // create an dynamic array with the help of malloc (also free up the memory after usage again)
    // or some static array
    // call function eratosthenes...
    // print all prime numbers up to n - 1

    printf("n= ");
    int n;
    scanf("%d", &n);

    int *f = (int*)malloc(sizeof(int)*n+1);

    eratosthenes(n, f);
    printf("\n");





    // =====================
    // Exercise 2
    // ---------------------
    // Define two arrays of equal size n
    // Initialize one array with random ints
    // call inversionCount and pass the parameters
    // print all inversions and the total

    int numbers[4] = { 8, 4, 2, 1 };
    int inversions[4] = { 0, 0, 0, 0 };
    int inversion = inversionCount(4, numbers, inversions);






    // =====================
    // Exercise 3
    // ---------------------
    // Define two arrays of equal size n
    // The type can be any simple type
    // Print the two arrays before memswap
    // Call memswap
    // Print the two arrays after memswap


    int mem1[5] = { 2,5,100,3,5 };
    int mem2[5] = { 102, 500, 202, 199, 399 };
    printf("Swapping...\n");
    for (int j = 0; j < 5; j++) {
        printf("%i ", mem1[j]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++) {
        printf("%i ", mem2[j]);
    }
    memswap(mem1, mem2, 5);





    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    if (TEST){
        return runCatchTests(argc, argv);
    }
    return 1;
}






