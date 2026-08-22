class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n=strs.length;
        Arrays.sort(strs);
        if(n==0) return ""; //base case
        String ans="";
        String left = strs[0];
        String right = strs[n-1];
        int minlen = Math.min(left.length(),right.length());
        for(int i=0;i<minlen;i++){
            if(left.charAt(i)!=right.charAt(i)) break;
            ans+=left.charAt(i);
        }
        return ans;
    }
}