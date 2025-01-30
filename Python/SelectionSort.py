def selectionSort(arr):
    size = len(arr)
    for i in range(size - 1):
        min_index = i
        for j in range(i + 1, size):
            if arr[j] < arr[min_index]:
                min_index = j
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr


try:
    arr = []
    size = int(input())
    for _ in range(size):
        while True:
            try:
                element = int(input("Enter element: "))
                arr.append(element)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
    print("INPUT LIST: ", arr)
    selectionSort(arr)
    print("SORTED LIST: ", arr)
except KeyboardInterrupt:
    print("USER CLOSED THE PROGRAM")
except Exception as e:
    print("INPUT MUST BE A NUMBER")
