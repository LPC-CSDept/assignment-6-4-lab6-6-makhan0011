//		Make a program that find the prime numbers according to two user inputs [begin, end]
//		begin and end must be positive integers.
//			if begin == end, getListprime(int) function is called with default arguments [begin, 100]
//			if begin > end,  getListprime(  ) function is called with default arguments [0, 100]
//			if begin < end, getListprime(int, int) fuction is called with the range from begin to end.
//		example)
//			user input = 20, 20 , call getListprime( 20 ) // the second parameter is default.[20,100]
//			user input = 40, 20 , call getListprime(   ) // the both parameters are default. [0,100]
//			user input = 20, 50,  call getListprime(20, 50) // call the function with actual arguments

#include <iostream>
#include <iomanip>
using namespace std;

//----------
// Make a line for Function Prototype for getListprime Here

// printPrimeList function that asks user for input and determines if input is prime
void printPrimeList(int a, int b) {

    // asking user for input and taking input to determine prime numbers in a for loop
    int flag;
    cout << " Prime numbers between " << a << " and " << b << ":" << endl;
    
    for (int i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= (i / 2); ++j) {
            // for(int j =2; j<= (i/j); ++j) {
            // for (int j=2; j<i; j++)
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
	
	// if flag is 1 then output list of prime numbers
        if (flag == 1) {
            cout << i << " ";
        }
    }
}

// functions that list prime numbers in a certain arrangement
void getListprime(int begin)
{
    printPrimeList(begin, 100);
}
void getListprime()
{
    printPrimeList(0, 100);
}
void getListprime(int begin, int end)
{
    printPrimeList(begin, end);
}

// main function that gets prime list
int main() {

    // declaring begin and end and declaring as int
    int begin, end;
    
    // asking user for two inputs
    cout << "Enter your input (two integer for range ) \n";
    cin >> begin >> end;
    
    // input check
    if (begin <= 0 || end <= 0)
    {
        cout << "Invalid!";
    }
    
    // if statement
    if (begin < end)
        getListprime(begin, end);
    else if (begin > end)
        getListprime();
    else
        getListprime(begin);
}
