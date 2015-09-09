//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

#import <OfficeImport/SFUZipArchiveDataRepresentation-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    NSData *mData;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

