#include <iostream>
#include <stdio.h>
#include <math.h>
/*
Caron Ben
Create a program to calculate a phone bill
*/
using namespace std;

int main()
{
    float m; //minutes called
    float t; // texts
    float gig; //gigabytes used
    float gigr; //gigabytes used rounded
    float total; //total bill
    float mcost; //cost of minutes
    float tcost; //cost of texts
    float gcost; //cost of gigs

    //gather data
    cout<< "User please tell me how many minutes of call time did you use over 200?" <<endl;
    cin >> m;
    cout << "and how many texts did you send over 250?"<<endl;
    cin >> t;
    cout <<" And how many gigabytes did you use over 2"<<endl;
    cin>> gig;
    gigr=(ceil(gig) );
    //do math
    gcost= gigr*10;
    mcost = m*.40;
    tcost = t*.20;
    total= gcost+tcost+mcost+60;

    //display results
    cout<< "$" << total<<" is your phone bill"<<endl;
    cout<< "Have a nice day and please pay your bills";

    return 0;
}
