import java.util.List;

class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int count = 0;
        for (List<String> arr : items)
            if (ruleKey.equals("type") && arr.get(0).equals(ruleValue))
                count++;
            else if (ruleKey.equals("color") && arr.get(1).equals(ruleValue))
                count++;
            else if (ruleKey.equals("name") && arr.get(2).equals(ruleValue))
                count++;
        return count;
    }
}
