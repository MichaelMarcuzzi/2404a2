#ifndef _USERS_H
#define _USERS_H

#include <ostream>
#include <vector>
#include <string>
using namespace std;
//#include "UI.h"
#include "user.h"

class Playlists {
  
	public:
	Users(); 
	~Users(void);
	Users * findByID(int aUserID);
        void add(User & aUser);
	void remove(User & aUser);
	//void showOn(UI & aView) const;
	void printOn(ostream & out) const;
	
	private:
	vector<User*> collection;
	vector<User*>::iterator findPosition(User & aUser);
};

ostream & operator<<(ostream & out, const Users & users);
#endif
