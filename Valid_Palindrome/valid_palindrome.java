class Solution {
    public boolean isPalindrome(String s) {
        int start = 0;
        int end = s.length() - 1;
        while(start <= end) {
        	char tmp1 = s.charAt(start);
        	char tmp2 = s.charAt(end);
        	if (!Character.isLetterOrDigit(tmp1 )) {
        		start++;
        	} else if(!Character.isLetterOrDigit(tmp2)) {
        		end--;
        	} else {
        		if (Character.toLowerCase(tmp1) != Character.toLowerCase(tmp2)) {
        			return false;
        		}
        		start++;
        		end--;
        	}
        }
        return true;
    }
}
