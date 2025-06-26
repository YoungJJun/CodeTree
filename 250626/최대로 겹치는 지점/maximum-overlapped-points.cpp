#include <iostream>

using namespace std;

int n;
int a,b;
int arr[101]={0,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            arr[j]++;
        }
    }


    int max = 0;
    for(int i=1; i<101; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;

    return 0;
}