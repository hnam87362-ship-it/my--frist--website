numbers=["malak","ali","ahmed","amr"]
list1=(list[0])
list2=(list[1])
list3=(list[2])

numbers=input("enter numbers separate by space:").split()
newNumber=[]

for x in numbers:
    newNumber.append(int(x))


total =0
count =0

for num in newNumber:
    total =total +num #total+=num
    count =count +1


avg =total/count
#avg= sum(newNumber/len(newNumber)) نلغي توتل وجمله forاللي بعدها
print("avg",avg)