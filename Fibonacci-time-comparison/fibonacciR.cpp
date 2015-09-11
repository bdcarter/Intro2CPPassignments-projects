/*****************************************************************
*Filename: fibonacci.cpp
*Author: Brianna Carter
*Date Created: 6/1/15
*Citation: Recursive function code created: 9/2013, 
*	Found at:
* http://cppstudent.blogspot.com/2013/09/fibonacci-using-recursion.html
*	Iterative function code created: 12/2011 found at:
		http://talkbinary.com/programming/c/fibonacci-in-c/ 
*Description: Program comparing run time of recursive and binary versions of
*	fibonacci sequence. 
***************************************************************/

#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;
int fibonacci(int);
int fib(int n);
long rfactorial (int n);
long factorialHelper (int n, int result);
long factorial(int n);

int main()
{

 int countIn;

 cout << "How many numbers in the Fibonacci sequence do you want to show? ";
 cin >> countIn;

 auto Rstart = std::chrono::high_resolution_clock::now();
 
 	for (int i = 0; i < countIn; i++)
 	{
  		fibonacci(i);
  		//cout << " " << fibonacci(i) << " ";
 	}
 
auto ReTotal = std::chrono::duration_cast<std::chrono::nanoseconds> 
	(std::chrono::high_resolution_clock::now()-Rstart).count();

	cout << fixed << showpoint; 
	cout << "Recursive function took " << ReTotal << " nanoseconds." << endl;
 
 //Iterative
 auto Istart = std::chrono::high_resolution_clock::now();
 
 	for (int i = 0; i < countIn; i++)
 	{
 			fib(i);
 		//cout << " " << fib(i) << " ";
 	}

auto ItTotal = std::chrono::duration_cast<std::chrono::nanoseconds> 
	(std::chrono::high_resolution_clock::now()-Istart).count();

cout << fixed << showpoint << setprecision(4); 
cout << "Iterative function took " << ItTotal << " nanoseconds." << endl;

//not tail recursive
 auto NTstart = std::chrono::high_resolution_clock::now();
 
 	for (int i = 0; i < countIn; i++)
 	{
 		rfactorial(i);
 		// cout << " " << rfactorial(i) << " ";
 	}

auto NTTotal = std::chrono::duration_cast<std::chrono::nanoseconds> 
	(std::chrono::high_resolution_clock::now()-NTstart).count();

cout << fixed << showpoint << setprecision(4); 
cout << "Not tail recursion took " << NTTotal << " nanoseconds." << endl;


//Tail recursive
 auto Tstart = std::chrono::high_resolution_clock::now();
 
 	for (int i = 0; i < countIn; i++)
 	{
 		factorial(i);
 		//cout << " " << factorial(i) << " ";
 	}

auto TTotal = std::chrono::duration_cast<std::chrono::nanoseconds> 
	(std::chrono::high_resolution_clock::now()-Tstart).count();

cout << fixed << showpoint << setprecision(4); 
cout << "Tail recursion took " << TTotal << " nanoseconds." << endl;

 return 0;
}
//recusive
int fibonacci(int num)
{
 	if (num == 1)
 	{	 
  		return 1;
 	}
 	else if (num == 0)
 	{
 		 return 0;
 	}
 	else
 	{
	  return fibonacci(num - 1) + fibonacci(num - 2);
	}
}
//iterative
int fib(int n) {
    if ( n == 0 || n == 1 ) 
        return n;
 
    int fib1 = 0; 
    int fib2 = 1;
    int fib = 0;
 
    for ( int i = 2; i <= n; i++ ) 
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
 
    return fib;
}
//not tail recursive
long rfactorial (int n) {
     if (n == 1)          
     	return 1;
     else if(n == 0)
     {return 0;}    
     else  
     	return n * rfactorial(n-1);   
}
//tail recursive
long factorialHelper(int n, int result){
	if(n==1)
		return result;
	else if(n==0)
		return 0;
	else
		return (factorialHelper(n-1, n*result));}

long factorial(int n)
{	return factorialHelper(n,1);}




