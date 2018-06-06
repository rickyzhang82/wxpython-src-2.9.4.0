python setup.py install \
    --prefix=$HOME/.virtualenvs/Cura \
    BUILD_GIZMOS=1 \
    BUILD_GLCANVAS=1 \
    BUILD_STC=1 \
    INSTALL_MULTIVERSION=0 \
    UNICODE=1 \
    WX_CONFIG=$HOME/.virtualenvs/Cura/bin/wx-config \
    WXPORT=osx_cocoa
