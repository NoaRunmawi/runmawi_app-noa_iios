#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef VDOFRAMEWORK_SWIFT_H
#define VDOFRAMEWORK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import SpriteKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VdoFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class AVPlayer;
@class VdoError;
@class VideoQuality;

/// AssetPlaybackDelegate provides a common interface for AssetPlaybackManager to provide callbacks to its delegate.
SWIFT_PROTOCOL_NAMED("AssetPlaybackDelegate")
@protocol AssetPlaybackDelegate
/// This is called when the internal AVPlayer in AssetPlaybackManager is ready to start playback.
- (void)streamPlaybackManagerWithPlayerReadyToPlay:(AVPlayer * _Nonnull)player;
/// This is called when the internal AVPlayer’s currentItem has changed.
- (void)streamPlaybackManagerWithPlayerCurrentItemDidChange:(AVPlayer * _Nonnull)player;
/// This is called when an error is encountered while playback
- (void)streamLoadErrorWithError:(VdoError * _Nonnull)error;
@optional
/// This is called when quality change is observed, nil object will be passed incase auto quality is set
- (void)streamPlaybackManagerWithQualityChangedTo:(VideoQuality * _Nullable)quality;
@end


SWIFT_CLASS("_TtC12VdoFramework13ClosedCaption")
@interface ClosedCaption : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


@class MediaInfo;
@class NSString;
enum DownloadState : NSInteger;

/// Encapsulates all the required information of a VdoAsset undergoes Download cycle
SWIFT_CLASS("_TtC12VdoFramework12DownloadInfo")
@interface DownloadInfo : NSObject
@property (nonatomic, readonly, strong) MediaInfo * _Nonnull mediaInfo;
@property (nonatomic, readonly, copy) NSString * _Nullable poster;
@property (nonatomic) enum DownloadState status;
@property (nonatomic) double percentDownloaded;
@property (nonatomic, readonly) double aspectRatio;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Defines filters to extract requested results from ‘getListOfDownloads’ Api
SWIFT_CLASS("_TtC12VdoFramework18DownloadInfoFilter")
@interface DownloadInfoFilter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC12VdoFramework9MediaInfo")
@interface MediaInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull videoId;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable mediaDescription;
@property (nonatomic, readonly) double duration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end













SWIFT_CLASS("_TtC12VdoFramework8VdoAsset")
@interface VdoAsset : NSObject
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic) enum DownloadState downloadState;
@property (nonatomic) double percentDownload;
@property (nonatomic, readonly) CMTime lastPlaybackTime;
@property (nonatomic, readonly, copy) NSArray<ClosedCaption *> * _Nullable captions;
+ (void)makeAssetWithVideoId:(NSString * _Nonnull)videoId onLoad:(void (^ _Nonnull)(VdoAsset * _Nonnull))onLoad SWIFT_DEPRECATED_MSG("Use createAsset(videoId: String, onLoad: @escaping (VdoAsset?, VdoError?) -> Void) instead");
+ (void)createAssetWithVideoId:(NSString * _Nonnull)videoId playerId:(NSString * _Nullable)playerId onLoad:(void (^ _Nonnull)(VdoAsset * _Nullable, VdoError * _Nullable))onLoad;
- (NSArray<VideoQuality *> * _Nonnull)getVideoQualities SWIFT_WARN_UNUSED_RESULT;
- (void)playOnlineWithOtp:(NSString * _Nonnull)otp playbackInfo:(NSString * _Nonnull)playbackInfo defaultVideoQuality:(VideoQuality * _Nullable)defaultVideoQuality;
- (void)playOnlineWithToken:(NSString * _Nonnull)token defaultVideoQuality:(VideoQuality * _Nullable)defaultVideoQuality;
- (void)enableAutoAdaptation;
- (void)enableManualAdaptation:(VideoQuality * _Nonnull)activeQuality;
- (void)playOffline;
- (enum DownloadState)getDownloadState SWIFT_WARN_UNUSED_RESULT;
- (void)deleteDownload;
- (void)cancelDownload;
- (void)startDownloadWithOtp:(NSString * _Nonnull)otp playbackInfo:(NSString * _Nonnull)playbackInfo videoQuality:(VideoQuality * _Nullable)videoQuality;
- (void)startDownloadWithToken:(NSString * _Nonnull)token videoQuality:(VideoQuality * _Nullable)videoQuality;
- (void)pauseDownload;
- (void)resumeDownload;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC12VdoFramework8VdoAsset12VideoQuality")
@interface VideoQuality : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
@end


