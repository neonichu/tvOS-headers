//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSTimer;
@protocol PBLanguageChangeObserverDelegate;

@interface PBLanguageChangeObserver : NSObject
{
    _Bool _observing;
    id <PBLanguageChangeObserverDelegate> _delegate;
    NSTimer *_localeTimer;
    NSLocale *_originalLocale;
}

@property(copy, nonatomic) NSLocale *originalLocale; // @synthesize originalLocale=_originalLocale;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSTimer *localeTimer; // @synthesize localeTimer=_localeTimer;
@property(nonatomic) __weak id <PBLanguageChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCachedLocaleInfo;
- (void)_notifyDelegate;
- (void)_invalidateTimer;
- (void)localeDidChange;
- (void)unsubscribeFromLocaleChangeNotification;
- (void)subscribeToLocaleChangeNotification;
- (void)localeTimerFired:(id)arg1;
- (void)startLocaleTimer;
- (void)languageDidChange;
- (void)unsubscribeFromLanguageChangeNotification;
- (void)subscribeToLanguageChangeNotification;
- (void)stopObservingLanguageChanges;
- (void)startObservingLanguageChanges;
- (void)dealloc;

@end

