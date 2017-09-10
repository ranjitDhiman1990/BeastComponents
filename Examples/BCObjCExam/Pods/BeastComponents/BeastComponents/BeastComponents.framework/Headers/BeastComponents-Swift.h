// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIImageView;
@class UILabel;
@class NSCoder;

/// Buubble Cell View
SWIFT_CLASS("_TtC15BeastComponents16BCBubbleCellView")
@interface BCBubbleCellView : UIView
/// Title string for bubble cell
@property (nonatomic, copy) NSString * _Nullable title;
/// Weight for cell
/// The default is 0.0.
@property (nonatomic) double weight;
/// Detail test string for bubble cell
@property (nonatomic, copy) NSString * _Nullable detailText;
/// Background image view on bubble cell.
@property (nonatomic, readonly, strong) UIImageView * _Nonnull backgroundImageView;
/// Title label on bubble cell. If cell’s style does not have title label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable titleLabel;
/// Weight label on bubble cell. If cell’s style does not have weight label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable weightLabel;
/// Detail label on bubble cell. If cell’s style does not have detail label style, it has nil.
@property (nonatomic, readonly, strong) UILabel * _Nullable detailTextLabel;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol BCBubbleContainerViewDataSource;
@protocol BCBubbleContainerViewDelegate;

/// This view contains cell views.
SWIFT_CLASS("_TtC15BeastComponents21BCBubbleContainerView")
@interface BCBubbleContainerView : UIView
/// Data source for the bubble container view to ask.
@property (nonatomic, weak) id <BCBubbleContainerViewDataSource> _Nullable dataSource;
/// Delegate for the bubble container view to notify.
@property (nonatomic, weak) id <BCBubbleContainerViewDelegate> _Nullable delegate;
/// Minimum square size (in points) of cell
/// Default is 30 points.
@property (nonatomic) CGFloat minimumCellSize;
/// Maximum square size (in points) of cell
/// Default is 300 points.
@property (nonatomic) CGFloat maximumCellSize;
/// Array of cell views
@property (nonatomic, readonly, copy) NSArray<BCBubbleCellView *> * _Nonnull cells;
/// Set data source to load data and construct bubble cells.
/// \param dataSource An object of data source for the bubble container view to ask.
///
- (void)loadDataFromDataSource:(id <BCBubbleContainerViewDataSource> _Nullable)dataSource andDelegate:(id <BCBubbleContainerViewDelegate> _Nullable)delegate;
/// It reloads and redraws all bubble cells.
- (void)reloadData;
/// It redraws all bubble cells without loading data source.
- (void)redrawWithChangeCellStyle:(BOOL)changeCellStyle;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

