#import <UIKit/UIKit.h>
#import "YM_AETabBarBadge.h"
typedef NS_ENUM(NSInteger, AxcAE_TabBarConfigBulgeStyle) {
    AxcAE_TabBarConfigBulgeStyleNormal = 0,         
    AxcAE_TabBarConfigBulgeStyleCircular,           
    AxcAE_TabBarConfigBulgeStyleSquare              
};
typedef NS_ENUM(NSInteger, AxcAE_TabBarConfigAlignmentStyle) {
    AxcAE_TabBarConfigAlignmentStyleCenter = 0,           
    AxcAE_TabBarConfigAlignmentStyleCenterTop,            
    AxcAE_TabBarConfigAlignmentStyleCenterLeft,           
    AxcAE_TabBarConfigAlignmentStyleCenterRight,          
    AxcAE_TabBarConfigAlignmentStyleCenterBottom,         
    AxcAE_TabBarConfigAlignmentStyleTopLeft,        
    AxcAE_TabBarConfigAlignmentStyleTopRight,       
    AxcAE_TabBarConfigAlignmentStyleBottomLeft,     
    AxcAE_TabBarConfigAlignmentStyleBottomRight,    
};
typedef NS_ENUM(NSInteger, AxcAE_TabBarItemLayoutStyle) {
    AxcAE_TabBarItemLayoutStyleTopPictureBottomTitle = 0,   
    AxcAE_TabBarItemLayoutStyleBottomPictureTopTitle,       
    AxcAE_TabBarItemLayoutStyleLeftPictureRightTitle,       
    AxcAE_TabBarItemLayoutStyleRightPictureLeftTitle,       
    AxcAE_TabBarItemLayoutStylePicture,                     
    AxcAE_TabBarItemLayoutStyleTitle,                       
};
typedef NS_ENUM(NSInteger, AxcAE_TabBarItemBadgeStyle) {
    AxcAE_TabBarItemBadgeStyleTopRight = 0,   
    AxcAE_TabBarItemBadgeStyleTopCenter,      
    AxcAE_TabBarItemBadgeStyleTopLeft         
};
typedef NS_ENUM(NSInteger, AxcAE_TabBarInteractionEffectStyle) {
    AxcAE_TabBarInteractionEffectStyleNone,     
    AxcAE_TabBarInteractionEffectStyleSpring,   
    AxcAE_TabBarInteractionEffectStyleShake,    
    AxcAE_TabBarInteractionEffectStyleAlpha,    
    AxcAE_TabBarInteractionEffectStyleCustom,   
};
@class YM_AETabBarItem;
typedef void(^CustomInteractionEffectBlock) (YM_AETabBarItem *item);
@interface AxcAE_TabBarConfigModel : NSObject
#pragma mark - 标题控制类
@property(nonatomic, copy)NSString *itemTitle;
@property (nonatomic, strong) UIColor *normalColor;
@property (nonatomic, strong) UIColor *selectColor;
#pragma mark - 图片控制类
@property(nonatomic, copy)NSString *selectImageName;
@property(nonatomic, copy)NSString *normalImageName;
@property(nonatomic, strong)UIColor *normalTintColor;
@property(nonatomic, strong)UIColor *selectTintColor;
#pragma mark - item背景控制类
@property(nonatomic, strong)UIColor *normalBackgroundColor;
@property(nonatomic, strong)UIColor *selectBackgroundColor;
@property(nonatomic, strong)UIImageView *backgroundImageView;
#pragma mark - item附加控制类
@property(nonatomic, assign)AxcAE_TabBarConfigBulgeStyle bulgeStyle;
@property(nonatomic, assign)CGFloat bulgeHeight;
@property(nonatomic, assign)CGFloat bulgeRoundedCorners;
@property(nonatomic, assign)AxcAE_TabBarConfigAlignmentStyle alignmentStyle;
@property(nonatomic, assign)CGSize itemSize;
@property(nonatomic, strong)NSString *badge;
@property(nonatomic, assign)AxcAE_TabBarItemBadgeStyle itemBadgeStyle;
@property(nonatomic, assign)BOOL automaticHidden;
#pragma mark - item内部组件控制类
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIImageView *icomImgView;
@property(nonatomic, assign)AxcAE_TabBarItemLayoutStyle itemLayoutStyle;
@property(nonatomic, assign)CGSize titleLabelSize;
@property(nonatomic, assign)CGSize icomImgViewSize;
@property(nonatomic, assign)UIEdgeInsets componentMargin;
@property(nonatomic, assign)CGFloat pictureWordsMargin;
#pragma mark - item交互控制类
@property(nonatomic, assign)AxcAE_TabBarInteractionEffectStyle interactionEffectStyle;
@property(nonatomic, assign)BOOL isRepeatClick;
@property(nonatomic, copy)CustomInteractionEffectBlock customInteractionEffectBlock;
@property(nonatomic, assign)NSInteger tag;
@end
@interface YM_AETabBarItem : UIControl
- (instancetype)initWithModel:(AxcAE_TabBarConfigModel *)itemModel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIColor *normalColor;
@property (nonatomic, strong) UIColor *selectColor;
@property (nonatomic, strong) UIImage *normalImage;
@property (nonatomic, strong) UIImage *selectImage;
@property(nonatomic, strong)UIColor *normalTintColor;
@property(nonatomic, strong)UIColor *selectTintColor;
@property(nonatomic, strong)UIColor *normalBackgroundColor;
@property(nonatomic, strong)UIColor *selectBackgroundColor;
@property(nonatomic, strong)UIImageView *backgroundImageView;
@property(nonatomic, strong)NSString *badge;
@property(nonatomic, assign)NSInteger itemIndex;
@property (nonatomic, assign) BOOL isSelect;
@property (nonatomic, strong) UIImageView *icomImgView;
@property (nonatomic, strong) UILabel *titleLabel;
@property(nonatomic, strong)YM_AETabBarBadge *badgeLabel;
@property(nonatomic, strong)AxcAE_TabBarConfigModel *itemModel;
- (void)itemDidLayoutControl;
- (void)startStrringConfigAnimation;
@end
