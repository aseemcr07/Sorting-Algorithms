#include<iostream>
using namespace std;

void BubbleSort(int A[], int n){
    int temp;
    for(int i=0; i<n-1; i++) {
        
        //(n-i-1) is for ignoring comparisons of elements 
        //which have already been compared in earlier iterations
        for(int j=0; j<n-i-1; j++) {
            if(A[j] > A[j+1]){
                //Swapping of positions is being done
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        cout<<"Array at pass "<<i+1<<": ";
        for(int a=0; a<n; a++){
            cout<<A[a]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    cout<<"Array entered: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    BubbleSort(A, n);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}
