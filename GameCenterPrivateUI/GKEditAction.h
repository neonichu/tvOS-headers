//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GKEditAction : NSObject
{
    _Bool _destructive;
    NSString *_name;
    SEL _selector;
}

+ (id)deleteActionWithName:(id)arg1;
+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

