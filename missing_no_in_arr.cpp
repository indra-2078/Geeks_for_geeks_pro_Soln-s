#include<iostream>

using namespace std;

int main(){
    int a,b,c,d=0,e=0,f;
    cout<<"size: ";
    cin>>a;
    int arr[a];
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]){
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    for(int i = 0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = arr[0];i<arr[a];i++){
        for(int j =e;j<a;j++){
            if(arr[j]==i){
                e++;
                i++;
                break;
            }
            else{
                d = i;
                i++;
            }
        }
        break;
    }
    cout<<"thiss  "<<d;
}