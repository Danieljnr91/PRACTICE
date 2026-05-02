def is_prime(number):
    if number <= 1:
        return False
    for  i in range(2,int(number**0.5)+1):
        if number % i == 0:
            return False
    return True

ranges=input("Enter range:").split(",")
range_list=[int(i) for i in ranges]
prime=[]
count=0

for j in range(range_list[0],range_list[1]):
    if is_prime(j):
        prime.append(j)

for k in prime:
    count+=1   
print(prime)
print(f"There are [{count}] prime numbers between {range_list[0]} and {range_list[1]}")

