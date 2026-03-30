import java.util.List;
import java.util.ArrayList;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            List<Integer> tmp = new ArrayList<>();
            tmp.add(1);
            for (int j = 1; j < i; j++) {
                int tmp2 = res.get(i - 1).get(j - 1) + res.get(i - 1).get(j);
                tmp.add(tmp2);
            }
            if (i > 0) {
                tmp.add(1);
            }
            res.add(tmp);
        }
        return res;
    }
}
