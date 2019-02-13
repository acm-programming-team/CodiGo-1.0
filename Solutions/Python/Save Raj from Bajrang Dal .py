n = int(input())
m = sorted(map(int, input().split()))
print(sum(map(lambda x,y: (x+y)**2, m,m[::-1]))//2)