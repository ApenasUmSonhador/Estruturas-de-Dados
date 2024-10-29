def binary_search(vetor, target, i=0):
    if len(vetor) <= 1:    
        if vetor[0] == target:
            return i
        else:
            return -1
    n = len(vetor)// 2
    if target >= vetor[n]:
        return binary_search(vetor[n:], target, i+n)
    else:
        return binary_search(vetor[:n], target, i)

n = int(input())
vetor = [0]*n
for i in range(n):
    vetor[i]
target = int(input())

print(binary_search(vetor, target))