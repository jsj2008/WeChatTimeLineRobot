/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class MMHeadImageView, MMWebImageView, UILabel;

@interface ShakeTvTableViewCell : MMTableViewCell {
	MMWebImageView* _thumbImageView;
	MMHeadImageView* _headImageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
}
-(void).cxx_destruct;
-(void)setSubTitle:(id)title;
-(void)updateWithShakeItemBase:(id)shakeItemBase;
@end

