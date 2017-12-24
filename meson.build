project('opengl-test', 'cpp', default_options: [ 'cpp_std=gnu++14' ])

sfml = dependency('sfml-all')
opengl = dependency('gl')

test_sources = '''
  main.cpp
'''.split()

executable('test', test_sources, dependencies: [sfml, opengl])
