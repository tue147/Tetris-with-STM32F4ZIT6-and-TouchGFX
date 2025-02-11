/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_240X320_POLY_ID));
    scalableImage1.setPosition(0, 0, 240, 320);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    coverLine.setPosition(0, 260, 240, 60);
    coverLine.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    coverLine.setAlpha(92);
    add(coverLine);

    down.setDelay(30);
    down.setInterval(30);
    down.setBoxWithBorderPosition(0, 0, 50, 26);
    down.setBorderSize(2);
    down.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(13, 153, 0), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 102, 7), touchgfx::Color::getColorFromRGB(51, 102, 153));
    down.setText(TypedText(T___SINGLEUSE_5SSK));
    down.setTextPosition(0, 8, 50, 26);
    down.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    down.setVisible(false);
    down.setAction(flexButtonCallback);
    down.setPosition(95, 290, 50, 26);
    add(down);

    rotate.setDelay(15);
    rotate.setInterval(15);
    rotate.setBoxWithBorderPosition(0, 0, 50, 26);
    rotate.setBorderSize(2);
    rotate.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(13, 153, 0), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 102, 7), touchgfx::Color::getColorFromRGB(51, 102, 153));
    rotate.setText(TypedText(T___SINGLEUSE_XAAA));
    rotate.setTextPosition(0, 8, 50, 26);
    rotate.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    rotate.setVisible(false);
    rotate.setAction(flexButtonCallback);
    rotate.setPosition(95, 257, 50, 26);
    add(rotate);

    right.setDelay(3);
    right.setInterval(6);
    right.setBoxWithBorderPosition(0, 0, 50, 26);
    right.setBorderSize(2);
    right.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(13, 153, 0), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 102, 7), touchgfx::Color::getColorFromRGB(51, 102, 153));
    right.setText(TypedText(T___SINGLEUSE_3919));
    right.setTextPosition(0, 8, 50, 26);
    right.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    right.setVisible(false);
    right.setAction(flexButtonCallback);
    right.setPosition(165, 270, 50, 26);
    add(right);

    left.setDelay(3);
    left.setInterval(6);
    left.setBoxWithBorderPosition(0, 0, 50, 26);
    left.setBorderSize(2);
    left.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(13, 153, 0), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 102, 7), touchgfx::Color::getColorFromRGB(51, 102, 153));
    left.setText(TypedText(T___SINGLEUSE_VOU5));
    left.setTextPosition(0, 8, 50, 26);
    left.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    left.setVisible(false);
    left.setAction(flexButtonCallback);
    left.setPosition(25, 270, 50, 26);
    add(left);

    MoveHome.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_HOME_20_20_59BCC9_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_HOME_FILLED_20_20_576BDE_SVG_ID));
    MoveHome.setIconXY(0, 0);
    MoveHome.setAction(flexButtonCallback);
    MoveHome.setPosition(220, 300, 20, 20);
    add(MoveHome);

    RestartButton.setBoxWithBorderPosition(0, 0, 140, 50);
    RestartButton.setBorderSize(5);
    RestartButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(204, 56, 51), touchgfx::Color::getColorFromRGB(212, 114, 44), touchgfx::Color::getColorFromRGB(224, 137, 22), touchgfx::Color::getColorFromRGB(245, 222, 49));
    RestartButton.setText(TypedText(T___SINGLEUSE_4HHI));
    RestartButton.setTextPosition(0, 10, 140, 50);
    RestartButton.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    RestartButton.setVisible(false);
    RestartButton.setAction(flexButtonCallback);
    RestartButton.setPosition(50, 110, 140, 50);
    add(RestartButton);

    score.setXY(6, 270);
    score.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    score.setLinespacing(0);
    touchgfx::Unicode::snprintf(scoreBuffer1, SCOREBUFFER1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2NLM).getText());
    score.setWildcard1(scoreBuffer1);
    touchgfx::Unicode::snprintf(scoreBuffer2, SCOREBUFFER2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TBKI).getText());
    score.setWildcard2(scoreBuffer2);
    score.resizeToCurrentText();
    score.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H5DI));
    add(score);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &right)
    {
        //MoveRight
        //When right clicked call virtual function
        //Call MoveRight
        MoveRight();
    }
    if (&src == &left)
    {
        //MoveLeft
        //When left clicked call virtual function
        //Call MoveLeft
        MoveLeft();
    }
    if (&src == &down)
    {
        //MoveDown
        //When down clicked call virtual function
        //Call MoveDown
        MoveDown();
    }
    if (&src == &rotate)
    {
        //Rotate
        //When rotate clicked call virtual function
        //Call Rotate
        Rotate();
    }
    if (&src == &MoveHome)
    {
        //ReturnHome
        //When MoveHome clicked change screen to Home
        //Go to Home with screen transition towards East
        application().gotoHomeScreenSlideTransitionEast();
    }
    if (&src == &RestartButton)
    {
        //GameOver
        //When RestartButton clicked change screen to Home
        //Go to Home with screen transition towards East
        application().gotoHomeScreenSlideTransitionEast();
    }
}

void Screen1ViewBase::handleTickEvent()
{
    //tickEvent
    //When every N tick call virtual function
    //Call tickEvent
    tickEvent();
}
