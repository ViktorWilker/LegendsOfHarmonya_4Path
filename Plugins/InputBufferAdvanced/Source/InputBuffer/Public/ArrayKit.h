// Copyright Isaac Hsu

#pragma once

#include "Containers/Array.h"

/**
* Constructs a range of items into memory from a set of arguments.  The arguments come from an another array.
*
* @param	Dest		The memory location to start copying into.
* @param	Source		A source object to copy from.
* @param	Count		The number of elements to copy.
*/
template <typename DestinationElementType, typename SourceElementType>
FORCEINLINE typename TEnableIf<!TIsBitwiseConstructible<DestinationElementType, SourceElementType>::Value>::Type CopyConstructItems(void* Dest, const SourceElementType& Source, int32 Count)
{
    while (Count)
    {
        new (Dest) DestinationElementType(Source);
        ++(DestinationElementType*&)Dest;
        --Count;
    }
}


template <typename DestinationElementType, typename SourceElementType>
FORCEINLINE typename TEnableIf<TIsBitwiseConstructible<DestinationElementType, SourceElementType>::Value>::Type CopyConstructItems(void* Dest, const SourceElementType& Source, int32 Count)
{
    while (Count)
    {
        FMemory::Memcpy(Dest, &Source, sizeof(SourceElementType));
        ++(DestinationElementType*&)Dest;
        --Count;
    }
}

/**
* Replaces an element at given location with a given one. If the given location is out of bounds, append elements to fill the gap.
*
* @param Index Location in array of the element to replace.
* @param Item The element of replacement.
*/
template <typename ElementType, typename Allocator = FDefaultAllocator>
void ArraySetItem(TArray<ElementType, Allocator> &Array, int32 Index, const ElementType& NewItem, const ElementType& PaddingItem)
{
    check(Index >= 0);

    int32 Delta = Index - Array.Num();
    if (Delta >= 0)
    {
        const int32 FirstIdx = Array.AddUninitialized(Delta);
        CopyConstructItems<ElementType>((uint8*)Array.GetData() + FirstIdx * sizeof(ElementType), PaddingItem, Delta);

        Array.Add(NewItem);
    }
    else
    {
        Array.GetData()[Index] = NewItem;
    }
}
