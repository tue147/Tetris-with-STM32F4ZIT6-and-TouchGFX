/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoHomeScreenNoTransition();
    }

    // Home
    void gotoHomeScreenNoTransition();

    void gotoHomeScreenSlideTransitionEast();

    // Screen1
    void gotoScreen1ScreenCoverTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Home
    void gotoHomeScreenNoTransitionImpl();

    void gotoHomeScreenSlideTransitionEastImpl();

    // Screen1
    void gotoScreen1ScreenCoverTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
