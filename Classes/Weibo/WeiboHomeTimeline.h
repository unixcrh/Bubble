//
//  WeiboHomeTimeline.h
//  Rainbow
//
//  Created by Luke on 9/30/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WeiboConnector.h"

@interface WeiboHomeTimeline : NSObject {
	WeiboConnector *weiboConnector;
	NSMutableArray *statusArray;
	
	NSNumber *lastReadStatusId;
	NSNumber *lastReceivedStatusId;
	//标记当前的tab是否处于激活状态。
	BOOL selected;
	BOOL unread;
}
-(id)initWithWeiboConnector:(WeiboConnector*)connector;

-(void)loadRecentHomeTimeline;
-(void)didLoadRecentHomeTimeline:(NSArray*)statuses;
-(void)loadNewerHomeTimeline;
-(void)didLoadNewerHomeTimeline:(NSArray*)statuses;
@property(nonatomic,assign) NSMutableArray *statusArray;
@property(nonatomic)BOOL selected;
@property(nonatomic)BOOL unread;
@end
