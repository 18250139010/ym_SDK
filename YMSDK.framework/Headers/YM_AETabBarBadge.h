#import <UIKit/UIKit.h>
#import "AxcAE_TabBarDefine.h"
@interface YM_AETabBarBadge : UILabel
@property (nonatomic, strong) NSString *badgeText;
@property(nonatomic, assign)BOOL automaticHidden;
@property(nonatomic, assign)CGFloat badgeHeight;
@property(nonatomic , assign)CGFloat badgeWidth;
@end
