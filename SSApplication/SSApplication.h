//
//  SSApplication.h
//  SSApplication
//
//  Created by Jonathan Hersh on 8/31/13.
//  Copyright (c) 2013 Splinesoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSApplication : UIApplication <UIApplicationDelegate>

+ (instancetype) sharedApplication;

@property (nonatomic, strong) UIWindow *window;

#pragma mark - Setup

/**
 * Override me to specify the view controller set for the main window.
 */
- (UIViewController *) rootViewController;

/**
 * Set up your application at launch. This method runs on the main thread.
 *
 * The preferred way of setting up your application at launch time is
 * via `application:willFinishLaunchingWithOptions:`.
 * 
 * As of Xcode 4.6.3, default applications still use the old
 * `application:didFinishLaunchingWithOptions:`. For shame!
 */
- (void) willFinishLaunchingWithOptions:(NSDictionary *)options;

/**
 * This method is called asynchronously on a background queue
 * at the start of `application:willFinishLaunchingWithOptions:`.
 * Any long-running or background setup can go here.
 */
- (void) willLaunchBackgroundSetup;

#pragma mark - Events

/**
 * This method is called when the delegate receives application events.
 * With this function you can collapse a number of similar implementations into one place.
 *
 * Valid eventTypes include:
 *
 * UIApplicationWillEnterForegroundNotification
 * UIApplicationWillTerminateNotification
 * UIApplicationWillResignActiveNotification
 *
 * UIApplicationDidBecomeActiveNotification
 * UIApplicationDidEnterBackgroundNotification
 * UIApplicationDidReceiveMemoryWarningNotification
 */
- (void) receivedApplicationEvent:(NSString *)eventType;

@end
