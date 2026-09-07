class Solution {
public:
    bool isAnagram(string s, string t) {
          // 1. lengths check
           int n=26;
        // 2. frequency array
        vector<int>nums(n,0);
        // 3. s ke characters count karo
        for(int i=0;i<s.size();i++){
           int ch=s[i] - 'a';
           nums[ch]++;
        }
        // 4. t ke characters ka count decrease karo
        for(int j=0;j<t.size();j++){
           int ch=t[j] - 'a';
           nums[ch]--;
        }
        // 5. check karo sab 0 hain ya nahi
        for(int k=0;k<n;k++){
            if(nums[k]!=0){
                return false;
            }
        }
        return true;
    }
};
