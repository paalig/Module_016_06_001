#include <iostream>
#include <vector>

/*
 * Пользователь вводит с клавиатуры число n, далее -- n целых чисел, которые нужно записать в вектор.
 * Потом пользователь вводит ещё одно значение.
 * Нужно удалить из вектора все элементы, которые равны данному значению, и вывести итоговое состояние вектора
 * Пример: Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. И потом -- число 3.
 * Необходимо, чтобы в векторе остались числа 1, 5, 1, которые надо вывести их на экран.
 */

int main() {
    int count = 0;
    int number;
    int delNumber;
    std::vector<int> vec;

    while (count <= 0) {
        std::cout << "Input amount of input numbers: ";
        std::cin >> count;
    }

    for (int i = 0; i < count; i++) {
        std::cout << "Input number: ";
        std::cin >> number;
        vec.push_back(number);
    }

    std::cout << "Input number to delete: ";
    std::cin >> delNumber;

    for (int i = 0; i < vec.size(); i++) {
        while (vec[i] == delNumber) {
            if (i < vec.size() - 1) {
                for (int j = i; j < vec.size() - 1; j++) {
                    vec[j] = vec[j + 1];
                }
                vec.pop_back();
            } else {
                vec.pop_back();
                break;
            }
        }
    }

    if (vec.empty()) {
        std::cout << "Vector is empty!" << std::endl;
    } else {
        for (int i = 0; i < vec.size(); i++) {
            std::cout << vec[i] << " ";
        }
    }

}
