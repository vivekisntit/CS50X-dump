x=False
while(not(x)):
    a=input("Height: ")
    x=True if (a.isdigit() and 9>int(a)>0) else False
y =int(a)
for x in range(y):
    print(f"{" "*(y-x-1)}{"#"*(x+1)}",end="  ")
    print(f"{"#"*(x+1)}")