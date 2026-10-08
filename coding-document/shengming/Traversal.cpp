#include<iostream>
using namespace std;
void preorderTraversal(const int* tree, int n, int i){
    if(i>=n||tree[i]==-1){
        return ;
    }
    cout << tree[i] << " "; 
    preorderTraversal(tree, n, 2*i+1);//下标基数为左孩子
    preorderTraversal(tree, n, 2*i+2);//右孩子
}
void inorderTraversal(const int* tree, int n, int i) {
    if (i >= n || tree[i] == -1) {
        return ;
    }
    inorderTraversal(tree,n,2*i+1); // 左孩子
    cout << tree[i] << " ";                
    inorderTraversal(tree,n,2*i+2); // 递归右孩子
}
void buildTestTree(int* tree, int n){
     if(n>=7){
        tree[0]=1;
        tree[1]=2;
        tree[2]=3;
        tree[3]=4;
        tree[4]=5;
        tree[5]=-1;
        tree[6]=-1;
     }
}
//这到题目的本质在我看来使用递归来显示数组，依据下标的奇偶