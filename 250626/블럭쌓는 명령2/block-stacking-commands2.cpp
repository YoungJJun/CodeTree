#include <iostream>

using namespace std;

int N, K;
int start;
int finish;


int main() {
    cin >> N >> K;
    int *arr = new int[N];
    for(int i=0; i<N; i++){
        arr[i]=0;
    }


    for (int i = 0; i < K; i++) {
        cin >> start >> finish;
        for(int j=start; j<=finish; j++){
            arr[j]++;
        }
    }
    // Please write your code here.

    
    int max = arr[1];
    for(int i=2; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}