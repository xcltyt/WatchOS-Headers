//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKChronoSubDial.h>

@class SKNode;

@interface NTKChronoUpperSubDial : NTKChronoSubDial
{
    SKNode *_upper60Ticks;
    SKNode *_upper30Ticks;
    SKNode *_upper63Ticks;
    SKNode *_30mSubLabels;
    SKNode *_15mSubLabels;
    SKNode *_3mSubLabels;
    SKNode *_2mSubLabels;
}

- (id)initWithRadius:(float)arg1;
- (void)colorize:(id)arg1;
- (void)updateTimeScale:(unsigned int)arg1;
- (void).cxx_destruct;

@end
