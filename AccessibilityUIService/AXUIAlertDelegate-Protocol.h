//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUIService/NSObject-Protocol.h>

@class NSString;
@protocol AXUIAlertStyleProvider;

@protocol AXUIAlertDelegate <NSObject>

@optional
- (void)alertWithIdentifierDidDisappear:(NSString *)arg1;
- (void)alertWithIdentifierDidAppear:(NSString *)arg1;
- (id <AXUIAlertStyleProvider>)styleProviderForAlertWithIdentifier:(NSString *)arg1;
- (double)desiredWindowLevelForAlertWithIdentifier:(NSString *)arg1;
- (double)delayForDequeuingAlertWithIdentifier:(NSString *)arg1;
- (void)alertWithIdentifierWasEnqueued:(NSString *)arg1;
@end

