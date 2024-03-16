
#include <iostream>
using namespace std;
#include <cmath>
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

void getTwoValues (int& begin, int& end) {
    do { cin >> begin >> end;
    if (begin > end) {
        cout << "Begin must be less than End" << endl;


    }
    }
    while (begin > end);
}
    int getPrevPrime(int end) {
        int prev = end - 1;
        while (true) {

            bool isPrime = true;
            for (int i=2; i <=sqrt(prev); ++i) {
                if (prev % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) return prev;
            prev--;
        }
    }
    int getNextPrime(int begin) {
        int next = begin +1;
        while(true) {
            bool isPrime=true;
            for(int i=2; i<=sqrt(next); ++i) {
                if (next % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime ) return next;
            next++;
        }
    }
