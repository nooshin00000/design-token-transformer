
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Thu, 04 Feb 2021 14:12:45 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
White,
Black,
PrimaryColour,
ShapesColour,
BodyText,
BgColour,
TestColour
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
