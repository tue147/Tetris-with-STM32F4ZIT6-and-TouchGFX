/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void tickEvent()
    {
        // Override and implement this function in Screen1
    }
    virtual void MoveRight()
    {
        // Override and implement this function in Screen1
    }
    virtual void MoveLeft()
    {
        // Override and implement this function in Screen1
    }
    virtual void MoveDown()
    {
        // Override and implement this function in Screen1
    }
    virtual void Rotate()
    {
        // Override and implement this function in Screen1
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::Box coverLine;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::RepeatButtonTrigger >  >  down;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::RepeatButtonTrigger >  >  rotate;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::RepeatButtonTrigger >  >  right;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::RepeatButtonTrigger >  >  left;
    touchgfx::IconButtonStyle< touchgfx::ClickButtonTrigger >  MoveHome;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  RestartButton;
    touchgfx::TextAreaWithTwoWildcards score;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCOREBUFFER1_SIZE = 4;
    touchgfx::Unicode::UnicodeChar scoreBuffer1[SCOREBUFFER1_SIZE];
    static const uint16_t SCOREBUFFER2_SIZE = 4;
    touchgfx::Unicode::UnicodeChar scoreBuffer2[SCOREBUFFER2_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN1VIEWBASE_HPP
