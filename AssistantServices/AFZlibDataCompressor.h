//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFDataCompressor.h>

@interface AFZlibDataCompressor : AFDataCompressor
{
    struct z_stream_s _deflateStream;
    unsigned char _deflateBuffer[8192];
}

- (id)compressedDataForData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

