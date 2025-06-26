#include <iostream>

using namespace std;

int n;
int a,b;

int main() {
    cin >> n;

    int arr[201] = {0,};

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        a=a+100;
        b=b+100;
        for(int j=a; j<b; j++){
            arr[j]++;
        }
    }

    int max=0;
    for(int i=0; i<201; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}