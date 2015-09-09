//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol CNObserver;

@protocol CNForkJoinResultReportingStrategy <NSObject>
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id <CNObserver>)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id <CNObserver>)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
@end

