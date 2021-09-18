#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int GCF(int, int);
int main(){
    GCF(3, 5);
    GCF(14, 28);
}

int GCF(int a, int b){
    vector<int> factorsOne;//factors of the first number
    vector<int> factorsTwo;//factors of the second number
    vector<int> common;
    for(int i=1; i<=a; i++){
        if(a%i == 0){
            //cout<<i<<"\n";
            factorsOne.push_back(i);
        }
    }
    for(int i=1; i<=b; i++){
        if(b%i == 0){
            //cout<<i<<"\n";
            factorsTwo.push_back(i);
        }
    }
    for(int i=0; i<factorsOne.size(); i++){
        int key = factorsOne[i];
        //cout<<key<<"\n";
        for(int j=0; j<factorsTwo.size(); j++){
            if(key == factorsTwo[j]){
                common.push_back(factorsTwo[j]);
                //cout<<factorsTwo[j]<<"\n";
            }
        }
    }
    
    int maxi = 0;
    for(int i=0; i<common.size(); i++){
        //cout<<common[i]<<"\n";
        if(common[i]>maxi){
            maxi = common[i];
        }
    }
    cout<<to_string(maxi)<<"\n";
    return maxi;
}