//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<WebCore::SharedBuffer::DataBuffer> sharedBufferDataBuffer;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)bytes;
- (unsigned long long)length;
-     // Error parsing type: @24@0:8^{DataBuffer={atomic<int>=Ai}{Vector<char, 0, WTF::CrashOnOverflow, 16>=*II}}16, name: initWithSharedBufferDataBuffer:
- (void)finalize;
- (void)dealloc;

@end

