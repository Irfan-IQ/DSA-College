#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
 int i,j;
 for(i=0;i<n-1;i++)
 {
  int minIndex = i;
  for(j=i;j<n;j++)
  {
   if(a[j] < a[minIndex])
   {
    minIndex = j;
   }
  }
  int swap;
  swap = a[minIndex];
  a[minIndex] = a[i];
  a[i] = swap;
 }
}

int main(){
 int n,i;
 cout<<"Enter the number of elements in the array"<<endl;
 cin>>n;
 int a[n];
 cout<<"---Enter elements in the array---"<<endl;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"---Array before Sorting---"<<endl;
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<endl;
 }
 selectionSort(a,n);
 cout<<"---Array After Sorting---"<<endl;
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<endl;
 }
 
 return 0;
}
