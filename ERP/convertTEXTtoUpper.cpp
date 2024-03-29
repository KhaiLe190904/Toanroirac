#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    while(true){
    getline(cin, s);
    if(s.length() ==0){
        break;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    }
    cout << s;
}