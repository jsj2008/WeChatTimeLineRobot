/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, SKBuiltinString_t, NSString, BaseResponse;

@interface VerifyPswdResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* wtloginRspBuff;
@property(retain, nonatomic) NSString* authKey;
@property(retain, nonatomic) SKBuiltinBuffer_t* ksid;
@property(retain, nonatomic) SKBuiltinBuffer_t* a2Key;
@property(retain, nonatomic) SKBuiltinString_t* imgEncryptKey;
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) SKBuiltinBuffer_t* imgBuf;
@property(retain, nonatomic) SKBuiltinString_t* imgSid;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