SWIFT_CLASS("_TtCC12VdoFramework8VdoAsset4Keys")
@interface Keys : NSObject
/// Key for the Asset name, used for <code>AssetDownloadProgressNotification</code> and
/// <code>AssetDownloadStateChangedNotification</code> Notifications as well as
/// AssetListManager.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull videoId;)
+ (NSString * _Nonnull)videoId SWIFT_WARN_UNUSED_RESULT;
/// Key for the Asset download percentage, used for
/// <code>AssetDownloadProgressNotification</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull percentDownloaded;)
+ (NSString * _Nonnull)percentDownloaded SWIFT_WARN_UNUSED_RESULT;
/// Key for the Asset download state, used for
/// <code>AssetDownloadStateChangedNotification</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull downloadState;)
+ (NSString * _Nonnull)downloadState SWIFT_WARN_UNUSED_RESULT;
/// Key for the error message, used for <code>AssetDownloadFailed</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull message;)
+ (NSString * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
/// Key for the error code, used for <code>AssetDownloadFailed</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull code;)
+ (NSString * _Nonnull)code SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, DownloadState, "DownloadState", open) {
/// The asset is not downloaded at all.
  DownloadStateNotDownloaded = 0,
/// The asset has a download in progress.
  DownloadStateDownloading = 1,
/// The asset is downloaded and saved on diek.
  DownloadStateDownloaded = 2,
/// The asset download task is paused.
  DownloadStatePaused = 3,
};



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
- (BOOL)setCaption:(ClosedCaption * _Nullable)caption SWIFT_WARN_UNUSED_RESULT;
- (ClosedCaption * _Nullable)getCurrentEnabledCaption SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC12VdoFramework9VdoCipher")
@interface VdoCipher : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable preferredCaptionsLanguage;)
+ (NSString * _Nullable)preferredCaptionsLanguage SWIFT_WARN_UNUSED_RESULT;
+ (void)setPreferredCaptionsLanguage:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableClipStat;)
+ (BOOL)enableClipStat SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableClipStat:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enablePiPMode;)
+ (BOOL)enablePiPMode SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnablePiPMode:(BOOL)value;
/// <code>enableAutoPlay</code> set this boolean flag to enable/disable auto play of an asset
/// on calling <code>playOnline(otp:, playbackInfo:, defaultVideoQuality:)</code> method of <code>VdoAsset</code> object,
/// while using the <code>UI VdoPlayer</code> of the SDK.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableAutoPlay;)
+ (BOOL)enableAutoPlay SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableAutoPlay:(BOOL)value;
+ (void)setPlaybackDelegateWithDelegate:(id <AssetPlaybackDelegate> _Nonnull)delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12VdoFramework8VdoError")
@interface VdoError : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC12VdoFramework23VdoPlayerViewController")
@interface VdoPlayerViewController : UIViewController
- (void)enterFullscreen;
- (void)exitFullscreen;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>VdoPlayerViewControllerDelegate</code> provides the methods for callbacks from the Vdo player view with custom controls.
SWIFT_PROTOCOL("_TtP12VdoFramework31VdoPlayerViewControllerDelegate_")
@protocol VdoPlayerViewControllerDelegate
@optional
- (void)didClosePlayerWithController:(UIViewController * _Nonnull)controller;
- (void)didDismissAlert;
- (void)didTapPlayFor:(NSString * _Nonnull)id;
- (void)didTapPauseFor:(NSString * _Nonnull)id;
- (void)didTapForwardFor:(NSString * _Nonnull)id;
- (void)didTapBackwardFor:(NSString * _Nonnull)id;
- (void)didTapCloseFor:(NSString * _Nonnull)id;
- (void)didTapEnterFullScreenFor:(NSString * _Nonnull)id;
- (void)didTapExitFullScreenFor:(NSString * _Nonnull)id;
- (void)didTapPipFor:(NSString * _Nonnull)id;
- (void)didTapAirplayFor:(NSString * _Nonnull)id;
- (void)didSeekFor:(NSString * _Nonnull)id to:(double)time;
- (void)didChangePlayerRateFor:(NSString * _Nonnull)id to:(float)speed;
- (void)didChangeCaptionFor:(NSString * _Nonnull)id to:(NSString * _Nonnull)name code:(NSString * _Nonnull)code;
- (void)didChangeChapterFor:(NSString * _Nonnull)id to:(NSString * _Nonnull)name at:(double)time;
- (void)didSetAdaptationFor:(NSString * _Nonnull)id to:(VideoQuality * _Nullable)quality;
/// Player periodic callback - receive callbacks as playback progresses, giving the time at which playback session is currently playing
- (void)didUpdatePlaybackFor:(NSString * _Nonnull)id toTime:(double)time;
/// Player playback item played/reached to its end time
- (void)playbackDidPlayToEndFor:(NSString * _Nonnull)id;
@end


SWIFT_CLASS("_TtC12VdoFramework14WaterMarkScene")
@interface WaterMarkScene : SKScene
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)update:(NSTimeInterval)currentTime;
- (nonnull instancetype)initWithSize:(CGSize)size SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef VDOFRAMEWORK_SWIFT_H
#define VDOFRAMEWORK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import SpriteKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VdoFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class AVPlayer;
@class VdoError;
@class VideoQuality;

