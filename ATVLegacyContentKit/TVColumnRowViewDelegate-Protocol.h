//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVColumnRowView;

@protocol TVColumnRowViewDelegate <NSObject>
- (double)columnRowView:(TVColumnRowView *)arg1 heightForRow:(long long)arg2;
- (double)columnRowView:(TVColumnRowView *)arg1 widthForColumn:(long long)arg2;
- (double)headerHeightForColumnRowView:(TVColumnRowView *)arg1;
@end

