/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   secondProgram.h
 * Author: baby
 *
 * Created on 2019年3月29日, 下午8:22
 */

#ifndef SECONDPROGRAM_H
#define SECONDPROGRAM_H
#include<iostream>
#include<cctype>  //字符操作
#include<vector>

using namespace std;

struct Sales_data{               //书类
    string bookNo;               //书编号
    unsigned units_sold =0;      //卖的册数
    double price=0.0;            //单价
    double revence=0.0;          //书的销售收入
};

int calculateThePrice();
int getlineTest();
int vectorTest();
int ddqTest();

#endif /* SECONDPROGRAM_H */

