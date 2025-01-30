function insertionSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        let j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            [arr[j - 1], arr[j]] = [arr[j], arr[j - 1]];
            j--;
        }
    }
}

const arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log("INPUT LIST: ", arr);
insertionSort(arr);
console.log("SORTED LIST: ", arr);
