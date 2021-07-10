

typedef struct IWarrior IWarrior;


typedef struct IWarrior {
	void (*slash)(IWarrior*, int);
	void (*thrust)(IWarrior*);
} IWarrior;


void slash(IWarrior* warrior, int time) {
	warrior->slash(warrior, time);
}
void thrust(IWarrior* warrior) {
	warrior->thrust(warrior);
}