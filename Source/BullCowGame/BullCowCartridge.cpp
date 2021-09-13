// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Wecoming the Player
    PrintLine(TEXT("Welcome to the Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic Number Remove!
    PrintLine(TEXT("Press enter to continue..."));

    // Setting Up Game
    HiddenWord = TEXT("cake"); // Set the HiddenWord
    // Set Lives

    // Pomprt Player for Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        PrintLine(TEXT("You have Lost!"));

    }
    // Check if isogram
    // Prompt to Guess Again
    // Check if right # of characters
    // Prompt to Guess Again

    // Remove the Life

    // Check If Fives > 0
    // If Yes, GuessAgain
    // Show Lives Left
    // If No Show GameOver and HiddenWord?
    // Prompt to Play Again, Press Enter To Play Again?
    // Check User Input
    // PlayAgain Or Quit
}