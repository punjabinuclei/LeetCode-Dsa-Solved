public class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int n = A.length;
        int[] C = new int[n]; // This will store the prefix common counts.
        Set<Integer> seenA = new HashSet<>(); // To track numbers seen in A.
        Set<Integer> seenB = new HashSet<>(); // To track numbers seen in B.

        int commonCount = 0; // To keep track of common elements seen so far.

        for (int i = 0; i < n; i++) {
            seenA.add(A[i]); // Add the current element from A to seenA set.
            seenB.add(B[i]); // Add the current element from B to seenB set.

            // If the current element of A was already seen in B, it's common.
            if (seenB.contains(A[i])) {
                commonCount++;
            }

            // If the current element of B was already seen in A, it's common.
            if (seenA.contains(B[i])) {
                commonCount++;
            }

            // If both A[i] and B[i] are the same, we counted it twice, so decrement.
            if (A[i] == B[i]) {
                commonCount--;
            }

            C[i] = commonCount; // Store the common count up to this index in C[i].
        }

        return C;
    }
}
