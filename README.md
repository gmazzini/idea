<pre>
./q1 1 1000000000 | awk -F',' '{h[$3]++} END{for(k in h) printf "%s,%d\n", k, h[k]}' | sort -t, -k1,1n > hist.dat

gnuplot <<'GP'
set datafile separator ","
set term pngcairo size 1200,700
set output 'hist_len.png'
set title 'Istogramma len (Collatz)'
set xlabel 'len'
set ylabel 'conteggio'
set boxwidth 0.9
set style fill solid 1.0
set grid ytics
plot 'hist.dat' using 1:2 with boxes notitle
GP

  
</pre>
