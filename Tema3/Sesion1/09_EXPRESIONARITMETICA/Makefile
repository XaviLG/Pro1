# Definición de compoñentes
CC = g++
CFLAGS = -std=c++11 -Wall

# Nome do executable e ruta
TARGET = ./bin/executable

# Arquivos fontes e ruta
SRC = ./src/main.cpp	# Poñemos unicamente o main.cpp. Se houbera máis arquivos, engadiríanse aquí
OBJ = $(SRC:.cpp=.o)

# Regra principal
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Regra para compilar os arquivos .cpp a .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos xerados
clean:
	rm -f $(OBJ) $(TARGET)*
