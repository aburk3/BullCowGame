// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else // Checking PlayerGuess
    {
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("You have Won!"));
            EndGame();
        }
        else
        {
            if (Input.Len() != HiddenWord.Len())
            {
                PrintLine(TEXT("The Hidden Word is %i characters long. \nYou have lost!"), HiddenWord.Len());
                EndGame();
            }
        }
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

void UBullCowCartridge::SetupGame()
{
    // Wecoming the Player
    PrintLine(TEXT("Welcome to the Bull Cows!"));

    HiddenWord = TEXT("cakes");
    Lives = 4;
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // Magic Number Remove!
    PrintLine(TEXT("Type in your guess. \nPress enter to continue...")); // Prompt Player for Guess
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}