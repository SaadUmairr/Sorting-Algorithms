def insertion_sort(arr):
    for i in range(len(arr)):
        j = i
        while j > 0 and arr[j - 1] > arr[j]:
            arr[j - 1], arr[j] = arr[j], arr[j - 1]
            j -= 1
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
    insertion_sort(arr)
    print("SORTED LIST: ", arr)
except KeyboardInterrupt:
    print("USER CLOSED THE PROGRAM")
except Exception as e:
    print("INPUT MUST BE A NUMBER")
