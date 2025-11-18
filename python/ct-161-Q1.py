a=int(input("a="))
b=int(input("b="))
operation=int(input("Enter operation (1='+',2='-',3='*'): "))
    
if operation==1:
        result=a+b  
elif operation==2:
        result=a-b
elif operation==3:
        result=a*b
else:
     result="invalid input"
     
print("Result:",result)
    