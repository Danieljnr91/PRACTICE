h=input("Enter:")
file=open("new.txt","w") 
file.write(h)

file=open("new.txt","r")
content=file.read()
print(content)



