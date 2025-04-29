int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int i = len - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count length of last word
    int word_len = 0;
    while (i >= 0 && s[i] != ' ') {
        word_len++;
        i--;
    }

    return word_len;
}