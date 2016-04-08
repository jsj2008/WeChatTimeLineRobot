/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MsgImgFullScreenWindowDelegate.h"
#import "MultiSelectContollerDelegate.h"
#import "MsgDataSaveLogicDelegate.h"
#import "MsgFastBrowseViewDelegate.h"
#import "MMUIViewController.h"
#import "MsgImgDataLogicDelegate.h"
#import "IMsgExt.h"

@class CMessageWrap, MsgDataSaveLogic, UIView, NSString, MultiSelectController, UIButton, MsgImgFullScreenWindow, NSMutableSet, ViewAppMsgController, MsgFastBrowseView, MsgImgDataLogic;
@protocol MsgImgFastBrowseViewControllerDelegate;

@interface MsgImgFastBrowseViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgFastBrowseViewDelegate, MultiSelectContollerDelegate, MsgImgDataLogicDelegate, IMsgExt, MsgDataSaveLogicDelegate> {
	id<MsgImgFastBrowseViewControllerDelegate> m_delegate;
	MsgFastBrowseView* m_msgFastBrowseView;
	MsgImgFullScreenWindow* m_imgFullScreenWnd;
	UIView* m_filterFooterView;
	UIButton* m_forwardBtn;
	UIButton* m_favBtn;
	UIButton* m_deleteBtn;
	UIButton* m_saveBtn;
	BOOL m_bEditing;
	MultiSelectController* m_multiSelectController;
	MsgImgDataLogic* m_dataLogic;
	BOOL m_bHasLoadData;
	ViewAppMsgController* m_viewAppMsgController;
	MsgDataSaveLogic* m_MsgDataSaveLogic;
	NSMutableSet* m_arrMsgExpired;
	BOOL m_bHighlightCurrentImage;
	CMessageWrap* m_curMsgWrap;
	NSString* m_nsChatName;
	float m_scrollOffset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bHighlightCurrentImage;
@property(assign, nonatomic) float m_scrollOffset;
@property(retain, nonatomic) NSString* m_nsChatName;
@property(retain, nonatomic) CMessageWrap* m_curMsgWrap;
@property(assign, nonatomic) __weak id<MsgImgFastBrowseViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)OnDelMsg:(id)msg MsgWrap:(id)wrap;
-(void)msgFastBrowseView:(id)view didChangeCheckMarkTo:(BOOL)to withMsgInfo:(id)msgInfo;
-(BOOL)msgFastBrowseView:(id)view willChangeCheckMarkTo:(BOOL)to withMsgInfo:(id)msgInfo;
-(void)onSquareImgClicked:(id)clicked withInfo:(id)info withOffset:(unsigned long)offset;
-(id)messageWrapsForMsgFastBrowseView:(id)msgFastBrowseView;
-(id)expiredMsgForMsgFastBrowseView:(id)msgFastBrowseView;
-(void)onMsgFastBrowseViewGetMoreMsg:(id)msg Last:(BOOL)last Next:(BOOL)next;
-(void)onMsgImgWindowWillHideToMsg:(id)onMsgImgWindow;
-(void)onImgMsgLocate:(id)locate vc:(id)vc;
-(BOOL)isFromMsgContentView;
-(void)onForwardMessageOK;
-(void)onMultiOprationComplete;
-(id)getCurrentViewController;
-(void)PreviewImage:(id)image MsgSquareThumb:(id)thumb;
-(void)onCancel;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)initFilterFooterView;
-(void)updateFilterFooterView;
-(id)createBtnWithImg:(id)img HLImg:(id)img2 sel:(SEL)sel;
-(void)onMsgDataSaveLogicEnd:(BOOL)end expiredMsgs:(id)msgs;
-(void)onSave;
-(void)onDel;
-(void)doDelete;
-(void)onFav;
-(void)onForward;
-(id)getSelectArray;
-(void)onEdit;
-(void)viewDidAppear:(BOOL)view;
-(void)updateEditView;
-(void)addFilterFooterView:(id)view;
-(void)initView;
-(void)initNavBar;
-(id)getMsgFrom:(id)from;
-(void)onMsgImgDataLogicLoadOKWithLast:(id)last Next:(id)next;
-(BOOL)onMsgImgDataMatch:(id)match;
-(void)initData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithMsgWrap:(id)msgWrap;
@end
