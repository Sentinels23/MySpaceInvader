//
//  GameScene.h
//  SKInvaders
//


//  Copyright (c) 2013 RepublicOfApps, LLC. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameScene : SKScene <SKPhysicsContactDelegate>

#pragma mark - Custom Type Definitions

//1
typedef enum InvaderType {
    InvaderTypeA,
    InvaderTypeB,
    InvaderTypeC
} InvaderType;

typedef enum InvaderMovementDirection {
    InvaderMovementDirectionRight,
    InvaderMovementDirectionLeft,
    InvaderMovementDirectionDownThenRight,
    InvaderMovementDirectionDownThenLeft,
    InvaderMovementDirectionNone
} InvaderMovementDirection;

typedef enum BulletType {
    ShipFiredBulletType,
    InvaderFiredBulletType
} BulletType;

//2
#define kInvaderSize CGSizeMake(24, 16)
#define kInvaderGridSpacing CGSizeMake(12, 12)
#define kInvaderRowCount 6
#define kInvaderColCount 6
//3
#define kInvaderName @"invader"
#define kShipSize CGSizeMake(30, 16)
#define kShipName @"ship"
#define kScoreHudName @"scoreHud"
#define kHealthHudName @"healthHud"
#define kKillStreakHudName @"killStreakHud"

#define kShipFiredBulletName @"shipFiredBullet"
#define kInvaderFiredBulletName @"invaderFiredBullet"
#define kBulletSize CGSizeMake(4, 8)

#define kMinInvaderBottomHeight 2 * kShipSize.height

#define kSceneBorderName @"sceneBorder"



@end
