//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLStructMember.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLStructMemberInternal : MTLStructMember
{
    NSString *_name;
    unsigned int _offset:32;
    unsigned int _dataType:16;
    id _details;
}

- (unsigned long long)dataType;
- (unsigned long long)offset;
- (id)name;
- (id)describe;
- (id)structType;
- (id)arrayType;
- (void)dealloc;
- (id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 details:(id)arg4;

@end

