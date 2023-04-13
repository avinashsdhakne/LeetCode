```
class Solution {
public:
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
stack<int> st;
int j = 0;
for(int i=0; i<pushed.size(); i++){
cout<<"PUSH: "<<pushed[i]<<endl;
st.push(pushed[i]);
while(!st.empty() && st.top() == popped[j] && j<popped.size()){
cout<<"POP: "<<st.top()<<endl;
st.pop();
j++;
}
}
return st.empty();
}
};
```