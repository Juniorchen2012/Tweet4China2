//
//  HSUTabController.h
//  Tweet4China
//
//  Created by Jason Hsu on 2/28/13.
//  Copyright (c) 2013 Jason Hsu <support@tuoxie.me>. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSUTabController : UITabBarController

- (void)showUnreadIndicatorOnTabBarItem:(UITabBarItem *)tabBarItem;
- (void)hideUnreadIndicatorOnTabBarItem:(UITabBarItem *)tabBarItem;
- (BOOL)hasUnreadIndicatorOnTabBarItem:(UITabBarItem *)tabBarItem;

@end
