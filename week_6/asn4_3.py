# while(True):
#     try:
#         change=float(input("Change: "))
#         # raise ValueError if change<0 else None
#         if change<=0: raise ValueError
#     except ValueError:
#         continue
#     else:
#         break
# # print("here=",change)
# # for x in [0.25,0.10,0.05,0.01]:
# #     # if change>=x: change-=
# #     print(x[i])2
# ch=[25,10,5,1]
# i=0
# c=0
# change=int(change*100)
# # print(change)
# while(i<4):
#     # print(change-float(ch[i]))
#     # i+=1
#     if change>=ch[i]: 
#         change-=ch[i] 
#         c+=1
#         # print(change)
#     else: i+=1
# print("final",c)
# # for x in ch:
# #     print(1-x)


while(True):
    try:
        change=float(input("Change: "))
        if change<=0: raise ValueError
    except ValueError:
        continue
    else:
        change=int(change*100)
        break
ch=[25,10,5,1]
i=0
c=0
while(i<4):
    if change>=ch[i]: 
        change-=ch[i] 
        c+=1
    else: i+=1
print(c)