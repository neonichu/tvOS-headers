//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOutgoingMessageDelivery.h>

@class _MFPlaceholderMessageRewriter;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery
{
    _MFPlaceholderMessageRewriter *_rewriter;
}

- (id)deliverSynchronously;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

@end

