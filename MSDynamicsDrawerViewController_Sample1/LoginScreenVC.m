//
//  LoginScreenVC.m
//  TestDynamicDrawer
//
//  Created by Saugat Gautam on 6/2/15.
//  Copyright (c) 2015 Saugat Gautam. All rights reserved.
//

#import "LoginScreenVC.h"
#import "AppDelegate.h"

@interface LoginScreenVC ()

@end

@implementation LoginScreenVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)btnLogin:(id)sender {
    AppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    [appDelegate setupDynamicsDrawerVC];
   
}
@end
