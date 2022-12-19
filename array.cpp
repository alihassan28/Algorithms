#include<bits/stdc++.h>
 using namespace std;
 int getMax(int arr[],int n)
 {
     int max;
     max= INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
         }
     }
     return max;
 }
int getMin(int arr[],int n)
{
    int min;
    min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
 int main()
 {
     int size;
     cin>>size;
     int arr[100];
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     cout<< "Maximum value in the array is"<<" "<<getMax(arr,size);
     cout<< "\nMinimum value in the array is"<<" "<<getMin(arr,size);

        return 0;

 }
