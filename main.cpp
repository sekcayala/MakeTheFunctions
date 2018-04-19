#include <iostream>
#include <vector>

using namespace std;

//prototypes:
bool isPositive(int &, int &);

int fillWith(int &, int &);

void printVector(const vector<int> &, const vector<int> &);
/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions

bool isPositive(int & projects,int & quizzes)
{
int p;
int q;
if(p > 0)
{
p = true;
}
if (q > 0)
{
q= true;
}
else 
{
false;
}

int fillWith(int projects, int quizzes)
{
int p=90;
int q=80;
}

void printVector (const vector<int> &proj, const vector<int> &quiz)
{
 for(int i=0; i<proj.size(); i++)
  {
    cout<<proj[i]<<" ";
  }

 for(int q=0; q<quiz.size(); q++)
  {
   cout<<quiz[q]<<" ";
  }
}

