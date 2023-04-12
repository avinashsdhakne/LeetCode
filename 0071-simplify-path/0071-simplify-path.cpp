class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string result;
        for(int i=0; i<path.size(); i++){
            if(path[i] == '/'){
                string temp;
                i++;
                while(path[i]!='/' && i<path.size()){
                    // cout<<"PUSH: "<<path[i]<<endl;
                    temp.push_back(path[i]);
                    i++;
                }
                i--;
                cout<<temp<<endl;
                if(temp == ".."){
                     if(!st.empty())
                        st.pop();
                } 
                else if(temp == "." || temp==""){
                    continue;
                }
                else{
                    // cout<<"PUSH: "<<temp<<endl;
                    st.push(temp);
                }
            }
            else {
                cout<<"OUT: "<<path[i]<<endl;
            }
        }
        
        while(!st.empty()){
            string curr = '/' + st.top();
            // cout<<"ST: "<<curr<<endl;
            st.pop();
            curr += result;;
            result = curr;
        }
        
        if(result == "") return "/";
        return result;
    }
};