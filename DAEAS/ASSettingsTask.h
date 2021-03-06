//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class DASettingsRequestParams, NSArray, NSDictionary;

@interface ASSettingsTask : ASTask
{
    int _key;
    NSArray *_getters;
    NSDictionary *_setters;
    DASettingsRequestParams *_requestParams;
    long long _status;
    id _result;
}

@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) int key; // @synthesize key=_key;
@property(retain, nonatomic) DASettingsRequestParams *requestParams; // @synthesize requestParams=_requestParams;
@property(retain, nonatomic) NSDictionary *setters; // @synthesize setters=_setters;
@property(retain, nonatomic) NSArray *getters; // @synthesize getters=_getters;
- (void).cxx_destruct;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (int)commandCode;
- (id)init;

@end

