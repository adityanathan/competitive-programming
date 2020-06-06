import java.util.*;

class TestClass{

  public static int countRanges(int[] s, int k) {
    int i = 0;
    int min = s[0];
    int max = s[0];
    LinkedList<Integer> ascending = new LinkedList();
    ascending.add(0);
    LinkedList<Integer> descending = new LinkedList();
    descending.add(0);
    int count = 1;
    for (int j = 1; j < s.length; j++) {
      int value = s[j];

      while (!ascending.isEmpty() && s[ascending.getLast()] > value) {
        ascending.removeLast();
      }
      ascending.add(j);

      while (!descending.isEmpty() && s[descending.getLast()] < value) {
        descending.removeLast();
      }
      descending.add(j);

      if (s[j] > max) {
        max = s[j];
        if (max - min > k) {
          while(max - s[ascending.getFirst()] > k) {
            ascending.removeFirst();
          }
          i = ascending.getFirst();
          min = s[i];
          while (descending.getFirst() < i) {
            descending.removeFirst();
          }
        }
      } else if (s[j] < min) {
        min = s[j];
        if (max - min > k) {
          while(s[descending.getFirst()] - min > k) {
            descending.removeFirst();
          }
          i = descending.getFirst();
          max = s[i];
          while (ascending.getFirst() < i) {
            ascending.removeFirst();
          }
        }
      }
      count += j - i + 1;  // New subarrays involving j
    }
    return count;
  }

  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);
    int n = myObj.nextInt(), k = myObj.nextInt();
    final int[] s = new int[n];
    for(int i=0;i<n;i++)
        s[i]=myObj.nextInt();
    System.out.println(countRanges(s, k));
  }
}