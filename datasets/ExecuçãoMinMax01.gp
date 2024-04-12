set terminal pngcairo enhanced font "arial,10" size 1280,720
set output 'minmax1.png'

# Definindo a cor de fundo do gráfico
set object 1 rectangle from screen 0,0 to screen 1,1 behind fillcolor rgb "#0d1117" fillstyle solid 1

set title "Tempo de Execução x Tamanho do Conjunto de Dados" textcolor rgb "#ffffff"
set xlabel "Tamanho do Conjunto de Dados" textcolor rgb "#ffffff"
set ylabel "Tempo de Execução (microssegundos)" textcolor rgb "#ffffff"

set key top left textcolor rgb "#ffffff"
set grid linecolor rgb "#ffffff" linewidth 1
set border linecolor rgb "#ffffff" linewidth 1

# Definindo as cores e estilos de linha para os conjuntos de dados
set style line 1 lc rgb '#ff3333' lt 1 lw 2 pt 7 ps 1   # MinMax1 (Aleatório)
set style line 2 lc rgb '#ff6233' lt 1 lw 2 pt 9 ps 1   # MinMax1 (Crescente)
set style line 3 lc rgb '#ff3333' lt 1 lw 2 pt 11 ps 1  # MinMax1 (Decrescente)

plot 'Dados1.txt' using 1:2 with linespoints linestyle 1 title 'MinMax1 (Aleatório)', \
     '' using 1:3 with linespoints linestyle 2 title 'MinMax1 (Crescente)', \
     '' using 1:4 with linespoints linestyle 3 title 'MinMax1 (Decrescente)'
