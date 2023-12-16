#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3,a4,a5,a6;
    // cout<<"enter the size of your array: ";
    cin>>a1;
    int a[a1];
    for(int i =0;i<a1;i++){
        cin>>a[i];
    }
    for(int j = 0;j<a1;j++){
        for(int k =j+1;k<a1;k++){
            if(a[k]<a[j]){
                a3 = a[j];
                a[j] = a[k];
                a[k] = a3;
            }
        }
    }
    // cout<<"Enter the K(th) smallest element you want to get: ";
    cin>>a4;
    cout<<a[a4];
    // for(int t = 0;t<a1;t++){
    //     cout<<a[t]<<" ";
    // }
}