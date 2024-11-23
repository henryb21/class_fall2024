typedef struct Person {
    char name[20];
} Person;

typedef struct {
    Person * members;
    int size;
    int capacity;
} Team;

void initialize_team(Team*, int capacity);

void print_team(Team*);

Person* create_new_person(char*);

void insert_person_at_back(Team*, Person*);

void delete_person_at_back(Team*);

void decommission_team(Team*);
