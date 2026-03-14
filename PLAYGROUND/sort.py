days = 0

for i in range(1,100):
    if i % 24 == 0:
        days+=1
        print(f"{days} day(s) have passed!")
    else:
        print(i)