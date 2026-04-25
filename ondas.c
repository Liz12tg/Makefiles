#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define WIDTH 800
#define HEIGHT 800

// Estructura para la cabecera del BMP
#pragma pack(push, 1)
typedef struct {
    uint16_t type;
    uint32_t size;
    uint16_t reserved1, reserved2;
    uint32_t offset;
    uint32_t header_size;
    int32_t  width, height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t img_size;
    int32_t  res_x, res_y;
    uint32_t colors, important_colors;
} BMPHeader;
#pragma pack(pop)

int main() {
    FILE *fp = fopen("ondas.bmp", "wb");
    BMPHeader header = {0};
    header.type = 0x4D42; 
    header.offset = sizeof(BMPHeader);
    header.header_size = 40;
    header.width = WIDTH;
    header.height = HEIGHT;
    header.planes = 1;
    header.bpp = 24; 
    header.size = header.offset + (WIDTH * HEIGHT * 3);

    fwrite(&header, sizeof(header), 1, fp);

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            float d = sqrt(pow(x - 400, 2) + pow(y - 400, 2));
            
            unsigned char b = (unsigned char)(127 + 127 * sin(d * 0.1));
            unsigned char g = (unsigned char)(127 + 127 * cos(d * 0.05));
            unsigned char r = (unsigned char)(255 - (b + g) / 2);

            fputc(b, fp); 
            fputc(g, fp); 
            fputc(r, fp);
        }
    }

    fclose(fp);
    printf("Imagen 'ondas.bmp' generada exitosamente.\n");
    return 0;
}