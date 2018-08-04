// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIColor;
@class UIFont;
@class NSCoder;
@class UIScrollView;
@protocol CAPSPageMenuDelegate;

SWIFT_CLASS("_TtC8PageMenu12CAPSPageMenu")
@interface CAPSPageMenu : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
@property (nonatomic) CGFloat menuHeight;
@property (nonatomic) CGFloat menuMargin;
@property (nonatomic) CGFloat menuItemWidth;
@property (nonatomic) CGFloat selectionIndicatorHeight;
@property (nonatomic) NSInteger scrollAnimationDurationOnMenuItemTap;
@property (nonatomic, strong) UIColor * __nonnull selectionIndicatorColor;
@property (nonatomic, strong) UIColor * __nonnull selectedMenuItemLabelColor;
@property (nonatomic, strong) UIColor * __nonnull unselectedMenuItemLabelColor;
@property (nonatomic, strong) UIColor * __nonnull scrollMenuBackgroundColor;
@property (nonatomic, strong) UIColor * __nonnull viewBackgroundColor;
@property (nonatomic, strong) UIColor * __nonnull bottomMenuHairlineColor;
@property (nonatomic, strong) UIColor * __nonnull menuItemSeparatorColor;
@property (nonatomic, strong) UIFont * __nonnull menuItemFont;
@property (nonatomic) CGFloat menuItemSeparatorPercentageHeight;
@property (nonatomic) CGFloat menuItemSeparatorWidth;
@property (nonatomic) BOOL menuItemSeparatorRoundEdges;
@property (nonatomic) BOOL addBottomMenuHairline;
@property (nonatomic) BOOL menuItemWidthBasedOnTitleTextWidth;
@property (nonatomic) BOOL titleTextSizeBasedOnMenuItemWidth;
@property (nonatomic) BOOL useMenuLikeSegmentedControl;
@property (nonatomic) BOOL centerMenuItems;
@property (nonatomic) BOOL enableHorizontalBounce;
@property (nonatomic) BOOL hideTopMenuBar;
@property (nonatomic, weak) id <CAPSPageMenuDelegate> __nullable delegate;

/// Initialize PageMenu with view controllers
///
/// :param: viewControllers List of view controllers that must be subclasses of UIViewController
/// :param: frame Frame for page menu view
/// :param: options Dictionary holding any customization options user might want to set
- (nonnull instancetype)initWithViewControllers:(NSArray<UIViewController *> * __nonnull)viewControllers frame:(CGRect)frame options:(NSDictionary<NSString *, id> * __nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)scrollViewDidScroll:(UIScrollView * __nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * __nonnull)scrollView;
- (void)viewDidLayoutSubviews;

/// Move to page at index
///
/// :param: index Index of the page to move to
- (void)moveToPage:(NSInteger)index;
@end


SWIFT_PROTOCOL("_TtP8PageMenu20CAPSPageMenuDelegate_")
@protocol CAPSPageMenuDelegate
@optional
- (void)willMoveToPage:(UIViewController * __nonnull)controller index:(NSInteger)index;
- (void)didMoveToPage:(UIViewController * __nonnull)controller index:(NSInteger)index;
@end

#pragma clang diagnostic pop
