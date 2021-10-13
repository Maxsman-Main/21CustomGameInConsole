#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int RANDOM_SEED = 200;

char* cards[52] = { " ____________ \n"
                    "|            |\n"
                    "| 2          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          2 |\n"
                    "|____________|",      
                    " ____________ \n"
                    "|            |\n"
                    "| 3          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          3 |\n"
                    "|____________|",
                    " ____________ \n"
                    "|            |\n"
                    "| 4          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          4 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 5          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          5 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 6          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          6 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 7          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          7 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 8          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          8 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 9          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          9 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "|10          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          10|\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| V          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          V |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| D          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          D |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| K          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          K |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| A          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Spades   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          A |\n"
                    "|____________|\n",      
                     " ____________ \n"
                    "|            |\n"
                    "| 2          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          2 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 3          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          3 |\n"
                    "|____________|\n",
                    " ____________ \n"
                    "|            |\n"
                    "| 4          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          4 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 5          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          5 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 6          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          6 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 7          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          7 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 8          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          8 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 9          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          9 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "|10          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          10|\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| V          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          V |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| D          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          D |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| K          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          K |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| A          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Hearts   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          A |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 2          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          2 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 3          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          3 |\n"
                    "|____________|\n",
                    " ____________ \n"
                    "|            |\n"
                    "| 4          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          4 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 5          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          5 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 6          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          6 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 7          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          7 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 8          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          8 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 9          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          9 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "|10          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          10|\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| V          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          V |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| D          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          D |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| K          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          K |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| A          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|    Clubs   |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          A |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 2          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          2 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 3          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          3 |\n"
                    "|____________|\n",
                    " ____________ \n"
                    "|            |\n"
                    "| 4          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          4 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 5          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          5 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 6          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          6 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 7          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          7 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 8          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          8 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| 9          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          9 |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "|10          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          10|\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| V          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          V |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| D          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          D |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| K          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          K |\n"
                    "|____________|\n",      
                    " ____________ \n"
                    "|            |\n"
                    "| A          |\n"
                    "|            |\n"
                    "|            |\n"
                    "|   Dimonds  |\n"
                    "|            |\n"
                    "|            |\n"
                    "|          A |\n"
                    "|____________|\n" 
                    };


typedef struct Card{
  int value;
  char* name;
}Card;

typedef struct Player{
  Card* pool;
  int poolSize;
  int score;
}Player;


typedef struct Deck{
  Card* data;
  Card* head;
}Deck;

void swapCards(int firstIndex, int secondIndex, Deck* deck) {
  Card temp = deck->data[firstIndex];
  deck->data[firstIndex] = deck->data[secondIndex];
  deck->data[secondIndex] = temp;
}

void shuffleDeck(Deck* deck) {
  for(int i = 51; i >= 0; i--){
    srand(time(NULL) + RANDOM_SEED);
    int j = (rand() + RANDOM_SEED) % 52;
    swapCards(i, j, deck);
    RANDOM_SEED += 1;
  }
}

Card makeCard(int index, int nameIndex){
  Card newCard;
  newCard.value = index + 2;
  newCard.name = cards[nameIndex];
  return newCard;
}

Deck makeDeck(){
  Deck deck;
  deck.data = (Card*)malloc(sizeof(Card) * 52);
  int index = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      *(deck.data + index) = makeCard(j, index);
      index += 1;
    }
  }
  deck.head = deck.data + 51;
  return deck;
}

Player makePlayer(){
  Player player;
  player.score = 0;
  player.poolSize = 0;
  player.pool = (Card*)malloc(8 * sizeof(Card));
  return player;
}

void draw(Player* dealer, Player* player){
  system("clear");
  printf("+----------------------------------------------------------------------------------+\n");
  printf("Dealer: \n");
  for(int j = 0; j < 10; j++){
    for(int i = 0; i < dealer->poolSize; i++){
      for(int k = j * 15; k <= 15 * j + 13; k++){
        printf("%c", dealer->pool[i].name[k]);
      }
      printf(" ");
    }
    printf("\n");
  }
  printf("Player: \n");
  for(int j = 0; j < 10; j++){
    for(int i = 0; i < player->poolSize; i++){
      for(int k = j * 15; k <= 15 * j + 13; k++){
        printf("%c", player->pool[i].name[k]);
      }
      printf(" ");
    }
    printf("\n");
  }
  printf("+----------------------------------------------------------------------------------+\n");
}

void getCard(Player* player, Deck* deck){
  player->pool[player->poolSize] = *(deck->head);
  (*(player)).score += deck->head->value;
  deck->head -= 1;
  (*(player)).poolSize += 1;  
}

int makeStep(Player* dealer, Player* player, Deck* deck){
  printf("Do you want to get card? \n");
  printf("1 - Yes, 0 - No \n");
  int choise;
  scanf("%d", &choise);
  if(choise == 1){
    getCard(player, deck);
    if(dealer->score < 17){
      getCard(dealer, deck);
    }
  }
  else if (choise == 0){
    while(dealer->score < 17){
      sleep(1);
      getCard(dealer, deck);
      draw(dealer, player);
    }
    return 0;
  }
  draw(dealer, player);
  return 1;
}

void printStat(Player player, Player dealer){
    printf("Dealer score: ");
    printf("%d\n", dealer.score);
    printf("Player score: ");
    printf("%d\n", player.score);
}

void checkWiner(Player player, Player dealer){
  if(player.score > 21 && dealer.score > 21){
    if(player.score < dealer.score){
      printf("Player is win!\n");
      printStat(player, dealer);
    }
    else{
      printf("Dealer is win!\n");
      printStat(player, dealer);
    }
  }
  else if(player.score > 21){
    printf("Dealer is win\n");
    printStat(player, dealer);
  }
  else if(dealer.score > 21){
    printf("Player is win\n");
    printStat(player, dealer);
  }
  else{
    if(player.score > dealer.score){
      printf("Player is win\n");
      printStat(player, dealer);
    }
    else{
      printf("Dealer is win\n");
      printStat(player, dealer);
    }
  }
}

int makeNewGame(){
  while(1){
    printf("Do you want play again?\n");
    int choice;
    printf("1 - Yes, 2 - No\n");
    scanf("%d", &choice);
    system("clear");
    if(choice == 1){
      return 1;
    }
    else if(choice == 0){
      return 0;
    }
  }
}

int main(void) {
  while(1){
    Deck deck = makeDeck();
    shuffleDeck(&deck);
    Player player = makePlayer();
    Player dealer = makePlayer();
    while(makeStep(&dealer, &player, &deck) && player.poolSize != 8){}
    system("clear");
    checkWiner(player, dealer);
    if(!makeNewGame()){
     break; 
    }
  }
  return 0;
}