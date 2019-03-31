//
// Created by baby on 19-3-31.
//
#include "fouthProgram.h"

int FunctionTest()  //计算阶乘
{
    cout<<"please input the number which will be calculate:"<<endl;
    int num;
    cin>>num;
    int sum=1;
    while(1 <= num)
    {
        sum*=num--;
    }
    cout<<"the result is: "<<sum<<endl;
    return 0;
}
