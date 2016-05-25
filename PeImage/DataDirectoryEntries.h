#pragma once
#include "PeImageFwd.h"
#include "DataDirectoryEntryType.h"
#include "DataSize.h"
#include "DataPtr.h"
namespace PeDecoder
{
	// ע�������GetSize��һ����ӳ��ʵ��С
	class DataDirectoryEntries :
		public DataSize<PDWORD>,
		public DataPtr<PIMAGE_DATA_DIRECTORY>
	{
	public:
		typedef TDataPtr iterator;
		DataDirectoryEntries(TDataPtr ptr, TSizePtr sizePtr);
		~DataDirectoryEntries() = default;
		bool IsValid() const;
		// indexԽ�緵��nullptr
		TDataPtr GetDirectoryEntry(DataDirectoryEntryType index);
		TDataPtr operator[](DataDirectoryEntryType index);
		iterator begin() const;
		iterator end() const;
		// ʵ������С���������С��һ����
		static constexpr TSizeType MaxSize();
	protected:
	};

}  // namespace PeDecoder