#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int dem1=0;
        int num=i;
        while(num>0){
            if(num % 10 == 1){
                dem1++;
            }
            num = num/10;
        }
        if(dem1<=1){
            count++;
        }
    }
    cout << count;
    return 0;
}