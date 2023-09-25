enum boolean writePlaylist(struct dllNode **head, char *username){
    char* filename = (char*) malloc(strlen(username) + strlen("Playlist.txt") + 1);
    strcpy(filename, username);
    strcat(filename, "Playlist.txt");

    char* dir = (char*) malloc(strlen("./userPlaylists/") + strlen(filename) + 1);
    strcpy(dir, "./userPlaylists/");
    strcat(dir, filename);
    
    FILE* userPlaylist = fopen(dir, "w");
    if(userPlaylist == NULL){
        fclose(userPlaylist);
        return false;
    }

    struct dllNode *current = *head;
    while(current != NULL){
        fprintf(userPlaylist, "%d,%s,%s,%s,%s\n", current->id, current->songName, current->artistName, current->genre, current->duration);
        current = current->next;
    }

    fclose(userPlaylist);
    return true;
}