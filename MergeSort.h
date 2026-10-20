#include <vector>

// Допоміжна функція злиття двох впорядкованих частин
void merge(std::vector<int>& arr, std::vector<int>& temp, int left, int mid, int right) {
    int i = left;      // Початок лівої частини
    int j = mid + 1;   // Початок правої частини
    int k = left;      // Поточна позиція в тимчасовому буфері

    // Порівнюємо і зливаємо елементи в тимчасовий буфер
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    // Залишки лівої частини
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Залишки правої частини
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Копіюємо відсортовану ділянку з буфера назад в оригінальний масив
    for (int idx = left; idx <= right; ++idx) {
        arr[idx] = temp[idx];
    }
}

// Рекурсивний розділ масиву
void mergeSortHelper(std::vector<int>& arr, std::vector<int>& temp, int left, int right) {
    if (left >= right) return; // Базовий випадок (1 елемент)

    int mid = left + (right - left) / 2;

    // Рекурсивно ділимо ліву і праву половини
    mergeSortHelper(arr, temp, left, mid);
    mergeSortHelper(arr, temp, mid + 1, right);

    // Зливаємо їх
    merge(arr, temp, left, mid, right);
}

// Головна функція, яку викликає ваш Bench.h
void MergeSort(std::vector<int>& arr) {
    if (arr.size() <= 1) return;

    // Створюємо буфер пам'яті РІВНО ОДИН РАЗ на весь процес
    std::vector<int> temp(arr.size());

    // Запускаємо сортування з межами 0 .. size-1
    mergeSortHelper(arr, temp, 0, static_cast<int>(arr.size()) - 1);
}


