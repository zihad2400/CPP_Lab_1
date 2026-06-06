// Roll: 5103
// Name: MD MY ZIHAD
// Lab No: 01
// Experiment Name: Count SUM of this number.

#include <stdio.h> // ইনপুট-আউটপুট (printf, scanf) ব্যবহার করার লাইব্রেরি

int main() // program execution শুরু হয় এখান থেকে
{
    int numbers[5] = {10, 20, 30, 40, 50}; // 5 size এর array, এতে 5টা সংখ্যা রাখা হয়েছে
    int sum = 0;                           // সব সংখ্যার যোগফল রাখার জন্য variable (initially 0)

    for (int i = 0; i < 5; i++) // loop 0 থেকে 4 পর্যন্ত চলবে (মোট 5 বার)
    {
        printf("%d\n", numbers[i]); // প্রতিবার array এর বর্তমান index এর value print করবে

        sum = sum + numbers[i]; // প্রতিটি value যোগ করে sum এ জমা রাখা হচ্ছে
    }

    printf("Sum = %d", sum); // সব সংখ্যার মোট যোগফল print করবে

    return 0; // program সফলভাবে শেষ
}