class Solution {
    public int compress(char[] chars) {
        int n=chars.length;
        int i=0;
        int write=0;
        while(i<n){
            int j=i;
            while(j<n && chars[j]==chars[i]){
                j++;
            }
            int count =j-i;
            chars[write++] =chars[i];
            if(count>1){
         String cnt = String.valueOf(count);  //same as to_string
                for(char c:cnt.toCharArray()){
                    chars[write++]=c;
                }
            }
            i=j;
        }
        return write;
    }
}