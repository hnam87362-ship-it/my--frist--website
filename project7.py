numbers = input("enter all numbers").split()
newlist = []

for num in numbers:
    newlist.append(int(num))

print("newlist", newlist)

positive = 0
negative = 0
zero = 0

for num in newlist:
    if num > 0:
        positive += 1
    elif num < 0:
        negative += 1
    else:
        zero += 1

print("+", positive)
print("-", negative)
print("0", zero)