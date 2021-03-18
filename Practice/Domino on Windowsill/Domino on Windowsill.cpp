    #include <iostream>
    using namespace std;
     
    int main()
    {
        int n, k1, k2, w, b, k[2][1000], t, cnt, total;
        cin >> t;
        while(t--){
            cnt = 0;
            cin >> n >> k1 >> k2;
            cin >> w >> b;
            total = w + b;
            for(int i = 0;i < n;i++){
                k[0][i] = 0;
                k[1][i] = 0;
            }
            for(int i = 0;i < k1;i++)
                k[0][i] = 1;
            for(int i = 0;i < k2;i++)
                k[1][i] = 1;
         // for(int i = 0;i < 2;i++)
                for(int j = 0;j < n;j++){
                    if(k[0][j] == 1 && k[1][j] == 1){
                        k[0][j] = 5;
                        k[1][j] = 5;
                        w--;
                    }
                    if(k[0][j] == 0 && k[1][j] == 0){
                        k[0][j] = 4;
                        k[1][j] = 4;
                        b--;
                    }
                }
            if(n!=1)    
            for(int i = 0;i < 2;i++)
                for(int j = 1;j < n;j++){
                    if(k[i][j] == 1 && k[i][j-1] == 1){
                        k[i][j] = 5;
                        k[i][j-1] = 5;
                        w--;
                    }
                    if(k[i][j] == 0 && k[i][j-1] == 0){
                        k[i][j] = 4;
                        k[i][j-1] = 4;
                        b--;
                    }
                }
            for(int i = 0;i < 2;i++){
                for(int j = 0;j < n;j++)
                {
            
                    if(k[i][j] == 4 || k[i][j] == 5)
                        cnt++;
                }
            
            }    
             
            if(b <= 0 && w <= 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;        
            
        }
        return 0;
    }
