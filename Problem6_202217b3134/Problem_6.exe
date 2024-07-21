#include <stdio.h>
#include <stdlib.h> // For malloc and free

void main()
{
    int n, *a, *b, *t, *w, *g, i;
    float att = 0, awt = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Allocate memory dynamically based on user input
    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    t = (int *)malloc(n * sizeof(int));
    w = (int *)malloc(n * sizeof(int));
    g = (int *)malloc((n + 1) * sizeof(int));

    if (a == NULL || b == NULL || t == NULL || w == NULL || g == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter the burst times:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Enter the arrival times:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    g[0] = 0;
    for (i = 0; i < n; i++)
        g[i + 1] = g[i] + b[i]; // Calculating completion times

    for (i = 0; i < n; i++)
    {
        w[i] = g[i] - a[i]; // Waiting time
        t[i] = g[i + 1] - a[i]; // Turnaround time
        awt += w[i];
        att += t[i];
    }

    awt = awt / n; // Average waiting time
    att = att / n; // Average turnaround time

    printf("\n\tProcess\t\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("\tP%d\t\t%d\t\t%d\n", i, w[i], t[i]);
    }

    printf("\nThe average waiting time is %f\n", awt);
    printf("The average turnaround time is %f\n", att);

    // Free dynamically allocated memory
    free(a);
    free(b);
    free(t);
    free(w);
    free(g);
}
