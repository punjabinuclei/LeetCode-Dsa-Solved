class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        int n = words.length;
        int[] val = new int[n];
        int[] prefix = new int[n + 1];
        int[] ans = new int[queries.length];

        // Fill `val` array with 1 if the word starts and ends with vowels, otherwise 0
        for (int i = 0; i < n; i++) {
            String str = words[i];
            if (isVowel(str.charAt(0)) && isVowel(str.charAt(str.length() - 1))) {
                val[i] = 1;
            }
        }

        // Compute prefix sum
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + val[i - 1];
        }

        // Process queries using prefix sum
        for (int i = 0; i < queries.length; i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            ans[i] = prefix[end + 1] - prefix[start];
        }

        return ans;
    }

    // Helper function to check if a character is a vowel
    private boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
}
