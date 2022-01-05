#include<iostream>
using namespace std;

pair<int,int> StairCaseSearch(int arr[][4],int m,int n,int key){

    int topRight = arr[0][n-1];
    int i,j;
    i = 0;
    j = n-1;

    if(key < arr[0][0] and key > arr[m-1][n-1]){
        return {-1,-1};
    }

    while( i <= m-1 &&  j >= 0){
        if(key>topRight){
            i++;
            topRight = arr[i][j];
        }
        else if(key<topRight){
            j--;
            topRight = arr[i][j];

        }
        else if(key==topRight){
            
            return {i,j};
        }
    }
    return {-1,-1};

}


int main(){
    int arr[][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key = 33;
    pair<int,int> coords = StairCaseSearch(arr,4,4,key);
    cout<<coords.first<<" "<<coords.second<<endl;
    return 0;
}