number = int(input("enter your number: "))
total = 0
for i in range(1, number + 1):
    total += i
print("sum from 1 to", number, "is:", total)