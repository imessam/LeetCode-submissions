class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        
        """

        red = []
        white = []
        blue = []
        
        for color in nums:
            if color == 0:
                red.append(color)
            elif color == 1:
                white.append(color)
            else:
                blue.append(color)
                
        for i,color in enumerate([*red,*white,*blue]):
                nums[i] = color
