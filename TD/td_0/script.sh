gcc alea -o alea -Wall
./alea >> mes_nombres
sort -n mes_nombres >> mes_nombres_tries.data
uniq mes_nombres_tries.data >> mes_nombres_uniq_trie.data
wc mes_nombres_uniq_trie.data