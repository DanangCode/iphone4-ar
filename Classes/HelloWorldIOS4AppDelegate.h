//
//  HelloWorldIOS4AppDelegate.h
//  HelloWorldIOS4
//
//  Created by Paul Peelen on 2010-10-01.
//  Copyright 2010 All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldIOS4ViewController;

@interface HelloWorldIOS4AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloWorldIOS4ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloWorldIOS4ViewController *viewController;

@end

