//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;

__attribute__((visibility("hidden")))
@interface _CNDistinctUntilChangedObservable : CNObservable
{
    id <CNObservable> _observable;
    id _lastObservedResult;
}

- (_Bool)_resultIsDistinctFromLastResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithObservable:(id)arg1;

@end

