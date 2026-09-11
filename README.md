# Testes na máquina virtual VirtualBox na distribuição Mint Cinnamon

Branch criado para guardar os testes usando Mint.

# Setup da máquina virtual

6GB de memória RAM; 
30GB de memória de disco;
128MB VRAM (O máximo que da para colocar na VirtualBox do Mint);
4 Processadores de CPU;
Cap de processamento 100%;
Número de monitores virtuais: 1.

# Espaço necessário

10.3GB de espaço de disco;

6.3Gi de espaço RAM.

[https://browser.geekbench.com/v7/cpu/318396](Geekbench7)

# Single-Core Performance

Single-Core Score:	342	Pontos

File Compression: 370 Pontos
52.7 MB/sec	
 
Navigation: 628 Pontos
3.46 routes/sec	
 
HTML5 Browser: 191 Pontos
2.39 pages/sec	
 
PDF Viewer: 288 Pontos
13.0 Mpixels/sec	
 
Photo Library: 264 Pontos
0.90 images/sec	
 
Clang: 227 Pontos
1.23 Klines/sec	
 
Text Processing: 131 Pontos
7.72 pages/sec	
 
Asset Compression: 337 Pontos
7.49 MB/sec	
 
HDR: 420 Pontos
25.4 Mpixels/sec	
 
Photo Editor: 554 Pontos
10.2 images/sec	
 
Ray Tracer: 369 Pontos
103.6 Ksamples/sec	
 
Structure from Motion: 471 Pontos
8.52 Kpixels/sec	
 
Game Physics: 404 Pontos
16.3 FPS	
 
Video Encoder: 327 Pontos
11.9 FPS	
 
Audio Encoder: 500 Pontos
696.1 Ksamples/sec	
 
Video Player: 393 Pontos
41.6 FPS

# Multi-Core Performance

Multi-Core Score:	1390 Pontos

File Compression: 1271 Pontos
180.8 MB/sec	
 
Photo Library: 1364 Pontos
4.67 images/sec	
 
Clang: 1298 Pontos
7.02 Klines/sec	
 
Text Processing: 658 Pontos
38.8 pages/sec	
 
Asset Compression: 1746 Pontos
38.8 MB/sec	
 
HDR: 1496 Pontos
90.4 Mpixels/sec	
 
Photo Editor: 1755 Pontos
32.3 images/sec	
 
Ray Tracer: 2048 Pontos
575.4 Ksamples/sec

# Teste de Inicialização

1m e 53.221s.

# Teste de tempo de Download

1 Hora.

# Teste de comandos no Terminal

Criar pasta: mkdir nome_da_pasta ;


Abrir programas: Apenas digitar o nome do programa em letras minusculas ;


Abrir arquivos: xdg-open . (Abrir a pasta atual no Explorador de Arquivos), xdg-open nome_do_arquivo (Abrir qualquer arquivo com o programa padrão do sistema), cat nome_do_arquivo.txt (Lê o arquivo no terminal em si).

nano nome_do_arquivo (Abri o arquivo em um editor de texto);


Instalar programas e pacotes: sudo apt install nome_do_programa .


Navegação: cd nome_da_pasta (Vai até a pasta);

cd (Volta até a pasta mãe);

ls (Lista os contêudos da pasta atual);

pwd (Mostra o caminho de pastas até a sua atual);

rm nome_do_arquivo (Remove permanentemente um arquivo);

rm -r nome_da_pasta (Remove uma pasta e tudo que se localiza dentro dela);

touch nome_do_arquivo.txt (Cria um arquivo em branco);

mv origem destino (move ou renomeia uma pasta/arquivo).
