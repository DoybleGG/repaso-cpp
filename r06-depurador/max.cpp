int maximo(const int v[], int n) { // C
    int mejor = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}