#include<iostream>

using namespace std;

int main(){
    int a ,b,c,d,e;
    cout<<"size: ";
    cin>>a;
    int a1[a];
    int a2[a];
    int a3[a];
    int a4[a];
    for(int i = 0;i<a;i++){
        cin>>a1[i];
    }
    cout<<"Enter sum range: ";
    cin>>d;
    for(int i = 0;i<a;i++){
        b=a1[i];
        c = i+1;
        e=0;
        for(int j = c;j<a;j++){
            if(j==(d+i)){
                break;
            }
            b = b+a1[j];
            e=j;
        }
        a2[i] = b;
        a3[i] = i;
        a4[i] = e;
        b=0;
    }
    int a7;
    for(int j = 0;j<a;j++){
        for(int k =j+1;k<a;k++){
            if(a2[k]<a2[j]){
                a7 = a2[j];
                a2[j] = a2[k];
                a2[k] = a7;
            }
        }
    }
    cout<<"highest sum: ";
    cout<<a2[a-1]<<" from "<<a3[a-1]<<" to "<<a4[a-1];
}