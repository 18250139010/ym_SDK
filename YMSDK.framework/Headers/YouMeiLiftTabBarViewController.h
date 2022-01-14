//
//  BasedUsingTabBarVC.h
//  YM_AxcAE_TabBar
//
//  Created by Axc on 2018/6/2.
//  Copyright © 2018年 AxcLogo. All rights reserved.
//

#import "YM_BaseTabBar.h"


@interface YouMeiLiftTabBarViewController : YM_BaseTabBar
@property (nonatomic, copy) NSString *appKey;

-(void)setNetworkAppKey:(NSString *)appKey thirdUserId:(NSString *)thirdID mobileID:(NSString *)mobileID nickName:(NSString *)nickName avatarUrl:(NSString *)avatarUrl tbNumber:(NSString *)tbNumber;
@end
