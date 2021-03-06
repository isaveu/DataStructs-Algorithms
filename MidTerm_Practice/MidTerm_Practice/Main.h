#pragma once

#define BYTE_BITS			8
#define BIT_TO_CHAR(bit)	((bit) / BYTE_BITS)
#define BIT_IN_CHAR(bit)	(1 << (BYTE_BITS - 1 - ((bit) % BYTE_BITS)))
#define MIN_CHARS(bits)		((((bits) - 1) / CHAR_BIT) + 1)
#define MAX_UCHAR			0xff

const int SENTINEL = -99;

#include <vector>
#include <assert.h>
#include <iostream>

#include "BitArray.h"
#include "UnorderedArray.h"
#include "OrderedArray.h"
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

void UnorderedArrayTest();
void OrderedArrayTest();
void BitArrayTest();
void SinglyLinkedListTest();
void DoublyLinkedListTest();