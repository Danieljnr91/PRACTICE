number = int(input("Enter factorial:"))

count = 0
factorial = 1
for i in range(1,number+1):
    factorial*=i
    count+=1
    if factorial == number:
        break
    if factorial > number:
        break


if factorial == number:
    print(f"{number} = {count}!")
else:
    print(f"{number} is not a result of any factorial")