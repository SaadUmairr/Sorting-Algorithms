def merge_sort(arr, low, high):
    if low < high:
        mid = low + (high - low) // 2
        merge_sort(arr, low, mid)
        merge_sort(arr, mid + 1, high)
        merger(arr, low, mid, high)


def merger(arr, low, mid, high):
    temp = [0] * (high - low + 1)
    i = low
    j = mid + 1
    k = 0

    while i <= mid and j <= high:
        if arr[i] <= arr[j]:
            temp[k] = arr[i]
            i += 1
        else:
            temp[k] = arr[j]
            j += 1
        k += 1

    while i <= mid:
        temp[k] = arr[i]
        i += 1
        k += 1

    while j <= high:
        temp[k] = arr[j]
        j += 1
        k += 1

    for i in range(low, high + 1):
        arr[i] = temp[i - low]


try:
    arr = []
    size = int(input("Enter the size of the list: "))
    for _ in range(size):
        while True:
            try:
                element = int(input("Enter element: "))
                arr.append(element)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
    print("INPUT LIST: ", arr)
    merge_sort(arr, 0, size - 1)
    print("SORTED LIST: ", arr)
except KeyboardInterrupt:
    print("USER CLOSED THE PROGRAM")
except Exception as e:
    print("INPUT MUST BE A NUMBER")
