#include <gui/home_screen/HomeView.hpp>
#include <cmsis_os2.h>

extern uint16_t highestScore;
extern osMessageQueueId_t myQueue01Handle;

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

void HomeView::tickEvent()
{
	if (osMessageQueueGetCount(myQueue01Handle) > 0){
		changeScreen();
	}
}
