#include<iostream>

using namespace std;

//pre and post inc 


int main(){

    int x=10;
    int z=10;
    int y=(x++)*z;

    cout<<y<<endl;
    cout<<x<<endl;

    x=10;
    z=10;
    y=(++x)*z;
    
    cout<<y<<endl;
    cout<<x<<endl;
    x=INT_LEAST32_MIN;
    cout<<x<<endl;
}