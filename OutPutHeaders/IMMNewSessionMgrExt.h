/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IMMNewSessionMgrExt <NSObject>
@optional
-(void)onSessionUpgrade;
-(void)getComparer:(id*)comparer ForSelector:(int)selector;
-(void)onDeleteSessionOfUser:(id)user;
-(void)isUser:(id)user hasSpecalSessionInfo:(id*)info;
-(void)isMessage:(id)message Handled:(BOOL*)handled;
-(void)isUser:(id)user Handled:(BOOL*)handled;
-(void)onSessionTotalUnreadCountChange:(unsigned long)change;
-(void)onDeleteSession:(unsigned long)session withUser:(id)user;
-(void)onActiveUsrNameChange:(id)change curUsrName:(id)name;
-(void)onNewMsgArriving:(id)arriving NotifyFlag:(int)flag;
-(void)onSessionChanged:(id)changed;
-(void)onNeedReload;
-(void)onSessionRebuildEnd;
-(void)onSessionRebuildBegin;
@end

