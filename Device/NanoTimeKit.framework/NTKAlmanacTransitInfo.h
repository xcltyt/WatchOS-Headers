//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface NTKAlmanacTransitInfo : NSObject
{
    NSDate *_day;
    int _constantSun;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
    CDStruct_2c43369c _location;
}

+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
+ (id)transitInfoForDate:(id)arg1;
@property(retain, nonatomic) NSDate *set; // @synthesize set=_set;
@property(nonatomic) CDStruct_2c43369c location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *transit; // @synthesize transit=_transit;
@property(retain, nonatomic) NSDate *rise; // @synthesize rise=_rise;
@property(nonatomic) int constantSun; // @synthesize constantSun=_constantSun;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
@property(retain, nonatomic) NSDate *day; // @synthesize day=_day;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
- (id)initWithDate:(id)arg1;

@end
