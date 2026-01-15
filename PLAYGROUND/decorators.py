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


u={}

u["k"]={"h":9}
u["o"]={"l":8}
for i in u:
    for k in u[i]:
        print(k)