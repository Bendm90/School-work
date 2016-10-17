#include <iostream>
/*
Ben Caron
build a program using an if statement to convert either inches to millimeters or millimeters to inches
*/
using namespace std;

int main()
{
    int IoM; //Inches or millimeters
    float I ;   //Inches
    float MM;   // Millimeters
    float MMA;   //How many millimeters the inches converted to
    float IA;    //how many inches the millimeters converted to


    //discern whether its inches or millimeters being converted
    cout << "Hello User, I am here to convert either inches to millimeters or vice versa" << endl;
    cout << "type 1 if you are converting inches to millimeters, or type 2 if your converting millimeters to inches" <<endl;
    cin >> IoM;
    cin.get();

    //display the information
    if(IoM == 1)
    {
        cout<< "How many inches are we converting?"<<endl;
        cin>> I;
        MMA=I*25.4;
        cout<<I <<" inches converts to " << MMA << " Millimeters" <<endl;
        cout<< "thank you for running me user, have a good day";
    }
    else if(IoM == 2)
    {
        cout<< "How many MilliMeters are we converting?"<<endl;
        cin>>MM;
        IA=MM/25.4;
        cout<<MM <<" millimeters converts to " << IA << " inches" <<endl;
        cout<< "thank you for running me user, have a good day";
    }
    cin.get();
    return 0;
}
