#include <iostream>

using namespace std;

int n;
int a,b;

int main() {
    cin >> n;

    int arr[200] = {0,};

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for(int j=a; j<b; j++){
            arr[j]++;
        }
    }

    int max=0;
    for(int i=0; i<200; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}