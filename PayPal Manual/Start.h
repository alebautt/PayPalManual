//
//  ViewController.h
//  PayPal Manual
//
//  Created by Alejandra B on 23/12/15.
//  Copyright © 2015 alebautista. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPay:(id)sender;

@end

