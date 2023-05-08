#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_entry_point_address - prints entry point address
 * @header: pointer to ELF header structure
 */
void print_entry_point_address(Elf64_Ehdr *header)
{
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * print_file_type - prints file type
 * @header: pointer to ELF header structure
 */
void print_file_type(Elf64_Ehdr *header)
{
	switch (header->e_type)
	{
		case ET_NONE:
			printf("  Type:                              NONE (No file type)\n");
			break;
		case ET_REL:
			printf("  Type:                              REL (Relocatable file)\n");
			break;
		case ET_EXEC;
			printf("  Type:                              EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("  Type:                              DYN (Shared object file)\n");
			break;
		case ET_CORE
			printf("  Type:                              CORE (Core file)\n");
			break;
		default:
			printf("  Type:                              <unknown: %x>\n", header->e_type);
			break;
	}
}

/**
 * print_osabi - prints OS/ABI
 * @header: pointer to ELF header structure
 */
void print_osabi(Elf64_Ehdr *header)
{
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("  OS/ABI:                            UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("  OS/ABI:                            UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("  OS/ABI:                            UNIX - Solaris\n");
			break;
		default:
			printf("  OS/ABI:                            <unknown: %x>\n", header->e_ident[EI_OSABI]);
			break;
	}

	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_data_encoding - prints data encoding
 * @header: pointer to ELF header structure
 */
void print_data_encoding(Elf64_Ehdr *header)
{
	printf("  Data:                              ");

	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");

	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}

/**
 * print_magic_number - prints magic number
 * @header: pointer to ELF header structure
 */
void print_magic_number(Elf64_Ehdr *header)
{
	printf("  Magic:  ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}

/**
 * main - main function
 * Return: 0 on success
 */
int main()
{
	Elf64_Ehdr header;
	FILE *file = fopen("example_file", "rb");

	if (file == NULL)
	{
		printf("Error: Could not open file\n");
		return (1);
	}
	fread(&header, sizeof(header), 1, file);
	print_magic_number(&header);
	fclose(file);
	
	return (0);
}
