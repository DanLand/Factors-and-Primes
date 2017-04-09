//
//  main.cpp
//  Factors and Primes
//
//  Created by Dan Landrum on 4/1/16.
//
//  This routine finds factors, squares and primes
//  of a user entered number.
//

#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int);

int main()
{
    int n=1;
    while (n != 0){
        cout << "\nEnter a positive whole number (0 to exit): ";
        cin >> n;
        if (n == 0){    //if user enters 0
            break;      //break out of while loop
        }
        cout << "Factors of " << n << " are: " << endl;
        
        for (int i = 1; i <=n; ++i){
            if(n%i == 0){
                //output factors
                cout << i << " X " << n/i << " = " << i*(n/i);
                    
                //output square
                cout << "\t(" << i << ": sq = " << i*i << ", ";
                    
                //output cube
                cout << "cube = " << i*i*i;
                
                //output if perfect square, if not 1
                if (sqrt(i)==floor(sqrt(i)) && i != 1){
                    cout << ", square";
                }
                
                //output prime if IsPrime
                if (IsPrime(i)){
                    cout << ", prime";
                }
                
                //output close comment
                cout << ")\n";
                    
            }
        }
    }
    
    return 0;
}

//IsPrime function
//returns true if number is prime
//returns false if number is not prime
bool IsPrime(int number)
{
    int i;
    if (number == 1){
        return false;
    }
    for (i = 2; i < number; ++i){
        if (number % i == 0){
            return false;
        }
    }
    
    return true;
}

