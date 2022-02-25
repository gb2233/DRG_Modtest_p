#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourceCreator.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class UResourceCreator : public UDataAsset {
    GENERATED_BODY()
public:
    UResourceCreator();
};

