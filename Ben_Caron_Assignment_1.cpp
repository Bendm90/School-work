#include <iostream>

using namespace std;
/* Ben Caron 9/15/2016 This program tells you your age, year you will graduate and your birth date */
int main()
{
    int year;
    int age;
    int var;
    int month;
    int day;
    //Step 1. introduce and ask when they were born the year the day they were born and the month they were born in
    cout << "Welcome User I am the Overthought I know all and using that knowledge I will discern your age, birth date, and how long it will take you to graduate High school."<<endl;
    cout<<"Please tell me the year you were born?"<< endl;
    cin >> age;
    cout<< "thank you very much User now please tell me what numerical day of the month you were born into."<<endl;
    cin>>day;
    cout<< "Now what numerical month were you born in?"<<endl;
    cin>> month;
    cout<< "now, what is the current year?"<< endl;
    cin>> year;

    //Step 2. tell them their age the year they will graduate and their birth date.

    cout << "Thank you, you are ";
    cout << year-age;
    cout << ", you will graduate in ";
    var= 19-(year-age);
    cout << var ;
    cout << " years, that is assuming those grades of yours improve,"<<endl;
    cout << "  and were born on ";
    cout<< month;
    cout<< "/";
    cout<<day;
    cout<< "/";
    cout<< age;

    //Step 3. Tell the user thank you.

    cout << " Thank you for your patronage" << endl;

    return 0;
}
