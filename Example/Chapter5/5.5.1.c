/* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t)
{
	int i;
	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

/* strcpy: copy t to s; pointer version */
void strcpy(char *s, char *t)
{
	int i;
	i = 0;
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}
