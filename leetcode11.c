int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;
    while(left < right) {
        int minheight;
        if(height[left] < height[right]) {
            minheight = height[left];
        }
        else {
            minheight = height[right];
        }
        int area = (right - left) * minheight;
        if(area > max) {
            max = area;
        }
        if(height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return max;
}
