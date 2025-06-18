#include<iostream>
using namespace std;

//enum and typedef


enum DAYS{
    MON=1,TUE,WED,THU,FRI,SAT,SUN
};


typedef int values;

int main(){

    values a,b,c,dd,e,f;

    a=33;
    DAYS d;
    d=TUE;
    cout<<d<<endl;

    cout<<a<<endl;
}