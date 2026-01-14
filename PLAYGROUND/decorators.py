# def greet():
#     print("hello")

# var=greet

def outer():
    print("Outer start")

    def inner():
        print("Inner running")
        return inner

    inner()
    print("Outer end")

outer()

first = outer
first()