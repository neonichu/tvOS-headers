//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTPhoneNumber, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol CTMessageAddress><NSCopying;

@interface CTMessage : NSObject
{
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    unsigned int _replaceMessage;
    NSString *_countryCode;
    NSUUID *_uuid;
}

@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uuid;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) unsigned int replaceMessage; // @synthesize replaceMessage=_replaceMessage;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly) NSDictionary *rawHeaders; // @synthesize rawHeaders=_rawHeaders;
@property(copy, nonatomic) NSObject<CTMessageAddress><NSCopying> *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) CTPhoneNumber *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned int messageId; // @synthesize messageId=_messageId;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)setCountryCode:(id)arg1;
- (id)description;
- (id)allContentTypeParameterNames;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)removePartAtIndex:(unsigned long long)arg1;
- (id)addPart:(id)arg1;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (id)addText:(id)arg1;
- (void)addEmailRecipient:(id)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)removeRecipientsInArray:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)setReplaceMessage:(unsigned int)arg1;
- (void)setRawHeaders:(id)arg1;
- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (id)init;

@end

