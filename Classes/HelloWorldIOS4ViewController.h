//
//  HelloWorldIOS4ViewController.h
//  HelloWorldIOS4
//
//  Created by Paul Peelen on 2010-10-01.
//  Copyright 2010 All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldIOS4ViewController : UIViewController {
	UILabel *myLabel;
	UIButton *myButton;
}

@property (nonatomic, retain) IBOutlet UILabel *myLabel;
@property (nonatomic, retain) IBOutlet UIButton *myButton;

- (IBAction)buttonPressed:(id)sender;

@end

