#include <iostream>
#include <stack>
using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    //A진수를 B진수로
    //주어진 값은 N

    int num=0;
    for(int i=0; i<n.size(); i++){
        num=num * a + (n[i]-'0');
    }
    //A진수를 10진수로 변경완료

    stack<int> st;
    while(true){

        if(num<b){
            st.push(num);
            break;
        }


        st.push(num%b);
        num=num/b;
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}