#include <iostream>
/***********************************************************
Ben Caron
Period 1
Design a program capable of converting inches to millimeters
***********************************************************/
using namespace std;

int main()
{
    int inches; //number of inches//
    int MM; //millimeters//
    //welcome user and ask how many inches to convert//
    cout << "Hello user, I am designed to allow you to quickly convert inches to millimeters" << endl;
    cout << "please tell me, how many inches would you like to convert to Millimeters?"<<endl;
    cin >> inches;

    //convert the inches to millimeters//
    MM=inches*25.4;

    //display information and thank user"
    cout << "thank you ";
    cout <<inches;
    cout <<" inches is equal to ";
    cout << MM;
    cout <<" millimeters" <<endl;
    return 0;
}
