#include<iostream>
using namespace std;
int main(){
    double a,b;
    cin >> a;
    int i = int(a);
    b = a-i;
    if(b<0){
       b = -b;  
    }
    if(i>a){
        i = i-1;
        b = a - i;
    }
    printf("%d %.2lf", i, b);
}