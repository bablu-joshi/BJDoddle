//
//  ViewController.h
//  BJDoodle
//
//  Created by qainfotech on 6/2/15.
//  Copyright (c) 2015 Bablu Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PJRSignatureView.h"

@interface ViewController : UIViewController
{
 PJRSignatureView *scratchPad;
}
- (IBAction)clearImageBtnPressed:(id)sender;

@end

