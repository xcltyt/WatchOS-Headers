//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SockPuppetGizmo/SPInterfaceLabel.h>

@class NSDate, NSDateFormatter, NSTimer, UIFont;

@interface SPInterfaceDateLabel : SPInterfaceLabel
{
    NSDateFormatter *_formatter;
    double _updateInterval;
    NSTimer *_timer;
    NSDate *_forcedDate;
    UIFont *_smallCapsFont;
    struct _NSRange _smallCapsRange;
}

+ (id)smallCapsFontFeatureSetting;
+ (id)monospaceFontFeatureSetting;
+ (id)smallCapsFontWithFont:(id)arg1;
+ (id)monospacedFontWithFont:(id)arg1;
@property(nonatomic) struct _NSRange smallCapsRange; // @synthesize smallCapsRange=_smallCapsRange;
@property(retain, nonatomic) UIFont *smallCapsFont; // @synthesize smallCapsFont=_smallCapsFont;
@property(copy, nonatomic) NSDate *forcedDate; // @synthesize forcedDate=_forcedDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)didMoveToWindow;
- (void)updateTimer;
- (void)updateText;
- (void)dealloc;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;

@end

