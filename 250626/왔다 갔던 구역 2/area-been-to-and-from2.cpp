#include <iostream>

using namespace std;

int n;
int arr[2000] = {0,};
char dir;
int dist;

int x=1000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dist >> dir;

        if(dir == 'L'){
            while(dist--){
                arr[x]++;
                x--;
            }
            
        }
        else{ //direction == 'R'
            while(dist--){
                arr[x]++;
                x++;
            }
        
        }
        
    }


    int cnt=0;    
    for(int i=0; i<2000; i++){
        if(arr[i]>1){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}