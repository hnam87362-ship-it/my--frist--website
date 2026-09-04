password = input("Enter a password: ")
has_upper = False
has_lower =False
has_number=False
long_enough=False
long_enough=len(password)>=8

for char in password:
    if char.isupper():
        has_upper=True
    if char.islower():
        has_lower=True
    if char.isdigit():
        has_number=True

if long_enough and has_upper and has_lower and has_number:
    print("strong password")
else:
    print("weak password")
    if not long_enough:
        print("at least 8 characters long")
    if not has_upper:
        print("at least one uppercase letter")
    if not has_lower:
        print("at least one lowercase letter")
    if not has_number:
        print("at least one number")
