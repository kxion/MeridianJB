//
//  ViewController.h
//  Meridian
//
//  Created by Ben Sparkes on 22/12/2017.
//  Copyright © 2017 Ben Sparkes. All rights reserved.
//

#import "v0rtex.h"
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@end

task_t tfp0;
uint64_t kslide;
uint64_t kernel_base;
uint64_t kern_ucred;
uint64_t kernprocaddr;

bool check_for_jailbreak(void);
void log_message(NSString *message);