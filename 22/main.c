#include <stdio.h>
#include <math.h>
#define MAX_SIZE 256

unsigned int W, H;
unsigned int image[MAX_SIZE][MAX_SIZE] = {0};

char layers[4] = {'C', 'M', 'Y', 'K'};

void print_C(unsigned int mask[][MAX_SIZE]);
void print_M(unsigned int mask[][MAX_SIZE]);
void print_Y(unsigned int mask[][MAX_SIZE]);
void print_K(unsigned int mask[][MAX_SIZE]);
void CMYK_to_RGB();

int main()
{
	int layer,i,j;

    // Get the dimension of the image.
    scanf("%u %u", &W, &H);

    // Declare the mask for single ink color.
    unsigned int mask[MAX_SIZE][MAX_SIZE] = {0};

    // For each layer, do the following:
    for (layer = 0; layer < 4; ++layer)
    {
        // Get color mask.
        for (i = 0; i < H; ++i)
        {
            for (j = 0; j < W; ++j)
            {
                scanf("%u", &mask[i][j]);
            }
        }

        // Print a layer of that color to the paper.
        switch (layers[layer])
        {
            case 'C': print_C(mask); break;
            case 'M': print_M(mask); break;
            case 'Y': print_Y(mask); break;
            case 'K': print_K(mask); break;
        }
    }

    // Convert CMYK color to RGB color.
    CMYK_to_RGB();

    // Show the final result.
    for (i = 0; i < H; ++i)
    {
        for (j = 0; j < W; ++j)
        {
            printf("#%06x ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void print_C(unsigned int mask[][MAX_SIZE])
{
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			image[i][j] = 255*(100-mask[i][j]/100);
		}
	}
}

void print_M(unsigned int mask[][MAX_SIZE])
{
	
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			image[i][j] = 255*(100-mask[i][j]/100);
		}
	}
}

void print_Y(unsigned int mask[][MAX_SIZE])
{
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			
			image[i][j] = 255*(100-mask[i][j]/100);
		}
	}
}

void print_K(unsigned int mask[][MAX_SIZE])
{
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			image[i][j]=image[i][j]*(100 - mask[i][j]/100);
		}
	}
}

void CMYK_to_RGB()
{
	int i,j;
	
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			
			image[i][j] = 1000000*image[i][j] + 1000*image[i][j] + image[i][j];
				
		}
	}


}

