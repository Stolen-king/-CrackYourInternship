
class Solution {
public:
    string intToRoman(int num) {
        int a[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string s[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ans="";
        for(int i=12;i>=0;i--){
            while(num>=a[i]){
                ans+=s[i];
                num-=a[i];
            }
        }
        return ans;
    }
};