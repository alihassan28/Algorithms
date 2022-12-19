#include<bits/stdc++.h>
using namespace std;

int squareBinary(int n)
{
    int s=0;
    int e=n;
    int mid= s+ (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        int square= mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s= mid + 1;
        }
        else{
            e= mid - 1;
        }
        mid=s+ (e-s)/2;

    }
    return ans;
}
double precision(int n, int precision, int tempsol)
{
    double factor=1;
    double  ans = tempsol;

    for(double i=0; i<precision; i++){
        factor = factor/10;
    }
    for(double j=ans; j*j<n; j=j+factor){
        ans = j;
    }
    return ans;


}
int main()
{
    cout<<"Enter any number to find square root"<<endl;
    int n;
    cin>>n;
    int tempsol=squareBinary(n);

    cout<<"The precised squareroot is "<<precision(n,6,tempsol);




}
