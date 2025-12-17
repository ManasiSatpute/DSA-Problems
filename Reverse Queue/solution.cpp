#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int n = q.front();
        s.push(n);
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
}

int main(){
    queue<int>arr;
    for(int i =1 ; i<=10 ;i++){
        arr.push(i);
    }
 reverse(arr);
    for(int i =1 ; i<=10 ;i++){
        cout<<arr.front()<<" ";
        arr.pop();
    }
    return 0;
}


