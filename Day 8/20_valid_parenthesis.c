bool isValid(char *s)
{
    char stack[strlen(s)];
    int i = 0;
    int top = -1;
    if (strlen(s) <= 1)
    {
        return false;
    }
    while (s[i] != '\0')
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (top == -1)
            {
                return false;
            }
            char popped = stack[top--];
            if ((s[i] == ')' && popped != '(') || (s[i] == '}' && popped != '{') || (s[i] == ']' && popped != '['))
            {
                return false;
            }
        }
        i++;
    }
    return top == -1;
}