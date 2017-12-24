project('opengl-test', 'cpp', default_options: [ 'cpp_std=gnu++14' ])

sfml = dependency('sfml-all')
opengl = dependency('gl')

test_sources = '''
  main.cpp
'''.split()

executable('gl', test_sources, dependencies: [sfml, opengl])
