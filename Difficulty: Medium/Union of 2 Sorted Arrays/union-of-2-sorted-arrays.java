import java.util.ArrayList;
import java.util.HashSet;

class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        int i = 0;
        int j = 0;
        ArrayList<Integer> ans = new ArrayList<>();
        HashSet<Integer> set = new HashSet<>();

        while (i < a.length && j < b.length) {
            if (a[i] <= b[j]) {
                if (!set.contains(a[i])) {
                    ans.add(a[i]);
                    set.add(a[i]);
                }
                if (a[i] == b[j]) {
                    j++;
                }
                i++;
            } else {
                if (!set.contains(b[j])) {
                    ans.add(b[j]);
                    set.add(b[j]);
                }
                j++;
            }
        }

        while (i < a.length) {
            if (!set.contains(a[i])) {
                ans.add(a[i]);
                set.add(a[i]); // Record element to block subsequent duplicates
            }
            i++;
        }

        while (j < b.length) {
            if (!set.contains(b[j])) {
                ans.add(b[j]);
                set.add(b[j]); // Record element to block subsequent duplicates
            }
            j++;
        }

        return ans;
    }
}