def multiplication_table(num_gen,limit):
    for i in range(1,limit+1):
        answer = num_gen*i
        print(f"{num_gen} x {i} = {answer}")

number = int(input("Enter number you wish to generate the table for \n:"))
limit = int(input("Enter limit of generation:"))
multiplication_table(num_gen=number,limit=limit)