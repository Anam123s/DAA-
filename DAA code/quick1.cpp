#include<iostream>
using namespace std;

#define Max 100
int partition(int arr[], int low, int up);
void quick(int arr[], int low, int up);

int main()
{
   int arr[Max];
   int n,i;
   cout<<"Enter size of an  array";
   cin>>n;
   cout<<"Enter elements: ";
  for(i=0;i<n; i++)
      {
       cin>>arr[i];
 
       }
       
 //function call quick
 quick(arr, 0, n-1);
 
     cout<<"Sorted array is: ";
  for(i=0; i<n; i++)
 {
   cout<<arr[i]<<"\t";
  }
  return 0;}
 

//partition function defination`
    int partition(int arr[], int low, int up)
 {
    int temp, i, j, pivot;
      i=low+1;
      j=up;
      pivot=arr[low];

  while(i<=j)
 {
   while((arr[i]<pivot)&&(i<up))
   i++;
   while(arr[j]>pivot)
   j--;

   if(i<j)
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

      i++;
      j++;
    }
     else
     {
       i++;
     }
 }
  arr[low]=arr[j];
  arr[j]=pivot;

 return j;
 }
void quick(int arr[], int low, int up)
{
   int pvtloc;
    if (low>=up)
    return;
  //call partition
       pvtloc=partition(arr, low, up);
       quick(arr, low, pvtloc-1);
       quick(arr, pvtloc+1, up);
  
}
  
/*
OUTPUT :
Enter size of an  array 8
Enter elements: 1 3 2 4 6 5 9 7
Sorted array is: 1      2       3       4       5       6       7       9
*/