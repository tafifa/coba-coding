nums = []

for i in range (0,3) :
    nums.append(int(input()))

print("value di array : ", nums,"\n")

print("pop...\n")

for idx, item in enumerate(nums) :
    if item % 2 == 1 :
        #del nums[idx]
        #nums.remove(idx)
        nums.pop(idx)

print("value di array : ", nums, " ", len(nums))

for i in range (len(nums)) :
    print ("x = " + str(nums[i]))

#for i in range (2) :
#    print ("x = " + str(nums[i]))