char str[100];
int n,arr[100],o=0;
int l = strlen(str);
scan ("%s %d",str,&n);
for (int i=0;i<n;i++)
    {
        arr[o]=str[i];
        o++;
    }
    arr[o]='\0';
// arr[o]='\0'; used to avoid garbage value in array;