class Solution {
   public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n <= 0) return true;
        int i = 0;
        while (i < flowerbed.size()) {
            bool left = (i == 0 || flowerbed[i - 1] == 0);
            bool right = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
            if (flowerbed[i] == 0 && left && right) {
                flowerbed[i] = 1;
                n--;

                if(n == 0){
                    return true;
                }
                i+=2;
            }
            else{
              i++;
            }
        }
        return false;
    }

};