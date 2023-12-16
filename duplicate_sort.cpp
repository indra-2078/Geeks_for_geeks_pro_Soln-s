#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3,a4,a5,a6;
    cout<<"Enter the size of the Array: ";
    cin>>a1;
    int a[a1];
    int b[a1];
    int c[a1];
    int d[a1];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i =0;i<a1;i++){
        cin>>a[i];
    }
    for(int q = 0; q<a1;q++){
        a2 =-1;
        for(int n = 0;n<a1;n++){
            if(a[q]==a[n]){
                a2++;
                if(a2>=1){
                d[q] = a[n];
                c[q] = a2 ;
                a[n] = 0;
                }
                else{
                    d[q] = 0;
                    c[q] = 0;
                }
            }
        }
    }
    
    for(int s = 0;s<a1;s++){
        if(d[s]==0){
            continue;
        }
        cout<<d[s]<<" was repeated "<<c[s]<<" EXTRA times."<<endl;
    }
    for(int j =0;j<a1;j++){
        a2=-1;
        for(int k = 0;k<a1;k++){
            if(a[j]==a[k]){
                a2++;
                if(a2>=1){
                    b[j] = a[j];
                    a[k] = 0;
                }
            }
        }
        if(a2==0){
            b[j] = a[j];
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int g = 0;g<a1;g++){
        if(b[g]==0){
            continue;
        }
        else{
        cout<<b[g]<<endl;
        }
    }
}