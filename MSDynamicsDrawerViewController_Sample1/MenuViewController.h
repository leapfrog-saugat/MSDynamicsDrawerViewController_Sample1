//
//  MenuViewController.h
//  TestDynamicDrawer
//
//  Created by Saugat Gautam on 6/1/15.
//  Copyright (c) 2015 Saugat Gautam. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSDynamicsDrawerViewController;

typedef NS_ENUM(NSUInteger, MSPaneViewControllerType) {
    MSPaneViewControllerTypeHome,
    MSPaneViewControllerTypeGreen,
    MSPaneViewControllerTypeRed
};

@interface MenuViewController : UIViewController

@property (nonatomic, assign) MSPaneViewControllerType paneViewControllerType;
@property (nonatomic, weak) MSDynamicsDrawerViewController *dynamicsDrawerViewController;

- (void)initialize;
- (IBAction)btnGreenScreenVC:(id)sender;
- (IBAction)btnRedScreenVC:(id)sender;
- (IBAction)btnHomeScreenVC:(id)sender;
- (void)transitionToViewController:(MSPaneViewControllerType)paneViewControllerType;

@end


