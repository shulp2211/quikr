// count the sequences in a fasta file
unsigned long long count_sequences(const char *filename);

// normalize a matrix by dividing each element by the sum of it's column
void normalize_matrix(double *matrix, int height, int width);

// load a sensing matrix
struct sensing_matrix *load_sensing_matrix(const char *filename);

// load a count matrix
double *load_count_matrix(char *filename, int width, int kmer);

// load headers
char **load_headers(char *filename, int sequences); 
