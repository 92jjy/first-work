#include<iostream>
#include"reverseArray.h"
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int m;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        arr[i]=m;
    }
    reverseArray(arr,n);//调用接口
}