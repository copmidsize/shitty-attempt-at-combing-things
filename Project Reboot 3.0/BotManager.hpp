#include "SDK/SDK.hpp"
#include "reboot.h"

class BotManager
{
public:
	BotManager()
	{
		aiDirector = GetWorld()->SpawnActor<SDK::AAthenaAIDirector>((UClass*)(SDK::AAthenaAIDirector::StaticClass()), FTransform{});
	}

	void Spawn()
	{
		auto AIController = GetWorld()->SpawnActor<SDK::AFortAthenaAIBotController>((UClass*)(SDK::ABP_PhoebePlayerController_C::StaticClass()), FTransform{});
		auto AIPawn = GetWorld()->SpawnActor<SDK::AFortBotPawn>((UClass*)(SDK::ABP_PlayerPawn_Athena_Phoebe_C::StaticClass()))
	}
private:
	SDK::AAthenaAIDirector* aiDirector;
};