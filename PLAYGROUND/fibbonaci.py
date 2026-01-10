fib_num=int(input("How many?:"))
fibbs=[0,1]
for i in range(0,fib_num):
    fibbs.append(fibbs[i]+fibbs[i+1])

print(fibbs)

