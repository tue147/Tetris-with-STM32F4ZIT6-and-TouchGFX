/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HOMEVIEWBASE_HPP
#define HOMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/home_screen/HomePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class HomeViewBase : public touchgfx::View<HomePresenter>
{
public:
    HomeViewBase();
    virtual ~HomeViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void tickEvent()
    {
        // Override and implement this function in Home
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
    touchgfx::ButtonWithLabel Start;
    touchgfx::TextArea GameTitle;
    touchgfx::TextAreaWithOneWildcard highScoreText;

    /*
     * Wildcard Buffers
     */
    static const uint16_t HIGHSCORETEXT_SIZE = 4;
    touchgfx::Unicode::UnicodeChar highScoreTextBuffer[HIGHSCORETEXT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<HomeViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // HOMEVIEWBASE_HPP
