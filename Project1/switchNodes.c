struct stackNode *switchNodes(struct dllNode* dllNodePtr){
    struct stackNode *stackNodePtr = (struct stackNode*)calloc(1, sizeof(struct stackNode));
    stackNodePtr->id = dllNodePtr->id;
    stackNodePtr->songName = strdup(dllNodePtr->songName);
    stackNodePtr->artistName = strdup(dllNodePtr->artistName);
    stackNodePtr->genre = strdup(dllNodePtr->genre);
    stackNodePtr->duration = strdup(dllNodePtr->duration);
    return stackNodePtr;
}