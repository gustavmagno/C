CC = gcc
CFLAGS = -Ileif/include
LIBS = -Lleif/lib -lleif -lclipboard -lglfw3 -lopengl32 -lgdi32 -lm

app.exe: main.c
	$(CC) main.c -o app.exe $(CFLAGS) $(LIBS)

run: app.exe
	.\app.exe

clean:
	del app.exe