
Pod::Spec.new do |s|
s.name             = 'ym_SDK'
s.version          = '1.0.0'
s.summary          = 'ym_SDK is a ym_SDK'
s.homepage         = 'https://github.com/18250139010/ym_SDK.git'

s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
s.author           = { 'YMLift2021' => '1120134596@qq.com' }
s.source           = { :git => 'https://github.com/18250139010/ym_SDK.git',:tag => s.version.to_s }
s.frameworks       = 'UIKit', 'Foundation'
s.requires_arc     = true
s.ios.deployment_target = '9.0'
s.vendored_frameworks = "YMSDK.framework"









end