./configure \
    CFLAGS='-msse2 -mno-sse3 -mno-sse4' \
    CXXFLAGS='-msse2 -mno-sse3 -mno-sse4 -D__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES=1' \
    --disable-debug \
    --enable-clipboard \
    --enable-display \
    --enable-dnd \
    --enable-monolithic \
    --enable-optimise \
    --enable-std_string \
    --enable-svg \
    --enable-unicode \
    --enable-webkit \
    --prefix=$HOME/.virtualenvs/Cura/ \
    --with-expat \
    --with-libjpeg=builtin \
    --with-libpng=builtin \
    --with-libtiff=builtin \
    --with-macosx-sdk=/Users/Ricky/repo/github/MacOSX-SDKs/MacOSX10.11.sdk \
    --with-macosx-version-min=10.9 \
    --with-opengl \
    --with-osx_cocoa \
    --with-zlib=builtin
