def minimumTotal(self, triangle):
    n = len(triangle)
    minCosts = [[0 for j in range(0, i + 1)] for i in range(0, n)]
    minCosts[0][0] = triangle[0][0]

    for i in range(0, n):
        minCosts[i][0] = minCosts[i - 1][0] + triangle[i][0]
        minCosts[i][i] = minCosts[i - 1][i - 1] + triangle[i][i]

    for i in range(1, n):
        for j in range(1, i):
            minCosts[i][j] = min(minCosts[i - 1][j - 1], minCosts[i - 1][j]) + triangle[i][j]

    minimumPathCost = min(minCosts[n - 1])
    return minimumPathCost

triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
print(minimumTotal(triangle))
