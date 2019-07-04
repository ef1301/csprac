'''
int(): converts a string (series of letters) into the corresponding integer (whole number).
float(): converts a string (series of letters) into the corresponding floating point number (real number).
str(): converts a number into the corresponding sequence of letters.
'''
nucleotide=input('Enter a nucleotide')
new=""
for i in nucleotide:
    if i == "A":
        new+="T"
    elif i == "C":
        new+="G"
    elif i == "G":
        new+="C"
    elif i == "T":
        new+="A"
    else:
        print("Error")
print(new)
