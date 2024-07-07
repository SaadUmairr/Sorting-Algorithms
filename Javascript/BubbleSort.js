function bubbleSort(arr) {
    let change = false;
    for (let i = 0; i < arr.length; i++) {
        change = false;
        for (let j = 0; j < arr.length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapped = true;
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
            }
        }
        if (!swapped) break;
    }
}

const arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log("INPUT LIST: ", arr);
bubbleSort(arr);
console.log("SORTED LIST: ", arr);
