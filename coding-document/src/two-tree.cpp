#include<iostream>
#include"reverseArray.h"
using namespace std;
int main(){
    int tree[7];
    buildTestTree(tree, 7);
    cout<<"前序遍历：根 -> 左 -> 右"<<endl;
    preorderTraversal(tree, 7, 0);
    cout<<endl;
    cout<<"中序遍历：左 -> 根 -> 右"<<endl;
    inorderTraversal(tree, 7, 0);
}