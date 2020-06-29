//a
int calc (int&, int&);
int calc (const int&, const int&); // OK, low-level const

//b
int calc (char*, char*);
int calc (const char*, const char*); // Ok, low-level const

//c
int calc (char*, char*);
int calc (char* const, char* const); // Illegal, top-level const is ignored