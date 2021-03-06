/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCCardDataSeed : MMObject {
	NSString* _cardId;
	NSString* _cardExt;
	NSString* _fromUserName;
	unsigned long _fromScene;
	NSString* _chatName;
	NSString* _webUrl;
	unsigned long _statScene;
}
@property(assign, nonatomic) unsigned long statScene;
@property(retain, nonatomic) NSString* webUrl;
@property(retain, nonatomic) NSString* chatName;
@property(assign, nonatomic) unsigned long fromScene;
@property(retain, nonatomic) NSString* fromUserName;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* cardId;
-(void).cxx_destruct;
-(void)dealloc;
@end

