//lab question 
#include <iostream>
#include <cmath>
using namespace std;

class MathOperations {
public:
    // Basic arithmetic operations
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if(b != 0)
            return a / b;
        else {
            std::cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
    }

    //Nested class for AdvancedOperations
    class AdvancedOperation{
        
    public:
        double factorial(int n) {
            double fact = 1;
            for(int i = 1; i <= n; i++) {
                fact *= i;
            }
            return fact;
        }

        double squareRoot(double n) {
            return sqrt(n);
        }
    };
};

int main(){
    MathOperations mathOp;
    MathOperations :: AdvancedOperation advOp;
    
    std::cout << "Addition: " << mathOp.add(5, 3) << std::endl;
    std::cout << "Subtraction: " << mathOp.subtract(5, 3) << std::endl;
    std::cout << "Multiplication: " << mathOp.multiply(5, 3) << std::endl;
    std::cout << "Division: " << mathOp.divide(5, 3) << std::endl;
    std::cout << "Factorial: " << advOp.factorial(5) << std::endl;
    std::cout << "Square Root: " << advOp.squareRoot(25) << std::endl;
    
    return 0;
}
