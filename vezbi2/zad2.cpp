#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

// Define a Card struct with a rank and suit
struct Card {
    std::string rank;
    std::string suit;
};

int main() {
    // Create a vector to hold the deck of cards
    std::vector<Card> deck;

    // Add cards to the deck
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    std::string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            deck.push_back(Card{rank, suit});
        }
    }

    // Add the jokers to the deck
    deck.push_back(Card{"Joker", ""});
    deck.push_back(Card{"Joker", ""});

    // Print the deck in order
    std::cout << "Deck in order:" << std::endl;
    for (const auto& card : deck) {
        std::cout << card.rank << " of " << card.suit << std::endl;
    }

    // Shuffle the deck
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));

    // Print the shuffled deck
    std::cout << "\nDeck after shuffling:" << std::endl;
    for (const auto& card : deck) {
        std::cout << card.rank << " of " << card.suit << std::endl;
    }

    return 0;
}
/* Kodot gi pechati kartite po redosled so povtoruvanje na sekoja karta vo shpilot i pechatenje na nejzinite rank i suit, 
potoa so random seed generator koj go koristi tekovnoto vreme se mesha shpilot i se pechatat izmeshanite karti*/ 
