from math import exp


def bubbleSort(arr):
    size = len(arr)
    for i in range(size):
        change = False

        for j in range(size - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                change = True
        if not change:
            break
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
    bubbleSort(arr)
    print("SORTED LIST: ", arr)
except KeyboardInterrupt:
    print("USER CLOSED THE PROGRAM")
except Exception as e:
    print("INPUT MUST BE A NUMBER")
