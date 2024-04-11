#ifdef __cplusplus
extern "C" {
#endif

//========================================================================================================================================================================================================200
//	KERNEL_GPU_CUDA_WRAPPER HEADER
//========================================================================================================================================================================================================200

void 
kernel_gpu_cuda_wrapper(record *records,
						long records_mem,
						knode *knodes,
						long knodes_elem,
						long knodes_mem,

						int order,
						long maxheight,
						int count,

						long *currKnode,
						long *offset,
						int *keys,
						record *ans);

void 
kernel_gpu_cuda_wrapper_2(	knode *knodes,
							long knodes_elem,
							long knodes_mem,

							int order,
							long maxheight,
							int count,

							long *currKnode,
							long *offset,
							long *lastKnode,
							long *offset_2,
							int *start,
							int *end,
							int *recstart,
							int *reclength);

//========================================================================================================================================================================================================200
//	End
//========================================================================================================================================================================================================200

#ifdef __cplusplus
}
#endif
