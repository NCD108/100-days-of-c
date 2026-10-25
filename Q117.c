#include <stdio.h>

int main(void) {
    int m, n;

    if (scanf("%d", &m) != 1)
        return 0;

    int nums1[1000];
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    if (scanf("%d", &n) != 1)
        return 0;

    int nums2[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[2000];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    for (i = 0; i < m + n; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", merged[i]);
    }

    return 0;
}
