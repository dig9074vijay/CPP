#include<iostream>
using namespace std;

void SpiralPrint(int a[][4],int m,int n){
    
    int startRow = 0;
    int endRow = m-1;
    int startCol = 0;
    int endCol = n-1;

    while(startRow<=endRow and startCol <= endCol){

        for(int col = startCol ; col<=endCol ; col++){
            if(endRow==startRow)
              break;
             
            cout<<a[startRow][col]<<" ";
        }

    

        
        for(int row = startRow +1 ; row<=endRow ; row++){
             if(endCol==startCol)
              break;
            cout<<a[row][endCol]<<" ";
        }

        for(int col = endCol - 1 ; col>= startCol; col--){
          
            cout<<a[endRow][col]<<" ";
        }

        for(int row = endRow - 1 ; row>= startRow+1 ;row--){
             
            cout<<a[row][startCol]<<" ";
        }
        startCol++;
        startRow++;
        endRow--;
        endCol--;
    }

}

int main(){
    int a[4][4] = {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};

    SpiralPrint(a,4,4);                   

    return 0;
}