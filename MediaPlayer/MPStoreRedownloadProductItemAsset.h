//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject
{
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSArray *sinfs;
@property(readonly, copy, nonatomic) NSString *flavor;
@property(readonly, copy, nonatomic) NSString *downloadKey;
- (id)initWithResponseDictionary:(id)arg1;

@end

