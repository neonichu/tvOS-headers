//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface MFSMTPResponse : NSObject <NSCopying>
{
    id _lastResponseLine;
    int _status;
    unsigned int _statusClass:10;
    unsigned int _statusSubject:10;
    unsigned int _statusDetail:10;
    NSString *_statusString;
    NSArray *_continuationResponses;
}

@property(retain, nonatomic) NSArray *continuationResponses; // @synthesize continuationResponses=_continuationResponses;
@property(readonly, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(readonly, nonatomic) unsigned int statusDetail; // @synthesize statusDetail=_statusDetail;
@property(readonly, nonatomic) unsigned int statusSubject; // @synthesize statusSubject=_statusSubject;
@property(readonly, nonatomic) unsigned int statusClass; // @synthesize statusClass=_statusClass;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (id)description;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (int)failureReason;
- (void)setLastResponseLine:(id)arg1;
- (id)lastResponseLine;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatus:(int)arg1;

@end

