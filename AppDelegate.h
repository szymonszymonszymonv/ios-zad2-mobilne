//
//  AppDelegate.h
//  projektprojektprojekt
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 com.iOSDevelopmentTutorials. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

