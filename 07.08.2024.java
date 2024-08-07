class Solution {
    public long kthElement(int k, int arr1[], int arr2[]) {
        // code here
        int n = arr1.length+arr2.length;
        int[] a = new int[n];
        ArrayList<Integer> m = new ArrayList<Integer>();
        for(int i=0;i<arr1.length;i++)
        {
            m.add(arr1[i]);
        }
        for(int i=0;i<arr2.length;i++)
        {
            m.add(arr2[i]);
        }
        Collections.sort(m);
        for(int i=0;i<m.size();i++)
        {
            a[i] = m.get(i);
        }
        long r = a[k-1];
        return r;
    }
}
