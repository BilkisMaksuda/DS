//task 2.1, 2.2
#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    //task_2.1
    string s1 = "PEOPLE";
    int comp = 0 , interchanges = 0;

    for(int i=0; i+1<6; i++){
        for(int j=0; j+i+1<6; j++){
            comp++;
            if(s1[j] >= s1[j+1]){
                swap(s1[j], s1[j+1]);
                interchanges++;
            }
        }
    }
    cout<<"Sorted string is : "<<s1<<endl;
    cout<<"number of Comparisons: "<<comp<<"\n"<<"number of Interchanges: "<<interchanges<<endl;

    // task_2.2
    int data[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    int n;
    cout<<"Enter item to be searched: ";
    cin>>n;

    int beg = 0, en = 13, mid;
    bool found = false;

    while(beg<=en){
        mid = (beg+en)/2;
        if(data[mid] == n){
            cout<<n<<" is found at position: "<<mid+1<<endl;
            found = true;
            break;
        }
        else if(data[mid] > n) en = mid - 1;
        else beg = mid + 1;
    }

    if(found == false) cout<<n<<" is not present in data array!"<<endl;

    return 0;
}
