/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PrtlBase.h"

@class COpenBottleWrap;

@interface COpenBottlePrtl : PrtlBase {
	COpenBottleWrap* m_wrapOpenBottle;
}
@property(retain, nonatomic) COpenBottleWrap* m_wrapOpenBottle;
-(void).cxx_destruct;
-(BOOL)HandleResp:(void*)resp;
-(void)InitReq:(void*)req;
-(void)dealloc;
-(id)init;
@end

