#include <stdio.h>

typedef enum _INTERFACE_TYPE {
	InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main()
{
	for (INTERFACE_TYPE i = Internal; i < MaximumInterfaceType; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
