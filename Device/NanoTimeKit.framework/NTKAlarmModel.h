//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKAlarmClient.h"

@class NSMutableArray, NSString, NSXPCConnection, NTKAlarm;

@interface NTKAlarmModel : NSObject <NTKAlarmClient>
{
    NSXPCConnection *_alarmServer;
    NSMutableArray *_alarms;
    NTKAlarm *_nextAlarm;
    BOOL _didHaveValidConnection;
    BOOL _isServerReady;
}

+ (id)daySettingToString:(unsigned int)arg1 longVersion:(BOOL)arg2 everyWeekdayVersion:(BOOL)arg3 showNever:(BOOL)arg4;
+ (id)sharedAlarmModel;
+ (id)_sharedAlarmModel:(BOOL)arg1;
+ (id)sharedAlarmModelAsync;
- (id)copyAlarms;
- (void)deleteAlarmAtIndex:(unsigned int)arg1;
- (unsigned int)indexForAlarm:(id)arg1;
- (id)alarmAtIndex:(unsigned int)arg1;
- (unsigned int)alarmCount;
- (unsigned int)_findIndexOfAlarmWithId:(id)arg1;
- (id)_findAlarmWithId:(id)arg1;
- (void)_handleConnectionInterruption;
- (void)_reloadAllAsync;
- (void)_forceRefreshAlarms;
- (id)getNextAlarm;
- (void)setAlarm:(id)arg1 isActive:(BOOL)arg2;
- (void)updateAlarm:(id)arg1;
- (void)deleteAlarm:(id)arg1;
- (void)updateModelWithAlarm:(id)arg1;
- (void)updateModelWithAlarms:(id)arg1;
- (void)updateModelWithNextAlarm:(id)arg1;
- (id)alarmWithId:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addAlarm:(id)arg1;
- (void)_connectToServer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
