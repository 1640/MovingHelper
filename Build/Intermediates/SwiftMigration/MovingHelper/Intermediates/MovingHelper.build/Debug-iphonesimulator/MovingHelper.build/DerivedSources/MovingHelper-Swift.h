// Generated by Apple Swift version 1.2 (swiftmigrator-700.32 clang-602.0.47)
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
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
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
#if __has_feature(nullability)
#  define SWIFT_NULLABILITY(X) X
#else
# if !defined(__nonnull)
#  define __nonnull
# endif
# if !defined(__nullable)
#  define __nullable
# endif
# if !defined(__null_unspecified)
#  define __null_unspecified
# endif
#  define SWIFT_NULLABILITY(X)
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;


/// A button subclass to make it simpler to display and update whether a
/// Task is done or not.
SWIFT_CLASS("_TtC12MovingHelper8Checkbox")
@interface Checkbox : UIButton
@property (nonatomic) BOOL isChecked;
- (void)awakeFromNib;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboardSegue;
@class NSBundle;

SWIFT_CLASS("_TtC12MovingHelper20MasterViewController")
@interface MasterViewController : UITableViewController
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(null_unspecified) instancetype)initWithNibName:(NSString * __null_unspecified)nibNameOrNil bundle:(NSBundle * __null_unspecified)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(null_unspecified) instancetype)initWithCoder:(NSCoder * __null_unspecified)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface MasterViewController (SWIFT_EXTENSION(MovingHelper))
@end


@interface MasterViewController (SWIFT_EXTENSION(MovingHelper))
- (void)createdMovingTasks:(NSArray * __nonnull)tasks;
- (void)updatedMovingDate;
@end

@class UITableView;
@class UIView;
@class NSIndexPath;
@class UITableViewCell;

@interface MasterViewController (SWIFT_EXTENSION(MovingHelper)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * __nonnull)tableView;
- (CGFloat)tableView:(UITableView * __nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (UIView * __nullable)tableView:(UITableView * __nonnull)tableView viewForHeaderInSection:(NSInteger)section;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end


@interface NSDate (SWIFT_EXTENSION(MovingHelper))
@end


@interface NSDictionary (SWIFT_EXTENSION(MovingHelper))

/// Checks a dictionary for a value for a given key, and returns either its
/// String value or an empty string.
///
/// \param key: The key to use to check the dictionary
///
/// \returns The found string, or an empty string if it was not found.
- (NSString * __nonnull)safeString:(NSString * __nonnull)key;

/// Checks a dictionary for a value for a given key, and returns either its
/// integer value or zero.
///
/// \param key: The key to use to check the dictionary
///
/// \returns The found number, or zero if it was not found.
- (NSInteger)safeInt:(NSString * __nonnull)key;

/// Checks a dictionary for a value for a given key, and returns either its
/// boolean value or false.
///
/// \param key: The key to use to check the dictionary
///
/// \returns The found boolean value, or false if it was not found.
- (BOOL)safeBoolean:(NSString * __nonnull)key;
@end



/// A section header view which shows when tasks are due and changes color
/// based on whether the due date has passed for the given move date.
SWIFT_CLASS("_TtC12MovingHelper21TaskSectionHeaderView")
@interface TaskSectionHeaderView : UITableViewCell
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MovingHelper17TaskTableViewCell")
@interface TaskTableViewCell : UITableViewCell
@property (nonatomic) IBOutlet Checkbox * __null_unspecified checkbox;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UITableViewCell (SWIFT_EXTENSION(MovingHelper))

/// to the project bundle. A class of FooTableViewCell would return "FooTableViewCell" as the identifier.
///
/// \returns The cell identifier based on the class's name, but not tied
+ (NSString * __nonnull)cellIdentifierFromClassName;
@end

#pragma clang diagnostic pop