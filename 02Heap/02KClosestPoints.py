from heapq import heappush, heappop
import math


def get_dist(x, y):
    return math.sqrt(x**2 + y**2)


def k_closest_ppoints(points, k):
    min_heap = []
    n = len(points)
    for i in range(n):
        x = points[i][0]
        y = points[i][1]

        heappush(min_heap, (get_dist(x, y), points[i]))

    result = []
    for i in range(k):
        result.append(heappop(min_heap)[1])

    return result


if __name__ == "__main__":
    points = [[3, 3], [5, -1], [-2, 4]]
    k = 2
    result = k_closest_ppoints(points, k)
    print("K Closest Points to the origin are: ", result)
