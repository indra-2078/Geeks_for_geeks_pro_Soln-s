#include<iostream>

using namespace std;

int arrb[0];

int main(){
    void sort(int[],int);
    int  a,b,c,d,e=0,f=0,g,h,sm;
    cout<<"Enter the size: "<<endl;
    cin>>a;
    int arr[a];
    
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,a);
    for (int i = 1; i < a; ++i) {
        if (arr[i] < arr[f]) {
            f = i;
        }
    }
    sm = arrb[0];
    cout<<"sm"<<f<<"  "<<sm;
    for(int i =f;i<a;i++){
        if(f<arr[i]){
            d = d+(f-arr[i]);
        }
    }
//     for(int i =0;i<a;i++){
//         cout<<arr[i];
//     }
}
void sort(int arr[],int a){
    int b;
    for(int j = 0;j<a;j++){
        for(int k =j+1;k<a;k++){
            if(arr[k]<=arr[j]){
                b = arrb[j];
                arrb[j] = arrb[k];
                arrb[k] = b;
            }
            // if(arrb[j]==0){
            //     e++;
            // }
        }
    }
}
//     c=arr[a-2];
//     // cout<<"this: "<<e;
//     for(int i = 0;i<a;i++){
//         if(e>0){
//             if(c>arr[i]){
//                 d = d+(c-arr[i]);
//             }
//         }
//     }
//     cout<<"total water that can be filled: "<<d;
// }

void sec_small(int arr[],int a){
    int small;
    int sec_small;
    small = arr[0];
    sec_small = arr[1];
    for(int i = 0;i<a;i++){
        for(int j =0;j<a;j++){
            if(arr[i]<arr[j]){
                small = arr[i];
                sec_small = arr[j];
            }
            else{
                small = arr[j];
                sec_small = arr[i];
            }
        }
    }
}


