//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class NSCoder;
@protocol UIStateRestoring;

@protocol UIStateRestoring <NSObject>

@optional
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg1;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg1;
@end

