//
//  Entry.h
//  DayX
//
//  Created by TYLER on 4/29/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

static NSString * const EntryRecordKey = @"Entry";

static NSString * const EntryIdentifierKey = @"identifier";
static NSString * const EntryTitleKey = @"title";
static NSString * const EntryTextKey = @"text";
static NSString * const EntryTimeStampKey = @"timestamp";

@interface Entry : NSManagedObject

@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSDate * timestamp;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * identifier;
@property (nonatomic, retain) NSNumber * uploaded;

@end
