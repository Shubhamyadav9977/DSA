#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  //selecttion sort
  for(int i=0;i<n-1;i++)
  {    int min=1;
    for(int j=i+1;j<n-1;j++)
    {
      if(arr[j]<arr[min])
      {
        swap(arr[i],arr[min]) ;
      }
    }
  }cout<<"sorted array through selection sort"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }return 0;
}