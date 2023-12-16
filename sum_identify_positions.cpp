#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3=0,a4,a5,a6;
    cin>>a1;
    int a[a1];
    for(int i = 0;i<a1;i++){
        cin>>a[i];
    }
    cout<<"enter the sum value: ";
    cin>>a2;
    for(int j = 0;j<a1;j++){
        a3=0;
        for(int k = j ;k<a1;k++){
            a3 = a3+a[k];
            if(a3==a2){
                a4 = j;
                a5 = k;
            }
        }
    }
    cout<<a4<<" to "<<a5;
}