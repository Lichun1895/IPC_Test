#include <ntddk.h>

VOID	DriverUnload ( PDRIVER_OBJECT driver )
{
	DbgPrint( "Unloading drivers...\n" );
}

NTSTATUS	DriverEntry( PDRIVER_OBJECT driver, PUNICODE_STRING reg_path )
{
	DbgPrint( "Start drivers...\n" );

	//
	driver->DriverUnload = DriverUnload;

	return STATUS_SUCCESS;
}
