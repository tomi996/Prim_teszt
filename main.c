/*********************************************************
// What is new in this version?
    -> This is the second version of 'prime search engine'
    -> It can determines if the incoming number is a prime
    -> Now it can handle numbers under 2

// Problems with this version
    -> It need to be optimized since on the case of large
       numbers the algorithm is very slow
*********************************************************/

#include <stdio.h>
#include <stdlib.h>


/*********************************************************
// Prime Search Function
/********************************************************/
int isPrime(int num)
{
    int iter;       /// the iterator


    if (num < 2) return -1;
    for(iter = 2; (iter <= num) && (num%iter != 0); iter++);

    if (num == iter) return 1;  /// is prime
    return 0;   /// not a prime
}

int main()
{
    /****************************************************
    //  Variables
    *****************************************************/
    int num;        /// the number, that we read from std in.
    int is_prime;   /// it'll be return value of isPrime function

    /****************************************************
    //  Reading an integer from standard input
    *****************************************************/
    printf("Please give an integer number, then press ENTER! ");
    scanf("%d", &num);

    is_prime = isPrime(num);
    /*****************************************************
    //  iter = num means, that 'num' is can be only divided
    //  with number 'num', so the 'num' is prime
    *****************************************************/
    if (is_prime == 1) printf("Number %d is a prime!\n", num);
    else if (is_prime == 0) printf("Number %d is NOT a prime!\n", num);
    else printf ("The incoming number must not be less than 2!\n");

    return 0;
}
