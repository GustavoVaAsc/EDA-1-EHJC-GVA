#define MAX_TABLE_SIZE 1000
#define MAX_QUEUE 20
#define MAX_STACK 7

struct entry {
    char *username;
    char *password;
    int is_deleted;
};

struct hashTable {
    struct entry table[MAX_TABLE_SIZE];
    int num_entries;
};

struct dllNode{
    int id;
    char *songName;
    char *artistName;
    char *genre;
    char *duration;
    struct dllNode *prev;
    struct dllNode *next;
};

struct stackNode{
    int id;
    char *songName;
    char *artistName;
    char *genre;
    char *duration;
    struct stackNode *prev;
};