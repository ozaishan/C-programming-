  for ( i = 0; i < 3; i++)
    {
    printf("Enter name of the %d student", i+1);
    scanf("%s", s[i].name);
    printf("Enter symbol number of %d student", i+1);
    scanf("%d", s[i].symbolnumber)
    printf("Enter the marks of each subject:\n")
    for ( j = 0; i < 3; i++)
    {
        printf("Enter marks for %d subject", j+1);
        scanf("%d", s[i].marks[j]);
    }