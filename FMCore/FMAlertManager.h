//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMAlertManager : NSObject
{
    NSMutableDictionary *_activeAlerts;
    NSMutableDictionary *_activeCFNotificationsByCategory;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // @synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory;
@property(retain, nonatomic) NSMutableDictionary *activeAlerts; // @synthesize activeAlerts=_activeAlerts;
- (void).cxx_destruct;
- (id)_xpcTransactionNameFor:(id)arg1;
- (void)activateAlert:(id)arg1;
- (id)initSingleton;
- (id)init;

@end

