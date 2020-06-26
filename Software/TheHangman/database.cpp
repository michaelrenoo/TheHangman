#include "database.h"

database::database()
{
    // TODO: Declare high scores


    // TODO: Declare achieved score in game


    // TODO: Declare database for words that can be played
    textDatabase.insert(0, "MASK");
    textDatabase.insert(1, "VIRUS");
    textDatabase.insert(2, "SANITIZER");
    textDatabase.insert(3, "LOCKDOWN");
    textDatabase.insert(4, "PERSONAL PROTECTIVE EQUIPMENT");
    textDatabase.insert(5, "WHO");

    hintDatabase.insert(0, "Something to cover mouth and nose");
    hintDatabase.insert(1, "Submicroscopic infectious agent that replicates only inside the living cells of an organism (wikipedia)");
    hintDatabase.insert(2, "Substance (normally in form of liquid) which is used to decrease infection caused by germs");
    hintDatabase.insert(3, "Measure for peaple to stay where they are due to risks to themselves or others if their mobility if not limited");
    hintDatabase.insert(4, "Equipment designed to protect the wearer's body from injury or infection (wikipedia)");
    hintDatabase.insert(5, "A specialized agency of the United Nations responsible for international public health (taken from its official website)");


    //Declare a timer
    timer.setInterval(60000 + getRandomText().count()*10000);

    // TODO: Declare any other objects related to the database


    // TODO: Initialise all objects and its connections to each other


}

QString database::getRandomText()
{
    int randomNumber = rand() % textDatabase.count()+1; //https://gist.github.com/fffaraz/b48dff1b4d23afe1573e
    return  textDatabase.takeAt(randomNumber);
}
