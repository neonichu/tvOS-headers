//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNNodeComponent : NSObject
{
    long long type;
    id component;
    SCNNodeComponent *next;
}

@property(retain, nonatomic) SCNNodeComponent *next; // @synthesize next;
@property(retain, nonatomic) id component; // @synthesize component;
@property(nonatomic) long long type; // @synthesize type;
- (void)dealloc;
- (id)initWithType:(long long)arg1 component:(id)arg2;

@end

