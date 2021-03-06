/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString, NSMutableSet;

@interface FriendListMgr : MMService <PBMessageObserverDelegate, MMService> {
	NSMutableSet* m_downliadingPackageLists;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)onFriendListSynced:(id)synced;
-(BOOL)downloadFriendListForType:(int)type InScene:(int)scene;
-(void)clearFriendListForType:(int)type;
-(id)getFriendListForType:(int)type;
-(void)SaveFriendListArchive:(id)archive packageListArchive:(id)archive2;
-(id)LoadFriendListArchive:(id)archive;
-(id)getFriendListPath:(id)path;
@end

