#include "scoreboard.h"
#include "ui_scoreboard.h"

scoreboard::scoreboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreboard)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(released()), this, SLOT(on_buttonBox_clicked()));
    ui->scoreText->setPlaceholderText("333");


    scores = data.getHighScore();
    if (scores.size() >= 3) {
        // Iterate through the first three high scores
        for (int i = 0; i < 3; i++) {
            switch (i) {
            case 1: firstScore = scores[i];
                break;
            case 2: secondScore = scores[i];
                break;
            case 3: thirdScore = scores[i];
                break;
            default: break;  // Just to be safe
            }
        }

        // Combining all three high scores as one QString
        scoreData = QString::fromStdString(to_string(firstScore) + "\n" +
                to_string(secondScore) + "\n" +
                to_string(thirdScore));

        ui->scoreText->setPlainText(scoreData);
    }
}

scoreboard::~scoreboard()
{
    delete ui;
}


///
/// \brief scoreboard::on_buttonBox_clicked
/// Handler when the cancelButton is clicked
///
void scoreboard::on_buttonBox_clicked()
{
    this->close();
}
