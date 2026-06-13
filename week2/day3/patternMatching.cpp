//using stl class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        for(int i=0;i<haystack.size();i++){
            if(haystack.substr(i,n)==needle){
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++){//index over flow se bachne ke liye..if i=8 and j=2 ..i+j=10 ,out of bound in haysatack
            //check needle ka j element haystack ke i se match kr rha ya nhi.
            int j=0;bool flag=true;
            while(j<needle.size()){
                if(haystack[i+j]==needle[j]){
                    j++;
                }else{
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            return i;
        }
        return -1;
    }
};

// Knuth-Morris-Pratt (KMP) algorithm.

 
