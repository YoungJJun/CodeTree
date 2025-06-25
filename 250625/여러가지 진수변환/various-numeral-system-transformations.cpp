#include <iostream>
#include <stack>
using namespace std;

int N, B;

stack<int> change4(int N){
    stack<int> st;
   
    while(true){
        if(N<4){
            st.push(N);
            return st;
        }

        st.push(N%4);
        N=N/4;
    }
}
stack<int> change8(int N){
    stack<int> st;
   
    while(true){
        if(N<8){
            st.push(N);
            return st;
        }

        st.push(N%8);
        N=N/8;
    }
}


int main() {
    cin >> N >> B;

    // Please write your code here.
    stack<int> result;
    if(B==4){
        result = change4(N);
    
    }
    else{
        result = change8(N);
        
    }
    while(!result.empty()){
            cout<<result.top();
            result.pop();
        }
    return 0;
}