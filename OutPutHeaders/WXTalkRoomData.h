/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSData, NSArray, NSString;

@interface WXTalkRoomData : XXUnknownSuperclass {
	BOOL isSlience;
	BOOL isNobodyTalking;
	int roomId;
	int roomMemberId;
	NSString* username;
	NSMutableArray* memberList;
	NSData* localCapInfo;
	unsigned long lastTryGetMicTime;
	unsigned long countDown;
	unsigned long lastHeartBeatTime;
	NSArray* unSpMemberList;
	unsigned long lastSendInviteTime;
	unsigned long inviteCountWithinOneMin;
	unsigned long curGetMicEventID;
	NSMutableArray* _addrList;
	long long roomKey;
	long long micId;
	long long curHoldMicMemberId;
}
@property(retain, nonatomic) NSMutableArray* addrList;
@property(assign, nonatomic) unsigned long curGetMicEventID;
@property(assign, nonatomic) unsigned long inviteCountWithinOneMin;
@property(assign, nonatomic) unsigned long lastSendInviteTime;
@property(assign, nonatomic) BOOL isNobodyTalking;
@property(retain, nonatomic) NSArray* unSpMemberList;
@property(assign, nonatomic) BOOL isSlience;
@property(assign, nonatomic) unsigned long lastHeartBeatTime;
@property(assign, nonatomic) unsigned long countDown;
@property(assign, nonatomic) unsigned long lastTryGetMicTime;
@property(retain, nonatomic) NSData* localCapInfo;
@property(assign, nonatomic) long long curHoldMicMemberId;
@property(assign, nonatomic) long long micId;
@property(retain, nonatomic) NSMutableArray* memberList;
@property(retain, nonatomic) NSString* username;
@property(assign, nonatomic) int roomMemberId;
@property(assign, nonatomic) long long roomKey;
@property(assign, nonatomic) int roomId;
-(void).cxx_destruct;
-(id)GetRoomContactList;
-(BOOL)isValidKey;
-(void)reset;
-(void)SetRoomKey:(long long)key;
-(void)SetRoomId:(int)anId;
-(void)dealloc;
-(id)init;
@end

