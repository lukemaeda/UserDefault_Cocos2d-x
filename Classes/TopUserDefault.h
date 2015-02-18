//
//  TopUserDefault.h
//  UserDefault
//
//  Created by MAEDAHAJIME on 2015/02/19.
//
//

#ifndef __UserDefault__TopUserDefault__
#define __UserDefault__TopUserDefault__

#include "cocos2d.h"

USING_NS_CC;

class TopUserDefault :public Layer
{
protected:
    // コンストラクタ
    TopUserDefault();
    // デストラクタ
    virtual ~TopUserDefault();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(TopUserDefault);
};

#endif /* defined(__UserDefault__TopUserDefault__) */
