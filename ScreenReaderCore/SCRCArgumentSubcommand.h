//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject
{
    NSString *_subcommandName;
    NSMutableArray *_optionArray;
}

+ (id)subcommandWithName:(id)arg1;
- (id)description;
- (void)showHelp;
- (void)stopDueToSigTerm;
- (void)stop;
- (int)run;
- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(_Bool)arg6;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (id)optionArray;
- (id)subcommandName;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)addOptions;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

