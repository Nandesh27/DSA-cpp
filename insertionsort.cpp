/*
 * Program: Insertion Sort in C++
 * Author: K Nandesh
 * Date: 05/01/2025
*/
 
#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int> &v){ //pass by reference
    int n=v.size();

//unsorted array for loop
    for(int i=1;i<n;i++){ 
        int current_ele=v[i];
        int j=i-1;

        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current_ele;

    }
    return;
}

int main(){
    int n;  //size of array
    cout<<"enter number of elements:";
    cin>>n;

    vector<int> v(n);  //array of size n named v

    for(int i=0;i<n;i++){  //array insertion
        cin>>v[i];
    }

    insertionsort(v);  //pass by reference 

    for(int i=0;i<n;i++){  //array after sorted 
        cout<<v[i]<<" ";
    }cout<<endl;
}