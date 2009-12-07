#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Group;

class Person
{
  public:
  void setName(string newName){name=newName;};
  string getName(){return name;};
  //Group* getGroup(){return p_group;};
  int getRow(){return row;};
  int getCol(){return col;};
  int getGroupID(){return groupID;};

  private:
  string name;
  int row;
  int col;
  int groupID;

  friend class Group;
  friend class ReservationSys;
};

#endif

