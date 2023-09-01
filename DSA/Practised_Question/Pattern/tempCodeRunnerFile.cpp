    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= 0 && j == 0 || i == 0 && j >= 0)
            {
                cout << "* ";
            }
            else if (i == j)
            {
                cout << "a ";
            }
            else
            {
                cout << "_ ";
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i + j < n && i == 0 || i + j >= n && j == n - 1)
            {
                cout << "* ";
            }
            else if (i + j == n - 1 && i != 0)
            {
                cout << "A ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }