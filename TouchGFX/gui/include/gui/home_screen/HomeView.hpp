#ifndef HOMEVIEW_HPP
#define HOMEVIEW_HPP

#include <gui_generated/home_screen/HomeViewBase.hpp>
#include <gui/home_screen/HomePresenter.hpp>
#include <cmsis_os2.h>

class HomeView : public HomeViewBase
{
public:
    HomeView();
    virtual ~HomeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void tickEvent();
private:
    void changeScreen(){
    	application().gotoScreen1ScreenCoverTransitionEast();
		osDelay(200);
	}
};

#endif // HOMEVIEW_HPP
