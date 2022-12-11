def recursive(str, s, e):
  if (s == e):
    return True
  
  if (str[s] != str[e]):
    return False
  
  if (s < e + 1):
    return recursive(str, s + 1, e - 1)

  return True

def palindrome(str):
  n = len(str)
  if (n == 0):
    return True
  
  return recursive(str, 0, n - 1)

str = str(input())
print(palindrome(str))