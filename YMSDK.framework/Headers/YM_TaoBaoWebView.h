#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface YM_TaoBaoWebView : UIViewController<WKNavigationDelegate>
@property (copy, nonatomic) NSString *urlStr;
@property (strong, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *OpenUrl;
@end
NS_ASSUME_NONNULL_END
