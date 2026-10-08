#include<iostream>
#include<reverseArray.h>
int main() {
int MAX_STUDENTS=10;
int scores[MAX_STUDENTS];
int n;
int counts[5] = {0};
int max = -1, min = -1;
double avg = 0.0;
int testIndex;
// 1. 初始化数组
initScores(scores, MAX_STUDENTS);
// 2. 读取学⽣⼈数
std::cout << "请输⼊学⽣⼈数：";
std::cin >> n;
// 3. 调⽤各函数（要求 0 <= score <= 100）//在此处我去除了了部分函数，原因是我将这些接口附加在了printresult函数里边，在代码最后实现
inputScores(scores, n);
// 7. 安全查询测试
std::cout << "请输⼊要查询的下标：";
std::cin >> testIndex;
int queried = safeGet(scores, n, testIndex);
if (queried == -1) {
std::cout << "查询失败" << std::endl;
} else {
std::cout << "下标 " << testIndex << " 的成绩是：" << queried << std::endl;
}
// 8. 打印所有统计结果
printResults(scores, n, avg, counts, &max, &min);
return 0;
}