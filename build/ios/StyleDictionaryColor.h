
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Wed, 10 Feb 2021 14:50:07 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
White,
Black,
PrimaryColour,
ShapesColour,
BodyText,
BgColour,
TestColourOne
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
