import java.util.*;
class stack3
{
    public static void main (String[] args)throws Exception
    {
        Scanner Sc = new Scanner (System.in);
        int cnt, i, j, val, t, n, q, x;
        String St;
        n = Sc.nextInt();
        int[] arr = new int[n];
        int[] stack = new int[n];
        for (i = 0; i < n; ++i) {
            arr[i] = Sc.nextInt();
        }
        q = Sc.nextInt();
        x = Sc.nextInt();
        
        cnt = 0;
        val = 0;
        for (i = j = 0; q > 0; --q) {
            St = Sc.next();
            if (St.charAt (0) == 'H') {
                stack[j++] = arr[i];
                cnt++;
                val += arr[i++];
                //System.out.println(val);
                if (val == x) {
                    System.out.println(cnt);
                    System.exit(0);
                }
            } else {
                val -= stack[--j];
                cnt--;
                //System.out.println(val);
                if (val == x) {
                    System.out.println(cnt);
                    System.exit(0);
                }
            }
        }
        System.out.println (-1);
    }
}
