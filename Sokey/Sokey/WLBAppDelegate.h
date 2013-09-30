//
//  WLBAppDelegate.h
//  Sokey
//
//  Created by Chris Kim on 13. 9. 30..
//  Copyright (c) 2013년 Waklabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LoginViewController;

@interface WLBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) LoginViewController *loginViewController;

@end
