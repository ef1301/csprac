#piglatinfy refresher
def piglatinfy(word):
    vowels = ['a','e','i','o','u','A','E','I','O','U']
    if word[0] not in vowels:
        first = word[0]
        if word[1] in vowels:
            second = word[1:]
            final = second + first +"ay"
            return final 
        elif word[1] not in vowels:
            first += word[1]
            second = word[2:]
            final = second + first +"ay"
            return final
    else:
        final = word +"ay"    
        return final
print(piglatinfy("dogs"))
print(piglatinfy("Awesome"))
print(piglatinfy("Child"))