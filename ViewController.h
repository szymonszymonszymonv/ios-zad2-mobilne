//
//  ViewController.h
//  projektprojektprojekt
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 com.iOSDevelopmentTutorials. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *surnameTextField;

-(IBAction)enter;

-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender;

@end

