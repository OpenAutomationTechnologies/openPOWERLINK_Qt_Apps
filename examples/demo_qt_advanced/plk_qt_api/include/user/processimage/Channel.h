/**
********************************************************************************
\file   Channel.h

\brief  Describes the Channel and its attributes
*******************************************************************************/
/*------------------------------------------------------------------------------
Copyright (c) 2014, Kalycito Infotech Private Limited
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	* Neither the name of the copyright holders nor the
	  names of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
------------------------------------------------------------------------------*/

#ifndef _CHANNEL_H_
#define _CHANNEL_H_

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <string>
#include <iostream>

#include "user/processimage/Direction.h"
#include "user/processimage/IECDataType.h"

#include "common/QtApiGlobal.h"

/**
 * \brief Describes the Channel and its attributes
 *
 */
class PLKQTAPI_EXPORT Channel
{
public:
	/**
	 * \brief   Constructs a Channel which inputs the properties of a Channel.
	 *
	 * \param name        Name of the Channel
	 * \param dataType    Datatype of the Channel
	 * \param byteOffset  Byte offset of the Channel
	 * \param bitOffset   Bit offset of the Channel
	 * \param bitSize     Size of the Channel value in bits
	 * \param direction   Direction of the Channel
	 */
	Channel(const std::string& name,
		IECDataType dataType,
		const unsigned int byteOffset,
		const unsigned int bitOffset,
		const unsigned int bitSize,
		Direction direction);

	/**
	 * \return const std::string  The Channel name.
	 */
	const std::string& GetName() const;

	/**
	 * \return IECDataType  The Datatype of of the Channel
	 */
	IECDataType GetDataType() const;

	/**
	 * \return unsigned int  The offset of the Channel within the process image in bytes.
	 */
	unsigned int GetByteOffset() const;

	/**
	 * \return unsigned int  The bit offset of the Channel within the process image.
	 */
	unsigned int GetBitOffset() const;

	/**
	 * \return unsigned int  The Size of the Channel in bits.
	 */
	unsigned int GetBitSize() const;

	/**
	 * \return Direction  The Direction of the Channel variable.
	 */
	Direction GetDirection() const;

private:
	std::string name; /**< Name */
	IECDataType dataType; /**< dataType */
	unsigned int byteOffset; /**< PIOffset */
	unsigned int bitOffset; /**< BitOffset */
	unsigned int bitSize; /**< dataSize */
	Direction direction; /**< ProcessImage type */
};

#endif _CHANNEL_H_
