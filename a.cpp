#include<iostream>
#include<vector>
using namespace std;

void findMissRepeat(vector<int>&num){
    int missing = -1;
    int repeating = -1;
    int n = num.size();
    vector<int>count(n,0);

    for(int i=0;i<n;i++){
        count[num[i]-1]++;
    }

    for(int i=0;i<n;i++){
        if(count[i]==2){
            repeating = i+1;
        }
        if(count[i]==0){
            missing = i+1;
        }
        
    }

    cout<<"miss"<<missing;
    cout<<"rep"<<repeating;


}

int main(){

    vector<int>num = {1,2,3,4,4,6,7,8};
    findMissRepeat(num);

    
    return 0;
}