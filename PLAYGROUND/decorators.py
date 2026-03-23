# def greet():
#     print("hello")

# var=greet

# --------------------------------------------------------------------------
# def divide(first,second):
#     print(first/second)

# def smart_div(div_functiion):
#     def inner_control(first,second):
#         if first<second:
#             first,second=second,first
#         return div_functiion(first,second)
#     return inner_control

# j=smart_div(divide)
# j(2,4)
# --------------------------------------------------------------------------


# -------------------------------------------------------------------------
# def outer():
#     print("THIS IS OUTER")

# def decor(outer_func):
#     def inner_control():
#         print("INNER FUNCTION")
#         return outer_func()
#     return inner_control

# m=decor(outer)
# m()
# --------------------------------------------------------------------------


# --------------------------------------------------------------------------
# def multiply(a,b):
#     print(a*b)

# def modify(mul_function):
#     def output_mod(a,b):
#         print("Original = ")
#         mul_function(a,b)
#         print("Updated = ")

#         print(2*a*b)
       
#     return output_mod

# i=modify(multiply)
# i(13,34)
# ---------------------------------------------------------------------------


# ---------------------------------------------------------------------------

# ---------------------------------------------------------------------------

def is_prime(num):
    if num <= 1:
        return False
    for checker in range(2,int(num**0.5)+1):
        if num % checker==0:
            return False
    return True

# number = int(input("enter:"))
# fact=1
# for i in range(fact,number+1):
#     fact=fact*i
# print(fact)

#================================================================
# mo=0
# o=[]
# for j in range(1,101):
#     if is_prime(j):
#         print("Bored")
#         o.append("Bored")
#     else:
#         print(j)
# for g in o:
#     if g=="Bored":
#         mo+=1
# print(f"[{mo}]")


# from colorama import Fore

# x=int(input("Enter your name:"))
# y=int(input("Enter your nam:"))
# if y==0:
#    print(Fore.RED +"ERROR! DIVISION BY 0")
#=======================================================================


#=======================================================================
# import time

# j=[]
# for i in range(1,101):
#     if i%2==0:
#         j.append(i)
        
# count = 0
# n=[]
# for k in range(1,len(j)+1):
#     n.append(count)
#     time.sleep(1)
#     count+=1
#     print(n)
#========================================================================


#========================================================================
# nums=[3,4,3,2,3,5,6,5,4,3,3,45,6,7,6,5,3,2,3,4,6,7]
# num=[]

# for k in  range(len(nums)):
#     for i in range(len(nums)-1):
#        if nums[i] >nums[i+1]:
#          nums[i],nums[i+1]=nums[i+1],nums[i]
#          num.append(nums.copy())
# print(nums)
# j=len(num)

# print(f"It took {j} sortings to fully sort the list")
#========================================================================


#=======================================================================

# k=[1,2,3,4,3,2,1,23,4,5,4,3,2,1,2,3,4,5,6,54,3,2,3,4,4,4,3,2,1]
# i=[j for j in k if j%2==0]
# print(i)

# u = 8 ,9, 0
# c=list(u)
# print(c)
# print(c[0])


f=1
for i in range(1,6):
   f*=i 
print(f)