//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL, SKUIClientContext;

@interface SKUILoadTrendingSearchPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _outputBlock;
    NSURL *_url;
}

@property(copy) CDUnknownBlockType outputBlock; // @synthesize outputBlock=_outputBlock;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void).cxx_destruct;
- (void)main;

@end

