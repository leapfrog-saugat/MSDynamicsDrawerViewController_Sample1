//
//  AppDelegate.h
//  MSDynamicsDrawerViewController_Example
//
//  Created by Saugat Gautam on 6/4/15.
//  Copyright (c) 2015 Saugat Gautam. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSDynamicsDrawerViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) MSDynamicsDrawerViewController *dynamicsDrawerViewController;

- (void)setupDynamicsDrawerVC;


@end

