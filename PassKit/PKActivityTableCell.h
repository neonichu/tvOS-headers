//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKTableViewCell.h>

@class UIActivityIndicatorView;

@interface PKActivityTableCell : PKTableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)pk_childrenForAppearance;

@end

