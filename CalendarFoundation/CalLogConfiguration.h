//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CalLogConfiguration : NSObject
{
    NSString *_name;
    NSMutableArray *_nodes;
}

@property(retain, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)parseWriterDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (void)parseConfigurationDefinition:(id)arg1;
- (id)description;
- (id)initWithSimpleDefinition:(id)arg1;
- (id)initWithDetailedDefinition:(id)arg1;
- (id)init;

@end

