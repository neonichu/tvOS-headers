//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDResponseBodyParser-Protocol.h>

@class NSError, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPlistResponseBodyParser : NSObject <CKDResponseBodyParser>
{
    NSError *_parserError;
    CDUnknownBlockType _objectParsedBlock;
    NSMutableData *_parserData;
}

@property(retain, nonatomic) NSMutableData *parserData; // @synthesize parserData=_parserData;
@property(copy, nonatomic) CDUnknownBlockType objectParsedBlock; // @synthesize objectParsedBlock=_objectParsedBlock;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
- (void).cxx_destruct;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

