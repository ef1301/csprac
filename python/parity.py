def sign(number):
    if number<0:
        return -1
    else:
        return 1

def parity(number):
    if number%2==0:
        return "even"
    else:
        return "odd"

def recursion(number): 
    sum=number
    if number==0:
        return sum
    else:
        return sum+recursion(number-1)

print(sign(12))
print(sign(-12))
print(parity(12))
print(parity(11))
print(recursion(5))
