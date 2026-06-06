#include <stdio.h> // ইনপুট-আউটপুট (printf, scanf) ব্যবহার করার লাইব্রেরি

int main() // program execution এখান থেকে শুরু হয়
{
    int a[5] = {10, 50, 20, 80, 40}; // 5টা element এর array (সংখ্যাগুলো রাখা হয়েছে)
    int max = a[0];                  // প্রথম element কেই initial maximum ধরে নেওয়া হয়েছে (10)

    for (int i = 1; i < 5; i++) // index 1 থেকে শুরু করে শেষ (4) পর্যন্ত loop চলবে
    {
        if (a[i] > max) // যদি current element max থেকে বড় হয়
        {
            max = a[i]; // তাহলে max update হবে নতুন বড় value দিয়ে
        }
    }

    printf("Max = %d", max); // সব element check করার পর সর্বোচ্চ value print করা হবে

    return 0; // program সফলভাবে শেষ
}