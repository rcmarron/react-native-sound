#if __has_include(<React/RCTBridgeModule.h>)
    #import <React/RCTBridgeModule.h>
#else
    #import "RCTBridgeModule.h"
#endif

#import <AVFoundation/AVFoundation.h>
#import <React/RCTEventEmitter.h>

@interface RNSound : RCTEventEmitter <RCTBridgeModule, AVAudioPlayerDelegate>
@property (nonatomic, weak) NSNumber* _key;
- (void)sendOnPlayUpdate:(BOOL)isPlaying forPlayerKey:(NSNumber *)forPlayerKey;
- (void)sendTimeUpdate:(double)currentTime isPlaying:(BOOL)isPlaying forPlayerKey:(nonnull NSNumber*)playerKey;
@end
