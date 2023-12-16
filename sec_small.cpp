#include<iostream>

using namespace std;

int main(){
    int small;
    int sec_small;
    int arr[] = {0,10,2,3,4};
    small = arr[0];
    sec_small = arr[1];
    for(int i = 0;i<6;i++){
        if(arr[i]<small){
                small = arr[i];
                sec_small = small;
            }
            else if(arr[i]<sec_small){
                small = arr[i];
                
            }
    }
    cout<<sec_small;
}