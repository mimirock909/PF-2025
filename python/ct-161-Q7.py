a=int(input("a="))
b=int(input("b="))
c=int(input("c="))
if a<=b and a<=c:
    smallest=a   
elif b<=a and b<=c:
    smallest=b
else:
    smallest=c
print("Smallest number is:",smallest)