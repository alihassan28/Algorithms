#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int low=0,high=n-1;
    int mid=(low+high)/2;
    while(low <= high){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            low  = mid + 1;
        }
        else{
            high = mid - 1;
        }
        mid=(low+high)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,34,53,56,72,43};
    int odd[5]={2,4,6,8,10};

    int index = binarysearch(odd,5,10);
    cout<<"The index of 10 is"<<index;

    return 0;

}
