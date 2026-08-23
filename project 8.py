nums=input("enter a number").split()
unique =[]
for item in nums:
    if item not in unique:
        unique.append(item)
print("orignal list",nums)
print("modify list" ,unique)
        
