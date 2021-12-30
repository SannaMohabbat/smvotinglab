#include "binary.h"
#include "map.h"
#include <queue>
#include <stack>

int main() 
{ 
    //BINARY TREE/LINKED LIST
     node *root = newNode(17); //creates root node and sets it to 17
    root->left = newNode(18);  //creates left child of root to 18
    root->right = newNode(19); //right child of root to 19
    root->left->left = newNode(20); //left child of parent 18 to 20
    root->left->right = newNode(21);  //right child of parent 19 to 21
    root->right->left = newNode(22);//left child of right parent
    root->right->right = newNode(23);//right child of right parent
    root->left->left->left = newNode(25); //left grandchild of left grandparent
    root->left->left->right = newNode(26);//right grandchild of left grandparent
    root->left->right->left=newNode(27); //left grandchild of left grandparent
    root->left->right->right = newNode(28); //right grandchild of right grandparent
    root->right->left->left=newNode(29);//left grandchild of right grandparent
    root->right->left->right=newNode(30); //right grandchild of right grandparent 

    std::cout << "Welcome to our program!" << std::endl; //greet user
    std::cout << endl;
    std::cout << "We are here to address the question of why students don't vote. What is the issue?" <<endl;
    std::cout << "We gathered data directly from 68 Ohlone students to identify the issue after a series of questions" <<endl;
    std::cout << "Let's start with the first set of data" << std::endl; //all user info
    std::cout << endl; 
    std::cout << "Press Enter to Continue";
    std::cin.ignore(); //creates an enter button. Click enter, program will ignore it 
    while (std::cin.ignore()){ //when its clicked enter while loop
    std::cout << "Great! First, we asked the people who took this survey how old they are" << endl;
    std::cout << std::endl;
    std::cout << "Given age range of people who took this survey: \n"; 
    printLevelOrder(root); //prints binary tree
        std::cout << std::endl;
    std::cout << std::endl;
     std::cout<< "           17" <<std::endl;
    std::cout << "         /    \\"<<std::endl;
    std::cout<< "       18     19"<<std::endl;
    std::cout << "      /  \\   /   \\"<<std::endl;
    std::cout<<"    20  21   22  23"<<std::endl;
    std::cout <<"   /\\   /\\   / \\" <<std::endl;
    std::cout<<" 25 26 27 28 29 30"<<std::endl; //visualization of binary tree because its cool
    std::cout << endl;
    std::cout << "3 people were 17" << endl; //along with printed tree, full data chart just for extra info
    std::cout << "6 people were 18" << endl;
    std::cout << "13 people were 19" << endl;
    std::cout << "1 person was 20.5" << endl;
    std::cout << "10 people were 20" << endl;
    std::cout << "10 people were 21" << endl;
    std::cout << "5 people were 22" << endl;
    std::cout << "6 people were 23" << endl;
    std::cout << "0 people were 24" << endl;
    std::cout << "2 people were 25" << endl;
    std::cout << "1 person was 26" << endl;
    std::cout << "3 people were 27" << endl;
    std::cout << "2 people were 28" << endl;
    std::cout << "1 person was 29" << endl;
    std::cout << "1 person was 30" << endl;
    std::cout << endl;
    break;}
    std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;
//STACK AND QUEUE
    std::cout<< "Let's go into feedback!" << std::endl;
    std::cout << std::endl; 
    std::cout << "Press Enter to continue!";
    std::cin.ignore(); //again enter button enters while loop
    while(std::cin.ignore()){
        cout << "We asked students: Have you ever voted at school? If yes, what factors encouraged you to do so?"<< endl;
        cout << "Based on replies, they were sorted into 3 main cetegories of response";
        cout << endl; //user info about what part were at
   queue<string> q; //Creates a queue named q
   q.push("-Wanted change in student government"); //pushes categories into qeueue
   q.push("-Peer pressure");
   q.push("-Miscellaneous");
   std::cout <<endl;
   std::cout<<"Miscellaneous answers included: " << endl; 
   std::cout<<"-Extra credit for class" << endl;
   std::cout <<"-Friend was running for a position" << endl;

   
   stack<string> s; //creates a stack s
   while (q.size() > 0)
   {
      string name = q.front(); //brings the name of the cateogry to the front
      q.pop(); //pops it from the queue
      s.push(name); //pushes it into the stack
   }
cout<< endl;

   cout << "LIFO order:" << endl; 
   std::cout << std::endl;

   while (s.size() > 0)
   {
      std::cout << s.top() << endl; //prints each name at the top of the stack in order
         std::cout << std::endl; 

      s.pop();//pops them out once printed 
   }
    break;}
    std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;
//INSERTION SORT

    std::cout << "Now let's go into categorical data!" << std::endl;//user info
    std::cout << "Press Enter to Continue";//user info
    std::cin.ignore();//enter button enters while loop
    while (std::cin.ignore()){
    std::cout << "One of the primary goals here is to address what stops students from voting" <<endl;//user info
    std::cout << "We asked Ohlone students to vote on which factor is their biggest obstacle in voting" <<endl;//user info
    std::cout << "The categories were school, family, work, no time, disabilities, legal reasons, it's not important, or N/A" <<endl;
    std::cout << "Here are the results..." << endl;
    std::cout << endl;
    int arr[] = { 9, 24, 18, 2, 15, 10, 16, 1 };  //creates an array for insertion sort to sort
    int n = sizeof(arr) / sizeof(arr[0]);  //sets n to the size of the array
  
    insertion_sort(arr, n);  //calls inseertion sort for the array to be sorted
    print(arr, n);  //prints sorted array
    break;}//end loop
    std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;

//MAP IMPLEMENTATION
    std::cout << "Since we now know what stops them from voting, we asked what would make it easier" << std::endl;//user info
    std::cout << "Press Enter to Continue";//user info
    std::cout << std::endl;
    std::cin.ignore();
    while (std::cin.ignore()){ //enter button enters while loop
    Category data; //creates data object from category class
   data.add_category(" votes for: More accesibility", 6); //adds category and vote to the map
   data.add_category(" votes for: Easier to understand info", 5); //value = votes, category = key
   data.add_category(" votes for: Online Voting", 8); //adds data to map
   data.add_category(" votes for: More info on canditates and voting", 3);//adds data to map
   
   std::cout << "We asked: 'What do you think would make voting easier?'" << std::endl;//user info
   std::cout << "Here were the results based on replies: " << std::endl; //user info
   std::cout << std::endl;
   data.print_all();//calls print to print the map
   std::cout << std::endl; 
   std::cout << "There are many other suggestions too. Here are given replies from users" << std::endl; //replies from survey users
   std::cout << "- I believe having more information and ease of accessing information that isn't complicated would help many people." << std::endl;
   std::cout << "(Basically being able to read props and see candidates positions without complicated wording would help many people who have English as there second language.)" << std::endl;
   std::cout << "- America needs systematic reform." << std::endl;
   std::cout << "- Awareness" << std::endl; 
   std::cout << "- Making it more accessible and noticeable. Putting the voting online helps as well." << std::endl;
   std::cout << "- Give a day off so people can vote" << std::endl;
   std::cout << "- Maybe explaining how important it is, everything in our country is not perfect, you can make a difference." << std::endl;
   std::cout << std::endl; 
   break;}  //exit loop
   std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;

    std::cout << "Now we begin the multiple choice portion!" << std::endl; //   MULTIPLE CHOICE SECTION
    std::cout << "Take these questions and their answers into consideration in reflecting on just how much your vote matters" << std::endl;
    std::cout<<"You'll have 10 seconds to enter your answer choice into the chat" <<std::endl;
    std::cout << std::endl; 

    std::cout << "Press Enter to Continue";
    std::cin.ignore();
    while (std::cin.ignore()){ //enter button enters while loop
         std::cout << "Great! Here's question one, enjoy!" << std::endl; 
             std::cout << std::endl;
    std::cout << "Do you think your vote matters?"<< std::endl;
    std::cout << "a: No" << std::endl;
    std::cout << "b: Yes"<<std::endl;
    std::cout << "c: I don't know"<<std::endl;
    std::cout << "d: Why do you care"<<std::endl;
    std::string answer_one;
    std::cin >> answer_one;
    if (answer_one == "b"){
        std::cout << "correct! Your vote always matters."<< std::endl;}
        else {(std::cout << "INCORRECT. Your vote always matters.");}
        std::cout << std::endl;
        break; }
       std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;
        std::cout << "Onto number 2" << std::endl;
        std::cout << "Press Enter to Continue";
    std::cin.ignore();
    while (std::cin.ignore()){
            std::cout << std::endl;
        std::cout << "Out of the 65 people who took this survey, what percentage do you think are registered to vote?" << std::endl;
        std::cout << "a: 30%" << std::endl;
        std::cout << "b: 25%"<< std::endl;
        std::cout << "c: 60%"<< std::endl;
        std::cout << "d: 65%"<< std::endl;
        std::string answer_two;
        std::cin >> answer_two;
        if (answer_two == "a"){
            std::cout << "You got it! Only 30% percent are registered to vote. You'd expect more...";}
        else { (std::cout << "INCORRECT! It's a, 30%. Only 30% percent are registered to vote. You'd expect more...");}
        std::cout << std::endl;
        break;}
       std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;
        std::cout << std::endl;
        std::cout << "Onto number 3..." << std::endl;
         std::cout << "Press Enter to Continue";
    std::cin.ignore();
    while (std::cin.ignore()){
        std::cout << "What would happen if young voters from 18-30 didn’t vote?" << std::endl;
        std::cout << std::endl;
        std::cout << "a: No progressive laws/bills that ascertain to our modern day world would pass" << std::endl;
        std::cout << "b: No proper systematic change"<< std::endl;
        std::cout << "c: No Trump out of office this year"<< std::endl;
        std::cout << "d: All of the above"<< std::endl;
        std::string answer_three;
        std::cin >> answer_three;
        if (answer_three == "d"){
            std::cout << "Correct! With the young voter majority, all of these things happened!" << std::endl; }
            else {(std::cout << "INCORRECT! It is d, With the young voter majority, all of these things happened!" << std::endl);} 
            break;}
        std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;

    std::cout << "Press Enter to Continue";
    std::cin.ignore();
    while (std::cin.ignore()){
        std::cout << std::endl;
         std::cout << "Okay, last question: Which of these bills do you think affects you as a student through voting?" << std::endl;
            std::cout << "a: Financial Aid and Loans" << std::endl;
            std::cout << "b: Debt"<< std::endl;
            std::cout << "c: STEM pathway accessibility to female students"<< std::endl;
            std::cout << "d: Diversity in schools that still practice segregation"<< std::endl;
            std::cout << "e: All of the above"<< std::endl;
            std::string answer_four;
            std::cin >> answer_four;
            if (answer_four == "e"){
                std::cout << "CORRECT! These are actual current bills that are waiting to be passed. They effect the students." << std::endl;
                std::cout << "They can easily be passed if the students themselves voted in majority for these bills that effect them" << std::endl;}
                else { (std::cout << "INCORRECT. The answer is e. These are actual current bills that are waiting to be passed. They effect the students" <<std::endl);
                std::cout << "They can easily be passed if the students themselves voted in majority for these bills that effect them" << std::endl;}
                std::cout<<endl;
                std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;

                std::cout<<"After analyzing the data gathered and the surprising analytics it had, we hope this program influenced your perspective in some way" <<endl;
                std::cout<<"Excercising your right to vote in ANY environment is crucial in bringing change because it matters" <<endl;
                std::cout<<endl;
                std::cout<<"Our lives begin to end the day we become silent about things that matter” -MLK JR." <<endl;
            std::cout << "----------------------------------------------------------------------------------------------------" <<std::endl;
                break;}
    return 0;  
} 