class Solution {
public:
    int romanToInt(string s) {
int curr; 
int next; 
int ans=0;
unordered_map<char, int> value = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
for(int i=0; i<(s.size()-1);i++){
curr=value[s[i]];
next=value[s[i+1]]; 
if(curr<next){
ans-=curr; 
}
else{
ans+=curr;}

}
ans+=value[s[s.size()-1]];
return ans;        
    }
};
