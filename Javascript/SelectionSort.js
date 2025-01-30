function selectionSort(arr) {
    for (let i = 0; i < arr.length - 1; i++) {
        let min = i;
        for (let j = i + 1; j < arr.length; j++) if (arr[j] < arr[min]) min = j;
        if (min != i) [arr[i], arr[min]] = [arr[min], arr[i]];
    }
}
const arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log("INPUT LIST: ", arr);
selectionSort(arr);
console.log("SORTED LIST: ", arr);
