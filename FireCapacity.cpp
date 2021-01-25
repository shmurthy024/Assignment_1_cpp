#include <iostream>
#include <string>

using namespace std;

int main(){
  unsigned short roomCapacity = 0;
  unsigned short numOfMembers = 0;

  cout << "Enter the maximum room capacity: " << endl;
  cin >> roomCapacity;

  cout << "Enter how many people are attending the event: " << endl;
  cin >> numOfMembers;

  if(numOfMembers <= roomCapacity){
    cout << "Sucess...this meeting can be held!" << endl;
    cout << "You may invite: " << roomCapacity - numOfMembers << " more people." << endl;
  }
  if(numOfMembers > roomCapacity){
    cout << "Sorry this meeting cannot be held as planned due to fire regulations." << endl;
    cout << numOfMembers - roomCapacity << " need to be excluded for the meeting to be conducted." << endl;
  }

  return 0;
}
