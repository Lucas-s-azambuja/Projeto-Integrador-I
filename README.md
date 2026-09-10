# Testes na máquina virtual VirtualBox na distribuição Ubuntu
Branch criado para guardar os testes usando Ubuntu.

Setup da máquina virtual: 6GB de memória RAM;
25GB de memória de disco;
256MB VRAM (O máximo que da para colocar na VirtualBox);
4 Processadores de CPU;
Cap de processamento 100%;
Número de monitores virtuais: 1;

[Teste de Benchmark Ubuntu usando Geekbench7](https://browser.geekbench.com/v7/cpu/303194):

# Single-Core Performance
Single-Core Score:	356	Pontos

File Compression: 344 Pontos
48.9 MB/sec	
 
Navigation: 546 Pontos
3.00 routes/sec	
 
HTML5 Browser: 235 Pontos
2.94 pages/sec	
 
PDF Viewer: 341 Pontos
15.3 Mpixels/sec	
 
Photo Library: 330 Pontos
1.13 images/sec	
 
Clang: 311 Pontos
1.68 Klines/sec	
 
Text Processing: 179 Pontos
10.6 pages/sec	
 
Asset Compression: 423 Pontos
9.39 MB/sec	
 
HDR: 471 Pontos
28.4 Mpixels/sec	
 
Photo Editor: 521 Pontos
9.57 images/sec	
 
Ray Tracer: 492 Pontos
138.1 Ksamples/sec	
 
Structure from Motion: 462 Pontos
8.36 Kpixels/sec	
 
Game Physics: 397 Pontos
16.1 FPS	
 
Video Encoder: 270 Pontos
9.8 FPS	
 
Audio Encoder: 355 Pontos
494.4 Ksamples/sec	
 
Video Player: 270 Pontos
28.6 FPS

# Teste de comandos no Terminal:

Criar pasta: mkdir nome_da_pasta ;

Abrir programas: Apenas digitar o nome do programa em letras minusculas ;

Abrir arquivos: xdg-open . (Abrir a pasta atual no Explorador de Arquivos), xdg-open nome_do_arquivo (Abrir qualquer arquivo com o programa padrão do sistema).

Instalar programas e pacotes: sudo apt install nome_do_programa .
