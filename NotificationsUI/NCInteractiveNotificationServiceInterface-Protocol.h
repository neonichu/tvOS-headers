//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol NCInteractiveNotificationServiceInterface
- (void)_handleActionIdentifier:(NSString *)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_getActionTitlesWithCompletion:(void (^)(NSArray *))arg1;
- (void)_getActionContextWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)_willPresentFromActionIdentifier:(NSString *)arg1;
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_proximityStateDidChange:(_Bool)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_setModal:(_Bool)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setContext:(NSDictionary *)arg1;
- (void)_getInitialStateWithCompletion:(void (^)(double, double, _Bool, NCViewServiceDescriptor *, NCViewServiceDescriptor *))arg1;
@end

