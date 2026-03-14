num_list=input("Enter number seperated by comma:").split(",")
int_num_list=[int(i) for i in num_list]

designated_num = int(input("Enter number:"))
counter = 0

for j in int_num_list[::-1]:
    counter+=1
    if j == designated_num:
        pos=counter
        position=len(int_num_list) - pos+1
        break
print(f"[{designated_num}] last occured at position [{position}]")