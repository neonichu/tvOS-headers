//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LASecureData : NSObject
{
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)arg1 length:(unsigned long long)arg2;
+ (id)secureDataWithString:(id)arg1;
+ (id)secureDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)removeLastCharacter;
- (void)resize:(unsigned long long)arg1;
- (void)appendString:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;
- (const void *)bytes;
- (void)reset;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (id)init;
- (void)prepareBuffer:(unsigned long long)arg1;
- (void)dealloc;

@end

