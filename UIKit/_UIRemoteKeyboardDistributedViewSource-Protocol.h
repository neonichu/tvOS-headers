//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary, NSString, UIInputViewSetPlacement;

@protocol _UIRemoteKeyboardDistributedViewSource <NSObject>
- (void)setPlacement:(UIInputViewSetPlacement *)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)completeTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)updateTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)startTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
@end

