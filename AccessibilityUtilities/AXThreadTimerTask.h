//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXThreadTimerTask : NSObject
{
    _Bool cancel;
    _Bool finished;
    _Bool active;
    CDUnknownBlockType _block;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished;
@property(nonatomic, getter=isCancelled) _Bool cancel; // @synthesize cancel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;
- (void)runAfterDelay:(float)arg1;
- (void)run;

@end

