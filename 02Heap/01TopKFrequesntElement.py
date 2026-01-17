from collections import Counter
import heapq


def top_k_frequent_elements(arr, k):

    if k == len(arr):
        return set(arr)

    count = Counter(arr)
    print(count)
    return heapq.nlargest(k, count.keys(), key=count.get)


if __name__ == "__main__":
    arr = [1, 1, 1, 1, 2, 2, 2, 3]
    k = 2
    result = top_k_frequent_elements(arr, k)
    print("The top k frequent elements are: ", result)
