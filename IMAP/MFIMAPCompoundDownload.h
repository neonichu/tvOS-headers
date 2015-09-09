//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/MFIMAPDownload.h>

@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload
{
    NSMutableArray *_subdownloads;
}

- (unsigned long long)lengthOfDataBeforeLineConversion;
- (unsigned long long)bytesFetched;
- (unsigned long long)expectedLength;
- (_Bool)isComplete;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)removeSubdownload:(id)arg1;
- (void)addSubdownload:(id)arg1;
- (id)subdownloads;
- (void)dealloc;

@end

