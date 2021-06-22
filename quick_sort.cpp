#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;

}
int partition(int arr[], int l, int r)
{
    int i=l-1;
    int pivot=arr[r];
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
        i++;
        swap(arr,i,j);
        }


    }
    swap(arr,i+1,r);
    return (i+1);
}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,r);
    }
}
int main()
{
int arr[]={2,5,1,0,8};
quick_sort(arr,0,4);
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}