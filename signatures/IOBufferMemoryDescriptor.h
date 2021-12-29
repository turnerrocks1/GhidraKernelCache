IOBufferMemoryDescriptor * inTaskWithOptions(task_t inTask, IOOptionBits options, vm_size_t capacity, vm_offset_t alignment, uint32_t kernTag, uint32_t userTag);
IOBufferMemoryDescriptor * inTaskWithOptions(task_t inTask, IOOptionBits options, vm_size_t capacity, vm_offset_t alignment);
IOBufferMemoryDescriptor * inTaskWithPhysicalMask(task_t inTask, IOOptionBits options, mach_vm_size_t capacity, mach_vm_address_t physicalMask);
IOBufferMemoryDescriptor * withBytes(const void *bytes, vm_size_t withLength, IODirection withDirection, bool withContiguousMemory);
IOBufferMemoryDescriptor * withCapacity(vm_size_t capacity, IODirection withDirection, bool withContiguousMemory);
IOBufferMemoryDescriptor * withCopy(task_t inTask, IOOptionBits options, vm_map_t sourceMap, mach_vm_address_t source, mach_vm_size_t size);
IOBufferMemoryDescriptor * withOptions(IOOptionBits options, vm_size_t capacity, vm_offset_t alignment);
virtual void setLength(vm_size_t length);
virtual void setDirection(IODirection direction);
virtual bool initWithPhysicalMask(task_t inTask, IOOptionBits options, mach_vm_size_t capacity, mach_vm_address_t alignment, mach_vm_address_t physicalMask);
virtual vm_size_t getCapacity(void);
virtual void * getBytesNoCopy(vm_size_t start, vm_size_t withLength);
virtual void * getBytesNoCopy(void);
virtual bool appendBytes(const void *bytes, vm_size_t withLength);
kern_return_t SetLength(uint64_t length, void * supermethod);
kern_return_t GetAddressRange(IOAddressSegment *range);
