//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSDispatchData : NSData
{
}

+ (_Bool)supportsSecureCoding;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)_createDispatchData;
- (_Bool)_isDispatchData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (unsigned long long)hash;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (const void *)bytes;
- (unsigned long long)length;

@end

