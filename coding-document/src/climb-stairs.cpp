#include<iostream>
#include"reverseArray.h"
using namespace std;
int main(){
int n;
scanf("%d",&n);
if(0<=n&&n<=40){
long long result1=climbStairsIter(n);
long long result2=climbStairsRecur(n);
    cout << "迭代法结果: " << result1 << endl;
    cout << "递归法结果: " << result2 << endl;
}
    else{
        cout<<"n不在题目所给范围"<<endl;
    }
}