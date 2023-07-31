# https://atcoder.jp/contests/abc310/tasks/abc310_b

"""
7/17 (月)
"""

# N, M = map(int, input().split())
# P, C, F = [], [], []
# for _ in range(N):
# 	l = list(map(int, input().split()))
# 	P.append(l[0])
# 	C.append(l[1])
# 	F.append(set(l[2:]))
# ans = False
# for i in range(N):
#     for j in range(N):
#         ans |= P[i] >= P[j] and F[j].issuperset(F[i]) \
#             and (P[i] > P[j] or len(F[j]) > len(F[i]))
# print('Yes' if ans else 'No')

"""
7/31(月)
"""

N, M = map(int, input().split())
P, C, F = [], [], []
for i in range(N):
    l = list(map(int, input().split()))
    P.append(l[0])
    C.append(l[1])
    F.append(set(l[2:]))
ans = False
for i in range(N):
    for j in range(N):
        ans |= P[i] >= P[j] and F[j].issuperset(F[i]) and (P[i] > P[j] or C[j] > C[i])
print("Yes" if ans else "No")


"""
7/18(火)
"""

# N, M = map(int, input().split()) # map(callable, iterable, *iterables) 返り値: function を iterable の全ての要素に適用して結果を生成 (yield) するイテレータ
#
# P, C, F = [], [], []
# for i in range(N):
#     l = list(map(int, input().split()))
#     P.append(l[0]);
#     C.append(l[1]);
#     F.append(set(l[2:]));
#
# ans = False:
# for i in range(N):
#     for j in range(N):
#         ans |= P[i] >= P[j] and F[j].issuperset(F[i]) \
#             and (P[i] > P[j] or C[j] > C[i])
#
# print('Yes' if ans else 'No')
