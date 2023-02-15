for (i = 0; i < N - 1; i++)
    {
        // compate ara[i] and ara[i + 1]
        if (ara[i] > ara[i + 1])
        {
            temp = ara[i];
            ara[i] = ara[i + 1];
            ara[i + 1] = temp;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d, ", ara[i]);
    }
    printf("\n");