#include<iostream>
using namespace std;
int main(){
    int a0, a[4], dem=0, s=0, avg=0;
    cin >> a0;
    for (int i=1; i<=4; i++){
        cin >> a[i];
        if(a[i] >= a0){
            dem = dem+1;
            s = s + a[i];
        }
    }
    avg = s/dem;
    cout << dem << " " << avg;
}