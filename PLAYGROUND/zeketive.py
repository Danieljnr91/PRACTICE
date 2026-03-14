array=input("Enter numbers:").split(" ")
int_array=[int(i) for i in array]


current_count =1
max_count = 1
current_number = int_array[0]
max_number = int_array[0]

for k in range(1,len(int_array)):
    if int_array[k] == current_number:
        current_count+=1
    else:
        current_count = 1
        current_number = int_array[k]
    if current_count > max_count:
        max_count=current_number
        max_number = int_array[k]

print(f"The most occuring number is {max_number} and it occurs {max_count} times")