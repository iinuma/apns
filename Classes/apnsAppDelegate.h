//
//  apnsAppDelegate.h
//  apns
//
//  Created by admin on 09/12/31.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface apnsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UILabel *devToken;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UILabel *devToken;
@end

