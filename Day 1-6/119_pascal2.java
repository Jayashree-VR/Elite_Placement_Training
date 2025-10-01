class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<List<Integer>>outer=new ArrayList<>();
        for(int i=0;i<=rowIndex;i++){
            List<Integer>inner=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    inner.add(1);
                }
                else{
                    int sum=outer.get(i-1).get(j-1)+outer.get(i-1).get(j);
                    inner.add(sum);
                }
            } 
            outer.add(inner);
        }
        return outer.get(rowIndex);
    }
}