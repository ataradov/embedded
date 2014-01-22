CONFIG = 

.PHONY: all clean sam3u samd20

all: sam3u samd20

sam3u:
	python headers.py -t sam3u $(CONFIG) -o headers/sam3u.h

samd20:
	python headers.py -t samd20 $(CONFIG) -o headers/samd20.h

clean:
	-rm sam3u/*.pyc
	-rm samd20/*.pyc


