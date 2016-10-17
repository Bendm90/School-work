#include <iostream>
#include <math.h>
/*
Ben Caron
Design a code to solve the quadratic formula
*/
using namespace std;

int main()
{
    float x1; // The Answer 1
    float x2; // The Answer 2
    float A; // Variable A
    float B; // Variable B
    float C; // Variable C
    // Say Hello and request Variables
    cout << "Hello user I will take care of your pesky Quadratic formula problems, so long as they don't include imaginary answers" << endl;
    cout << "User please tell me what the A Variable is?"  << endl;
    cin >> A;
    cout << "Thank you, now for the B Variable." <<endl;
    cin >> B;
    cout << "Now for the C variable user." <<endl;
    cin >> C;
    cout << "thank you user, allow me a moment to calculate" <<endl;

    // calculate the roots
    x1= (B-sqrt(-B+4*A*C))/(2*A);
    x2= (B+sqrt(-B+4*A*C))/(2*A);

    // display answer
    cout << "your roots are: " << x1 <<" and " << x2;
    cout << "Thank you and have a good day";

    return 0;
}
