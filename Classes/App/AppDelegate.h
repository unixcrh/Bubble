//
//  RainbowAppDelegate.h
//  Rainbow
//
//  Created by Luke on 8/25/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MainWindowController.h"
#import "LoginWindowController.h"
#import "AppURLHandler.h"
#import "AppGrowl.h"
@interface AppDelegate : NSObject <NSApplicationDelegate> {
	NSStatusItem *statusItem;
	LoginWindowController *loginWindow;
    MainWindowController *mainWindow;
	AppURLHandler *urlHandler;
	AppGrowl *growl;
	NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

-(void)openMainWindow;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@end
