//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICPropertyListSerializable-Protocol.h>

@class ICSearchIndexTransactionInfo, ICSearchIndexableIdentifiers;

@interface ICSearchIndexingBatch : NSObject <ICPropertyListSerializable>
{
    ICSearchIndexableIdentifiers *_searchIndexableIdentifiers;
    ICSearchIndexTransactionInfo *_transactionInfo;
}

@property(copy, nonatomic) ICSearchIndexTransactionInfo *transactionInfo; // @synthesize transactionInfo=_transactionInfo;
@property(copy, nonatomic) ICSearchIndexableIdentifiers *searchIndexableIdentifiers; // @synthesize searchIndexableIdentifiers=_searchIndexableIdentifiers;
- (void).cxx_destruct;
- (_Bool)isCompletedByTransactionInfo:(id)arg1;
- (id)propertyListObjectRepresentation;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initWithSearchIndexableIdentifiers:(id)arg1 transactionInfo:(id)arg2;

@end

