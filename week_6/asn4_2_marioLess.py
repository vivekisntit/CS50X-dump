# x=False
# while(not(x)):
#     a=input("Height: ")
#     # x=a.isdigit()
#     x=True if (a.isdigit() and 9>int(a)>0) else False
# # print("h=",a)
# y =int(a)
# for x in range(y):
#     # print(x)
#     print(f"{" "*(y-x-1)}{"#"*(x+1)}")
#     # print("*"*(x+1))

x=False
while(not(x)):
    a=input("Height: ")
    x=True if (a.isdigit() and 9>int(a)>0) else False
y =int(a)
for x in range(y):
    print(f"{" "*(y-x-1)}{"#"*(x+1)}")