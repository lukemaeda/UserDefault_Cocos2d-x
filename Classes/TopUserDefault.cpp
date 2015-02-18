//
//  TopUserDefault.cpp
//  UserDefault
//
//  Created by MAEDAHAJIME on 2015/02/19.
//
//

#include "TopUserDefault.h"

USING_NS_CC;     // cocos2d

// _/_/_/ コンストラクタ プロパティー _/_/_/
TopUserDefault::TopUserDefault()
{
    
}

// MainScene デストラクタで解放 メモリーリークを防ぐ
TopUserDefault::~TopUserDefault()
{
    
}

// createSceneはLayerをSceneに貼り付けて返すクラスメソッドです。
// 自分自身(TopUserDefault)を生成し、空のSceneに貼り付けて返す簡単な処理を行っているだけです。
// これでほかのシーンからの遷移が楽に行えます。
Scene* TopUserDefault::createScene()
{
    auto scene = Scene::create();
    auto layer = TopUserDefault::create();
    scene->addChild(layer);
    
    return scene;
}

bool TopUserDefault::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    //////////////////////////////////////////////////
    
    // 画面サイズサイズを取得
    auto winSize = Director::getInstance()->getVisibleSize();
    // バックグランドカラー
    auto background = LayerColor::create(Color4B::BLUE,
                                         winSize.width,
                                         winSize.height);
    // バックグランドカラー 第2引数は表示順
    this->addChild(background, 0);
    
    //////////////////////////////////////////////////
    
    // UserDefault 保存
    auto user = cocos2d::UserDefault::getInstance();
    user->setStringForKey("name", "綾瀬　はるか");
    user->setIntegerForKey("hp", 100);
    user->setBoolForKey("connected-facebook", true);
    user->setFloatForKey("height", 172.5);
    user->setDoubleForKey("weight", 50.0);
    
    
    // UserDefault 読込　LOG表示
    auto userRead = cocos2d::UserDefault::getInstance();
    log("name: %s", userRead->getStringForKey("name").c_str());
    log("hp: %d", userRead->getIntegerForKey("hp"));
    log("bool: %d", userRead->getBoolForKey("connected-facebook"));
    log("height: %f", userRead->getFloatForKey("height"));
    log("weight: %f", userRead->getDoubleForKey("weight"));
    
    
    // UserDefault 読込
    UserDefault* userDef = UserDefault::getInstance();
    // string型
    auto string = userDef->getStringForKey("name");
    // int型
    auto _int = userDef->getIntegerForKey("hp");
    // bool型
    auto _bool = userDef->getBoolForKey("connected-facebook");
    // float型
    auto _float = userDef->getFloatForKey("height");
    // double型
    auto _double = userDef->getDoubleForKey("weight");
    
    //////////////////////////////////////////////////
    // 画面表示
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // string型 文字（名前）
    auto label = Label::createWithSystemFont("UserDefault", "arial", 70);
    // ラベルの色:ホワイト
    label->setColor(Color3B::WHITE);
    //画面の中央に表示
    label->setPosition(Point(winSize.width/2, winSize.height/1.2));
    // Layerにラベルを追加
    this->addChild(label);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // Label::createWithSystemFont("文字列", "フォントの種類", 文字サイズ);
    // string型 文字（名前）
    auto label01 = Label::createWithSystemFont("string型", "arial", 70);
    // ラベルの色:ホワイト
    label01->setColor(Color3B::WHITE);
    //画面の中央に表示
    label01->setPosition(Point(winSize.width/2 - 300, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label01);
    
    // UserDefault
    // Label::createWithSystemFont("文字列", "フォントの種類", 文字サイズ);
    // string型 文字（名前）
    auto label1 = Label::createWithSystemFont(string, "arial", 70);
    // ラベルの色:ホワイト
    label1->setColor(Color3B::WHITE);
    //画面の中央に表示
    label1->setPosition(Point(winSize.width/2 + 200, winSize.height/1.5));
    // Layerにラベルを追加
    this->addChild(label1);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // int型 数字
    auto label02 = Label::createWithSystemFont("int型", "arial", 70);
    // ラベルの色:ホワイト
    label02->setColor(Color3B::WHITE);
    //画面の中央に表示
    label02->setPosition(Point(winSize.width/2 - 300, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label02);
    
    // UserDefault
    // int型 数字
    auto label2 = Label::createWithSystemFont(StringUtils::toString(_int),"arial", 70);
    // ラベルの色:ホワイト
    label2->setColor(Color3B::WHITE);
    //画面の中央に表示
    label2->setPosition(Point(winSize.width/2 + 200, winSize.height/1.9));
    // Layerにラベルを追加
    this->addChild(label2);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // bool型
    auto label03 = Label::createWithSystemFont("bool型", "arial", 70);
    // ラベルの色:ホワイト
    label03->setColor(Color3B::WHITE);
    //画面の中央に表示
    label03->setPosition(Point(winSize.width/2 - 300, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label03);
    
    // UserDefault
    // bool型
    auto label3 = Label::createWithSystemFont(StringUtils::toString(_bool),"arial", 70);
    // ラベルの色:ホワイト
    label3->setColor(Color3B::WHITE);
    //画面の中央に表示
    label3->setPosition(Point(winSize.width/2 + 200, winSize.height/2.5));
    // Layerにラベルを追加
    this->addChild(label3);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // float型 身長
    auto label04 = Label::createWithSystemFont("float型", "arial", 70);
    // ラベルの色:ホワイト
    label04->setColor(Color3B::WHITE);
    //画面の中央に表示
    label04->setPosition(Point(winSize.width/2 - 300, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label04);
    
    // UserDefault
    // float型 身長
    auto label4 = Label::createWithSystemFont(StringUtils::toString(_float),"arial", 70);
    // ラベルの色:ホワイト
    label4->setColor(Color3B::WHITE);
    //画面の中央に表示
    label4->setPosition(Point(winSize.width/2 + 200, winSize.height/3.5));
    // Layerにラベルを追加
    this->addChild(label4);
    
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    // double型 体重
    auto label05 = Label::createWithSystemFont("double型", "arial", 70);
    // ラベルの色:ホワイト
    label05->setColor(Color3B::WHITE);
    //画面の中央に表示
    label05->setPosition(Point(winSize.width/2 - 300, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label05);
    
    // UserDefault
    // double型 体重
    auto label5 = Label::createWithSystemFont(StringUtils::toString(_double),"arial", 70);
    // ラベルの色:ホワイト
    label5->setColor(Color3B::WHITE);
    //画面の中央に表示
    label5->setPosition(Point(winSize.width/2 + 200, winSize.height/6));
    // Layerにラベルを追加
    this->addChild(label5);
    
    //////////////////////////////////////////////////
    
    return true;
}
