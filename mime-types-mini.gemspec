# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'mime/types/mini/version'

Gem::Specification.new do |spec|
  spec.name          = "mime-types-mini"
  spec.version       = Mime::Types::Mini::VERSION
  spec.authors       = ["Samuel Williams"]
  spec.email         = ["samuel.williams@oriontransfer.co.nz"]

  spec.summary       = %q{A native implementation of mime-types which improves both memory usage and performance.}
  #spec.description   = %q{TODO: Write a longer description or delete this line.}
  #spec.homepage      = "TODO: Put your gem's website or public repo URL here."

  spec.files         = `git ls-files -z`.split("\x0").reject { |f| f.match(%r{^(test|spec|features)/}) }
  spec.bindir        = "exe"
  spec.executables   = spec.files.grep(%r{^exe/}) { |f| File.basename(f) }
  spec.require_paths = ["lib"]

  spec.extensions = %w[ext/MimeTypeMiniDatabase/extconf.rb]

  spec.add_development_dependency "bundler", "~> 1.12"
  spec.add_development_dependency "rake", "~> 10.0"
  spec.add_development_dependency "rspec", "~> 3.0"
end
