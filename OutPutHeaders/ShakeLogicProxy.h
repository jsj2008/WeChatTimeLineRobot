/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ShakeMgrExt.h"
#import "MMObject.h"

@class ShakePeopleLogicController, ShakeBeaconLogicController, ShakeMusicLogicController, ShakeTvLogicController, ShakeCardLogicController;
@protocol ShakeLogicProxyDelegate;

@interface ShakeLogicProxy : MMObject <ShakeMgrExt> {
	int m_logicType;
	id<ShakeLogicProxyDelegate> m_delegate;
	ShakePeopleLogicController* m_shakePeopleLogic;
	ShakeMusicLogicController* m_shakeMusicLogic;
	ShakeBeaconLogicController* m_shakeBeaconLogic;
	ShakeTvLogicController* m_shakeTvLogic;
	ShakeCardLogicController* m_shakeCardLogic;
}
-(void).cxx_destruct;
-(void)updateShakeCardLocation;
-(void)SetShakeList:(id)list andScene:(unsigned long)scene;
-(void)updateShakeLocation;
-(id)getMsgForState:(unsigned long)state;
-(BOOL)isShowBannerView;
-(void)shakeTerminate;
-(void)shakeReset;
-(void)shakeStop;
-(BOOL)shakeReport;
-(int)getShakeLogicType;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
-(void)onShakeMusicStorageChanged;
-(void)OnShakeShareCountChanged;
-(void)onShakePageStorageChanged;
-(void)onShakeStatusChanged;
-(void)onShakePeopleStorageChanged;
-(int)GetLogicTypeFromStatus;
@end
