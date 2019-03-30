/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "firstProgram.h"
using namespace std;

/*
 * the noun for define variable
 */

extern const int externCount = 34;

/*
 * the noun for define function
 */

int firstFunction()
{
    cout<<"********---------------*******"<<endl;
    cout<<"经过EXTERN CONST限定符修饰："<<externCount<<endl;
    cout<<"********---------------*******"<<endl;
    return 0;
}

int secondFunction()    //引用的理解
{
    cout<<endl<<"********---------------*******"<<endl;
    cout<<"引用的TEST FUNCTION："<<endl;
    int p1=43;
    int &p2=p1;
    cout<<"引用为："<<&p2<<"  "<<p2<<endl;
    p2=65;
    cout<<"更改后引用为："<<&p2<<"  "<<p2<<endl;
    cout<<"********---------------*******"<<endl<<endl;
    return 0;
}

int thirdFunction()    //指针的理解
{
    cout<<"********---------------*******"<<endl;
    int *t=nullptr;  //the way to define a empty indicator
    cout<<"the way to define a empty indicator:  "<<t<<endl;
    int i=42;
    int *q=&i;
    cout<<"the value of i is :"<<i<<endl;
    cout<<"未添加解引用："<<q<<"  解引用后： "<<*q<<endl;
    *q=0;
    cout<<"指针清零后i的值为："<<i<<endl;         //pay attention to the change of i.
    int number=1024;
    int *pi1=&number;
    int *pi2=0;
    if(pi1)  //is true
    {
        cout<<"the indicator is not zero"<<endl;
    }
    if(pi2)  //is false
    {
        cout<<"the indicator is empty"<<endl;
    }
    cout<<"********---------------*******"<<endl<<endl;
    return 0;
}

int fouthFunction(double i)    //类型别名的理解
{
    cout<<"********---------------*******"<<endl;
    cout<<"not use anything :"<<i<<endl;
    typedef int D1;
    using D2=int;
    D1 q1=i;
    D2 q2=i;
    cout<<"use \"typedef\" :"<<q1<<endl;
    cout<<"use \"using\" :"<<q2<<endl;
    auto sum1=9.98;
    auto sum2=3;
    auto result=sum1+sum2;
    cout<<"the result of auto type is :"<<result<<endl;
    cout<<"********---------------*******"<<endl<<endl;
    return 0;
}