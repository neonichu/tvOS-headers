//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCEncryptor : NSObject
{
    NSString *mOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (_Bool)encryptIntoOutputFile;
- (_Bool)encrypt;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end

