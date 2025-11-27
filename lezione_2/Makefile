# VAriabile per la cartella
BIN_FOLDER := ./bin
# Variabile per la compilazione (abilta tutti i warning per evedere errori nel terminale)
CXXFLAGS := -Wall

# Target principale
all: arrays pointers references

# regola di compilazione generalizzata
%: %.cpp | $(BIN_FOLDER)
	g++ $(CXXFLAGS) $< -o $(BIN_FOLDER)/$@

$(BIN_FOLDER):
	@mkdir -p $(BIN_FOLDER)

clean:
	@rm -r ${BIN_FOLDER}

.PHONY: all clean