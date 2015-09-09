//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VUSocialUpload/NSXMLParserDelegate-Protocol.h>

@class FlickrPhotoSet, NSMutableArray, NSMutableString, NSString;

@interface FlickrPhotoSetResponse : NSObject <NSXMLParserDelegate>
{
    _Bool _success;
    NSString *_errorDescription;
    FlickrPhotoSet *_currentPhotoSet;
    NSMutableString *_dataString;
    long long _stage;
    NSMutableArray *_photoSets;
}

+ (id)responseWithData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *photoSets; // @synthesize photoSets=_photoSets;
@property(nonatomic) long long stage; // @synthesize stage=_stage;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

