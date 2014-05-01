#include "Title.h"

USING_NS_CC;

Scene* Title::createScene()
{
    auto scene = Scene::create();
    auto layer = Title::create();
    scene->addChild(layer);
    return scene;
}

// on "init" you need to initialize your instance
bool Title::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    return true;
}

