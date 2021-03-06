/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMComponent.h"
#import "WeChat-Structs.h"
#import "ILocationThumbMgrExt.h"

@class MMUILabel, MMCDNImageView, NSString;

@interface MMFavImgComponent : MMComponent <ILocationThumbMgrExt> {
	MMCDNImageView* _cdnImg;
	MMUILabel* _appLabel;
	MMUILabel* _ocrLabel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)genLocationLabel:(id)label withPoi:(id)poi maxWidth:(float)width;
+(float)calHeightWithComData:(id)comData;
-(void).cxx_destruct;
-(void)dealloc;
-(void)OnLocationThumbMgrError:(int)error Task:(id)task;
-(void)OnUpdateLocationThumb:(id)thumb Task:(id)task;
-(void)onJumpToViewDetail:(id)viewDetail;
-(void)playSight:(id)sight;
-(id)cropImage:(id)image toFitSize:(CGSize)fitSize;
-(void)configImgView;
-(void)configContentLayout;
@end

