//(Factorials) The factorial function is used frequently in probability problems. Using the
//definition of factorial in Exercise 4.34, write a program that uses a for statement to evaluate the factorials
//of the integers from 1 to 5. Print the results in tabular format. What difficulty might prevent
//you from calculating the factorial of 20?


#include <iostream>
using namespace std;


   int main() {
        int nFactorial=1;

        for (int i=5; i> 0; i-- ) {
            cout << " " <<i<<endl;
            nFactorial *= i;
        }
        cout<<" the 5! is: "<<nFactorial;
        return 0;
        }