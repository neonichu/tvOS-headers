//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell
{
    UILabel *_statusLabel;
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)prepareForReuse;
- (_Bool)canRemoveItem;
- (void)setStatus:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

