enum boolean push(struct stackNode **stack, int *cont, int id, const char *sn, const char *an, const char *g, const char *d) {
    if (*cont == MAX_STACK) {
        return false;
    }
    struct stackNode *tmp = (struct stackNode *) calloc(1, sizeof(struct stackNode));
    tmp->id = id;
    tmp->songName = strdup(sn);
    tmp->artistName = strdup(an);
    tmp->genre = strdup(g);
    tmp->duration = strdup(d);
    tmp->prev = *stack;
    *stack = tmp;
    (*cont)++;
    return true;
}
