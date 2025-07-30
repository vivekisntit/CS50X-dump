import sys
import csv
def main():
    dna=input("DNA :")
    count=0
    s=0
    len=3
    while "TTA" in dna:
        s=dna.index("TTA")
        dna=dna[s+len:]
        count+=1
    print(count)   

def check():
    ...

main()

# def main():
    # dna=input("DNA :")
    # # if "TTG" in dna:
    #     # s=dna.index("TTG")
    #     # dna=dna[s:]
    # #     print(dna)
    # count=0
    # s=0
    # len=3
    # while "TTG" in dna:
    #     # print("hi")
    #     # dna=""
    #     # if "TTG" in dna:
    #     s=dna.index("TTG")
    #     dna=dna[s+len:]
    #     count+=1
    #     # print(dna)
    # print(count)    
    # # else: break
    # # a = "Hello"
    # # if a[7:]=="":
    # #     print("none")
    # # else: print(a)
    # # print(a[7:])