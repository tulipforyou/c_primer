/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <vector>
#include "thirdProgram.h"

int move_bit()  //语句测试
{
     cout<<"Please input the score,we will give you the section of it:"<<endl;
     int scores=0,section=0;
     cin>>scores;
     if(scores>=0&&scores<30){
         cout<<scores<<endl;
         section=0;
     }
     else if(scores>=30&&scores<60){
         cout<<scores<<endl;
         section=1;
     }
     else if(scores>=60&&scores<70){
         cout<<scores<<endl;
         section=2;
     }
     else if(scores>=70&&scores<80){
         cout<<scores<<endl;
         section=3;
     }
     else if(scores>=80&&scores<90){
         cout<<scores<<endl;
         section=4;
     }
     else if(scores>=90&&scores<100){
         cout << scores << endl;
         section = 5;
     }
     else {
         cout<<scores<<endl;
         section=6;
     }
     switch (section)
     {
         case 0:
             cout<<"your score is too low! the score is C"<<endl;
             break;
         case 1:
             cout<<"your score is a bit low! the score is B"<<endl;
             break;
         case 2:
             cout<<"your score is common! the score is A"<<endl;
             break;
         case 3:
             cout<<"your score is a bit high! the score is S"<<endl;
             break;
         case 4:
             cout<<"your score is high! the score is SS"<<endl;
             break;
         case 5:
             cout<<"your score is so high! the score is SSS"<<endl;
             break;
         default:
             cout<<"input a error score!!!!" <<endl;
             break;
     }

    cout << endl << "while circulate test!!!" << endl;
    cout << "input the numbers(over with -1):" << endl;
    vector<int> v;
    unsigned i = 0;
    while (cin >> i && i!=-1) {
        v.push_back(i);
    }
    auto beg = v.begin();
    auto end = v.end();
    while (beg != end && *beg > 0) {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;

    cout << "加法运算" << endl;
    string condition;
    do {
        int a1 = 0, a2 = 0;
        cout << "input two numbers:" << endl;
        cin >> a1 >> a2;
        cout << "the result is: " <<a1+a2<< endl;
        cout << "continue?yes or no:" << endl;
        cin >> condition;
    } while (!condition.empty() && condition[0] != 'n');
    return 0;
}
