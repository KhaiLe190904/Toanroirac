#include<iostream>
using namespace std;
int main(){
    int Sotien, soluonghanghoa;
    int quan=50, ao=80, dep=20, giay=90, laptop=1000;
    cin >> Sotien;
    cin >> soluonghanghoa;
    int Sotientieu = soluonghanghoa*(quan + ao + dep + giay + laptop);
    if(Sotien < Sotientieu){
        printf("0");
    }
    else{
        cout << Sotientieu;
    }
}