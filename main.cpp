/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: baby
 *
 * Created on 2019年3月26日, 下午9:58
 */

#include <iostream>
#include "firstProgram.h"
#include "secondProgram.h"
#include "thirdProgram.h"
using namespace std;

/*
 * 
 * Test program,only for reference！
 * 
 */

int main() {
    cout<<"***-----------firstProgram.cpp----------***"<<endl<<endl;
    firstFunction();
    extern const int externCount;
    cout<<"经过EXTERN CONST限定符修饰，在其他文件内定义同名CONST变量："<<externCount<<endl;
    secondFunction();
    thirdFunction();
    fouthFunction(6.786);
    cout<<"***-----------secondProgram.cpp----------***"<<endl<<endl;
    //calculateThePrice();
    //getlineTest();
    //vectorTest();
   // ddqTest();
    cout<<"***-----------thirdProgram.cpp----------***"<<endl<<endl;
    //cout<<"sch love you!"<<endl;
    //move_bit();
    return 0;
}

