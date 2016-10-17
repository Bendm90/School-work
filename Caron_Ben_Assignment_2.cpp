#include <iostream>
/********************************************************************************************************************************************************************************************************
Ben Caron Period 1
design a program to make averages of quiz and test scores
********************************************************************************************************************************************************************************************************/
using namespace std;

int main()
{
    float test1; // 1st test score
    float test2; // 2nd test score
    float test3; // 3rd test score
    float test4; // 4th test score
    float test5; // 5th test score
    float quiz1; // 1st quiz score
    float quiz2; // 2nd quiz score
    float quizA; // quiz average
    float testA;// test average
    float MathVar1; // basic variable to use in math
    float MathVar2; // basic variable to use in math
    float classscore; // class score

    //introduce self and job
    cout << "Hello, I am the average program, I will tell you what your average quiz and test scores were" << endl;

    //gather test and quiz scores
    cout << "please enter your first test score" <<endl;
    cin >>test1;
    cout << "Now your next test score" <<endl;
    cin >>test2;
    cout << "Now your next test score" <<endl;
    cin >> test3;
    cout << "Now your next test score" <<endl;
    cin >> test4;
    cout << "Now your next test score" <<endl;
    cin >> test5;
    cout << "Now your 1st quiz score" <<endl;
    cin >> quiz1;
    cout << "Now your 2nd quiz score" <<endl;
    cin >> quiz2;

    //calculate averages
    testA= (test1+test2+test3+test4+test5)/5;
    quizA= (quiz1+quiz2)/2;
    MathVar1=(quizA/100);
    MathVar2=(testA/100);
    classscore= 30*MathVar1+70*MathVar2;

    //display averages and say goodbye
    cout<< "Thank you, your average test score was ";
    cout<< testA ;
    cout<< " your average quiz score was ";
    cout<< quizA ;
    cout<< " your class grade was ";
    cout<< classscore;
    cout<< " Thank you for using, the  average program";


    return 0;
}
