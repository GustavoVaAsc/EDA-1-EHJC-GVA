enum boolean readPlaylist(struct dllNode **head, int *size, char *username){
    char* filename = (char*) malloc(strlen(username) + strlen("Playlist.txt") + 1);
    strcpy(filename, username);
    strcat(filename, "Playlist.txt");

    char* dir = (char*) malloc(strlen("./userPlaylists/") + strlen(filename) + 1);
    strcpy(dir, "./userPlaylists/");
    strcat(dir, filename);
    
    FILE* userPlaylist = fopen(dir, "r");
    if(userPlaylist == NULL){
        fclose(userPlaylist);
        FILE* userPlaylist = fopen(dir, "w");
        fclose(userPlaylist);
        return false;
    }
    char line[256];
    while(fgets(line, sizeof(line), userPlaylist)){
        printf("%s", line);
        struct dllNode *newNode = (struct dllNode *) calloc(1, sizeof(struct dllNode));
        if (newNode == NULL) {
            printf("Error allocating memory\n");
            return 1;
        }

        int id;
        char songName[128];
        char artistName[64];
        char genre[32];
        char duration[16];

        if (sscanf(line, "%d,%[^,],%[^,],%[^,],%s", &id, songName, artistName, genre, duration) != 5) {
            printf("Error parsing line\n");
            free(newNode);
            continue;
        }

        newNode->id = id;
        newNode->songName = strdup(songName);
        newNode->artistName = strdup(artistName);
        newNode->genre = strdup(genre);
        newNode->duration = strdup(duration);

        newNode->prev = NULL;
        newNode->next = NULL;

        if(*head == NULL){
            *head = newNode;
        }else{
            struct dllNode *tail = *head;
            while (tail->next != NULL) {
                tail = tail->next;
            }

            tail->next = newNode;
            newNode->prev = tail;
        }
        *size += 1;
        printf("%d\n",*size);
    }
    fclose(userPlaylist);
    return true;
}