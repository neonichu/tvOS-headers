//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeliveryAccount, MFDeliveryResult, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@interface MFMailDelivery : NSObject
{
    id _delegate;
    MFMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    NSString *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    unsigned int _threaded:1;
    unsigned int _useCellDataOnly:1;
    _Bool _isUserRequested;
    unsigned long long _conversationFlags;
}

+ (_Bool)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (id)newWithMessage:(id)arg1;
@property(nonatomic) _Bool isUserRequested; // @synthesize isUserRequested=_isUserRequested;
@property(nonatomic) unsigned long long conversationFlags; // @synthesize conversationFlags=_conversationFlags;
@property(retain, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
- (void)archive;
- (void)setCellDataOnly:(_Bool)arg1;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)deliverSynchronously;
- (void)deliverAsynchronously;
- (_Bool)shouldEncryptMessage;
- (_Bool)shouldSignMessage;
- (id)headersForDelivery;
- (id)originalHeaders;
- (id)deliveryResult;
- (long long)deliveryStatus;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setArchiveAccount:(id)arg1;
- (id)archiveAccount;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)message;
- (id)newMessageWriter;
- (void)dealloc;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)initWithMessage:(id)arg1;
- (id)init;

@end

