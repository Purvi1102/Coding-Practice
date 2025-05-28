num1=int(input("Enter first number : "))
num2=int(input("Enter second number : "))
i=1
gcd=0
if num1>=num2:
    while i<=num2:
        if num1%i==0 and num2%i==0 and i>gcd:
            gcd=i
        i+=1    
else:
    while i<=num1:
        if num1%i==0 and num2%i==0 and i>gcd:
            gcd=i
        i+=1
print("greatest common divisor of ", num1, " and" ,num2 ," is :" ,gcd)
