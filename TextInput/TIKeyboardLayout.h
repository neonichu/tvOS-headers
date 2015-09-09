//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    unsigned long long _count;
    struct _ShortRect *_frames;
    unsigned long long _framesCapacity;
    char *_strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
}

+ (_Bool)supportsSecureCoding;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;
- (void)ensureStringCapacity:(unsigned long long)arg1;
- (void)ensureFrameCapacity:(unsigned long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;

@end

