//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TKQueue)
- (id)tk_nextDequeuedObject;
- (id)tk_lastEnqueuedObject;
- (id)tk_dequeueObject;
- (void)tk_enqueueObject:(id)arg1;
@end

