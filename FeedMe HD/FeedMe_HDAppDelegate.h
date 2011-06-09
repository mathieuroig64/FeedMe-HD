//
//  FeedMe_HDAppDelegate.h
//  FeedMe HD
//
//  Created by ROIG Mathieu on 6/9/11.
//  Copyright 2011 Apocope. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FeedMe_HDViewController;

@interface FeedMe_HDAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet FeedMe_HDViewController *viewController;

@end
