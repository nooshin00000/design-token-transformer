
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Wed, 03 Feb 2021 16:01:14 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
White,
Black,
PrimaryColour,
ShapesColour,
BodyText,
BgColour
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
