#include <iostream>
#include <string>
using namespace std;
void check_reward(int reward) {
  if (reward <=0) {
    cout << "=================================================================="
            "==="
         << endl;
    cout << endl;
    cout << "                           GAME OVER                             " << endl;
    cout << endl;
    cout << "=================================================================="
            "==="
         << endl;
    exit(1);
  }
  if (reward == 1000000) {
    cout << "=================================================================="
            "==="
         << endl;
    cout << endl;
    cout << "CONGRATULATIONS!" << endl;
    cout << endl;
    cout << "YOU HAVE WON A $ 1,000,000" << endl;
    cout << endl;
    cout << "THANK YOU FOR JOINING THE GAMESHOW" << endl;
    cout << "=================================================================="
            "==="
         << endl;
    exit(1);
  }
}
int double_jeopardy(int count) {
    if (count==0){
        return 0;
}
  int j=-1;
  static int sum = 0;
  sum += count;
  if (sum == 3) {
     j=1;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "------------------------------STREAK------------------------------"
            "--"
         << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
  }
  return j;
}
int main() {
  int option;
  string name;
  int answer[20];
  int reward = 0;
  int i;
  cout << "=======================================" << endl;
  cout << "    WHO'S GOING TO BE A MILLIONAIRE  " << endl;
  cout << "=======================================" << endl;
  cout << endl;
  cout << "Welcome to the game show!\n\nWould you like to play for the chance "
          "to win a million dollars?"
       << endl;
  cout << endl;
  cout << "1. Yes!" << endl;
  cout << "2. Absolutely, yes!" << endl;
  cout << endl;
  cout << "Enter your choice: ";
  cin >> option;
  if (option != 1 && option != 2) {
    cout << "Not a valid option, but I'll take that as a yes!" << endl;
  }
  cout << endl;

  cout << "Let's get to know you.\n";
  cout << "Please enter your name: ";
  cin >> name;
  cout << endl;
  cout << "Here's what you need to know " << name << "." << endl;
  cout << endl;
  cout << "1. There are a total of 20 questions.\n2. The first 3 are warmup "
          "questions.\n3. The following questions will get progressively "
          "harder with their rewards increasing in amount.\n4. If you get a "
          "question wrong after the 10th question, you will be penalised $ "
          "1000 .\n5. If you get a question right three times in a row, your reward will be "
          "doubled for a correct answer.\n6. If your reward returns to less than or equal to $ 0, the gameshow will "
          "come to an end.\n7. At any point after the 10th question you will "
          "be allowed to leave with the accumulated cash reward. \n";
  cout
      << "====================================================================="
      << endl;
  cout << endl;
  cout << "Your initial reward is : $ " << reward << endl;
  cout << endl;
  cout
      << "====================================================================="
      << endl;
  cout << "Question 1. Which animal lays the largest eggs?" << endl;
  cout << endl;
  cout << "1. Ostrich\n2. Eagle\n3. Lizard\n4. None of the above " << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[0];

  while (answer[0] != 1 && answer[0] != 2 && answer[0] != 3 && answer[0] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[0];
  }
  cout << endl;
  switch (answer[0]) {
  case 1: {
    reward += 500;
    cout << "Correct!\nYou've won $ 500\nCurrent reward is : $ " << reward
         << endl;
    break;
  }

  case 2:
    cout << "Incorrect.\nYour reward remains at : $ " << reward << endl;
    break;
  case 3:
    cout << "Incorrect.\nYour reward remains at : $ " << reward << endl;
    break;
  case 4:
    cout << "Incorrect.\nYour reward remains at : $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 2. How many months have 31 days?" << endl;
  cout << endl;
  cout << "1. Eight\n2. Seven\n3. Six\n4. Ten" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[1];
  while (answer[1] != 1 && answer[1] != 2 && answer[1] != 3 && answer[1] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[1];
  }
  cout << endl;
  switch (answer[1]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2: {
    reward += 500;
    cout << "Correct!\nYou've won $ 500\nCurrent reward is: $ " << reward
         << endl;
    break;
  }

  case 3:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 3. Which is faster light or sound?" << endl;
  cout << endl;
  cout << "1. Light\n2. Sound" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[2];
  while (answer[2] != 1 && answer[2] != 2) {
    cout << "Please enter a valid option: ";
    cin >> answer[2];
  }
  cout << endl;
  switch (answer[2]) {
  case 1: {
    reward += 500;
    cout << "Correct!\nYou've won $ 500\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << endl;
  cout << "END OF WARMUP QUESTIONS" << endl;
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 4. The gas present in the stratosphere which "
          "filters out some of the sun's ultraviolet light and provides an "
          "effective shield against radiation damage to living things is: "
       << endl;
  cout << endl;
  cout << "1. Helium\n2. Ozone\n3. Oxygen\n4. Methane" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[3];
  while (answer[3] != 1 && answer[3] != 2 && answer[3] != 3 && answer[3] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[3];
  }
  cout << endl;
  switch (answer[3]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2: {
    reward += 1000;
    cout << "Correct!\nYou've won $ 1000\nCurrent reward is: $ " << reward
         << endl;
    break;
  }

  case 3:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 5. The inherited traits of an organism are controlled by:  "
       << endl;
  cout << endl;
  cout << "1. RNA molecules\n2. Nucleotides\n3. DNA molecules\n4. Enzymes"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[4];
  while (answer[4] != 1 && answer[4] != 2 && answer[4] != 3 && answer[4] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[4];
  }
  cout << endl;
  switch (answer[4]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3: {
    reward += 2000;
    cout << "Correct!\nYou've won $ 2000\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 6. The intersecting lines drawn on maps and globes are: "
       << endl;
  cout << endl;
  cout << "1. Latitudes\n2. Longitudes\n3. Geographic grids\n4. None of the "
          "above"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[5];
  while (answer[5] != 1 && answer[5] != 2 && answer[5] != 3 && answer[5] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[5];
  }
  cout << endl;
  switch (answer[5]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3: {
    reward += 2750;
    cout << "Correct!\nYou've won $ 2750\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 7. Which scientist discovered the radioactive element "
          "radium?"
       << endl;
  cout << endl;
  cout << "1. Isaac Newton\n2. Albert Einstein\n3. Benjamin Franklin\n4. Marie "
          "Curie"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[6];
  while (answer[6] != 1 && answer[6] != 2 && answer[6] != 3 && answer[6] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[6];
  }
  cout << endl;
  switch (answer[6]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 4: {
    reward += 3500;
    cout << "Correct!\nYou've won $ 3000\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 8. What did Galileo invent?" << endl;
  cout << endl;
  cout << "1. Barometer\n2. Pendulum clock\n3. Microscope\n4. Thermometer"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[7];
  while (answer[7] != 1 && answer[7] != 2 && answer[7] != 3 && answer[7] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[7];
  }
  cout << endl;
  switch (answer[7]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 4: {
    reward += 4750;
    cout << "Correct!\nYou've won $ 4750\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 9. Amnesty International is an organisation associated "
          "with which of the following fields?"
       << endl;
  cout << endl;
  cout << "1. Protection of cruelty to animals\n2. Environment protection\n3. "
          "Protection of human rights\n4. Protection of historic monuments"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[8];
  while (answer[8] != 1 && answer[8] != 2 && answer[8] != 3 && answer[8] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[8];
  }
  cout << endl;
  switch (answer[8]) {
  case 1:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3: {
    reward += 5000;
    cout << "Correct!\nYou've won $ 5000\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 10.	Which of the following is not a chief organ of the "
          "United Nations Organisations?"
       << endl;
  cout << endl;
  cout << "1. International Labour Organisation\n2. Security council\n3. "
          "International Court of Justice\n4. General assembly"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[9];
  while (answer[9] != 1 && answer[9] != 2 && answer[9] != 3 && answer[9] != 4) {
    cout << "Please enter a valid option" << endl;
    cout << "Your answer: ";
    cin >> answer[9];
  }
  cout << endl;
  switch (answer[9]) {
  case 1: {
    reward += 6500;
    cout << "Correct!\nYou've won $ 6500\nCurrent reward is: $ " << reward
         << endl;
    break;
  }
  case 2:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 3:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  case 4:
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    break;
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << endl;
  cout << "REMINDER:\n\n1. For each question you answer incorrectly, you will "
          "be "
          "penalised $ 5000 .\n2. If you get a question right three times in a "
          "row, your reward "
          "will be doubled for a correct answer.\n3. If your reward returns to less than or equal to $ 0, the gameshow "
          "comes will come to an end.\n4. Before every question you have the "
          "option to leave the show with the accumulated cash reward."
       << endl;
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 1) {
    cout << "Bring it on!" << endl;
  } else if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 11. The word “aristocracy” literally means power in the "
          "hands of whom?"
       << endl;
  cout << endl;
  cout << "1. The few\n2. The best\n3. The rich\n4. The barons" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[10];
  while (answer[10] != 1 && answer[10] != 2 && answer[10] != 3 &&
         answer[10] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[10];
  }
  cout << endl;
  switch (answer[10]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }

  case 2: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 10000;
    cout << "Correct!\nYou've won $ 10,000\nCurrent reward is: $ " << reward
         << endl;
    }  

    break;
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 4: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  }

  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 12. The first metal used by man was: " << endl;
  cout << endl;
  cout << "1. Iron\n2. Copper\n3. Gold\n4. Bronze" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[11];
  while (answer[11] != 1 && answer[11] != 2 && answer[11] != 3 &&
         answer[11] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[11];
  }
  cout << endl;
  switch (answer[11]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }

  case 2: {
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 20000;
    cout << "Correct!\nYou've won $ 20,000\nCurrent reward is: $ " << reward
         << endl;
    }  

    break;
  }
  case 3: {
     
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 4: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 13. In which decade was the first solid state integrated "
          "circuit demonstrated?"
       << endl;
  cout << endl;
  cout << "1. 1950s\n2. 1960s\n3. 1970s\n4. 1980s" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[12];
  while (answer[12] != 1 && answer[12] != 2 && answer[12] != 3 &&
         answer[12] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[12];
  }
  cout << endl;
  switch (answer[12]) {
  case 1: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 35000;
    cout << "Correct!\nYou've won $ 35,000\nCurrent reward is: $ " << reward
         << endl;
    }  

    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }

  case 4: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 14. Which city is the largest city in the USA" << endl;
  cout << endl;
  cout << "1. Dallas\n2. New York\n3. Los Angeles\n4. Anchorage" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[13];
  while (answer[13] != 1 && answer[13] != 2 && answer[13] != 3 &&
         answer[13] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[13];
  }
  cout << endl;
  switch (answer[13]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 4: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 50000;
    cout << "Correct!\nYou've won $ 50,000\nCurrent reward is: $ " << reward
         << endl;
    }  
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 15. Which Shakespeare play features the line “Neither a "
          "borrower nor a lender be?"
       << endl;
  cout << endl;
  cout << "1. Hamlet\n2. Macbeth\n3. Othello\n4. The Merchant of Venice"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[14];
  while (answer[14] != 1 && answer[14] != 2 && answer[14] != 3 &&
         answer[14] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[14];
  }
  cout << endl;
  switch (answer[14]) {
  case 1: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 75000;
    cout << "Correct!\nYou've won $ 75,000\nCurrent reward is: $ " << reward
         << endl;
    }  
    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 4: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 16. Who is largely responsible for breaking the German "
          "Enigma codes, created a test that provided a foundation for "
          "artificial intelligence? "
       << endl;
  cout << endl;
  cout << "1. Alan Turing\n2. Jeff Bezos\n3. Elon Musk\n4. Goerge Boole"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[15];
  while (answer[15] != 1 && answer[15] != 2 && answer[15] != 3 &&
         answer[15] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[15];
  }
  cout << endl;
  switch (answer[15]) {
  case 1: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 100000;
    cout << "Correct!\nYou've won $ 100,000\nCurrent reward is: $ " << reward
         << endl;
    }  
    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
 
case 3: {
  reward -= 5000;
  cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
  check_reward(reward);
  double_jeopardy(0);
  break;
}
case 4: {
  reward -= 5000;
  cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
  check_reward(reward);
  double_jeopardy(0);
  break;
}
}
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 17. Who among the following has received a Nobel Prize in "
          "literature in 1953? "
       << endl;
  cout << endl;
  cout << "1. Pablo Neruda\n2. Derek Walcott\n3. Ernest Hemingway\n4. Winston "
          "Churchill"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[16];
  while (answer[16] != 1 && answer[16] != 2 && answer[16] != 3 &&
         answer[16] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[16];
  }
  cout << endl;
  switch (answer[16]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 4: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else {
    reward += 175000;
    cout << "Correct!\nYou've won $ 175,000\nCurrent reward is: $ " << reward
         << endl;
    }  
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 18. From which author’s work did scientists take the word "
          "“quark”?"
       << endl;
  cout << endl;
  cout << "1. Lewis Carroll\n2. Edward Lear\n3. James Joyce\n4. Aldous Huxley"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[17];
  while (answer[17] != 1 && answer[17] != 2 && answer[17] != 3 &&
         answer[17] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[17];
  }
  cout << endl;
  switch (answer[17]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
    break;
  }
  case 3: {
    
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else{
        reward+=250000;
        cout << "Correct!\nYou've won $ 250,000\nCurrent reward is: $ " << reward
         << endl;
    }
    break;
  }
  case 4: {
    reward -=5000 ;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 19. Which of these islands was ruled by Britain from 1815 "
          "until 1864? "
       << endl;
  cout << endl;
  cout << "1. Crete\n2. Corsica\n3. Cyprus\n4. Corfu" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[18];
  while (answer[18] != 1 && answer[18] != 2 && answer[18] != 3 &&
         answer[18] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[18];
  }
  cout << endl;
  switch (answer[18]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  case 3: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  case 4: {
      
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else{
        reward+=300000;
        cout << "Correct!\nYou've won $ 300,000\nCurrent reward is: $ " << reward
         << endl;
    }
    break;
  }
  }
  cout << endl;
  cout << "Would you like to leave at this point?" << endl;
  cout << endl;
  cout << "1. No, I would like to continue\n2. Yes" << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> option;
  while (option != 1 && option != 2) {
    cout << "Please enter a valid option: ";
    cin >> option;
  }
  if (option == 2) {
    cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout << "We're sorry to see you go.\nThank you for playing & we hope to "
            "see you again.\nYour reward amounts to: $ "
         << reward << endl;
    cout << endl;
    cout << "=================================================================="
            "=="
         << endl;
    exit(1);
  }
  cout << endl;
  cout << "===================================================================="
       << endl;
  cout << "Question 20. Which battles took place between the Royal Houses of "
          "York and Lancaster?"
       << endl;
  cout << endl;
  cout << "1. Thirty Years War\n2. Hundred Years War\n3. War of the Roses\n4. "
          "English Civil War"
       << endl;
  cout << endl;
  cout << "Your answer: ";
  cin >> answer[19];
  while (answer[19] != 1 && answer[19] != 2 && answer[19] != 3 &&
         answer[19] != 4) {
    cout << "Please enter a valid option: ";
    cin >> answer[19];
  }
  switch (answer[19]) {
  case 1: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  case 2: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);
  }
  case 3: {
 
    i=double_jeopardy(1);
    if(i!=-1){
     reward*=2;
     cout << "Correct!\nYou've won $ "<<reward/2<<"\nCurrent reward is: $ " << reward
         << endl;
    }
    else{
        reward+=500000;
        cout << "Correct!\nYou've won $ 400,000\nCurrent reward is: $ " << reward
         << endl;
    }
    break;
  }
  case 4: {
    reward -= 5000;
    cout << "Incorrect.\nYour reward remains at: $ " << reward << endl;
    check_reward(reward);
    double_jeopardy(0);

  }
  }
  check_reward(reward);
  cout<<endl;
  if(reward!=0 || reward!=1000000){
     cout << "=================================================================="
            "=="
         << endl;
    cout << endl;
    cout<<"           THANK YOU FOR JOINING FOR THE GAMESHOW                   "<<endl;
    cout<<endl;
    cout << "=================================================================="
            "=="
         << endl;

  }
  return 0;
}
