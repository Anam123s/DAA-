#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	int p,q,r,s,t,u,v;
	cout<<"Enter 4 elements of matrix 1: ";
	for(i=0;i<2;i++)
	for (j=0;j<2;j++)
	cin>>a[i][j];
	
	cout<<"Enter 4 elements of matrix 2: ";
	for(i=0;i<2;i++)
	for (j=0;j<2;j++)
	cin>>b[i][j];
	
	cout<<"The matrix 1 is: ";
	for(i=0;i<2;i++){
		cout<<"\n";
		for(j=0;j<2;j++)
		cout<<a[i][j]<<"\t";
		}
		
	cout<<"\nThe matrix 2 is: ";
	for(i=0;i<2;i++){
		cout<<"\n";
		for(j=0;j<2;j++)
		cout<<b[i][j]<<"\t";
		}
		
	p=(a[0][0]+a[1][1]) * (b[0][0]+b[1][1]);
	q=(a[1][0]+a[1][1]) * b[0][0];
	r=a[0][0] * (b[0][1]-b[1][1]);
	s=a[1][1] * (b[1][0]-b[0][0]);
	t=(a[0][0]+a[0][1]) * b[1][1];
	u=(a[1][0]-a[0][0]) * (b[0][0]+b[0][1]);
	v=(a[0][1]-a[1][1]) * (b[1][0]+b[1][1]);
	
	c[0][0]=p+s-t+v;
	c[0][1]=r+t;
	c[1][0]=q+s;
	c[1][1]=p+r-q+u;
	
	cout<<"\nAfter multiplying using strassens multiplication :";
	for(i=0;i<2;i++){
		cout<<"\n";
		for(j=0;j<2;j++)
		cout<<c[i][j]<<"\t";
		}
	return 0;
	}

/*OUTPUT :
Enter 4 elements of matrix 1: 2 2 1 1
Enter 4 elements of matrix 2: 3 2 4 9
The matrix 1 is: 
2       2
1       1
The matrix 2 is: 
3       2
4       9
After multiplying using strassens multiplication :
14      22
7       11
*/