/// Data source for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents31BCBubbleContainerViewDataSource_")
@protocol BCBubbleContainerViewDataSource
/// Asks the data source for the number of bubbles in the container view.
/// \param bubbleContainerView The container-view object requesting this information.
///
///
/// returns:
/// The number of bubbles in containerView.
- (NSInteger)numberOfBubblesIn:(BCBubbleContainerView * _Nonnull)bubbleContainerView SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the weight to use for a particular bubble cell.
/// Weight of a bubble affects the bubble size.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A nonnegative floating-point value that specifies the weight that bubble should be.
- (double)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView weightForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@optional
/// Asks the data source for the title to view on a particular bubble cell.
/// Title does not appear if the cell’s style isnoLabel or onlyWeightLabel.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A string value that specifies the title that bubble should view.
- (NSString * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView titleForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the detail text to view on a particular bubble cell.
/// Detail text appears only if the cell’s style titleAndDetailLabel, weightAndDetailLabel or titleAndWeightAndDetailLabel.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// A string value that specifies the detail text that bubble should view.
- (NSString * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView detailTextForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for the background image to view on a particular bubble cell.
/// \param bubbleContainerView The container-view object requesting this information.
///
/// \param index An index that locates a bubble in containerView.
///
///
/// returns:
/// An UIImage to view on the background of bubble cell.
- (UIImage * _Nullable)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView backgroundImageForIndexAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


/// Delegate for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents29BCBubbleContainerViewDelegate_")
@protocol BCBubbleContainerViewDelegate
@optional
/// Notify when a bubble cell has been created and added.
/// \param bubbleContainerView The container-view object that notification is sent from.
///
/// \param bubbleCellView An BCBubbleCellView object that is creasted and added.
///
/// \param index The index that locates a bubble in containerView.
///
- (void)bubbleContainerView:(BCBubbleContainerView * _Nonnull)bubbleContainerView didCreateBubbleCellView:(BCBubbleCellView * _Nonnull)bubbleCellView forIndexAt:(NSInteger)index;
@end


SWIFT_CLASS("_TtC15BeastComponents18BCCoverContentView")
@interface BCCoverContentView : UIView
/// Initializes a cover-content view with a reuse identifier and returns it to the caller.
/// \param reuseIdentifier A string used to identify the cover-content view object. You should use the same reuse identifier for all cells of the same form.
///
- (nonnull instancetype)initWithReuseIdentifier:(NSString * _Nonnull)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Prepares a reusable cover-content view for reuse by the cover-flow view’s delegate.
/// If a BCCoverContentView object is reusable—that is, it has a reuse identifier—this method is invoked just before the object is returned from the BCCoverFlowView method dequeueReusableCoverContentView(withIdentifier:for:). For performance reasons, you should only reset attributes of the cover that are not related to content. The table view’s delegate in coverFlowView(_:contentAt:) should always reset all content when reusing a cover-content view. If the cover-content view object does not have an associated reuse identifier, this method is not called. If you override this method, you must be sure to invoke the superclass implementation.
- (void)prepareForReuse;
@property (nonatomic, readonly, copy) NSString * _Nullable reuseIdentifier;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@protocol BCCoverFlowViewDataSource;
@class UIColor;
@class BCCoverFlowViewPresentDetailAnimationController;
@class UINib;
@class UITouch;
@class UIEvent;

/// View has covers are flowing through.
SWIFT_CLASS("_TtC15BeastComponents15BCCoverFlowView")
@interface BCCoverFlowView : UIScrollView <UIScrollViewDelegate>
/// Data source for the cover-flow container view to ask.
@property (nonatomic, weak) id <BCCoverFlowViewDataSource> _Nullable dataSource;
@property (nonatomic, weak) id <UIScrollViewDelegate> _Nullable delegate;
/// Number of presenting covers on cover flow view.
/// The default is 5 covers.
@property (nonatomic) NSInteger numberOfPresentingCovers;
/// Height of area for stacked to appear beyond the most top cover.
/// If this valus is less then 1.0, the height will be pixwls of the ratio of the cover-flow view’s height. Otherwise, it will use the value as pixels. The default is 0.2.
@property (nonatomic) CGFloat heightOfAreaBeyondTopCover;
/// Color for stream gradience.
/// The default is black with 0.5 alpha. Assign clear color if you don’t want gradient stream.
@property (nonatomic, strong) UIColor * _Nonnull gradientColorForStream;
/// Height of area for a just passed over cover.
@property (nonatomic) CGFloat heightOverPassed;
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull presentDetailAnimationController;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Registers a nib object containing a cover content view with the cover flow view under a specified identifier.
/// Prior to dequeueing any cover views, call this method or the register(class:forCellReuseIdentifier:) method to tell the cover floaw view how to create new cover content viws. If a cell of the specified type is not currently in a reuse queue, the cover flow view uses the provided information to create an empty view.
/// If you previously registered a class or nib file with the same reuse identifier, the nib you specify in the coverNib parameter replaces the old entry. You may specify nil for coverNib if you want to unregister the nib from the specified reuse identifier.
/// \param coverNib A nib object that specifies the nib file to use to create the cover content view.
///
/// \param identifier The reuse identifier for the ccover. This parameter must not be nil and must not be an empty string.
///
- (void)registerWithNib:(UINib * _Nullable)coverNib forCoverReuseIdentifier:(NSString * _Nonnull)identifier;
/// Registers a class for use in creating new cover content views.
/// Prior to dequeueing any cover views, call this method or the register(nib:forCellReuseIdentifier:) method to tell the cover floaw view how to create new cover content viws. If a cell of the specified type is not currently in a reuse queue, the cover flow view uses the provided information to create an empty view.
/// If you previously registered a class or nib file with the same reuse identifier, the class you specify in the coverClass parameter replaces the old entry. You may specify nil for coverClass if you want to unregister the class from the specified reuse identifier.
/// \param coverClass The class of a cover content view that you want to use in the cover flow view.
///
/// \param identifier The reuse identifier for the ccover. This parameter must not be nil and must not be an empty string.
///
- (void)registerWithClass:(Class _Nullable)coverClass forCoverReuseIdentifier:(NSString * _Nonnull)identifier;
/// Returns a reusable cover content view object for the specified reuse identifier and adds it to the cover flow view.
/// For performance reasons, a cover-flow view’s data source should generally reuse BCCoverContentView objects when it assigns cover-content views to stream in its coverFlowView(_:contentAt:) method. A cover-flow view maintains a queue or list of BCCoverContentView objects that the data source has marked for reuse. Call this method from your data source object when asked to provide a new content for the cover-flow view. This method dequeues an existing cover content if one is available, or creates a new one based on the class or nib file you previously registered, and adds it to the cover-flow view.
/// important:
/// You must register a class or nib file using the register(class:forCoverReuseIdentifier:) or register(nib:forCoverReuseIdentifier:) method before calling this method.
/// If you registered a class for the specified identifier and a new cover content must be created, this method initializes the cell by calling its init(reuseIdentifier:) method. For nib-based covers, this method loads the cover-content view object from the provided nib file. If an existing cover-content view was available for reuse, this method calls the cover’s prepareForReuse() method instead.
/// \param identifier A string identifying the cover-content object to be reused. This parameter must not be nil.
///
/// \param index The index specifying the location of the cover. The data source receives this information when it is asked for the cover and should just pass it along. This method uses the index path to perform additional configuration based on the cover’s position in the cover-flow view.
///
///
/// returns:
/// A BCCoverContentView object with the associated reuse identifier. This method always returns a valid cover-content view.
- (BCCoverContentView * _Nonnull)dequeueReusableCoverContentViewWithIdentifier:(NSString * _Nonnull)identifier for:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Returns the cover-content view at the specified index.
/// \param index The index locating the row in the table view.
///
///
/// returns:
/// An object representing a cover-content view of the cover flow view, or nil if the cover-content view is not visible or index is out of range.
- (BCCoverContentView * _Nullable)coverContentViewFor:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// Reloads the stream covers of the cover-flow view.
/// Call this method to reload all the data that is used to construct the stream of covers. For efficiency, the cover-flow view redisplays only those cover contents that are visible. It adjusts offsets if the cover-flow view shrinks as a result of the reload. The cover-flow view’s delegate or data source calls this method when it wants the cover-flow view to completely reload its data.
- (void)reloadData;
/// Scrolls through the cover-flow view until a cover content identified by index is at a particular location on the screen.
/// \param index An index that identifies a cover content in the cover-flow view by its cover index.
///
/// \param animated true if you want to animate the change in position; false if it should be immediate.
///
- (void)scrollToCoverContentAt:(NSInteger)index animated:(BOOL)animated;
- (void)layoutSubviews;
@property (nonatomic) CGPoint contentOffset;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
@end


/// Data source for cover flow view
SWIFT_PROTOCOL("_TtP15BeastComponents25BCCoverFlowViewDataSource_")
@protocol BCCoverFlowViewDataSource
/// Asks the data source for the number of covers in the view.
/// \param coverFlowView The cover-flow view object requesting this information.
///
///
/// returns:
/// The number of covwes in coverFlowView.
- (NSInteger)numberOfCoversIn:(BCCoverFlowView * _Nonnull)coverFlowView SWIFT_WARN_UNUSED_RESULT;
/// Asks the data source for a cover-content view to insert in a particular location of the cover flow view.
/// The returned BCCoverContentView object is frequently one that the application reuses for performance reasons. You should fetch a previously created cell object that is marked for reuse by sending a dequeueReusableCoverContentView(withIdentifier:for:) message to coverFlowView.
/// \param coverFlowView The cover-flow view object requesting this information.
///
/// \param index An index locating a stream in coverFlowView.
///
///
/// returns:
/// An object inheriting from BCCoverContentView that the cover-flow view can use for the stream.
- (BCCoverContentView * _Nonnull)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView contentAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


/// Delegate for bubble container view
SWIFT_PROTOCOL("_TtP15BeastComponents23BCCoverFlowViewDelegate_")
@protocol BCCoverFlowViewDelegate <UIScrollViewDelegate>
@optional
/// Tells the delegate that the top cover content view was updated from the cover-flow view.
/// \param coverFlowView A cover-flow view object informing the delegate about the cover view scale depending on scroll.
///
/// \param index An index locating a stream in coverFlowView.
///
/// \param scale Scale of scroll distance from vertical standard.
///
- (void)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView didUpdateTopCoverContentViewIndex:(NSInteger)index scrollScale:(CGFloat)scale;
/// Tells the delegate that the specified row is now selected.
/// \param coverFlowView A cover-flow view object informing the delegate about the new row selection.
///
/// \param index An index locating a stream in coverFlowView.
///
- (void)coverFlowView:(BCCoverFlowView * _Nonnull)coverFlowView didSelectCoverViewAtIndex:(NSInteger)index;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC15BeastComponents47BCCoverFlowViewPresentDetailAnimationController")
@interface BCCoverFlowViewPresentDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
/// Provides zoon-in transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomIn;
/// Provides zoon-out transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomOut;
/// Provides zoon-in and flip-left-to-right transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomInAndFlipRight;
/// Provides zoon-in and flip-right-to-left  transition for presenting detail view controller.
@property (nonatomic, readonly, strong) BCCoverFlowViewPresentDetailAnimationController * _Nonnull zoomOutAndFlipLeft;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (void)animateZoomInTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (void)animateZoomOutTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (void)animateZoomAndFlipTransitionUsing:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface NSNotificationCenter (SWIFT_EXTENSION(BeastComponents))
@end


@interface UIImage (SWIFT_EXTENSION(BeastComponents))
@end

#pragma clang diagnostic pop
