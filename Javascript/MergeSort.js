function mergeSort(arr, low, high) {
    if (low < high) {
        let mid = Math.floor(low + (high - low) / 2);
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merger(arr, low, mid, high);
    }
}

function merger(arr, low, mid, high) {
    const temp = [];
    let i = low,
        j = mid + 1,
        k = 0;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++) arr[i] = temp[i - low];
}

const arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log("INPUT LIST: ", arr);
mergeSort(arr, 0, arr.length - 1);
console.log("SORTED LIST: ", arr);
