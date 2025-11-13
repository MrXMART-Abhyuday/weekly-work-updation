#include<iostream>
using namespace std;
int main()
{
 int arr[5]={-1,9,8,7,11};
 int max1=0;
 int max2=0;
 for(int i=0;i<5;i++)
 {
    if (max1<arr[i])
    {
        max2=max1;
        max1=arr[i];
    }
    else if (max2<arr[i])
        max2=arr[i]; 
 }
 cout << "Second Largest : " << max2 << std::endl;
    
}