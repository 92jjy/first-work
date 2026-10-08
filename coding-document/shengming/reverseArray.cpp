#include<iostream>
#include"reverseArray.h"
using namespace std;
void reverseArray(int* arr, int n){
    //在这里处理了n为零的情况
    if(n==0){
        cout<<"the length of arry is zero"<<endl;
        return ;
    }
    if(n >= 1 && n <= 100){
     // 将数组反转，引入中间变量p暂时存储前半段数组，也是最核心的部分
    for(int i = 0; i < n/2; i++){
    int p = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = p;
    }
     // 正向打印
    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
    cout << endl;
}
    else{
        cout<<"too long or not being"<<endl;
        return ;
    }

}
