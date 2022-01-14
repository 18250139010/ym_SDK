
Pod::Spec.new do |s|
s.name             = 'ym_SDK'
s.version          = '1.0.0'
s.summary          = 'ym_SDK is a ym_SDK'
s.homepage         = 'https://github.com/18250139010/ym_SDK.git'
s.license               = 'MIT'
s.author                = { 'YMLift2021' => '1120134596@qq.com' }
s.source           = { :git => 'https://github.com/18250139010/ym_SDK.git',:tag => s.version.to_s }

s.frameworks       = 'UIKit', 'Foundation'
s.requires_arc     = true
s.ios.deployment_target = '9.0'
s.vendored_frameworks = "YMSDK.framework"
s.dependency "WechatOpenSDK"
s.dependency "AlibcTradeSDK","4.0.1.15"
s.dependency "AliAuthSDK","1.1.0.42-BC3"
s.dependency "mtopSDK","3.0.0.3-BC"
s.dependency "securityGuard","5.4.191"
s.dependency "AliLinkPartnerSDK","4.0.0.24"
s.dependency "BCUserTrack","5.2.0.18-appkeys"
s.dependency "UTDID","1.5.0.91"
s.dependency "WindVane","8.5.0.46-bc11"
s.dependency "Masonry"
s.dependency "MJRefresh"
s.dependency "AFNetworking"
s.dependency "MJExtension"
s.dependency "SDWebImage"









end