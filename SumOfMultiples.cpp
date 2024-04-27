#include <iostream>
#include <stdexcept> /
using namespace std;

class SumOfMultiples {
public: static int SumMul(int n, int m) {
        // your idea here
        if ((n>m || n==0)) {
            throw std::invalid_argument("Please enter valid inputs"); // Changed to std::invalid_argument
        }
        int iterator = n;
        int sum = 0;
        
        if (m % n != 0) {
            do {
                sum+=n;  
                n= n + iterator;
            }while (n<m);

            
        }
        else {
            // Other logic here
            do{
              if (n!=m){
                sum+=n;
                n=n+iterator;
              }
            }while(n<m);

        }
        
        // Make sure to return something
        return sum;
    }
};

int main() {
    // Test your function
    
    try {
        int result = SumOfMultiples::SumMul(4, 25127);
        cout << "Result: " << result << endl;
    } catch(const std::invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }
    
    return 0;
}
