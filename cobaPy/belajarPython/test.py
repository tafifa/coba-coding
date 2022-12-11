def hashed(n, const) :
    return hash(n) % const

def search(m) :
    print(list(lang.keys())[list(lang.values()).index(m)])
    
# insertion
bookCollection = []
print("Enter your book here : ")
for i in range(5) :
    bookCollection[i] = str(input().split())

arr = bookCollection
memory_length = len(arr)
lang = dict()

# Mapping Function
for i in range(memory_length) :
    print(arr[i], ":", hashed(arr[i],memory_length))

print()

for i in range(memory_length) :
    lang[arr[i]] = hashed(arr[i],memory_length)

print(lang)

search(3)