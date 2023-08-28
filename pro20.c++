#include<iostream>
using namespace std;

int largestindex(int arr[],int n)
{
    int maxelement=-1;
    int maxindex=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxelement)
        {
            maxelement=arr[i];
            maxindex=i;

        }
    }

    return maxindex;

}

int main()
{
    int arr[50];
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int highestindex=largestindex(arr,n);
    arr[highestindex]=-1;
    highestindex=largestindex(arr,n);

    cout<<"second largest element is : "<<arr[highestindex];

}
