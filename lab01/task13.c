#include <stdio.h>
int main() {
    int seconds_since_midnight;
    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &seconds_since_midnight);
    if (seconds_since_midnight < 0 || seconds_since_midnight >= 86400) {
        printf("Ошибка: число должно быть от 0 до 86399\n");
        return 1;
    }
    int hours = seconds_since_midnight / 3600;
    int minutes = (seconds_since_midnight % 3600) / 60;
    int seconds = seconds_since_midnight % 60;
    printf("Время: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
