#pragma once
#include "../Common/Common.h"
namespace PE
{
	template<typename _PeDecoder>
	class GlobalptrDirectory :
		public DataDirectory<GlobalptrDirectory< _PeDecoder>, _PeDecoder, PVOID, IMAGE_DIRECTORY_ENTRY_GLOBALPTR>
	{
	public:

		GlobalptrDirectory(_PeDecoder& pe) :DataDirectoryBase(pe)
		{
		}

		~GlobalptrDirectory()
		{
		}
	};

}