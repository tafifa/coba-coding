n = int(input())

digit100a = int(n/100)
digit100 = n - (digit100a)*100

digit50a = int(digit100/50)
digit50 = digit100 - (digit50a)*50

digit20a = int(digit50/20)
digit20 = digit50 - (digit20a)*20

digit10a = int(digit20/10)
digit10 = digit20 - (digit10a)*10

digit5a = int(digit10/5)
digit5 = digit10 - (digit5a)*5

digit2a = int(digit5/2)
digit2 = digit5 - (digit2a)*2

digit1a = int(digit2/1)
digit1 = digit2 - (digit1a)*1

print(digit100a, "nota(s) de R$ 100,00\n",
digit50a, "nota(s) de R$ 50,00\n",
digit20a, "nota(s) de R$ 20,00\n",
digit10a, "nota(s) de R$ 10,00\n",
digit5a, "nota(s) de R$ 5,00\n",
digit2a, "nota(s) de R$ 2,00\n",
digit1a, "nota(s) de R$ 1,00\n")
