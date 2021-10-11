# # Here we will find the maximum frequent word in the dataset
# # We will use the concept of dictionary.
def f(str):
    new = {}
    freq = {}
    str = list(str.lower().split(' '))
    for i in str:
        if i not in new:
            new[i] = 0
            new[i] += 1
        else:
            new[i] += 1
    for i in sorted(list(new.values())):
        freq[i] = []
    for x in freq:
        for word in new:
            if new[word] == x:
                freq[x] += [word]
    print(str, end='\n\n\n')
    print(new)
    print(freq)


f('My name is Lalit Kumar. My house is in #### %4^ 8')
