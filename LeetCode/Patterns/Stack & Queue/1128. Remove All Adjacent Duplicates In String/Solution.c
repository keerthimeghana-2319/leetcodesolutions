char* removeDuplicates(char* s) {
  int n = strlen(s);
  char *stack = (char *)malloc((n+1) * sizeof(char*));
  int top = -1;
  //bring 1st character into stack without checking anything
  stack[++top] = s[0];
  for(int i = 1 ; i < n ; i++)
  {
    if(top != -1 && stack[top] == s[i])
    {
        top--;
    }
    else
    {
        stack[++top] = s[i];
    }
  }
  stack[++top] = '\0';
  return stack;
}