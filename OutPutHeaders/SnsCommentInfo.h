/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface SnsCommentInfo : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned deleteFlag;
@property(assign, nonatomic) unsigned long long commentId2;
@property(assign, nonatomic) unsigned long long replyCommentId2;
@property(assign, nonatomic) unsigned isNotRichText;
@property(retain, nonatomic) NSString* replyUsername;
@property(assign, nonatomic) int replyCommentId;
@property(assign, nonatomic) int commentId;
@property(assign, nonatomic) unsigned createTime;
@property(retain, nonatomic) NSString* content;
@property(assign, nonatomic) unsigned type;
@property(assign, nonatomic) unsigned source;
@property(retain, nonatomic) NSString* nickname;
@property(retain, nonatomic) NSString* username;
+(void)initialize;
@end
