list = []
for i in range(0,10):
    list.append(i)
    for j in range(1,10):
        i= i + 10
        list.append(i)
    print(list)
    list.clear()