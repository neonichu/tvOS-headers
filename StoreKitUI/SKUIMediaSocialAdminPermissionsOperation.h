//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id *)arg2;
- (id)_authorsWithResponseDictionary:(id)arg1;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;

@end

