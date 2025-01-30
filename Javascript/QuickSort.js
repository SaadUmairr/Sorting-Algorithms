function quickSort(arr, low, high) {
    if (low < high) {
        let pivot = partitioner(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

function partitioner(arr, low, high) {
    let pivot = arr[low],
        i = low,
        j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) [arr[i], arr[j]] = [arr[j], arr[i]];
    }
    [arr[low], arr[j]] = [arr[j], arr[low]];
    return j;
}

const arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log("INPUT LIST: ", arr);
quickSort(arr, 0, arr.length - 1);
console.log("SORTED LIST: ", arr);
