//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBaseComposeHeaderField.h>

@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField
{
    GKLabel *_valueLabel;
}

@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (struct CGRect)valueFrame;
- (void)setMaxLineCount:(unsigned long long)arg1;
- (void)setValueText:(id)arg1;
- (id)valueText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

