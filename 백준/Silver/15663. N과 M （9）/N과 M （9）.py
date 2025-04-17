import itertools

N, M = map(int, input().split())
nums = list(map(int, input().split()))

unique_permutations = sorted(set(itertools.permutations(nums, M)))

for seq in unique_permutations:
    print(*seq)