/// AssetPlaybackDelegate provides a common interface for AssetPlaybackManager to provide callbacks to its delegate.
SWIFT_PROTOCOL_NAMED("AssetPlaybackDelegate")
@protocol AssetPlaybackDelegate
/// This is called when the internal AVPlayer in AssetPlaybackManager is ready to start playback.
- (void)streamPlaybackManagerWithPlayerReadyToPlay:(AVPlayer * _Nonnull)player;
/// This is called when the internal AVPlayer’s currentItem has changed.
- (void)streamPlaybackManagerWithPlayerCurrentItemDidChange:(AVPlayer * _Nonnull)player;
/// This is called when an error is encountered while playback
- (void)streamLoadErrorWithError:(VdoError * _Nonnull)error;
@optional
/// This is called when quality change is observed, nil object will be passed incase auto quality is set
- (void)streamPlaybackManagerWithQualityChangedTo:(VideoQuality * _Nullable)quality;
@end


SWIFT_CLASS("_TtC12VdoFramework13ClosedCaption")
@interface ClosedCaption : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


@class MediaInfo;
@class NSString;
enum DownloadState : NSInteger;

/// Encapsulates all the required information of a VdoAsset undergoes Download cycle
SWIFT_CLASS("_TtC12VdoFramework12DownloadInfo")
@interface DownloadInfo : NSObject
@property (nonatomic, readonly, strong) MediaInfo * _Nonnull mediaInfo;
@property (nonatomic, readonly, copy) NSString * _Nullable poster;
@property (nonatomic) enum DownloadState status;
@property (nonatomic) double percentDownloaded;
@property (nonatomic, readonly) double aspectRatio;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Defines filters to extract requested results from ‘getListOfDownloads’ Api
SWIFT_CLASS("_TtC12VdoFramework18DownloadInfoFilter")
@interface DownloadInfoFilter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC12VdoFramework9MediaInfo")
@interface MediaInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull videoId;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable mediaDescription;
@property (nonatomic, readonly) double duration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end













SWIFT_CLASS("_TtC12VdoFramework8VdoAsset")
@interface VdoAsset : NSObject
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic) enum DownloadState downloadState;
@property (nonatomic) double percentDownload;
@property (nonatomic, readonly) CMTime lastPlaybackTime;
@property (nonatomic, readonly, copy) NSArray<ClosedCaption *> * _Nullable captions;
+ (void)makeAssetWithVideoId:(NSString * _Nonnull)videoId onLoad:(void (^ _Nonnull)(VdoAsset * _Nonnull))onLoad SWIFT_DEPRECATED_MSG("Use createAsset(videoId: String, onLoad: @escaping (VdoAsset?, VdoError?) -> Void) instead");
+ (void)createAssetWithVideoId:(NSString * _Nonnull)videoId playerId:(NSString * _Nullable)playerId onLoad:(void (^ _Nonnull)(VdoAsset * _Nullable, VdoError * _Nullable))onLoad;
- (NSArray<VideoQuality *> * _Nonnull)getVideoQualities SWIFT_WARN_UNUSED_RESULT;
- (void)playOnlineWithOtp:(NSString * _Nonnull)otp playbackInfo:(NSString * _Nonnull)playbackInfo defaultVideoQuality:(VideoQuality * _Nullable)defaultVideoQuality;
- (void)playOnlineWithToken:(NSString * _Nonnull)token defaultVideoQuality:(VideoQuality * _Nullable)defaultVideoQuality;
- (void)enableAutoAdaptation;
- (void)enableManualAdaptation:(VideoQuality * _Nonnull)activeQuality;
- (void)playOffline;
- (enum DownloadState)getDownloadState SWIFT_WARN_UNUSED_RESULT;
- (void)deleteDownload;
- (void)cancelDownload;
- (void)startDownloadWithOtp:(NSString * _Nonnull)otp playbackInfo:(NSString * _Nonnull)playbackInfo videoQuality:(VideoQuality * _Nullable)videoQuality;
- (void)startDownloadWithToken:(NSString * _Nonnull)token videoQuality:(VideoQuality * _Nullable)videoQuality;
- (void)pauseDownload;
- (void)resumeDownload;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC12VdoFramework8VdoAsset12VideoQuality")
@interface VideoQuality : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
@end


