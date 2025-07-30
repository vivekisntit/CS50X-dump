credit=input("Number: ")
k=len(credit)-1
i=0
sum=0
while(i<=k):
    if(i%2==0): 
        sum+=int(credit[k-i])
    else:
        n=int(credit[k-i])*2
        if (n>9):
            while(n>0):
                sum+=n%10
                n//=10
        else: 
            sum+=n
    i+=1
# print("final: ",sum)
if sum%10==0:
    if k==14 and credit.startswith(("34", "37")):
        print("AMEX\n")
    elif k==15 and credit.startswith(("51","52","53","54","55")):
        print("MASTERCARD\n")
    elif k==12 or k==15 and credit.startswith("4"):
        print("VISA\n")
    else: print("INVALID\n")
else: print("INVALID\n")
