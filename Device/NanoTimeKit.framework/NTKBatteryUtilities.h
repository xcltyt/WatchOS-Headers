//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTKBatteryUtilities : NSObject
{
}

+ (id)_levelStringForLevel:(float)arg1 withFormatter:(id)arg2;
+ (id)levelStringWithSymbolForLevel:(float)arg1;
+ (id)colorForLevel:(float)arg1 andState:(int)arg2;
+ (BOOL)chargingForState:(int)arg1;
+ (id)NTKBatteryRingForRadius:(float)arg1 strokeWidth:(float)arg2 level:(float)arg3;
+ (id)levelStringForLevel:(float)arg1;

@end