SWIFT_CLASS("_TtCC12VdoFramework8VdoAsset4Keys")
@interface Keys : NSObject
/// Key for the Asset name, used for <code>AssetDownloadProgressNotification</code> and
/// <code>AssetDownloadStateChangedNotification</code> Notifications as well as
/// AssetListManager.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull videoId;)
+ (NSString * _Nonnull)videoId SWIFT_WARN_UNUSED_RESULT;
/// Key for the Asset download percentage, used for
/// <code>AssetDownloadProgressNotification</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull percentDownloaded;)
+ (NSString * _Nonnull)percentDownloaded SWIFT_WARN_UNUSED_RESULT;
/// Key for the Asset download state, used for
/// <code>AssetDownloadStateChangedNotification</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull downloadState;)
+ (NSString * _Nonnull)downloadState SWIFT_WARN_UNUSED_RESULT;
/// Key for the error message, used for <code>AssetDownloadFailed</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull message;)
+ (NSString * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
/// Key for the error code, used for <code>AssetDownloadFailed</code> Notification.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull code;)
+ (NSString * _Nonnull)code SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, DownloadState, "DownloadState", open) {
/// The asset is not downloaded at all.
  DownloadStateNotDownloaded = 0,
/// The asset has a download in progress.
  DownloadStateDownloading = 1,
/// The asset is downloaded and saved on diek.
  DownloadStateDownloaded = 2,
/// The asset download task is paused.
  DownloadStatePaused = 3,
};



@interface VdoAsset (SWIFT_EXTENSION(VdoFramework))
- (BOOL)setCaption:(ClosedCaption * _Nullable)caption SWIFT_WARN_UNUSED_RESULT;
- (ClosedCaption * _Nullable)getCurrentEnabledCaption SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC12VdoFramework9VdoCipher")
@interface VdoCipher : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable preferredCaptionsLanguage;)
+ (NSString * _Nullable)preferredCaptionsLanguage SWIFT_WARN_UNUSED_RESULT;
+ (void)setPreferredCaptionsLanguage:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableClipStat;)
+ (BOOL)enableClipStat SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableClipStat:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enablePiPMode;)
+ (BOOL)enablePiPMode SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnablePiPMode:(BOOL)value;
/// <code>enableAutoPlay</code> set this boolean flag to enable/disable auto play of an asset
/// on calling <code>playOnline(otp:, playbackInfo:, defaultVideoQuality:)</code> method of <code>VdoAsset</code> object,
/// while using the <code>UI VdoPlayer</code> of the SDK.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enableAutoPlay;)
+ (BOOL)enableAutoPlay SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnableAutoPlay:(BOOL)value;
+ (void)setPlaybackDelegateWithDelegate:(id <AssetPlaybackDelegate> _Nonnull)delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12VdoFramework8VdoError")
@interface VdoError : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC12VdoFramework23VdoPlayerViewController")
@interface VdoPlayerViewController : UIViewController
- (void)enterFullscreen;
- (void)exitFullscreen;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>VdoPlayerViewControllerDelegate</code> provides the methods for callbacks from the Vdo player view with custom controls.
SWIFT_PROTOCOL("_TtP12VdoFramework31VdoPlayerViewControllerDelegate_")
@protocol VdoPlayerViewControllerDelegate
@optional
- (void)didClosePlayerWithController:(UIViewController * _Nonnull)controller;
- (void)didDismissAlert;
- (void)didTapPlayFor:(NSString * _Nonnull)id;
- (void)didTapPauseFor:(NSString * _Nonnull)id;
- (void)didTapForwardFor:(NSString * _Nonnull)id;
- (void)didTapBackwardFor:(NSString * _Nonnull)id;
- (void)didTapCloseFor:(NSString * _Nonnull)id;
- (void)didTapEnterFullScreenFor:(NSString * _Nonnull)id;
- (void)didTapExitFullScreenFor:(NSString * _Nonnull)id;
- (void)didTapPipFor:(NSString * _Nonnull)id;
- (void)didTapAirplayFor:(NSString * _Nonnull)id;
- (void)didSeekFor:(NSString * _Nonnull)id to:(double)time;
- (void)didChangePlayerRateFor:(NSString * _Nonnull)id to:(float)speed;
- (void)didChangeCaptionFor:(NSString * _Nonnull)id to:(NSString * _Nonnull)name code:(NSString * _Nonnull)code;
- (void)didChangeChapterFor:(NSString * _Nonnull)id to:(NSString * _Nonnull)name at:(double)time;
- (void)didSetAdaptationFor:(NSString * _Nonnull)id to:(VideoQuality * _Nullable)quality;
/// Player periodic callback - receive callbacks as playback progresses, giving the time at which playback session is currently playing
- (void)didUpdatePlaybackFor:(NSString * _Nonnull)id toTime:(double)time;
/// Player playback item played/reached to its end time
- (void)playbackDidPlayToEndFor:(NSString * _Nonnull)id;
@end


SWIFT_CLASS("_TtC12VdoFramework14WaterMarkScene")
@interface WaterMarkScene : SKScene
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)update:(NSTimeInterval)currentTime;
- (nonnull instancetype)initWithSize:(CGSize)size SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
