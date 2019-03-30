#include "secondProgram.h"


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
int calculateThePrice()
{
    Sales_data data1,data2;
    cout<<"请按次序输入书籍1的ISBN，售出册数，单价，以回车键结束！"<<endl;
    cin>>data1.bookNo>>data1.units_sold>>data1.price;
    cout<<"请按次序输入书籍2的ISBN，售出册数，单价，以回车键结束！"<<endl;
    cin>>data2.bookNo>>data2.units_sold>>data2.price;
    data1.revence=data1.units_sold*data1.price;
    data2.revence=data2.units_sold*data2.price;
    if(data1.bookNo==data2.bookNo)
    {
        double totslRevence=0;
        totslRevence=data1.revence+data2.revence;
        cout<<"书1的"<<data1.bookNo<<"和"<<"书2的"<<data2.bookNo<<"一致"<<endl;
        cout<<"总销售收入为 :"<<totslRevence<<endl;
    }
    else
    {
        cout<<"两本书ISBN码不一致，没有对其进行求和！"<<endl;
    }
}
int getlineTest()  //class string test!!!
{
    string line;
    decltype(line.size()) count=0;   //decltype设置变量类型为string::size_type
    cout<<"请输入一个字符串，回车键结束："<<endl;
    getline(cin,line);
    for(auto &c:line)   //如果C不是引用，它将不能改变LINE的值
    {
        cout<<char(toupper(c))<<" ";
        if(ispunct(c))
            count++;
        c=tolower(c);
    }
    cout<<endl<<"转换小写后为："<<line<<endl;
    cout<<endl<<"标点符号个数为："<<count<<endl;
    return 0;

}
int vectorTest()   //vector test!!!
{
    vector<unsigned> scores(11,0);  //11个分数段
    cout<<"请输入学生成绩,我们将对其进行分段处理："<<endl;
    unsigned grade=0;
    while(cin>>grade && grade!=-1)
    {
        if(0<=grade<=100)
        {
            ++scores[grade/10];
        }
    }
    cout<<"分数分段结果如下："<<endl;
    for(auto i:scores)
        cout<<i<<" ";
    cout<<endl;
}
int ddqTest()    //迭代器测试
{
    vector<int> a;
    cout<<"请有序输入数据(-100 to end)："<<endl;
    unsigned c=0;
    while(cin>>c&&c!=-100)
        a.push_back(c);
    auto beg=a.begin(),end=a.end();
    auto mid=a.begin()+(end-beg)/2;
    int begNum=0;
    cout<<"您输入的数据为："<<endl;
    while(beg!=end)
    {
        cout<<*beg++<<" ";
        --begNum;
    }
    beg+=begNum;   //beg返回原来位置
    cout<<endl;
    cout<<"请输入要查找的值："<<endl;
    int num;
    cin>>num;
    if(beg!=end)
    {
        while(mid!=end&&*mid!=num)
        {
            if(*mid>num)
                end=mid;
            else
                beg=mid+1;
            mid=beg+(end-beg)/2;
        }
        if(mid==end)
            cout<<"not found!!"<<endl;
        else
            cout<<"has found:"<<*mid<<endl;
    }
    else
        cout<<"overflow!!!"<<endl;
}