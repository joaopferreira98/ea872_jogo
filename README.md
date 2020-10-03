# EA872 - NAV.io

Repositório para guardarmos os arquivos do nosso jogo para a disciplina de EA872.

## Ideia Geral

Jogo competitivo, cada um por si, em que o objetivo é acumular mais pontos possíveis em um determinado tempo (cerca de 10 minutos). Os pontos são obtidos ao acertar tiros e destruir naves de outros jogadores.

Em termos de gráficos, seria um jogo 2D, pixelado, possivelmente em preto e branco. Pensei no preto representar o espaço e o branco nós utilizarmos para desenhar as naves, tiros, etc. (ver referência do jogo "Asteroids"). 

## Jogabilidade

Você controlaria a nave com as setas do teclado (ou outras teclas) e atiraria com o espaço. Cada nave teria seus pontos de vida. A ideia é que quanto mais pontos o jogador for acumulando a nave dele vai crescendo de tamanho para torná-lo mais fácil de ser atingido por outras naves e ir aumentando cada vez mais a dificuldade de manter a sua pontuação conforme ela vai aumentando (ver referência do jogo "Agar.io").

Os pontos de vida de cada nave são regenerados automaticamente. Para deixar mais interessante, podemos deixar as naves pequenas (de jogadores com baixa pontuação) recuperar a vida mais rápido do que as naves grandes, criando um outro fator que torna a classificação da pontuação mais dinâmica. Pensei também em colocar alguns obstáculos para os jogadores, como asteróides, que, caso a nave de um jogador se atingida ele perde pontos de vida e/ou pontuação.

A ideia é que o jogador perca todos a sua pontuação se sua nave for destruída e perca alguns pontos a ser atingida por outros jogadores.

## Observações

- O tempo da partida ainda está em aberto, se não der certo, podemos aumentar/diminuir;

- O esquema da pontuação também está aberto a sugestões;

- No esquema single-player podemos deixar um jogador lutando contra outras naves controladas por IA.

## Referências

Segue a seguir algumas referências de alguns jogos no estilo do proposto, para termos uma base na hora de fazer o nosso projeto:

- [Agar.io, Web, 2015](https://www.youtube.com/watch?v=UBWsbhmA73c) - Referência principal para a jogabilidade, mostra muito bem a dinâmica que eu to pensando de competitivade entre os jogadores;

- [Asteroids, Fliperama, 1979](https://www.youtube.com/watch?v=WYSupJ5r2zo) - Referência para o estilo gráfico do jogo e para um pouco da jogabilidade.
