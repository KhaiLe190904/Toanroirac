#include<iostream>
using namespace std;
int main(){
    int kc[6];
    for(int i=1; i<=6; i++){
        cin >> kc[i];
    }
    int min = kc[1];
    int max = kc[1];
    int sum[6] = {
            kc[1]+kc[6]+kc[3]+kc[5],
            kc[1]+kc[2]+kc[3]+kc[4],
            kc[4]+kc[3]+kc[2]+kc[1],
            kc[4]+kc[6]+kc[2]+kc[5],
            kc[5]+kc[2]+kc[6]+kc[4],
            kc[5]+kc[3]+kc[6]+kc[1],
            };
    int minkc = sum[0];
    for(int i=1; i<=6; i++){
        if(min >= kc[i]){
            min = kc[i];
        }
        if(max <= kc[i]){
            max = kc[i];
        }
    }
    for(int j=0; j<=5; j++){
            if(minkc >= sum[j]){
                minkc = sum[j];
            }
        }
    cout << min << " " << max << " " << minkc;
}