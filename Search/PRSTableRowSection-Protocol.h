//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/PRSSection-Protocol.h>

@class NSArray, NSString;
@protocol PRSAlignmentSchema;

@protocol PRSTableRowSection <PRSSection>
@property(retain, nonatomic) NSString *table_id;

@optional
@property(retain, nonatomic) NSArray *value;
@property(nonatomic) long long row_type;
@property(retain, nonatomic) id <PRSAlignmentSchema> alignment_schema;
@property(retain, nonatomic) NSString *tab_group_id;
@end

