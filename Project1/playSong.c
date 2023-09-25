void playSong(const char *filename) {
    char command[256];
    sprintf(command, "open \"%s\"", filename);
    system(command);
}