//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVOneupView, UIView;

@protocol TVOneupViewDataSource <NSObject>
- (UIView *)oneupView:(TVOneupView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfItemsInOneupView:(TVOneupView *)arg1;

@optional
- (UIView *)oneupView:(TVOneupView *)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;
- (long long)oneupView:(TVOneupView *)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;
@end

