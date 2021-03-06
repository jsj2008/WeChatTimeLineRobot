/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class MMMaskHeadImageView, MMCPLabel, UIColor, CContact, UIButton, NSString, UIImageView;
@protocol NewChatRoomMemberItemViewDelegate;

@interface NewChatRoomMemberItemView : MMUIView {
	UIButton* m_viewMemberBtn;
	UIButton* m_addMemberBtn;
	UIButton* m_deleteMemberBtn;
	UIButton* m_actionBtn;
	MMMaskHeadImageView* m_headImageView;
	MMCPLabel* m_labelDisplayName;
	UIImageView* m_trackIcon;
	UIImageView* m_talkIcon;
	UIImageView* m_ownerIcon;
	UIButton* m_smallDeleteBtn;
	CContact* m_contact;
	CContact* m_groupContact;
	id<NewChatRoomMemberItemViewDelegate> m_delegate;
	SEL m_updateItemViewForDeleteSel;
	BOOL m_bDeleteStatus;
	unsigned long m_uiIndex;
	UIColor* m_textColor;
	float m_fLeftMargin;
	float m_fRightMargin;
	BOOL m_noDisplayName;
	NSString* m_cpKeyForNickname;
	NSString* m_cpKeyForChatRoomDisplayName;
	BOOL m_isNickNameUnsafe;
	BOOL m_isChatRoomDisplayNameUnsafe;
}
@property(readonly, assign) float m_fRightMargin;
@property(readonly, assign) float m_fLeftMargin;
@property(assign, nonatomic) unsigned long m_uiIndex;
@property(retain, nonatomic) CContact* m_groupContact;
@property(retain, nonatomic) CContact* m_contact;
@property(assign, nonatomic) __weak id<NewChatRoomMemberItemViewDelegate> m_delegate;
-(void).cxx_destruct;
-(BOOL)isDisplayNameUnsafe;
-(void)updateCPState;
-(void)setNoDisplayName:(BOOL)name;
-(id)initViewInChatRoomProfile;
-(void)updateContactItemSubview;
-(void)updateWithViewMemberBtnAtIndexEx:(unsigned)indexEx;
-(void)updateWithViewMemberBtnAtIndexEx:(unsigned)indexEx withColumn:(unsigned)column;
-(void)updateWithDeleteMemberBtnAtIndexEx:(unsigned)indexEx withColumn:(unsigned)column;
-(void)updateWithAddMemberBtnAtIndexEx:(unsigned)indexEx withColumn:(unsigned)column;
-(void)updateWithContactEx:(id)contactEx atIndex:(unsigned)index withColumn:(unsigned)column;
-(void)hiddenAllSubViews;
-(void)updateAtIndexEx:(unsigned)indexEx withColumn:(unsigned)column;
-(void)handleLongPressEx:(id)ex;
-(void)showTrackFlag;
-(void)showTalkFlag;
-(void)updateAdminIcon;
-(void)setTextColor:(id)color shadowColor:(id)color2;
-(void)updateItemViewForDelete:(BOOL)aDelete;
-(void)updateContactItemViewForDelete;
-(void)updateDeleteItemViewForDelete;
-(void)updateAddItemViewForDelete;
-(void)updateContact;
-(void)OnClickViewBtn;
-(void)OnClickDeleteBtn;
-(void)OnClickHeadImage;
@end

