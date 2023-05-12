#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check_elf(unsigned char *buffer);
void print_class(unsigned char *e_ident);
void print_elf_magic(const unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 * check_elf - Check if the given buffer is an ELF file
 * @buffer: A pointer to the buffer containing the ELF file header
 *
 * Return: If the buffer contains an ELF file, return 1, otherwise return 0.
 */
int check_elf(unsigned char *buffer)
{
	if (buffer[0] != 0x7F || buffer[1] != 'E'
			|| buffer[2] != 'L' || buffer[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (98);
	}

	return (1);
}
/**
 * print_elf_magic - Prints the magic number of an ELF file header
 * @e_ident: Pointer to the ELF file header
 *
 * This function prints the magic number of an ELF file header
 * in the same format
 * as the readelf command.
 */
void print_elf_magic(const unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}

	printf("\n");
}
/**
 * print_class - Prints the ELF class of the file
 * @e_ident: Pointer to the ELF header's e_ident array
 *
 * Return: Nothing
 */
void print_class(unsigned char *e_ident)
{
	char *class_str;

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			class_str = "none";
			break;
		case ELFCLASS32:
			class_str = "ELF32";
			break;
		case ELFCLASS64:
			class_str = "ELF64";
			break;
		default:
			class_str = "<unknown>";
			break;
	}

	printf("  Class:                             %s\n", class_str);
}
/**
 * print_data - prints the data encoding of an ELF file
 * @e_ident: a pointer to the ELF header identification bytes
 *
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
			break;
	}
}
/**
 * print_version - prints the ELF file version
 * @e_ident: pointer to the ELF file identifier array
 *
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  %-16s%d (", "Version:", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("current)\n");
			break;
		default:
			printf(")\n");
			break;
	}

	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}
/**
 * print_osabi - prints the ELF file OS/ABI
 * @e_ident: pointer to the ELF file identifier array
 *
 * Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  %-16s", "OS/ABI:");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_type - prints the ELF file type
 * @e_type: ELF file type value
 * @e_ident: pointer to the ELF file identifier array
 *
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	const char *type_str;

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	
	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			type_str = "NONE (None)";
			break;
		case ET_REL:
			type_str = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			type_str = "EXEC (Executable file)";
			break;
		case ET_DYN:
			type_str = "DYN (Shared object file)";
			break;
		case ET_CORE:
			type_str = "CORE (Core file)";
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}
/**
 * print_entry - prints the ELF file entry point address
 * @e_entry: entry point address
 * @e_ident: pointer to the ELF file identifier array
 *
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  %-36s", "Entry point address:");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	printf("%#lx\n", e_entry);
}
/**
 * close_elf - close an ELF file descriptor
 * @fd: the file descriptor to close
 *
 * Return: void
 */
void close_elf(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}
/**
 * main - main function
 * @argv: arguments passed
 * @argc: number of arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd;
	unsigned char buffer[EI_NIDENT];
	Elf32_Ehdr *ehdr32;
	Elf64_Ehdr *ehdr64;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		exit(98);
	}

	if (read(fd, buffer, EI_NIDENT) != EI_NIDENT)
	{
		fprintf(stderr, "Failed to read ELF header\n");
		close(fd);
		exit(98);
	}

	if (!check_elf(buffer))
	{
		close(fd);
		exi(98);
	}

	ehdr32 = (Elf32_Ehdr *)buffer;
	ehdr64 = (Elf64_Ehdr *)buffer;

	printf("ELF Header:\n");
	print_elf_magic(ehdr32->e_ident);
	print_class(ehdr32->e_ident);
	print_data(ehdr32->e_ident);
	print_version(ehdr32->e_ident);
	print_osabi(ehdr32->e_ident);
	print_type(ehdr32->e_type, ehdr32->e_ident);

	close(fd);
	return (0);
}
