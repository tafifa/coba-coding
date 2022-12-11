num = int(input())

sum = 0
for i in range (len(str(num))) :
    numDigits = int((num % 10**(i+1)) / 10**i)
    sum += numDigits

    print("Digit:", i)
    print("\tNum Digit:", numDigits,"\n")

print("Sum of Digits Number:", sum)