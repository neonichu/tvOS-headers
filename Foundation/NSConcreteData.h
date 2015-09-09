//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData
{
    unsigned int _isInline:1;
    unsigned int _retainCount:31;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
    union {
        unsigned char _space[12];
        CDUnknownBlockType _deallocator;
    } _u;
}

- (id)_createDispatchData;
- (void)finalize;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)init;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_copyWillRetain;
- (const void *)bytes;
- (unsigned long long)length;

@end

