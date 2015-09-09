//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation
{
    CKShare *_share;
    CDUnknownBlockType _shareDestroyCompletionBlock;
}

@property(copy) CDUnknownBlockType shareDestroyCompletionBlock; // @synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)main;
- (id)initWithShare:(id)arg1;

@end

