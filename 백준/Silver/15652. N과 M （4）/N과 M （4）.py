import itertools

N, M = map(int, input().split())

for seq in itertools.combinations_with_replacement(range(1, N+1), M):
    print(*seq)
