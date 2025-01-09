#include <gui/home_screen/HomeView.hpp>

extern uint16_t highestScore;

HomeView::HomeView()
{
	Unicode::snprintf(highScoreTextBuffer, HIGHSCORETEXT_SIZE, "%u", highestScore);
}

void HomeView::setupScreen()
{
    HomeViewBase::setupScreen();
}

void HomeView::tearDownScreen()
{
    HomeViewBase::tearDownScreen();
}
