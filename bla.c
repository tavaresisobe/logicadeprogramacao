 //checar linhas:
    for(i = 0 ; i < 9 && count != 1 ; i++)//se count for 1 temos que interromper o laço
    {
        for(j = 0 ; j < 10 ; j++)
        {
            vetor[j] = 0 ; //colocando zeros para poder verificar a próxima linha
        }
        for(j = 0 ; j < 9 && count != 1 ; j++) //se count for 1 temos que interromper o laço
        { 
            if(vetor[matriz[i][j]] == 0)
            {
                vetor[matriz[i][j]] = 1 ; //vendo aquele número naquela linha pela primeira vez
            }
            else{
                    count = 1 ; //vendo aquele número naquela linha mais de uma vez
                }
        }
    }
    //checa colunas:
    for(j = 0 ; j < 9 && count != 1 ; j++)//se count for 1 temos que interromper o laço
    {
        for(i = 0 ; i < 10 ; i++)
        {
            vetor[i] = 0 ; //colocando zeros para poder verificar a próxima linha
        }
        for(i = 0 ; i < 9 && count != 1 ; i++) //se count for 1 temos que interromper o laço
        { 
            if(vetor[matriz[i][j]] == 0)
            {
                vetor[matriz[i][j]] = 1; //vendo aquele número naquela linha pela primeira vez
            }
            else{
                    count = 1 ; //vendo aquele número naquela linha mais de uma vez
                }
        }
    }
