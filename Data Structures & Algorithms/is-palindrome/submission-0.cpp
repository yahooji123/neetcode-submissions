class Solution {
public:
    bool solve(string str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string str="";
        for(auto x : s){
           if(isalnum(x)){
    str += tolower(x);
}
        }
        bool ans=solve(str);
        return ans;
    }
};
