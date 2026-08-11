class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
int minLength = strs[0].size();

for (int i = 1; i < strs.size(); i++) {
    minLength = min(minLength, (int)strs[i].size());
}
for (int i = 0; i < minLength; i++){
for(int j=0;j<strs.size();j++){
if(strs[0][i]!=strs[j][i]){
return answer;}
}
answer+=strs[0][i];}
return answer; 
        
    }
};
