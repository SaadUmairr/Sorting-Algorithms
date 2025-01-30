def quick_sort(arr, low, high):
    if low < high:
        pivot = partitioner(arr, low, high)
        quick_sort(arr, low, pivot - 1)
        quick_sort(arr, pivot + 1, high)


def partitioner(arr, low, high):
    pivot = arr[low]
    i = low
    j = high

    while i < j:
        while arr[j] <= pivot and i <= high - 1:
            i += 1

        while arr[j] > pivot and j >= low + 1:
            j -= 1
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]

    arr[low], arr[j] = arr[j], arr[low]

    return j


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
    quick_sort(arr, 0, size - 1)
    print("SORTED LIST: ", arr)
except KeyboardInterrupt:
    print("USER CLOSED THE PROGRAM")
except Exception as e:
    print("INPUT MUST BE A NUMBER")
