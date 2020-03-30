Pod::Spec.new do |s|

  s.name         = "GunosyMoPubAdapter"
  s.version      = "2.1.0.3"
  s.summary      = "MoPub Adapter for Gunosy AdNetwork."

  s.description  = <<-DESC
                   MoPub SDK Adapter for Gunosy AdNetwork
                   DESC

  s.homepage     = "https://github.com/gunosy/GunosyAdNetworkMopubSDK-iOS"
  s.license      = { :type => "Copyright", :text => "Copyright (c) Gunosy inc." }
  s.author       = "Gunosy inc."
  s.platform     = :ios, "9.0"
  s.ios.deployment_target = '9.0'

  s.source       = { :git => "https://github.com/gunosy/GunosyAdNetworkMopubSDK-iOS.git", :tag => "#{s.version}" }
  s.source_files  = '*.{h}'
  s.vendored_libraries = 'libGunosyMoPubAdapter.a'
  s.dependency 'mopub-ios-sdk'
  s.dependency 'GunosyAdsSDK'

end
