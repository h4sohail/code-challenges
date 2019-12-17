lst = [1,5,4,9,2]
k = 1
def k_largest(lst, k):
    counter = 0
    for i in range(len(lst)):
        counter += 1
        for j in range(len(lst)-i-1):
            if lst[j] > lst[j+1]:
                lst[j], lst[j+1] = lst[j+1], lst[j]
        if counter == k:
            return lst[-k] 

print(k_largest(lst, k))