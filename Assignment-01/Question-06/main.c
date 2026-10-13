int main()
{
    int n, rem, binary = 0, place = 1;
    printf("Enter a no:");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    printf("binary%d", binary);
    return 0;
}
