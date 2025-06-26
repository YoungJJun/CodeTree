#include <iostream>
#include <stack>
using namespace std;

string N;

int main() {
    cin >> N;


    // Please write your code here.
    int num=0;
    for(int i=0; i<N.size(); i++){
        num= num * 2 + (N[i]-'0');
    }
    num=num*17;
    
    stack<int> st;
    while(true){
        
        if(num<2){
            st.push(num);
            break;
        }

        st.push(num%2);
        num=num/2;
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}