typedef struct IMage IMage;
typedef struct IMage {
	void (*heal)(IMage*);
	void (*pray)(IMage*, const char*);
} IMage;


void heal(IMage* mage) {
	mage->heal(mage);
}
void pray(IMage* mage, const char* lyrics) {
	mage->pray(mage, lyrics);
}