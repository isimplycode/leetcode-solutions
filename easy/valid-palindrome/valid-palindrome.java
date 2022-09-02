class Solution {
    public boolean isPalindrome(String t) {
        String s="";
        for (int i=0; i<t.length(); ++i) {
            if (Character.isAlphabetic(t.charAt(i))||Character.isLetterOrDigit(t.charAt(i))) {
                s+=Character.toLowerCase(t.charAt(i));
            }
        }
        int l=0,r=s.length()-1;
        while (l<r) {
            if (s.charAt(l)!=s.charAt(r)) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
