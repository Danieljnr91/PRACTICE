numbers=input("Enter numbers seperated by space:").split(" ")
int_num=[int(i) for i in numbers]

nested_list=[]
temp_list = []
for k in range(0,len(int_num)):
    already_listed= False
    for group in nested_list:
        if int_num[k] in group:
            already_listed=True
            break
    if already_listed:
        continue

    temp_list.clear()
    for i in int_num:
       if i == int_num[k]:
           temp_list.append(i)

    nested_list.append(temp_list.copy())
print(nested_list)

lenghts=[]
for size in nested_list:
    lenght = len(size)
    lenghts.append(lenght)


maximum = lenghts[0]
for m in lenghts:
    if m>maximum:
        maximum=m

modes=[]
for l in nested_list:
    if len(l)==maximum:
        modes.append(l[0])
print(f"MODES = {modes}")



