//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest
{
    STSiriMessage *_message;
    _Bool _showAsDraft;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (_Bool)showAsDraft;
- (id)message;
- (id)_initWithMessage:(id)arg1 showAsDraft:(_Bool)arg2;
- (_Bool)_makeAppFrontmost;

@end

