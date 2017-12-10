print-symbols.c: print-symbols-c.py sorted-symbols.txt 
	python $^ >$@

sorted-symbols.txt: symbols.txt
	sort -u <$< >$@

clean:
	rm -fr sorted-symbols.txt print-symbols.c
