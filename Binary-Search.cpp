#include<iostream>
using namespace std;

int binarySearch(int [],int,int);

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements in increasing order: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you wanna search: ";
    cin>>key;

    int idx = binarySearch(arr,size,key);

    if (idx==-1)
    {
        cout<<"!Error: Element not found.";
    }else{
        cout<<"Element found at index: "<<idx<<endl;
    }


    return 0;
}

int binarySearch(int a[],int n,int k){
    int i=0,j=n;
    int mid;
    while(i<=j){
        mid = (i+j)/2;
        if(a[mid]==k){
            return mid;
        }
        if(a[mid]<k){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }

    return -1;
}