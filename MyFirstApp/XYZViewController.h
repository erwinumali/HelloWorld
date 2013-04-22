//
//  XYZViewController.h
//  MyFirstApp
//
//  Created by Erwin Dennis Umali on 4/18/13.
//  Copyright (c) 2013 Erwin Dennis Umali. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZViewController : UIViewController
<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)changeGreeting:(id)sender;

@property (copy, nonatomic) NSString *userName;
@end
