
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 09 Feb 2021 16:31:29 GMT
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
