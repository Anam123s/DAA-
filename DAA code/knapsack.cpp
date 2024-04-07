#include<iostream>
using namespace std;

void knapsack(int n,float wt[],float profit[],float capa){
float x[20],tp=0;
int i,u;
u=capa;
for(i=0;i<n;i++){
x[i]=0.0;
}
for(i=0;i<n;i++){
if(wt[i]>u)
break;
else
{
x[i]=1.0;
tp=tp+profit[i];
u=u-wt[i];
}
}

if(i<n)
x[i]=u/wt[i];
tp=tp+(x[i]*profit[i]);
cout<<"the result is :";


for(i=0;i<n;i++){
cout<<x[i];
}
cout<<"\nMaximum profit is : "<<tp;

}
int main(){
float wt[20],profit[20],capa,ratio[20],temp;
int n,i,j;
cout<<"Enter the number of objects: ";
cin>>n;
cout<<"Enter the weight and profit associated with it :";
for(i=0;i<n;i++)
{
cin>>wt[i]>>profit[i];
}

cout<<"Enter the capacity of the bag: ";
cin>>capa;

for(i=0;i<n;i++){
ratio[i]=profit[i]/wt[i];
}

for(i=0;i<n;i++){
for(j=i+1;j<n;j++){

if(ratio[i]<ratio[j]){
temp=ratio[j];
ratio[j]=ratio[i];
ratio[i]=temp;


temp=wt[j];
wt[j]=wt[i];
wt[i]=temp;

temp=profit[j];
profit[j]=profit[i];
profit[i]=temp;
}
}}
knapsack(n,wt,profit,capa);
return 0;}

/*
OUTPUT :
Enter the number of objects: 7
Enter the weight and profit associated with it :2 10
3 5
5 15
7 7
1 6
4 18
1 3
Enter the capacity of the bag: 15
the result is :111110.6666670
Maximum profit is : 55.3333
*/