#include<iostream>
using namespace std;
//迭代实现，从前往后
long long climbStairsIter(int n){
    if (n <= 1) return 1;//台阶为0或者为1只有一种方法
    int p=1;
    int l=1;
    for(int i=2;i<=n;i++){
        long long sum=p+l;
         p=l;
         l=sum;
    };
    return l ;
}
long long climbStairsRecur(int n) {

    if (n <= 1) return 1;

    return climbStairsRecur(n - 1) + climbStairsRecur(n - 2);//递归调用，从后往前
}