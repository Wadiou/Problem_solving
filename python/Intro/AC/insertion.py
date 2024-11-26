Array = [4, 5, 2, 1, 10, 6]

def insertion(arr):
    for i in range(1, len(arr)):
        k = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > k:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = k

print("Insertion sort")
insertion(Array)
print(Array)

def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

def bubble(arr):
    length = len(arr)
    for i in range(length):
        sorted = True
        for j in range(length - 1 - i):
            if arr[j] > arr[j + 1]:
                swap(arr, j, j + 1)
                sorted = False
        if sorted:
            break

print("Bubble sort")
bubble(Array)
print(Array)

def selection(arr):
    for i in range(len(arr) - 1):
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        swap(arr, i, min_index)

print("Selection sort")
selection(Array)
print(Array)

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left = arr[:mid]
        right = arr[mid:]

        merge_sort(left)
        merge_sort(right)

        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1

        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1

print("Merge sort")
merge_sort(Array)
print(Array)

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            swap(arr, i, j)
    swap(arr, i + 1, high)
    return i + 1

def quick_sort_recursive(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quick_sort_recursive(arr, low, pi - 1)
        quick_sort_recursive(arr, pi + 1, high)

def quick_sort(arr):
    quick_sort_recursive(arr, 0, len(arr) - 1)

print("Quick sort")
quick_sort(Array)
print(Array)

def heapify(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and arr[left] > arr[largest]:
        largest = left

    if right < n and arr[right] > arr[largest]:
        largest = right

    if largest != i:
        swap(arr, i, largest)
        heapify(arr, n, largest)

def heap_sort(arr):
    n = len(arr)
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    for i in range(n - 1, 0, -1):
        swap(arr, 0, i)
        heapify(arr, i, 0)

print("Heap sort")
heap_sort(Array)
print(Array)

def counting_sort(arr):
    max_val = max(arr)
    min_val = min(arr)

    range_val = max_val - min_val + 1

    count = [0] * range_val
    output = [0] * len(arr)

    for num in arr:
        count[num - min_val] += 1

    for i in range(1, len(count)):
        count[i] += count[i - 1]

    for num in arr:
        output[count[num - min_val] - 1] = num
        count[num - min_val] -= 1

    for i in range(len(arr)):
        arr[i] = output[i]

print("Counting sort")
counting_sort(Array)
print(Array)

def bucket_sort(arr):
    if len(arr) == 0:
        return arr

    max_val = max(arr)
    min_val = min(arr)
    bucket_range = (max_val - min_val) / len(arr)

    buckets = [[] for _ in range(len(arr))]

    for num in arr:
        index = int((num - min_val) / bucket_range)
        if index == len(arr):
            index -= 1
        buckets[index].append(num)

    for bucket in buckets:
        bucket.sort()

    result = []
    for bucket in buckets:
        result.extend(bucket)

    for i in range(len(arr)):
        arr[i] = result[i]

