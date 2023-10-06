#include <iostream>
#include <cmath>

using namespace std;

int main (){
    cout << "-----------------------------" << endl;
    cout << "QUADRATIC FUNCTION CALCULATOR" << endl;
    cout << "-----------------------------" << endl;
    
    double A;
    double B;
    double C;

    //data input
    cout << "Enter the value of A: " << endl;
        cin >> A;
    cout << "Enter the value of B: " << endl;
        cin >> B;
    cout << "Enter the value of C: " << endl;
        cin >> C;

    //DELTA calculation
    double DELTA = (pow(B, 2) - 4.0 * A * C);
    
    cout << "The value of DELTA: " << DELTA << endl;

    //declare variable only once before conditional
    double X1 = ((-B + sqrt(DELTA)) / (2.0 * A));
    double X2 = ((-B - sqrt(DELTA)) / (2.0 * A));

    //Conditional
    if (DELTA > 0.0){
        cout << "The Quadratic Function has TWO real roots!" << endl;

        cout << "The value of x1: " << X1 << endl;
        cout << "The value of x2: " << X2 << endl;
        
    }
    else if (DELTA == 0.0){
        cout << "The Quadratic Function has only ONE real root!" << endl;

        cout << "The value of x: " << X1 << endl;
        
    }
    else{
        cout << "The Quadratic Function does NOT have any real roots!" << endl;
    }
}