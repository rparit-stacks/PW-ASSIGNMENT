int main()
{
    int n;
    cin >> n;
    int temp = 4;

    for (int i = 1; i <= n; i++)
    {
        cout << temp << " ";
        temp += 3;
    }
    return 0;
}