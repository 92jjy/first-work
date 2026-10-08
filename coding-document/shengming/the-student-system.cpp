#include<iostream>
using namespace std;
void initScores(int* scores, int n){
       for (int i = 0; i < n; i++) {
        scores[i] = 0;
    }
}
void inputScores(int* scores, int n){
    int m;
    for(int i=0;i<n;i++){
      scanf("%d",&m);
      if(m==-1){
        cout<<"第"<<i<<"位同学未录入成绩"<<endl;
      }
      scores[i]=m;
    }
}
double calcAverage(const int* scores, int n){
    
    double arg;
    int p=0;
    for(int i=0;i<n;i++){
        p=scores[i]+p;
    }
    arg=(double)p/n;
    return arg;
}
int safeGet(const int* scores, int n, int index){
    if(index<0||index>n||scores[index]==-1){
        return -1;
    }
    else{
        return scores[index];
    }

}
void countGrades(const int* scores, int n, int* counts){
    counts[0]=counts[1]=counts[2]=counts[3]=counts[4]=0;
    for(int i=0;i<n;i++){
        if(scores[i]>=0&&scores[i]<=20){
            counts[0]++;
        }
        if(scores[i]>20&&scores[i]<=40){
            counts[1]++;
        }
        if(scores[i]>40&&scores[i]<=60){
            counts[2]++;
        }
        if(scores[i]>60&&scores[i]<=80){
            counts[3]++;
        }
        if(scores[i]>80&&scores[i]<=100){
            counts[4]++;
        }
    }
    cout<<"the first stage have"<<counts[0]<<"people"<<endl;
    cout<<"the second stage have"<<counts[1]<<"people"<<endl;
    cout<<"the third stage have"<<counts[2]<<"people"<<endl;
    cout<<"the fourth stage have"<<counts[3]<<"people"<<endl;
    cout<<"the fifth stage have"<<counts[4]<<"people"<<endl;

}
void findMinMax(const int* scores, int n, int* max, int* min){
    max[0]=min[0]=scores[0];
    for(int i=0;i<n;i++){
        if(scores[i]>max[0]&&scores[i]!=-1){
            max[0]=scores[i];
        }
    }
    for(int i=0;i<n;i++){
        if(scores[i]<min[0]&&scores[i]!=-1){
            min[0]=scores[i];
        }
    }
    cout<<"the max is "<<max[0]<<endl;
    cout<<"the min is "<<min[0]<<endl;

}
void printResults(const int* scores, int n, double avg,  int* counts, int *max, int *min){
    avg= calcAverage(scores,n);
    cout<<"the average of grade is"<<avg<<endl;
    countGrades( scores, n, counts);
    findMinMax(scores,  n,  max,  min);
}