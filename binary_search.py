nums = [-1,0,3,5,9,12]
target = 9

def search(self,nums:list[int],target):
    strr,end =  0,len(nums)
    mid = (end+strr)/2

    while(end>strr):

        if(nums[mid]==target):
            return mid

        elif(nums[mid]>target):
            strr = mid+1

        elif(nums[mid]<target):
            end = mid-1

    return -1




