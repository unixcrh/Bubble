//
//  AccountEditorController.h
//  Bubble
//
//  Created by Luke on 12/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@protocol AccountEditorControllerProtocol
-(void)saveAccount:(NSString*)username withPassword:(NSString*)password;
-(void)removeAccount:(NSString*)username;
@end


@interface AccountEditorController : NSObject {
	IBOutlet NSPanel *accountEditSheet;
	IBOutlet NSTextField *usernameField;
	IBOutlet NSSecureTextField *passwordField;
	id<AccountEditorControllerProtocol> delegate;
}
-(id)initWithDelegate:(id<AccountEditorControllerProtocol>)accountEditorControllerDelegate;
-(void)show:(NSWindow*)window;
-(void)setUsername:(NSString*)username;
-(void)setPassword:(NSString*)password;
-(IBAction)close:(id)sender;
-(IBAction)save:(id)sender;
@end
