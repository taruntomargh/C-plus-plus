// Searching an array ( Linear Search )
#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[5]){

    int elem;
    bool isElem;

    cout<<"Enter element to be searched: ";
    cin>>elem;

    if(arr==NULL){
        cout<<"Array is empty";
        return;
    }
    else if(arr!=NULL){
        for(int i=0;i<5;i++){
            if(arr[i]==elem){
                cout<<"Element is present at index "<<i<<" postion "<<i+1;
                isElem=true;
            }
            else
                continue;
        }
        if(isElem==false)
            cout<<"Element "<<elem<<" is not present in the Array";
    }
}

int main(){

    int arr[5];

    for(int i=0;i<5;i++)
        cin>>arr[i];

    LinearSearch(arr);

    // for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";


    return 0;
}