# 学习进度汇报

## 学习其他强队优秀开源代码（北极熊）

### 亮眼的部分
>他们战队代码结构比较清晰，适合我学习
- [x] 阅读他们使用前验3d点云来进行全局定位，局部定位使用imu与雷达融合滤波处理
- [x] 学习了他们进行坐标系转换，考虑到云台与底盘的坐标变换，他们的项目将云台的方向设置为参考方向
- [x] 学习使用sdf.mxacro文件，相比于在urdf文件里加上gazebo标签处理更好
### 学习感悟
1. 经过几天对他们代码结构的研究我发现当我再次接手别人的项目我会更顺手
2. 调参，项目的参数设定在yaml，节点文件的参数默认值，launch文件的临时参数，以最后的launch文件参数为首要
3. 函数封装，我发现他的main函数里往往只有几十行，对于函数功能的实现全部被封装成了独立模块
4. 做完这次的作业我发现了一个函数只干一个事情是最好的，互相不牵扯，就如最后的**打印函数**，他并没有再次实现打印功能，只调用接口，复用性很好。
```cpp
   void printResults(const int* scores, int n, double avg, int* counts, int* max, int* min) {
       avg = calcAverage(scores, n);
       cout << "the average of grade is " << avg << endl;
       countGrades(scores, n, counts); 
       findMinMax(scores, n, max, min); 
       }
