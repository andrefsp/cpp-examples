init: download-boost install-boost

download-boost:
	cd ./lib && git clone --recursive git@github.com:boostorg/boost.git

install-boost:
	./lib/boost/bootstrap.sh && ./lib/boost/b2
