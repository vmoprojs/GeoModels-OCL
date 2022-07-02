
#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

#define extern
#include "header.h"
#undef extern
//#include <stdlib.h> // for NULL






//*******************  ST: OpenCL Header ****************

#define CL_SILENCE_DEPRECATION
#define CL_USE_DEPRECATED_OPENCL_1_2_APIS
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#include <unistd.h>
#else
#include <CL/cl.h>
#endif

//#define LOW -1.0e15
//#define MAXERR 1e-6
//#define EPS DBL_EPSILON

#pragma once

#include <string.h>

#define MAX_PLATFORMS     8
#define MAX_DEVICES      16
#define MAX_INFO_STRING 256



#ifdef __cplusplus
#include <cstdio>
#endif


const char *err_code (cl_int err_in);
#define checkError(E, S) check_error(E,S,__FILE__,__LINE__)
unsigned getDeviceList(cl_device_id devices[MAX_DEVICES]);
void getDeviceName(cl_device_id device, char name[MAX_INFO_STRING]);
int parseUInt(const char *str, cl_uint *output);
void check_error(cl_int err, const char *operation, char *filename, int line);







#define MAX_BINARY_SIZE (0x1000000)
#define SEP Rprintf("-----------------------------------------------------------\n")
char * getKernelSource(char *filename);
const char *err_code (cl_int err_in)
{
    switch (err_in) {
        case CL_SUCCESS:
            return (char*)"CL_SUCCESS";
        case CL_DEVICE_NOT_FOUND:
            return (char*)"CL_DEVICE_NOT_FOUND";
        case CL_DEVICE_NOT_AVAILABLE:
            return (char*)"CL_DEVICE_NOT_AVAILABLE";
        case CL_COMPILER_NOT_AVAILABLE:
            return (char*)"CL_COMPILER_NOT_AVAILABLE";
        case CL_MEM_OBJECT_ALLOCATION_FAILURE:
            return (char*)"CL_MEM_OBJECT_ALLOCATION_FAILURE";
        case CL_OUT_OF_RESOURCES:
            return (char*)"CL_OUT_OF_RESOURCES";
        case CL_OUT_OF_HOST_MEMORY:
            return (char*)"CL_OUT_OF_HOST_MEMORY";
        case CL_PROFILING_INFO_NOT_AVAILABLE:
            return (char*)"CL_PROFILING_INFO_NOT_AVAILABLE";
        case CL_MEM_COPY_OVERLAP:
            return (char*)"CL_MEM_COPY_OVERLAP";
        case CL_IMAGE_FORMAT_MISMATCH:
            return (char*)"CL_IMAGE_FORMAT_MISMATCH";
        case CL_IMAGE_FORMAT_NOT_SUPPORTED:
            return (char*)"CL_IMAGE_FORMAT_NOT_SUPPORTED";
        case CL_BUILD_PROGRAM_FAILURE:
            return (char*)"CL_BUILD_PROGRAM_FAILURE";
        case CL_MAP_FAILURE:
            return (char*)"CL_MAP_FAILURE";
        case CL_MISALIGNED_SUB_BUFFER_OFFSET:
            return (char*)"CL_MISALIGNED_SUB_BUFFER_OFFSET";
        case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
            return (char*)"CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST";
        case CL_INVALID_VALUE:
            return (char*)"CL_INVALID_VALUE";
        case CL_INVALID_DEVICE_TYPE:
            return (char*)"CL_INVALID_DEVICE_TYPE";
        case CL_INVALID_PLATFORM:
            return (char*)"CL_INVALID_PLATFORM";
        case CL_INVALID_DEVICE:
            return (char*)"CL_INVALID_DEVICE";
        case CL_INVALID_CONTEXT:
            return (char*)"CL_INVALID_CONTEXT";
        case CL_INVALID_QUEUE_PROPERTIES:
            return (char*)"CL_INVALID_QUEUE_PROPERTIES";
        case CL_INVALID_COMMAND_QUEUE:
            return (char*)"CL_INVALID_COMMAND_QUEUE";
        case CL_INVALID_HOST_PTR:
            return (char*)"CL_INVALID_HOST_PTR";
        case CL_INVALID_MEM_OBJECT:
            return (char*)"CL_INVALID_MEM_OBJECT";
        case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
            return (char*)"CL_INVALID_IMAGE_FORMAT_DESCRIPTOR";
        case CL_INVALID_IMAGE_SIZE:
            return (char*)"CL_INVALID_IMAGE_SIZE";
        case CL_INVALID_SAMPLER:
            return (char*)"CL_INVALID_SAMPLER";
        case CL_INVALID_BINARY:
            return (char*)"CL_INVALID_BINARY";
        case CL_INVALID_BUILD_OPTIONS:
            return (char*)"CL_INVALID_BUILD_OPTIONS";
        case CL_INVALID_PROGRAM:
            return (char*)"CL_INVALID_PROGRAM";
        case CL_INVALID_PROGRAM_EXECUTABLE:
            return (char*)"CL_INVALID_PROGRAM_EXECUTABLE";
        case CL_INVALID_KERNEL_NAME:
            return (char*)"CL_INVALID_KERNEL_NAME";
        case CL_INVALID_KERNEL_DEFINITION:
            return (char*)"CL_INVALID_KERNEL_DEFINITION";
        case CL_INVALID_KERNEL:
            return (char*)"CL_INVALID_KERNEL";
        case CL_INVALID_ARG_INDEX:
            return (char*)"CL_INVALID_ARG_INDEX";
        case CL_INVALID_ARG_VALUE:
            return (char*)"CL_INVALID_ARG_VALUE";
        case CL_INVALID_ARG_SIZE:
            return (char*)"CL_INVALID_ARG_SIZE";
        case CL_INVALID_KERNEL_ARGS:
            return (char*)"CL_INVALID_KERNEL_ARGS";
        case CL_INVALID_WORK_DIMENSION:
            return (char*)"CL_INVALID_WORK_DIMENSION";
        case CL_INVALID_WORK_GROUP_SIZE:
            return (char*)"CL_INVALID_WORK_GROUP_SIZE";
        case CL_INVALID_WORK_ITEM_SIZE:
            return (char*)"CL_INVALID_WORK_ITEM_SIZE";
        case CL_INVALID_GLOBAL_OFFSET:
            return (char*)"CL_INVALID_GLOBAL_OFFSET";
        case CL_INVALID_EVENT_WAIT_LIST:
            return (char*)"CL_INVALID_EVENT_WAIT_LIST";
        case CL_INVALID_EVENT:
            return (char*)"CL_INVALID_EVENT";
        case CL_INVALID_OPERATION:
            return (char*)"CL_INVALID_OPERATION";
        case CL_INVALID_GL_OBJECT:
            return (char*)"CL_INVALID_GL_OBJECT";
        case CL_INVALID_BUFFER_SIZE:
            return (char*)"CL_INVALID_BUFFER_SIZE";
        case CL_INVALID_MIP_LEVEL:
            return (char*)"CL_INVALID_MIP_LEVEL";
        case CL_INVALID_GLOBAL_WORK_SIZE:
            return (char*)"CL_INVALID_GLOBAL_WORK_SIZE";
        case CL_INVALID_PROPERTY:
            return (char*)"CL_INVALID_PROPERTY";
            
        default:
            return (char*)"UNKNOWN ERROR";
    }
}


void check_error(cl_int err, const char *operation, char *filename, int line)
{
    if (err != CL_SUCCESS)
    {
        Rprintf("Error during operation '%s', ", operation);
        Rprintf("in '%s' on line %d\n", filename, line);
        Rprintf("Error code was \"%s\" (%d)\n", err_code(err), err);
    }
}



unsigned getDeviceList(cl_device_id devices[MAX_DEVICES])
{
    cl_int err;
    
    // Get list of platforms
    cl_uint numPlatforms = 0;
    cl_platform_id platforms[MAX_PLATFORMS];
    err = clGetPlatformIDs(MAX_PLATFORMS, platforms, &numPlatforms);
    checkError(err, "getting platforms");
    
    // Enumerate devices
    unsigned numDevices = 0;
    for (int i = 0; i < numPlatforms; i++)
    {
        cl_uint num = 0;
        err = clGetDeviceIDs(platforms[i], CL_DEVICE_TYPE_ALL,
                             MAX_DEVICES-numDevices, devices+numDevices, &num);
        checkError(err, "getting deviceS");
        numDevices += num;
    }
    
    return numDevices;
}

void getDeviceName(cl_device_id device, char name[MAX_INFO_STRING])
{
    cl_device_info info = CL_DEVICE_NAME;
    
    // Special case for AMD
#ifdef CL_DEVICE_BOARD_NAME_AMD
    clGetDeviceInfo(device, CL_DEVICE_VENDOR, MAX_INFO_STRING, name, NULL);
    if (strstr(name, "Advanced Micro Devices"))
        info = CL_DEVICE_BOARD_NAME_AMD;
#endif
    
    clGetDeviceInfo(device, info, MAX_INFO_STRING, name, NULL);
}


int parseUInt(const char *str, cl_uint *output)
{
    char *next;
    *output = strtoul(str, &next, 10);
    return !strlen(next);
}



double sum_total(double *arr, int ngrid)
{
    double sol = 0.0;
    for (int i=0; i<ngrid; i++)
    {
        sol += arr[i];
    }
    return sol;
}


void param_OCL(int *cormod,int *NN,double *par,int *weigthed,double *nuis,int *int_par, double *dou_par)
{
    int_par[0] = cormod[0]; // Correlation Model
    int_par[1] = ncoord[0]; // number of total spatial coordinates
    int_par[2] = weigthed[0];
    int_par[3] = type[0]; //  type of distance
    int_par[4] = 8; // Size int params (power of 2)
    int_par[5] = NN[0];//
    
    dou_par[0] = par[0];
    dou_par[1] = par[1];
    dou_par[2] = par[2];
    dou_par[3] = par[3];
    dou_par[4] = nuis[0];
    dou_par[5] = nuis[1];
    dou_par[6] = maxdist[0];// the threshould of the spatial distances
    dou_par[7] = 16; // Size double params (power of 2)
    dou_par[8] = REARTH[0];// radius of the sphere
    dou_par[9] = nuis[2];
    dou_par[10] = nuis[3];
    //dou_par[11] = maxtime[0];// the threshould of the temporal distances below which the pairs are considered
}

void param_OCL_mem(int *cormod,int *NN,int *npairs,double *par,int *weigthed,double *nuis,int *int_par, double *dou_par)
{
    
    int_par[0] = cormod[0]; // Correlation Model
    //int_par[1] = ncoord[0]; // number of total spatial coordinates
    int_par[2] = weigthed[0];
    //int_par[3] = type[0]; //  type of distance
    int_par[4] = 8; // Size int params (power of 2)
    int_par[5] = npairs[0];//
    int_par[6] = NN[0];//
    
    dou_par[0] = par[0];
    dou_par[1] = par[1];
    dou_par[2] = par[2];
    dou_par[3] = par[3];
    dou_par[4] = nuis[0];
    dou_par[5] = nuis[1];
    //dou_par[6] = nuis[2];
    //dou_par[6] = maxdist[0];// the threshould of the spatial distances
    dou_par[7] = 16; // Size double params (power of 2)
    //dou_par[8] = REARTH[0];// radius of the sphere
    dou_par[9] = nuis[2];
    dou_par[10] = nuis[3];
    
    dou_par[11] = nuis[4];
    dou_par[12] = nuis[5];
    
    //dou_par[11] = maxtime[0];// the threshould of the temporal distances below which the pairs are considered
}

void param_OCL_mem_st(int *cormod,int *NN,int *npairs,double *par,int *weigthed,double *nuis,int *int_par, double *dou_par)
{
    
    int_par[0] = cormod[0]; // Correlation Model
    //int_par[1] = ncoord[0]; // number of total spatial coordinates
    int_par[2] = weigthed[0];
    //int_par[3] = type[0]; //  type of distance
    int_par[4] = 8; // Size int params (power of 2)
    int_par[5] = npairs[0];//
    int_par[6] = NN[0];//
    
    dou_par[0] = par[0];
    dou_par[1] = par[1];
    dou_par[2] = par[2];
    dou_par[3] = par[3];
    dou_par[4] = nuis[0];
    dou_par[5] = nuis[1];
    dou_par[6] = maxdist[0];// the threshould of the spatial distances
    dou_par[7] = 16; // Size double params (power of 2)
    dou_par[8] = maxtime[0];// the threshould of the temporal distances below which the pairs are considered
    dou_par[9] = nuis[2];
    dou_par[10] = nuis[3];
    
    dou_par[11] = nuis[4];
    dou_par[12] = nuis[5];
    
    dou_par[13] = par[4];
    dou_par[14] = par[5];
    dou_par[15] = par[6];
}


void param_st_OCL(int *cormod,int *NN,double *par,int *weigthed,double *nuis,int *int_par, double *dou_par)
{
    int_par[0] = cormod[0]; // Correlation Model
    int_par[1] = ncoord[0]; // number of total spatial coordinates
    int_par[2] = weigthed[0];
    int_par[3] = type[0]; //  type of distance
    int_par[4] = 8; // Size int params (power of 2)
    int_par[5] = ntime[0];// number of times
    int_par[6] = NN[0];// number of times
    
    dou_par[0] = par[0];
    dou_par[1] = par[1];
    dou_par[2] = par[2];
    dou_par[3] = par[3];
    dou_par[4] = nuis[0];
    dou_par[5] = nuis[1];
    dou_par[6] = maxdist[0];// the threshould of the spatial distances
    dou_par[7] = 16; // Size double params (power of 2)
    dou_par[8] = REARTH[0];// radius of the sphere
    dou_par[9] = nuis[2];
    dou_par[10] = nuis[3];
    dou_par[11] = maxtime[0];// the threshould of the temporal distances below which the pairs are considered
    dou_par[12] = par[4];
    dou_par[13] = par[5];
    dou_par[14] = par[6];
}

void exec_kernel(double *h_x, double *h_y, double *h_mean, double *h_data, int *int_par,double *dou_par,
                 int *local_wi, int *dev, double *res, char *f_name)
{
    //#pragma OPENCL EXTEdynION cl_amd_fp64 : enable
    // Context, program, build:
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    cl_kernel        kernel;     // compute kernel
    //Rprintf("%c\n",f_name[4]);
    int length = int_par[1];
    // Vars for querying Device Info:
    
    // Set up OpenCL context, queue, kernel, etc.
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list') ExecKernel!\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    // Create a compute context
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    // Create the compute program from the source buffer
    
    
    
    FILE *fp;
    size_t binary_size;
    char *binary_buf;
    cl_int binary_status;
    
    fp = fopen(f_name, "r");
    if (!fp) {
        Rprintf("Failed to load kernel.\n");
    }
    binary_buf = (char *)malloc(MAX_BINARY_SIZE);
    binary_size = fread(binary_buf, 1, MAX_BINARY_SIZE, fp);
    fclose(fp);
    
    
    program = clCreateProgramWithBinary(
                                        context, 1, &device, (const size_t *)&binary_size,
                                        (const unsigned char **)&binary_buf, &binary_status, &err
                                        );
    free(binary_buf);
    clBuildProgram(program, 1, &device, NULL, NULL, &err);
    kernel = clCreateKernel(program, f_name, &err);
    checkError(err, "Failed to clCreateKernel");
    
    // Find kernel work-group size
    size_t work_group_size;
    err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    checkError(err, "Getting kernel work group info");
    //Rprintf("Maximum Kernel work-group size: %lu\n", work_group_size);
    
    
    // Creating buffers
    
    
    size_t g1;
    const int ll1 =local_wi[0];
    //printf("ll1: %d \n",ll1);
    g1 = length + (ll1 - (length & (ll1-1))); // SPACE
    
    //Rprintf("GLOBAL:\t%zu\t%zu\n",g1,g2);
    size_t local = ll1;
    size_t global = g1;
    
    size_t buff_size = sizeof(double) * g1;
    size_t int_par_buff = sizeof(int) * int_par[4];
    size_t dou_par_buff = sizeof(double) * dou_par[7];
    //size_t covar_buff = sizeof(double) * g1*7;
    
    
    //st_alloc = wtime();
    cl_mem d_x = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordx");
    err = clEnqueueWriteBuffer(commands, d_x, CL_TRUE, 0, buff_size, (void*)h_x, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordx");
    
    
    cl_mem d_y = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_y, CL_TRUE, 0, buff_size, (void*)h_y, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    
    cl_mem d_mean = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_mean, CL_TRUE, 0, buff_size, (void*)h_mean, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    cl_mem d_data = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Writing buffer device data");
    err = clEnqueueWriteBuffer(commands, d_data, CL_TRUE, 0, buff_size, (void*)h_data, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    double *sol;
    sol = (double*)calloc(g1, sizeof(double));
    cl_mem d_sol = clCreateBuffer(context, CL_MEM_WRITE_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device sol");
    err = clEnqueueWriteBuffer(commands, d_sol, CL_TRUE, 0, buff_size, (void*)sol, 0, NULL, NULL);
    checkError(err, "Writing buffer device sol");
    
    cl_mem d_int_par = clCreateBuffer(context, CL_MEM_READ_ONLY, int_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_int_par, CL_TRUE, 0, int_par_buff, (void*)int_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device int params");
    
    
    cl_mem d_dou_par = clCreateBuffer(context, CL_MEM_READ_ONLY, dou_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_dou_par, CL_TRUE, 0, dou_par_buff, (void*)dou_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device double params");
    
    
    // Push the data out to device
    clFinish(commands);
    
    err = clSetKernelArg(kernel,  0, sizeof(cl_mem), &d_x);
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_y);
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_mean);
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_data);
    err |= clSetKernelArg(kernel, 4, sizeof(cl_mem), &d_sol);
    err |= clSetKernelArg(kernel, 5, sizeof(cl_mem), &d_int_par);
    err |= clSetKernelArg(kernel, 6, sizeof(cl_mem), &d_dou_par);
    checkError(err, "Setting kernel args length");
    
    
    // Execute the kernel
    
    err = clEnqueueNDRangeKernel(commands, kernel, 1, NULL, &global,&local, 0, NULL, NULL);
    checkError(err,"clEnqueueNDRangeKernel\n");
    clFinish(commands);
    
    
    err = clEnqueueReadBuffer(commands, d_sol, CL_TRUE, 0,buff_size, sol, 0, NULL, NULL);
    clFinish(commands);
    *res = sum_total(sol, length);
    //if(!R_FINITE(*res))  *res = LOW;
    // clean up inside kernels
    //Rprintf("GPU res: \t%f\n",res[0]);
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    
    
    clReleaseMemObject(d_x);
    clReleaseMemObject(d_y);
    clReleaseMemObject(d_data);
    clReleaseMemObject(d_sol);
    clReleaseMemObject(d_mean);
    clReleaseMemObject(d_int_par);
    clReleaseMemObject(d_dou_par);
}


void exec_kernel_mem(double *dat_1, double *dat_2, double *h_mean1, double *h_mean2, double *h_lags, int *int_par,double *dou_par,
                 int *local_wi, int *dev, double *res, char *f_name)
{
    //#pragma OPENCL EXTEdynION cl_amd_fp64 : enable
    // Context, program, build:
    
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    cl_kernel        kernel;     // compute kernel
    //Rprintf("%c\n",f_name[4]);
    int length = int_par[5];
    // Vars for querying Device Info:
    
    // Set up OpenCL context, queue, kernel, etc.
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list') ExecKernel!\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    // Create a compute context
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    // Create the compute program from the source buffer
    
   
    
    FILE *fp;
    size_t binary_size;
    char *binary_buf;
    cl_int binary_status;
    
    fp = fopen(f_name, "r");
    if (!fp) {
        Rprintf("Failed to load kernel.\n");
    }
    binary_buf = (char *)malloc(MAX_BINARY_SIZE);
    binary_size = fread(binary_buf, 1, MAX_BINARY_SIZE, fp);
    fclose(fp);
    
    //Rprintf("A.............\n");
    program = clCreateProgramWithBinary(
                                        context, 1, &device, (const size_t *)&binary_size,
                                        (const unsigned char **)&binary_buf, &binary_status, &err
                                        );
    free(binary_buf);
    //Rprintf("B.............\n");
    clBuildProgram(program, 1, &device, NULL, NULL, &err);
    kernel = clCreateKernel(program, f_name, &err);
    checkError(err, "Failed to clCreateKernel");
    
    //Rprintf("C.............\n");
    // Find kernel work-group size
    size_t work_group_size;
    err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    checkError(err, "Getting kernel work group info");
    //Rprintf("Maximum Kernel work-group size: %lu\n", work_group_size);
    
    //Rprintf("F.............\n");
    // Creating buffers
    
    
    size_t g1;
    const int ll1 =local_wi[0];
    //g1 = length + (ll1 - (length & (ll1-1))); // SPACE
    g1 = length;
    //Rprintf("GLOBAL:\t%zu\n",g1);
    //Rprintf("ll1:\t%d\n",ll1);
    //Rprintf("length:\t%d\n",length);
    
    //Rprintf("GLOBAL:\t%zu\t%zu\n",g1,g2);
    size_t local = ll1;
    size_t global = g1;
    
    size_t buff_size = sizeof(double) * g1;
    size_t int_par_buff = sizeof(int) * int_par[4];
    size_t dou_par_buff = sizeof(double) * dou_par[7];
    //size_t covar_buff = sizeof(double) * g1*7;
    
    
    //st_alloc = wtime();
    cl_mem d_x = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordx");
    err = clEnqueueWriteBuffer(commands, d_x, CL_TRUE, 0, buff_size, (void*)dat_1, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordx");
    
    
    cl_mem d_y = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_y, CL_TRUE, 0, buff_size, (void*)dat_2, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    
    cl_mem d_mean1 = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device mean1");
    err = clEnqueueWriteBuffer(commands, d_mean1, CL_TRUE, 0, buff_size, (void*)h_mean1, 0, NULL, NULL);
    checkError(err, "Writing buffer device mean1");
    
    cl_mem d_mean2 = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device mean2");
    err = clEnqueueWriteBuffer(commands, d_mean2, CL_TRUE, 0, buff_size, (void*)h_mean2, 0, NULL, NULL);
    checkError(err, "Writing buffer device mean2");
    
    cl_mem d_lags = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Writing buffer device data");
    err = clEnqueueWriteBuffer(commands, d_lags, CL_TRUE, 0, buff_size, (void*)h_lags, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    double *sol;
    sol = (double*)calloc(g1, sizeof(double));
    cl_mem d_sol = clCreateBuffer(context, CL_MEM_WRITE_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device sol");
    err = clEnqueueWriteBuffer(commands, d_sol, CL_TRUE, 0, buff_size, (void*)sol, 0, NULL, NULL);
    checkError(err, "Writing buffer device sol");
    
    cl_mem d_int_par = clCreateBuffer(context, CL_MEM_READ_ONLY, int_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_int_par, CL_TRUE, 0, int_par_buff, (void*)int_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device int params");
    
    
    cl_mem d_dou_par = clCreateBuffer(context, CL_MEM_READ_ONLY, dou_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_dou_par, CL_TRUE, 0, dou_par_buff, (void*)dou_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device double params");
    
    
    // Push the data out to device
    clFinish(commands);
    
    err = clSetKernelArg(kernel,  0, sizeof(cl_mem), &d_x);
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_y);
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_mean1);
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_mean2);
    err |= clSetKernelArg(kernel, 4, sizeof(cl_mem), &d_lags);
    err |= clSetKernelArg(kernel, 5, sizeof(cl_mem), &d_sol);
    err |= clSetKernelArg(kernel, 6, sizeof(cl_mem), &d_int_par);
    err |= clSetKernelArg(kernel, 7, sizeof(cl_mem), &d_dou_par);
    checkError(err, "Setting kernel args length");
    
    
    // Execute the kernel
    
    err = clEnqueueNDRangeKernel(commands, kernel, 1, NULL, &global,&local, 0, NULL, NULL);
    checkError(err,"clEnqueueNDRangeKernel\n");
    clFinish(commands);
    
    
    err = clEnqueueReadBuffer(commands, d_sol, CL_TRUE, 0,buff_size, sol, 0, NULL, NULL);
    clFinish(commands);
    *res = sum_total(sol, length);
    //if(!R_FINITE(*res))  *res = LOW;
    // clean up inside kernels
    //Rprintf("GPU res: \t%f\n",res[0]);
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    
    free(sol);
    //free(int_par_buff);
    //free(dou_par_buff);
    //free(g1);
    
    clReleaseMemObject(d_x);
    clReleaseMemObject(d_y);
    clReleaseMemObject(d_mean1);
    clReleaseMemObject(d_mean2);
    clReleaseMemObject(d_lags);
    clReleaseMemObject(d_sol);
    clReleaseMemObject(d_int_par);
    clReleaseMemObject(d_dou_par);
}



void exec_kernel_mem_st(double *dat_1, double *dat_2, double *h_mean1, double *h_mean2, double *h_lags,double *h_lagt, int *int_par,double *dou_par,
                 int *local_wi, int *dev, double *res, char *f_name)
{
    //#pragma OPENCL EXTEdynION cl_amd_fp64 : enable
    // Context, program, build:
    
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    cl_kernel        kernel;     // compute kernel
    //Rprintf("%c\n",f_name[4]);
    int length = int_par[5];
    // Vars for querying Device Info:
    
    // Set up OpenCL context, queue, kernel, etc.
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list') ExecKernel!\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    // Create a compute context
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    // Create the compute program from the source buffer
    
   
    
    FILE *fp;
    size_t binary_size;
    char *binary_buf;
    cl_int binary_status;
    
    fp = fopen(f_name, "r");
    if (!fp) {
        Rprintf("Failed to load kernel.\n");
    }
    binary_buf = (char *)malloc(MAX_BINARY_SIZE);
    binary_size = fread(binary_buf, 1, MAX_BINARY_SIZE, fp);
    fclose(fp);
    
    //Rprintf("A.............\n");
    program = clCreateProgramWithBinary(
                                        context, 1, &device, (const size_t *)&binary_size,
                                        (const unsigned char **)&binary_buf, &binary_status, &err
                                        );
    free(binary_buf);
    //Rprintf("B.............\n");
    clBuildProgram(program, 1, &device, NULL, NULL, &err);
    kernel = clCreateKernel(program, f_name, &err);
    checkError(err, "Failed to clCreateKernel");
    
    //Rprintf("C.............\n");
    // Find kernel work-group size
    size_t work_group_size;
    err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    checkError(err, "Getting kernel work group info");
    //Rprintf("Maximum Kernel work-group size: %lu\n", work_group_size);
    
    //Rprintf("F.............\n");
    // Creating buffers
    
    
    size_t g1;
    const int ll1 =local_wi[0];
    //g1 = length + (ll1 - (length & (ll1-1))); // SPACE
    g1 = length;
    //Rprintf("GLOBAL:\t%zu\n",g1);
    //Rprintf("ll1:\t%d\n",ll1);
    //Rprintf("length:\t%d\n",length);
    
    //Rprintf("GLOBAL:\t%zu\t%zu\n",g1,g2);
    size_t local = ll1;
    size_t global = g1;
    
    size_t buff_size = sizeof(double) * g1;
    size_t int_par_buff = sizeof(int) * int_par[4];
    size_t dou_par_buff = sizeof(double) * dou_par[7];
    //size_t covar_buff = sizeof(double) * g1*7;
    
    
    //st_alloc = wtime();
    cl_mem d_x = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordx");
    err = clEnqueueWriteBuffer(commands, d_x, CL_TRUE, 0, buff_size, (void*)dat_1, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordx");
    
    
    cl_mem d_y = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_y, CL_TRUE, 0, buff_size, (void*)dat_2, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    
    cl_mem d_mean1 = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device mean1");
    err = clEnqueueWriteBuffer(commands, d_mean1, CL_TRUE, 0, buff_size, (void*)h_mean1, 0, NULL, NULL);
    checkError(err, "Writing buffer device mean1");
    
    cl_mem d_mean2 = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device mean2");
    err = clEnqueueWriteBuffer(commands, d_mean2, CL_TRUE, 0, buff_size, (void*)h_mean2, 0, NULL, NULL);
    checkError(err, "Writing buffer device mean2");
    
    cl_mem d_lags = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Writing buffer device data");
    err = clEnqueueWriteBuffer(commands, d_lags, CL_TRUE, 0, buff_size, (void*)h_lags, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    
    cl_mem d_lagt = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Writing buffer device data");
    err = clEnqueueWriteBuffer(commands, d_lagt, CL_TRUE, 0, buff_size, (void*)h_lagt, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    
    double *sol;
    sol = (double*)calloc(g1, sizeof(double));
    cl_mem d_sol = clCreateBuffer(context, CL_MEM_WRITE_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device sol");
    err = clEnqueueWriteBuffer(commands, d_sol, CL_TRUE, 0, buff_size, (void*)sol, 0, NULL, NULL);
    checkError(err, "Writing buffer device sol");
    
    cl_mem d_int_par = clCreateBuffer(context, CL_MEM_READ_ONLY, int_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_int_par, CL_TRUE, 0, int_par_buff, (void*)int_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device int params");
    
    
    cl_mem d_dou_par = clCreateBuffer(context, CL_MEM_READ_ONLY, dou_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_dou_par, CL_TRUE, 0, dou_par_buff, (void*)dou_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device double params");
    
    
    // Push the data out to device
    clFinish(commands);
    
    err = clSetKernelArg(kernel,  0, sizeof(cl_mem), &d_x);
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_y);
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_mean1);
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_mean2);
    err |= clSetKernelArg(kernel, 4, sizeof(cl_mem), &d_lags);
    err |= clSetKernelArg(kernel, 5, sizeof(cl_mem), &d_lagt);
    err |= clSetKernelArg(kernel, 6, sizeof(cl_mem), &d_sol);
    err |= clSetKernelArg(kernel, 7, sizeof(cl_mem), &d_int_par);
    err |= clSetKernelArg(kernel, 8, sizeof(cl_mem), &d_dou_par);
    checkError(err, "Setting kernel args length");
    
    
    // Execute the kernel
    
    err = clEnqueueNDRangeKernel(commands, kernel, 1, NULL, &global,&local, 0, NULL, NULL);
    checkError(err,"clEnqueueNDRangeKernel\n");
    clFinish(commands);
    
    
    err = clEnqueueReadBuffer(commands, d_sol, CL_TRUE, 0,buff_size, sol, 0, NULL, NULL);
    clFinish(commands);
    *res = sum_total(sol, length);
    //if(!R_FINITE(*res))  *res = LOW;
    // clean up inside kernels
    //Rprintf("GPU res: \t%f\n",res[0]);
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    
    free(sol);
    //free(int_par_buff);
    //free(dou_par_buff);
    //free(g1);
    
    clReleaseMemObject(d_x);
    clReleaseMemObject(d_y);
    clReleaseMemObject(d_mean1);
    clReleaseMemObject(d_mean2);
    clReleaseMemObject(d_lags);
    clReleaseMemObject(d_lagt);
    clReleaseMemObject(d_sol);
    clReleaseMemObject(d_int_par);
    clReleaseMemObject(d_dou_par);
}

void print_binary_type(cl_program_binary_type program_binary_type) {
    switch (program_binary_type) {
        case CL_PROGRAM_BINARY_TYPE_NONE:
            Rprintf("There is no binary associated with device.\n");
            break;
        case CL_PROGRAM_BINARY_TYPE_COMPILED_OBJECT:
            Rprintf("A compiled binary is associated with device.\n");
            break;
        case CL_PROGRAM_BINARY_TYPE_LIBRARY:
            Rprintf("A library binary is associated with device.\n");
            break;
        case CL_PROGRAM_BINARY_TYPE_EXECUTABLE:
            Rprintf("An executable binary is associated with device.\n");
            break;
        default:
            Rprintf("Unknown binary type.\n");
    }
}

void exec_kernel_st_dyn(double *h_x, double *h_y,double *h_t, double *h_mean, double *h_data, int *int_par,double *dou_par,
                    int *local_wi, int *dev, double *res, char *f_name,int *ns, int *NS)
{
    //Rprintf("exec_kernel_st_dyn\n");
    
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    cl_kernel        kernel;     // compute kernel
    
    // Set up OpenCL context, queue, kernel, etc.
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list')\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    
    // Create a compute context
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    
    FILE *fp;
    //char fileName[] = "./Kernel.clbin";
    size_t binary_size;
    char *binary_buf;
    cl_int binary_status;
    
    
    //#define MAX_BINARY_SIZE (0x100000)
    
    fp = fopen(f_name, "r");
    if (!fp) {
        Rprintf("Failed to load kernel.\n");
        
    }
    binary_buf = (char *)malloc(MAX_BINARY_SIZE);
    binary_size = fread(binary_buf, 1, MAX_BINARY_SIZE, fp);
    fclose(fp);
    
    
    program = clCreateProgramWithBinary(
                                        context, 1, &device, (const size_t *)&binary_size,
                                        (const unsigned char **)&binary_buf, &binary_status, &err
                                        );
    
    cl_program_binary_type program_binary_type;
    err = clGetProgramBuildInfo(program, device, CL_PROGRAM_BINARY_TYPE,
                                sizeof(program_binary_type), &program_binary_type, NULL);
    //print_binary_type(program_binary_type);
    
    
    clBuildProgram(program, 1, &device, NULL, NULL, &err);
    free(binary_buf);
    
    if (err != CL_SUCCESS)
    {
        size_t len;
        char buffer[2048*50];
        
        Rprintf("Error: Failed to build program executable!\n%s\n", err_code(err));
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, sizeof(buffer), buffer, &len);
        SEP;
        Rprintf("Build Log:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_STATUS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Status:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_OPTIONS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Options:\n%s\n", buffer);
        SEP;
        //return EXIT_FAILURE;
    }
    
    kernel = clCreateKernel(program, f_name, &err);
    checkError(err, "Failed to clCreateKernel");
    
    // Find kernel work-group size
    size_t work_group_size;
    err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    checkError(err, "Getting kernel work group info");

    int NTOT=(NS[ntime[0]-1]+ns[ntime[0]-1]);
    // Creating buffers
    size_t coords_buff = sizeof(double) * NTOT;
    size_t coordt_buff = sizeof(double) * int_par[5];//ns is a vector of lenght nt
    size_t data_buff = sizeof(double) * NTOT;
    size_t int_par_buff = sizeof(int) * int_par[4];
    size_t dou_par_buff = sizeof(double) * dou_par[7];
    
    size_t g1,g2;
    const int ll1 =local_wi[0];
    const int ll2 =local_wi[1];
   

    g1 = ncoord[0] + (ll1 - (ncoord[0] & (ll1-1))); // SPACE
  //  g1 = ncoord[0] + (ll1 - (ncoord[0] & (ll1-1))); // SPACE
    g2 = int_par[5] + (ll2 - (int_par[5] & (ll2-1))); //TIME

   
    
    //Rprintf("GLOBAL:\t%zu\t%zu\n",g1,g2);
    size_t local[2] = {ll1,ll2};
    size_t global[2] = {g1,g2};
    
    int length = g1*g2;
    //Rprintf("LENGTH: %d\n",length);
    size_t length_buff = sizeof(double)* (length);
    
    //st_alloc = wtime();
    cl_mem d_x = clCreateBuffer(context, CL_MEM_READ_ONLY, coords_buff, NULL, &err);
    checkError(err, "Creating buffer device X");
    err = clEnqueueWriteBuffer(commands, d_x, CL_TRUE, 0, coords_buff, (void*)h_x, 0, NULL, NULL);
    checkError(err, "Writing buffer device X");
    
    
    cl_mem d_y = clCreateBuffer(context, CL_MEM_READ_ONLY, coords_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_y, CL_TRUE, 0, coords_buff, (void*)h_y, 0, NULL, NULL);
    checkError(err, "Creating buffer device Y");
    
    
    cl_mem d_data = clCreateBuffer(context, CL_MEM_READ_ONLY, data_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_data, CL_TRUE, 0, data_buff, (void*)h_data, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    cl_mem d_t = clCreateBuffer(context, CL_MEM_READ_ONLY, coordt_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_t, CL_TRUE, 0, coordt_buff, (void*)h_t, 0, NULL, NULL);
    checkError(err, "Creating buffer device time");
    
    double *sol;
    sol= (double*)calloc(length, sizeof(double));
    cl_mem d_sol = clCreateBuffer(context, CL_MEM_WRITE_ONLY, length_buff, NULL, &err);
    checkError(err, "Creating buffer device sol");
    err = clEnqueueWriteBuffer(commands, d_sol, CL_TRUE, 0, length_buff, (void*)sol, 0, NULL, NULL);
    checkError(err, "Writing buffer device sol");
    
    
    cl_mem d_int_par = clCreateBuffer(context, CL_MEM_READ_ONLY, int_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_int_par, CL_TRUE, 0, int_par_buff, (void*)int_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device int params");
    
    
    cl_mem d_dou_par = clCreateBuffer(context, CL_MEM_READ_ONLY, dou_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_dou_par, CL_TRUE, 0, dou_par_buff, (void*)dou_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device double params");
    
    
    cl_mem d_mean = clCreateBuffer(context, CL_MEM_READ_ONLY, data_buff, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_mean, CL_TRUE, 0, data_buff, (void*)h_mean, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    cl_mem d_ns = clCreateBuffer(context, CL_MEM_READ_ONLY, coordt_buff, NULL, &err);
    checkError(err, "Creating buffer device ns");
    err = clEnqueueWriteBuffer(commands, d_ns, CL_TRUE, 0, coordt_buff, (void*)ns, 0, NULL, NULL);
    checkError(err, "Writing buffer device ns");
    
    cl_mem d_NS = clCreateBuffer(context, CL_MEM_READ_ONLY, coordt_buff, NULL, &err);
    checkError(err, "Creating buffer device NS");
    err = clEnqueueWriteBuffer(commands, d_NS, CL_TRUE, 0, coordt_buff, (void*)NS, 0, NULL, NULL);
    checkError(err, "Writing buffer device NS");
    
    
    // Push the data out to device
    clFinish(commands);
    
    err = clSetKernelArg(kernel,  0, sizeof(cl_mem), &d_t); //coordt
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_x); //coordx
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_y); //coordx
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_data); //data
    err |= clSetKernelArg(kernel, 4, sizeof(cl_mem), &d_mean); //data
    err |= clSetKernelArg(kernel, 5, sizeof(cl_mem), &d_sol); //mom_cond0
    err |= clSetKernelArg(kernel, 6, sizeof(cl_mem), &d_int_par); //mom_cond3
    err |= clSetKernelArg(kernel, 7, sizeof(cl_mem), &d_dou_par); //mom_cond3
    err |= clSetKernelArg(kernel, 8, sizeof(cl_mem), &d_ns); //ns
    err |= clSetKernelArg(kernel, 9, sizeof(cl_mem), &d_NS); //NS
    checkError(err, "Setting kernel args length");
    
    // Execute the kernel
    
    err = clEnqueueNDRangeKernel(commands, kernel, 2, NULL, global,local, 0, NULL, NULL);
    checkError(err,"clEnqueueNDRangeKernel\n");
    clFinish(commands);
    
    
    err = clEnqueueReadBuffer(commands, d_sol, CL_TRUE, 0,length_buff, sol, 0, NULL, NULL);
    clFinish(commands);
    
    *res = sum_total(sol, length);
    //Rprintf("final result: %.4f\t%.4f\t%.4f\t%.4f\n", m0,m1,m2,m3);
    
    
    // clean up inside kernels
    
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    
    
    clReleaseMemObject(d_x);
    clReleaseMemObject(d_y);
    clReleaseMemObject(d_data);
    clReleaseMemObject(d_t);
    clReleaseMemObject(d_sol);
    clReleaseMemObject(d_int_par);
    clReleaseMemObject(d_dou_par);
    clReleaseMemObject(d_ns);
    clReleaseMemObject(d_NS);
}

// ================================ Start  Create Binary Kernel
#define MAX_SOURCE_SIZE (0x100000)
#define BIN_PATH "Kernel.clbin"
#define SEP Rprintf("-----------------------------------------------------------\n")


void create_binary_kernel(int *dev, char **fname)
{
    //printf("ARCHIVO fname  %s\n", *fname);
    // Context, program, build:
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    //cl_kernel kernel;
    
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list') Compilation!\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    // Create a compute context
    /*cl_platform_id platform=NULL;
    cl_context_properties ctx_properties[] = {
        CL_CONTEXT_PLATFORM, (cl_context_properties)platform, 0
    };*/
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    // Create the compute program from the source buffer
    

    //fclose(fp);*/
    char CL[5]; char f_nameCL[100];
    strcpy(CL, ".cl");
    strcpy(f_nameCL, *fname);
    strcat(f_nameCL, CL);
    //printf("ARCHIVO CL  %s\n", f_nameCL);
    
    
    char *kernelsource = getKernelSource(f_nameCL);
    
    program = clCreateProgramWithSource(context,1,(const char **) &kernelsource, NULL, &err);
    if(err!=CL_SUCCESS){Rprintf("Failed clCreateProgramWithSource\n");}
    
    err = clCompileProgram(program, 1, &device, "-I ./", 0, NULL, NULL, NULL, NULL);
    //err = clBuildProgram(program, 1, &device, NULL, NULL, NULL);
    if (err != CL_SUCCESS)
    {
        size_t len;
        char buffer[2048*200];
        
        Rprintf("Error: Failed to build program executable!\n%s\n", err_code(err));
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, sizeof(buffer), buffer, &len);
        SEP;
        Rprintf("Build Log:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_STATUS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Status:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_OPTIONS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Options:\n%s\n", buffer);
        SEP;
        //return EXIT_FAILURE;
    }
    //kernel = clCreateKernel(program, *fname, &err);
    
    
    //size_t work_group_size;
    //err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    //checkError(err, "Getting kernel work group info");
    //Rprintf("Recommended Local: %lu\n", work_group_size);
    
    
    FILE *f;
    char *binary;
    size_t binary_size;
    
    clGetProgramInfo(program, CL_PROGRAM_BINARY_SIZES, sizeof(size_t), &binary_size, NULL);
    //if(err!=CL_SUCCESS){Rprintf("Failed to get CL_PROGRAM_BINARY_SIZES\n");}
    binary = malloc(binary_size);
    clGetProgramInfo(program, CL_PROGRAM_BINARIES, binary_size, &binary, NULL);
    //if(err!=CL_SUCCESS){Rprintf("Failed to get CL_PROGRAM_BINARIES\n");}
    f = fopen(*fname, "w");
    fwrite(binary, binary_size, 1, f);
    fclose(f);
    
    
    /* Finalization */
    clFlush(commands);
    clFinish(commands);
    clReleaseProgram(program);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    //clReleaseKernel(kernel);
    Rprintf("Successful Binary Compilation!!!\n");
}

// ================================ End  Create Binary Kernel



int DeviceInfo()
{
    
    int i, j;
    char* value;
    size_t valueSize;
    cl_uint platformCount;
    cl_platform_id* platforms;
    cl_uint deviceCount;
    cl_device_id* devices;
    cl_uint maxComputeUnits;
    cl_ulong long_entries;
    size_t p_size;
    cl_device_fp_config fp;
    // get all platforms
    clGetPlatformIDs(0, NULL, &platformCount);
    platforms = (cl_platform_id*) malloc(sizeof(cl_platform_id) * platformCount);
    clGetPlatformIDs(platformCount, platforms, NULL);
    cl_device_type dt;
    char vendor[1024];                //this strirng will hold a platforms vendor
    
    
    for (i = 0; i < platformCount; i++) {
        
        Rprintf("Platform:\t\t%u\n\n", i);
        clGetPlatformInfo(platforms[i], CL_PLATFORM_VENDOR, sizeof(vendor), vendor, NULL);
        Rprintf("\tPlatform Vendor:\t%s\n", vendor);
        
        // get all devices
        clGetDeviceIDs(platforms[i], CL_DEVICE_TYPE_ALL, 0, NULL, &deviceCount);
        devices = (cl_device_id*) malloc(sizeof(cl_device_id) * deviceCount);
        clGetDeviceIDs(platforms[i], CL_DEVICE_TYPE_ALL, deviceCount, devices, NULL);
        
        //int gpu[deviceCount];
        //int countergpu=0;
        SEP;
        // for each device print critical attributes
        for (j = 0; j < deviceCount; j++) {
            SEP;
            // print device name
            clGetDeviceInfo(devices[j], CL_DEVICE_NAME, 0, NULL, &valueSize);
            value = (char*) malloc(valueSize);
            clGetDeviceInfo(devices[j], CL_DEVICE_NAME, valueSize, value, NULL);
            Rprintf("%d.\tCL_DEVICE_NAME\tDevice: \t%s\n", j, value);
            free(value);
            
            // print hardware device version
            clGetDeviceInfo(devices[j], CL_DEVICE_VERSION, 0, NULL, &valueSize);
            value = (char*) malloc(valueSize);
            clGetDeviceInfo(devices[j], CL_DEVICE_VERSION, valueSize, value, NULL);
            Rprintf("%d.%d\tCL_DEVICE_VERSION\tHardware version: \t%s\n", j, 1, value);
            free(value);
            
            // print software driver version
            clGetDeviceInfo(devices[j], CL_DRIVER_VERSION, 0, NULL, &valueSize);
            value = (char*) malloc(valueSize);
            clGetDeviceInfo(devices[j], CL_DRIVER_VERSION, valueSize, value, NULL);
            Rprintf("%d.%d\tCL_DRIVER_VERSION\tSoftware version: \t%s\n", j, 2, value);
            free(value);
            
            // print c version supported by compiler for device
            clGetDeviceInfo(devices[j], CL_DEVICE_OPENCL_C_VERSION, 0, NULL, &valueSize);
            value = (char*) malloc(valueSize);
            clGetDeviceInfo(devices[j], CL_DEVICE_OPENCL_C_VERSION, valueSize, value, NULL);
            Rprintf("%d.%d\tCL_DEVICE_OPENCL_C_VERSION\tOpenCL C version: \t%s\n", j, 3, value);
            free(value);
            
            // print parallel compute units
            clGetDeviceInfo(devices[j], CL_DEVICE_MAX_COMPUTE_UNITS,
                            sizeof(maxComputeUnits), &maxComputeUnits, NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_COMPUTE_UNITS\tParallel compute units: \t%d\n", j, 4, maxComputeUnits);
            
            
            clGetDeviceInfo(devices[j],CL_DEVICE_GLOBAL_MEM_SIZE,sizeof(cl_ulong),&long_entries,NULL);
            Rprintf("%d.%d\tCL_DEVICE_GLOBAL_MEM_SIZE\tGlobal Memory (MB):\t%llu\n",j, 5,long_entries/1024/1024);
            clGetDeviceInfo(devices[j],CL_DEVICE_GLOBAL_MEM_CACHE_SIZE,sizeof(cl_ulong),&long_entries,NULL);
            Rprintf("%d.%d\tCL_DEVICE_GLOBAL_MEM_CACHE_SIZE\tGlobal Memory Cache (MB):\t%llu\n",j, 6,long_entries/1024/1024);
            clGetDeviceInfo(devices[j],CL_DEVICE_LOCAL_MEM_SIZE,sizeof(cl_ulong),&long_entries,NULL);
            Rprintf("%d.%d\tCL_DEVICE_LOCAL_MEM_SIZE\tLocal Memory (KB):\t%llu\n",j, 7,long_entries/1024);
            clGetDeviceInfo(devices[j],CL_DEVICE_MAX_CLOCK_FREQUENCY,sizeof(cl_ulong),&long_entries,NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_CLOCK_FREQUENCY\tMax clock (MHz) :\t%llu\n",j, 8,long_entries);
            clGetDeviceInfo(devices[j],CL_DEVICE_MAX_WORK_GROUP_SIZE,sizeof(size_t),&p_size,NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_WORK_GROUP_SIZE\tMax Work Group Size:\t%zu\n",j, 9,p_size);
            clGetDeviceInfo(devices[j],CL_DEVICE_MAX_WORK_ITEM_SIZES,sizeof(size_t),&p_size,NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_WORK_ITEM_SIZES\tMax Work Item Size:\t%zu\n",j,10,p_size);
            clGetDeviceInfo(devices[j],CL_KERNEL_WORK_GROUP_SIZE,sizeof(size_t),&p_size,NULL);
            Rprintf("%d.%d\tCL_KERNEL_WORK_GROUP_SIZE\tMax kernel Work group Size:\t%zu\n",j, 11,p_size);
            clGetDeviceInfo(devices[j],CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS,sizeof(size_t),&p_size,NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_WORK_ITEM_DIMENSIONS\tMax Dev dim:\t%zu\n",j, 12,p_size);
            clGetDeviceInfo(devices[j],CL_DEVICE_MAX_MEM_ALLOC_SIZE,sizeof(size_t),&p_size,NULL);
            Rprintf("%d.%d\tCL_DEVICE_MAX_MEM_ALLOC_SIZE\tMax Buffer size (Mb):\t%zu\n",j, 13,p_size/1000000);
            clGetDeviceInfo(devices[j],CL_DEVICE_DOUBLE_FP_CONFIG,sizeof(cl_device_fp_config),&fp,NULL);
            Rprintf("%d.%d\tSupports double precision floating-point? %s\n",j, 14,fp != 0 ? "yes" : "no");
            clGetDeviceInfo(devices[j],CL_DEVICE_TYPE,sizeof(cl_device_type),&dt,NULL);
            Rprintf("%d.%d\tCL_DEVICE_TYPE: %s\n",j, 15,dt & CL_DEVICE_TYPE_GPU ? "GPU" : "CPU");
            //clGetDeviceInfo(devices[j],CL_DEVICE_MAX_CONSTANT_ARGS,sizeof(size_t),&p_size,NULL);
            //Rprintf("%d.%d\tCL_DEVICE_MAX_CONSTANT_ARGS\tMax kernel args:\t%zu\n",j, 15,p_size);
            SEP;
            
        }
        SEP;
        free(devices);
        
    }
    
    free(platforms);
    return 0;
    
}





char * getKernelSource(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        Rprintf("Error: Could not open kernel source file\n");
        //return (EXIT_FAILURE);
    }
    fseek(file, 0, SEEK_END);
    int len = ftell(file) + 1;
    rewind(file);
    
    char *source = (char *)calloc(sizeof(char), len);
    if (!source)
    {
        Rprintf("Error: Could not allocate memory for source string\n");
        //return (EXIT_FAILURE);
    }
    fread(source, sizeof(char), len, file);
    fclose(file);
    return source;
}


void exec_kernel_source(double *h_x, double *h_y, double *h_mean, double *h_data, int *int_par,double *dou_par,
                 int *local_wi, int *dev, double *res, char *f_name)
{
    // Context, program, build:
    cl_int err;
    cl_device_id        device;     // compute device id
    cl_context       context;       // compute context
    cl_command_queue commands;      // compute command queue
    cl_program       program;       // compute program
    cl_kernel        kernel;     // compute kernel
    //Rprintf("%c\n",f_name[4]);
    int length = int_par[1];
    // Vars for querying Device Info:
    
    /*char* value;
     size_t valueSize;
     cl_uint maxComputeUnits;
     cl_ulong long_entries;
     size_t p_size;*/
    
    // Set up OpenCL context, queue, kernel, etc.
    
    cl_uint deviceIndex = dev[0];
    
    // Get list of devices
    cl_device_id devices[MAX_DEVICES];
    unsigned numDevices = getDeviceList(devices);
    
    // Check device index in range
    if (deviceIndex >= numDevices)
    {
        Rprintf("Invalid device index (try '--list')\n");
        //return EXIT_FAILURE;
    }
    
    device = devices[deviceIndex];
    // Create a compute context
    context = clCreateContext(0, 1, &device, NULL, NULL, &err);
    checkError(err, "Creating context");
    
    // Create a command queue
    commands = clCreateCommandQueue(context, device, 0, &err);
    checkError(err, "Creating command queue");
    // Create the compute program from the source buffer
    
    /*char cwd[1024];
     if (getcwd(cwd, sizeof(cwd)) != NULL)
     fRprintf(stdout, "Current working dir: %s\n", cwd);
     else
     perror("getcwd() error");*/
    
    char *kernelsource = getKernelSource("Kernel.cl");
    
    program = clCreateProgramWithSource(context, 1, (const char **) & kernelsource, NULL, &err);
    checkError(err, "Creating program");
    // Build the program
    err = clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
  
    
    
    if (err != CL_SUCCESS)
    {
        size_t len;
        char buffer[2048];
        
        Rprintf("Error: Failed to build program executable!\n%s\n", err_code(err));
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, sizeof(buffer), buffer, &len);
        SEP;
        Rprintf("Build Log:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_STATUS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Status:\n%s\n", buffer);
        SEP;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_OPTIONS, 2048*sizeof(char), buffer, &len);
        Rprintf("Build Options:\n%s\n", buffer);
        SEP;
        //return EXIT_FAILURE;
    }
    // Create the compute kernel from the program
    
    kernel = clCreateKernel(program, f_name, &err);
    checkError(err, "Creating kernel");
    
    // Find kernel work-group size
    size_t work_group_size;
    err = clGetKernelWorkGroupInfo (kernel, device, CL_KERNEL_WORK_GROUP_SIZE, sizeof(size_t), &work_group_size, NULL);
    checkError(err, "Getting kernel work group info");
    //Rprintf("Maximum Kernel work-group size: %lu\n", work_group_size);
    
    
    // Creating buffers
    
    
    size_t g1;
    const int ll1 =local_wi[0];
    g1 = length + (ll1 - (length & (ll1-1))); // SPACE
    
    //Rprintf("GLOBAL:\t%zu\t%zu\n",g1,g2);
    size_t local = ll1;
    size_t global = g1;
    
    size_t buff_size = sizeof(double) * g1;
    size_t int_par_buff = sizeof(int) * int_par[4];
    size_t dou_par_buff = sizeof(double) * dou_par[7];
    
    
    //st_alloc = wtime();
    cl_mem d_x = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordx");
    err = clEnqueueWriteBuffer(commands, d_x, CL_TRUE, 0, buff_size, (void*)h_x, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordx");
    
    
    cl_mem d_y = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_y, CL_TRUE, 0, buff_size, (void*)h_y, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    
    cl_mem d_mean = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device coordy");
    err = clEnqueueWriteBuffer(commands, d_mean, CL_TRUE, 0, buff_size, (void*)h_mean, 0, NULL, NULL);
    checkError(err, "Writing buffer device coordy");
    
    cl_mem d_data = clCreateBuffer(context, CL_MEM_READ_ONLY, buff_size, NULL, &err);
    checkError(err, "Writing buffer device data");
    err = clEnqueueWriteBuffer(commands, d_data, CL_TRUE, 0, buff_size, (void*)h_data, 0, NULL, NULL);
    checkError(err, "Creating buffer device data");
    
    double *sol;
    sol = (double*)calloc(g1, sizeof(double));
    cl_mem d_sol = clCreateBuffer(context, CL_MEM_WRITE_ONLY, buff_size, NULL, &err);
    checkError(err, "Creating buffer device sol");
    err = clEnqueueWriteBuffer(commands, d_sol, CL_TRUE, 0, buff_size, (void*)sol, 0, NULL, NULL);
    checkError(err, "Writing buffer device sol");
    
    cl_mem d_int_par = clCreateBuffer(context, CL_MEM_READ_ONLY, int_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_int_par, CL_TRUE, 0, int_par_buff, (void*)int_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device int params");
    
    
    cl_mem d_dou_par = clCreateBuffer(context, CL_MEM_READ_ONLY, dou_par_buff, NULL, &err);
    err = clEnqueueWriteBuffer(commands, d_dou_par, CL_TRUE, 0, dou_par_buff, (void*)dou_par, 0, NULL, NULL);
    checkError(err, "Creating buffer device double params");
    
    
    // Push the data out to device
    clFinish(commands);
    
    err = clSetKernelArg(kernel,  0, sizeof(cl_mem), &d_x);
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_y);
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_mean);
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_data);
    err |= clSetKernelArg(kernel, 4, sizeof(cl_mem), &d_sol);
    err |= clSetKernelArg(kernel, 5, sizeof(cl_mem), &d_int_par);
    err |= clSetKernelArg(kernel, 6, sizeof(cl_mem), &d_dou_par);
    checkError(err, "Setting kernel args length");
    
    
    // Execute the kernel
    
    err = clEnqueueNDRangeKernel(commands, kernel, 1, NULL, &global,&local, 0, NULL, NULL);
    checkError(err,"clEnqueueNDRangeKernel\n");
    clFinish(commands);
    
    
    err = clEnqueueReadBuffer(commands, d_sol, CL_TRUE, 0,buff_size, sol, 0, NULL, NULL);
    clFinish(commands);
    *res = sum_total(sol, length);
    // clean up inside kernels
    
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
    
    clReleaseMemObject(d_x);
    clReleaseMemObject(d_y);
    clReleaseMemObject(d_data);
    clReleaseMemObject(d_sol);
    clReleaseMemObject(d_mean);
    //clReleaseMemObject(d_int_par);
    //clReleaseMemObject(d_dou_par);
}


//*******************  END: OpenCL Header ****************

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .C calls */



/********************** utility C calls ****************************************************/

extern void SetGlobalVar2 (int *nsite, int *times,
                           double *h,int *nn,  double *maxh,
                           double *u,int *tt,  double *maxu,
                           int *st,int *biv,int *one, int *two);
extern void SetGlobalVar(int *biv,double *coordx,double *coordy,double *coordt,int *grid,int *ia,
                         int *idx,int *ismal,int *ja,int *mem, int *nsite,int *nsitex,int *nsitey,
                         int *npair,double *radius,double *srange, double *sep,int *st, int *times,double *trange,
                         int *tap,int *tapmodel,int *tp,int *weighted, int *colidx,int *rowidx,
                     int *ns, int *NS, int *dyn);
extern void DeleteGlobalVar();
extern void DeleteGlobalVar2();
extern void GodambeMat(double *betas,int *biv,double *coordx, double *coordy, double *coordt, int *cormod, double *data, int *dst,
                       double *eps,int *flagcor, int *flagnuis, int *grid, int *like, double *mean,int *model,double *NN, int *nbetas,
                       int *npar, int *nparc,int *nparcT, double *parcor, double *nuis, double *score,
                       double *sensmat, int *spt,  int *type_lik, double *varimat,
                       int *vartype, double *winc, double *winstp,double *winct,double *winstp_t,int *weigthed, double *X,int *ns,int *NS);
extern void Maxima_Minima_dist(double *res,double *coordx,double *coordy,int *nsize,int *type_dist,double *radius);
extern void spectral_density(int *L,int *model,int *p, double *matrix ,double *matrix_out,
                             double *C, double *a, double *nu1,double *Cg, double *ag, double *nu1g);
extern void pairs(int *ncoords,double *data,double *coordx,double *coordy,double *numbins,double *bins,double *v0,double *v1,double *v2,double *maxdist);
extern void simu_on_coords(int *Ndim,int *Mcoords,int *Mu,double *coords,double *amatrix,
                           double *matrix_phi,double *matrix_u,double *matrix_out);

/********************** for variogrms computations  ****************************************************/

extern void Binned_Variogram_biv2(double *bins,double *coordx, double *coordy, double *coordt, double *data,
  int *cross_lbins, double *cross_moms, int *nbins,int *marg_lbins, double *marg_moms,int *ns, int *NS);
extern void Binned_Variogram_st2(double *bins, double *bint, double *coordx, double *coordy, double *coordt,double *data, int *lbins, int *lbinst,
       int *lbint, double *moms,double *momst, double *momt, int *nbins, int *nbint, int *ns,int *NS);
extern void Binned_Variogram2(double *bins, double *coordx, double *coordy, double *coordt,double *data, int *lbins, double *moms, int *nbins);
extern void Binned_Variogram2new(double *bins, int *np,double *data1, double *data2, double *vdist, int *lbins, double *moms, int *nbins,double *mm);
extern void Binned_Variogram_st2_dyn(double *bins, double *bint, double *coordx, double *coordy, double *coordt,double *data, int *lbins, int *lbinst,
                              int *lbint, double *moms,double *momst, double *momt, int *nbins, int *nbint, int *ns,int *NS);
extern void Cloud_Variogram2(double *bins,double *coordx, double *coordy, double *coordt, double *data, int *lbins, double *moms, int *nbins);
extern void LeastSquare_G(double *bins, double *bint, int *cormod, double *lbins, double *moms,
          int *nbins, int *nbint, double *nuis, double *par, double *res);
extern void WLeastSquare_G(double *bins, double *bint, int *cormod, double *lbins, double *moms,
           int *nbins, int *nbint, double *nuis, double *par, double *res);

extern void Binned_Variogram_22(double *bins, double *coordx, double *coordy, double *coordt,double *data, int *lbins, double *moms, int *nbins);

/********************** for distribution computations  ****************************************************/

extern void biv_unif_CopulaClayton_call(double *x,double *y,double *rho, double *nu, double *res);
extern void biv_unif_CopulaGauss_call(double *x,double *y,double *rho, double *res);
extern void corr_kuma_vec(double *rho,double *eta,double *gam,double *res, int *n);
extern void vpbnorm(int *cormod, double *h, double *u, int *nlags, int *nlagt,
                    double *nuis, double *par, double *rho, double *thr);

/*********************** for correlation computations ***************************************************/
extern void Corr_c(double *cc,double *coordx, double *coordy, double *coordt, int *cormod, int *grid, double *locx,  double *locy,
            int *ncoord, int *nloc,int *tloc,int *ns,int *NS,int *ntime, double *par, int *spt, int *biv, double *time,int *type, int *which,double *radius);
extern void Corr_c_bin(double *cc,double *coordx, double *coordy, double *coordt, int *cormod, int *grid, double *locx,  double *locy,int *ncoord, int *nloc,
                int *model,int *tloc,int *nn,int *n, int *ns,int *NS,int *ntime, double *mean,double *nuis, double *par, int *spt, int *biv, double *time,int *type, int *which,double *radius);
extern void Corr_c_tap(double *cc,double *cc_tap,double *coordx, double *coordy, double *coordt, int *cormod, int *cormodtap, int *grid, double *locx,  double *locy,
                double *mxd,double *mxt, int *ncoord, int *nloc, int *ns,int *NS,int*tloc,int *ntime, double *par, int *spt, int *biv, double *time,int *type,int *which,double *radius);
extern void VectCorrelation(double *rho, int *cormod, double *h, int *nlags, int *nlagt,double *mean,int *model,
                            double *nuis,double *par, double *u,int *N);
extern void VectCorrelation_biv(double *rho, double *vario,int *cormod, double *h, int *nlags, int *nlagt,double *mean,int *model,
                                double *nuis,double *par, double *u,int *N);
extern void CorrelationMat2(double *rho,double *coordx, double *coordy, double *coordt,  int *cormod,
 double *nuis, double *par,double *radius,int *ns, int *NS);
extern void CorrelationMat_dis2(double *rho,double *coordx, double *coordy, double *coordt,  int *cormod, double *mean,
                         int *nn,double *nuis, double *par,double *radius, int *ns, int *NS,int *model);
extern void CorrelationMat_st_dyn2(double *rho, double *coordx, double *coordy, double *coordt,int *cormod,
  double *nuis, double *par,double *radius, int *ns,int *NS);
extern void CorrelationMat_st_dyn_dis2(double *rho,double *coordx, double *coordy, double *coordt,  int *cormod,  double *mean,int *n,
                                double *nuis, double *par,double *radius, int *ns, int *NS, int *model);
extern void CorrelationMat_biv_dyn2(double *rho,double *coordx, double *coordy, double *coordt, int *cormod,  double *nuis,
  double *par,double *radius, int *ns,int *NS);
extern void CorrelationMat_biv_tap(double *rho, double *coordx, double *coordy, double *coordt,int *cormod,
 double *nuis, double *par,double *radius, int *ns,int *NS);
extern void DCorrelationMat_biv(int *cormod,double *coordx, double *coordy, double *coordt,double *drho,double *eps,int *flagcor,
      int *nparcor,double *parcor,double *rho);
extern void DCorrelationMat_biv2(int *cormod,double *coordx, double *coordy, double *coordt,double *drho,double *eps,int *flagcor,
      int *nparcor,double *parcor,double *rho);
extern void DCorrelationMat_biv_tap(int *cormod,double *coordx, double *coordy, double *coordt,double *drho,
            double *eps,int *flagcor,int *nparcor,double *parcor,double *rho);
extern void CorrelationMat_biv_skew_dyn2(double *rho,double *coordx, double *coordy, double *coordt, int *cormod,
 double *nuis, double *par,double *radius, int *ns,int *NS);
extern void CorrelationMat_tap(double *rho,double *coordx, double *coordy, double *coordt, int *cormod,  double *nuis, double *par,double *radius,
  int *ns, int *NS);
extern void CorrelationMat_dis_tap(double *rho,double *coordx, double *coordy, double *coordt, int *cormod,  double *nuis, double *par,double *radius,
  int *ns, int *NS, int *n1,int *n2, double *mu1,double *mu2,int  *model);
extern void CorrelationMat_st_tap(double *rho,double *coordx, double *coordy, double *coordt, int *cormod, double *nuis,
  double *par,double *radius, int *ns, int *NS);

/*********************** for bivariate composite likelihood ***************************************************/
extern void Comp_Pair_Gauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Diff_Gauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_WrapGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_SinhGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_SkewGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Weibull2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy22mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinnegGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGaussZINB2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNGauss_misp2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogLogistic2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Logistic2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Pois2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisGamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisGamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisZIP2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_Pois2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisZIP2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_SkewT2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_T2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyhh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_Tukeygh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_T2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECETukeyh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECET2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECEGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECEBIMODAL2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_WrapGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_T_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Pois_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisGamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisGamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisZIP_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_Pois_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisZIP_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyhh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void  Comp_Pair_TWOPIECEGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void  Comp_Pair_TWOPIECETukeyh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void  Comp_Pair_TWOPIECET_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinnegGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGaussZINB_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Diff_Gauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_SkewGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_SinhGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Weibull_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogLogistic_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Logistic_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECEBIMODAL_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_biv2mem(int *cormod, double *data1,double *data2,int *NN,
    double *par, int *weigthed,double *res,double *mean1,double *mean2,
    double *nuis, int *local,int *GPU);
extern void Comp_Pair_SkewGauss_biv2mem(int *cormod, double *data1,double *data2,int *NN,
    double *par, int *weigthed,double *res,double *mean1,double *mean2,
    double *nuis, int *local,int *GPU);
extern void Comp_Pair_GaussGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BetaGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2GCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_KumaraswamyGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2GCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_GaussCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_BetaCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2CCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_KumaraswamyCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2CCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_T_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);

/*********************** for conditional composite likelihood ***************************************************/

extern void Comp_Cond_Gauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                         double *nuis, int *local,int *GPU);
extern void Comp_Cond_Tukeyh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                          double *nuis, int *local,int *GPU);
extern void Comp_Cond_Tukeyhh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_SkewGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_T2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                     double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_T2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_SkewT2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_Tukeygh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Cond_SinhGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                         double *nuis, int *local,int *GPU);
extern void Comp_Cond_Weibull2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_Beta2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                        double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy22mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_Pois2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNGauss_misp2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisGamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                        double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisGamma2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_Pois2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                        double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegLogi2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECETukeyh2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECET2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEGauss2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEBIMODAL2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGaussZINB2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisZIP2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisZIP2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogLogistic2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Cond_Logistic2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_T_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                        double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_T_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_Tukeyh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_Tukeyhh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Cond_SkewGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_SinhGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_Weibull_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Cond_Beta_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy2_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_Pois_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisGamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisGamma_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_Pois_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegLogi_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECETukeyh_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECET_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEGauss_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEBIMODAL_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGaussZINB_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                        double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisZIP_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisZIP_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogLogistic_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Cond_Logistic_st2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Cond_GaussGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_BetaGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_Beta2GCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_KumaraswamyGCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy2GCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);
extern void Comp_Cond_GaussCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_BetaCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                            double *nuis, int *local,int *GPU);
extern void Comp_Cond_Beta2CCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                             double *nuis, int *local,int *GPU);
extern void Comp_Cond_KumaraswamyCCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy2CCop2mem(int *cormod, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);

/********************** spatial anisotropic  marginal************************************/
extern void Comp_Pair_Gauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Diff_Gauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Pair_WrapGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_SinhGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_SkewGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gamma2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                               double *nuis, int *local,int *GPU);
extern void Comp_Pair_Weibull2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy22mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinnegGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisbinGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                       double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegLogi2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomnegGaussZINB2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                           double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                    double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomLogi2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNGauss_misp2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                           double *nuis, int *local,int *GPU);
extern void Comp_Pair_BinomNNLogi2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Pair_LogLogistic2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                     double *nuis, int *local,int *GPU);
extern void Comp_Pair_Logistic2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Pair_Pois2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                              double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisGamma2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisGamma2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                              double *nuis, int *local,int *GPU);
extern void Comp_Pair_PoisZIP2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_Pois2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_PoisZIP2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                            double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_SkewT2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                          double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_T2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                      double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyhh2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                 double *nuis, int *local,int *GPU);
extern void Comp_Pair_Tukeyh2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                double *nuis, int *local,int *GPU);
extern void Comp_Pair_Gauss_misp_Tukeygh2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                            double *nuis, int *local,int *GPU);
extern void Comp_Pair_T2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                           double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECETukeyh2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                        double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECET2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECEGauss2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                       double *nuis, int *local,int *GPU);
extern void Comp_Pair_TWOPIECEBIMODAL2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Pair_GaussGCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_BetaGCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2GCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_KumaraswamyGCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2GCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                          double *nuis, int *local,int *GPU);
extern void Comp_Pair_GaussCCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_BetaCCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                  double *nuis, int *local,int *GPU);
extern void Comp_Pair_Beta2CCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                   double *nuis, int *local,int *GPU);
extern void Comp_Pair_KumaraswamyCCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                         double *nuis, int *local,int *GPU);
extern void Comp_Pair_Kumaraswamy2CCop2mem_aniso(int *cormod, double *coord1,double *coord2, double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
                                          double *nuis, int *local,int *GPU);

/********************** spatial anisotropic conditional ************************************/
extern void Comp_Cond_Gauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Tukeyhh2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_SkewGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_T2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_T2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_SkewT2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_Tukeygh2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_SinhGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gamma2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Weibull2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Beta2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Kumaraswamy22mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_Pois2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNGauss_misp2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisGamma2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisGamma2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Pois2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomLogi2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomNNLogi2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegLogi2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECETukeyh2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECET2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEGauss2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_TWOPIECEBIMODAL2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_BinomnegGaussZINB2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_PoisZIP2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Gauss_misp_PoisZIP2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_LogLogistic2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
extern void Comp_Cond_Logistic2mem_aniso(int *cormod, double *coord1, double *coord2,double *data1,double *data2,int *NN,
 double *par, int *weigthed, double *res,double *mean1,double *mean2,
 double *nuis, int *local,int *GPU);
/*********************************************************************************************/
extern void CorrelationMat_st_dis_tap(double *rho,double *coordx, double *coordy, double *coordt, int *cormod,  double *nuis, double *par,double *radius,
                               int *ns, int *NS, int *n1,int *n2, double *mu1,double *mu2,int  *model);

extern void hypergeo_call(double *a,double *b,double *c,double *x, double *res);

extern void hyperg_call(double *a,double *b,double *x,double *res);
extern void biv_pois_call(double *corr,int *r, int *t, double *mean_i, double *mean_j,double *res);
extern void appellF4_call(double *a,double *b,double *c,double *d,double *x,double *y, double *res);
extern void biv_gamma_call(double *corr,double *zi,double *zj,double *mui, double *muj, double *shape, double *res);

extern void biv_binomneg_call(int *NN,int *u, int *v, double *p01, double *p10,double *p11,double *res);

extern void biv_binom_call(int *NN,int *u, int *v, double *p01, double *p10,double *p11,double *res);

extern void matrix_temp(int *N ,double *matrix, double *l1 ,double *l2 ,double *v11 ,double *v21,double *v12,double *v22);

extern void vector_to_select(int *N, double *matrix);


extern void lgnd (int *lmax,double *x, double *p);
extern void qnorm55_call(double *p, double *mu, double *sigma, int *lower_tail, int *log_p, double *res);


extern void integr_kuma(double *x, int n, void *ex);



/********************** spatial anisotropic  marginal************************************/


/********************** ST: CompositeLikelihood_OCL.cl************************************/

//1
extern void Comp_Pair_Pois2_OCL(int *cormod, double *coordx, double *coordy, double *coordt, double *data, int *NN,
double *par,  int *weigthed,double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,
                         int *local_wi, int *dev);
//2
extern void Comp_Cond_Gauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
                    double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                             int *local_wi, int *dev);
//3
extern void Comp_Pair_Gauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
                    double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                    int *local_wi, int *dev);
//4
//extern void Comp_Cond_Gauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
//double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
//int *local_wi, int *dev);

//5
extern void Comp_Pair_SkewGauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                                 int *local_wi, int *dev);
//6
extern void Comp_Cond_SkewGauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                                 int *local_wi, int *dev);
//7
//extern void Comp_Pair_SkewGauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
//double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
//                                 int *local_wi, int *dev);

//8
extern void Comp_Cond_Tukeyh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                              int *local_wi, int *dev);

//9
extern void Comp_Pair_Tukeyh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                              int *local_wi, int *dev);
//10
extern void Comp_Pair_Tukeyhh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                               int *local_wi, int *dev);
//11
extern void Comp_Cond_Tukeyhh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                               int *local_wi, int *dev);
//12
extern void Comp_Cond_Gauss_misp_Tukeygh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
                    double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                    int *local_wi, int *dev);
//13
extern void Comp_Pair_Gauss_misp_Tukeygh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
                    double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                                          int *local_wi, int *dev);
//14
extern void Comp_Cond_TWOPIECEGauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
int *local_wi, int *dev);
//15
extern void Comp_Pair_TWOPIECEGauss2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                                     int *local_wi, int *dev);
//16
extern void Comp_Pair_TWOPIECETukeyh2mem_OCL(int *cormod, double *data1, double *data2, int *NN,
double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,
                                      int *local_wi, int *dev);
//17
extern void Comp_Cond_T2mem_OCL(int *cormod, double *data1, double *data2, int *NN, double *par,  int *weigthed,double *res,double *mean1,double *mean2,double *nuis,int *local_wi, int *dev);
//18
extern void Comp_Cond_Gauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt, double *data, int *NN, double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis, int *ns, int *NS,int *local, int *GPU);
//19
extern void Comp_Pair_Gauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt, double *data,int *NN, double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis, int *ns, int *NS, int *local,int *GPU);
//20
extern void Comp_Diff_Gauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data, int *NN,
                          double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis, int *ns, int *NS,int *local,int *GPU);
//21
extern void Comp_Pair_WrapGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                              double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local,int *GPU);
//22
extern void Comp_Pair_SinhGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                              double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//23
extern void Comp_Pair_LogGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                             double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//24
extern void Comp_Pair_Gauss_st2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                             double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);

//25
extern void Comp_Pair_SkewGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                              double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//26
extern void Comp_Pair_Gamma2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                          double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//27
extern void Comp_Pair_PoisbinnegGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                                    double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);

//28
extern void Comp_Pair_BinomGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                               double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//29
extern void Comp_Pair_BinomnegGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                                  double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//30
extern void Comp_Pair_Binom2Gauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                                double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//31
extern void Comp_Pair_Logistic2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,
                             int *NN,  double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//32
extern void Comp_Pair_LogLogistic2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,
                                int *NN,  double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local, int *GPU);
//33
extern void Comp_Pair_T2_OCL(int *cormod, double *coordx, double *coordy, double *coordt, double *data, int *NN,
                      double *par,  int *weigthed,double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,
                      int *local_wi, int *dev);
//34
extern void Comp_Pair_T_st2_OCL(int *cormod, double *coordx, double *coordy, double *coordt,double *data,int *NN,
                         double *par, int *weigthed, double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,int *local_wi, int *dev);
//35
void wendintegral_call(double *x, double *param, double *res);
//36
extern void Comp_Pair_TWOPIECEGauss2_OCL(int *cormod, double *coordx, double *coordy, double *coordt, double *data, int *NN,
double *par,  int *weigthed,double *res,double *mean,double *mean2,double *nuis,int *ns, int *NS,
                                  int *local_wi, int *dev);
//37
extern void create_binary_kernel(int *dev, char **fname);

/********************** END: CompositeLikelihood_OCL.cl************************************/


static const R_CMethodDef CEntries[] = {
    /********************** ST: CompositeLikelihood_OCL.cl************************************/
    {"Comp_Pair_Pois2_OCL",       (DL_FUNC) &Comp_Pair_Pois2_OCL,      16}, //1
    {"Comp_Cond_Gauss2mem_OCL",       (DL_FUNC) &Comp_Cond_Gauss2mem_OCL,      12},//2
    {"Comp_Pair_Gauss2mem_OCL",       (DL_FUNC) &Comp_Pair_Gauss2mem_OCL,      12},//3
    //{"Comp_Cond_Gauss2mem_OCL",       (DL_FUNC) &Comp_Cond_Gauss2mem_OCL,      12},//4
    {"Comp_Pair_SkewGauss2mem_OCL",       (DL_FUNC) &Comp_Pair_SkewGauss2mem_OCL,      12},//5
    {"Comp_Cond_SkewGauss2mem_OCL",       (DL_FUNC) &Comp_Cond_SkewGauss2mem_OCL,      12},//6
    //{"Comp_Pair_SkewGauss2mem_OCL",       (DL_FUNC) &Comp_Pair_SkewGauss2mem_OCL,      12},//7
    {"Comp_Cond_Tukeyh2mem_OCL",       (DL_FUNC) &Comp_Cond_Tukeyh2mem_OCL,      12},//8
    {"Comp_Pair_Tukeyh2mem_OCL",       (DL_FUNC) &Comp_Pair_Tukeyh2mem_OCL,      12},//9
    {"Comp_Pair_Tukeyhh2mem_OCL",       (DL_FUNC) &Comp_Pair_Tukeyhh2mem_OCL,      12},//10
    {"Comp_Cond_Tukeyhh2mem_OCL",       (DL_FUNC) &Comp_Cond_Tukeyhh2mem_OCL,      12},//11
    {"Comp_Cond_Gauss_misp_Tukeygh2mem_OCL",       (DL_FUNC) &Comp_Cond_Gauss_misp_Tukeygh2mem_OCL,      12},//12
    {"Comp_Pair_Gauss_misp_Tukeygh2mem_OCL",       (DL_FUNC) &Comp_Pair_Gauss_misp_Tukeygh2mem_OCL,      12},//13
    {"Comp_Cond_TWOPIECEGauss2mem_OCL",       (DL_FUNC) &Comp_Cond_TWOPIECEGauss2mem_OCL,      12},//14
    {"Comp_Pair_TWOPIECEGauss2mem_OCL",       (DL_FUNC) &Comp_Pair_TWOPIECEGauss2mem_OCL,      12},//15
    {"Comp_Pair_TWOPIECETukeyh2mem_OCL",       (DL_FUNC) &Comp_Pair_TWOPIECETukeyh2mem_OCL,      12},//16
    {"Comp_Cond_T2mem_OCL",       (DL_FUNC) &Comp_Cond_T2mem_OCL,      12},//17
    {"Comp_Cond_Gauss2_OCL",       (DL_FUNC) &Comp_Cond_Gauss2_OCL,      16},//18
    {"Comp_Pair_Gauss2_OCL",       (DL_FUNC) &Comp_Pair_Gauss2_OCL,      16},//19
    {"Comp_Diff_Gauss2_OCL",       (DL_FUNC) &Comp_Diff_Gauss2_OCL,      16},//20
    {"Comp_Pair_WrapGauss2_OCL",       (DL_FUNC) &Comp_Pair_WrapGauss2_OCL,      16},//21
    {"Comp_Pair_SinhGauss2_OCL",       (DL_FUNC) &Comp_Pair_SinhGauss2_OCL,      16},//22
    {"Comp_Pair_LogGauss2_OCL",       (DL_FUNC) &Comp_Pair_LogGauss2_OCL,      16},//23
    {"Comp_Pair_Gauss_st2_OCL",       (DL_FUNC) &Comp_Pair_Gauss_st2_OCL,      16},//24
    {"Comp_Pair_SkewGauss2_OCL",       (DL_FUNC) &Comp_Pair_SkewGauss2_OCL,      16},//25
    {"Comp_Pair_Gamma2_OCL",       (DL_FUNC) &Comp_Pair_Gamma2_OCL,      16},//26
    {"Comp_Pair_PoisbinnegGauss2_OCL",       (DL_FUNC) &Comp_Pair_PoisbinnegGauss2_OCL,      16},//27
    {"Comp_Pair_BinomGauss2_OCL",       (DL_FUNC) &Comp_Pair_BinomGauss2_OCL,      16},//28
    {"Comp_Pair_BinomnegGauss2_OCL",       (DL_FUNC) &Comp_Pair_BinomnegGauss2_OCL,      16},//29
    {"Comp_Pair_Binom2Gauss2_OCL",       (DL_FUNC) &Comp_Pair_Binom2Gauss2_OCL,      16},//30
    {"Comp_Pair_Logistic2_OCL",       (DL_FUNC) &Comp_Pair_Logistic2_OCL,      16},//31
    {"Comp_Pair_LogLogistic2_OCL",       (DL_FUNC) &Comp_Pair_LogLogistic2_OCL,      16},//32
    {"Comp_Pair_T2_OCL",       (DL_FUNC) &Comp_Pair_T2_OCL,      16},//33
    {"Comp_Pair_T_st2_OCL",       (DL_FUNC) &Comp_Pair_T_st2_OCL,      16},//34
    //{"wendintegral_call",       (DL_FUNC) &wendintegral_call,      3},//35s
    {"Comp_Pair_TWOPIECEGauss2_OCL",       (DL_FUNC) &Comp_Pair_TWOPIECEGauss2_OCL,      16},//36
    {"create_binary_kernel",       (DL_FUNC) &create_binary_kernel,      2},//37
    
    
    /********************** END: CompositeLikelihood_OCL.cl************************************/
    
    
    {"integr_kuma",               (DL_FUNC) &integr_kuma,              3},
    {"lgnd",                      (DL_FUNC) &lgnd,                     3},
    {"qnorm55_call",              (DL_FUNC) &qnorm55_call,             6},
    {"matrix_temp",               (DL_FUNC) &matrix_temp,              8},
    {"vector_to_select",          (DL_FUNC) &vector_to_select,         2},
    {"biv_binomneg_call",         (DL_FUNC) &biv_binomneg_call,        7},
    {"biv_binom_call",            (DL_FUNC) &biv_binom_call,           7},
    {"biv_gamma_call",            (DL_FUNC) &biv_gamma_call,           7},
    {"hyperg_call",               (DL_FUNC) &hyperg_call,              4},
    {"biv_pois_call",             (DL_FUNC) &biv_pois_call,            6},
    {"appellF4_call",             (DL_FUNC) &appellF4_call,            7},
    {"hypergeo_call",             (DL_FUNC) &hypergeo_call,            5},
    {"CorrelationMat_st_dis_tap", (DL_FUNC) &CorrelationMat_st_dis_tap,15},
    {"CorrelationMat2",             (DL_FUNC) &CorrelationMat2,             10},
    {"CorrelationMat_dis2",         (DL_FUNC) &CorrelationMat_dis2,         13},
    {"CorrelationMat_st_dyn2",      (DL_FUNC) &CorrelationMat_st_dyn2,      10},
    {"CorrelationMat_biv_dyn2",     (DL_FUNC) &CorrelationMat_biv_dyn2,     10},
    {"CorrelationMat_st_dyn_dis2",  (DL_FUNC) &CorrelationMat_st_dyn_dis2,  13},
    {"CorrelationMat_biv_tap",      (DL_FUNC) &CorrelationMat_biv_tap,      10},
    {"DCorrelationMat_biv",         (DL_FUNC) &DCorrelationMat_biv,         10},
    {"DCorrelationMat_biv2",        (DL_FUNC) &DCorrelationMat_biv2,        10},
    {"DCorrelationMat_biv_tap",     (DL_FUNC) &DCorrelationMat_biv_tap,     10},
    {"CorrelationMat_biv_skew_dyn2",(DL_FUNC) &CorrelationMat_biv_skew_dyn2,10},
    {"CorrelationMat_tap",          (DL_FUNC) &CorrelationMat_tap,          10},
    {"CorrelationMat_dis_tap",      (DL_FUNC) &CorrelationMat_dis_tap,      15},
    {"CorrelationMat_st_tap",       (DL_FUNC) &CorrelationMat_st_tap,       10},
    {"Binned_Variogram2",           (DL_FUNC) &Binned_Variogram2,            8},
    {"Binned_Variogram2new",        (DL_FUNC) &Binned_Variogram2new,         9},
    {"Binned_Variogram_biv2",       (DL_FUNC) &Binned_Variogram_biv2,       12},
    {"Binned_Variogram_st2",        (DL_FUNC) &Binned_Variogram_st2,        16},
    {"Binned_Variogram_st2_dyn",    (DL_FUNC) &Binned_Variogram_st2_dyn,    16},
    {"Cloud_Variogram2",            (DL_FUNC) &Cloud_Variogram2,             8},
    {"LeastSquare_G",               (DL_FUNC) &LeastSquare_G,               10},
    {"WLeastSquare_G",              (DL_FUNC) &WLeastSquare_G,              10},
    {"Binned_Variogram_22",         (DL_FUNC) &Binned_Variogram_22,          8},
    {"biv_unif_CopulaClayton_call", (DL_FUNC) &biv_unif_CopulaClayton_call,  5},
    {"biv_unif_CopulaGauss_call",   (DL_FUNC) &biv_unif_CopulaGauss_call,    4},
    {"Corr_c",                      (DL_FUNC) &Corr_c,                      21},
    {"Corr_c_bin",                  (DL_FUNC) &Corr_c_bin,                  26},
    {"Corr_c_tap",                  (DL_FUNC) &Corr_c_tap,                  25},
    {"corr_kuma_vec",               (DL_FUNC) &corr_kuma_vec,                5},
    {"DeleteGlobalVar",             (DL_FUNC) &DeleteGlobalVar,              0},
    {"DeleteGlobalVar2",            (DL_FUNC) &DeleteGlobalVar2,             0},
    {"GodambeMat",                  (DL_FUNC) &GodambeMat,                  36},
    {"Maxima_Minima_dist",          (DL_FUNC) &Maxima_Minima_dist,           6},
    {"pairs",                       (DL_FUNC) &pairs,                       10},
    {"SetGlobalVar2",               (DL_FUNC) &SetGlobalVar2,               12},
    {"SetGlobalVar",               (DL_FUNC) &SetGlobalVar,               29},
    {"simu_on_coords",              (DL_FUNC) &simu_on_coords,               8},
    {"spectral_density",            (DL_FUNC) &spectral_density,            11},
    {"VectCorrelation",             (DL_FUNC) &VectCorrelation,             11},
    {"VectCorrelation_biv",         (DL_FUNC) &VectCorrelation_biv,         12},
    {"vpbnorm",                     (DL_FUNC) &vpbnorm,                      9},

  /*********************** for pairwise composite likelihood ***************************************************/
    
    {"Comp_Pair_Gauss2mem",         (DL_FUNC) &Comp_Pair_Gauss2mem,         12},
    {"Comp_Pair_Tukeyh2mem",         (DL_FUNC) &Comp_Pair_Tukeyh2mem,         12},
    {"Comp_Pair_Tukeyhh2mem",         (DL_FUNC) &Comp_Pair_Tukeyhh2mem,         12},
    {"Comp_Pair_SkewGauss2mem",         (DL_FUNC) &Comp_Pair_SkewGauss2mem,         12},
    {"Comp_Pair_T2mem",         (DL_FUNC) &Comp_Pair_T2mem,         12},
    {"Comp_Pair_Gauss_misp_T2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_T2mem,         12},
    {"Comp_Pair_Gauss_misp_SkewT2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_SkewT2mem,         12},
    {"Comp_Pair_Gauss_misp_Tukeygh2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_Tukeygh2mem,         12},
    {"Comp_Pair_SinhGauss2mem",         (DL_FUNC) &Comp_Pair_SinhGauss2mem,         12},
    {"Comp_Pair_Gamma2mem",         (DL_FUNC) &Comp_Pair_Gamma2mem,         12},
    {"Comp_Pair_Weibull2mem",         (DL_FUNC) &Comp_Pair_Weibull2mem,         12},
    {"Comp_Pair_LogGauss2mem",         (DL_FUNC) &Comp_Pair_LogGauss2mem,         12},
    {"Comp_Pair_Beta2mem",         (DL_FUNC) &Comp_Pair_Beta2mem,         12},
    {"Comp_Pair_Kumaraswamy2mem",         (DL_FUNC) &Comp_Pair_Kumaraswamy2mem,         12},
    {"Comp_Pair_Kumaraswamy22mem",         (DL_FUNC) &Comp_Pair_Kumaraswamy22mem,         12},
    {"Comp_Pair_Gauss_misp_Pois2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_Pois2mem,         12},
    {"Comp_Pair_BinomNNGauss_misp2mem",         (DL_FUNC) &Comp_Pair_BinomNNGauss_misp2mem,         12},
    {"Comp_Pair_Gauss_misp_PoisGamma2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisGamma2mem,         12},
    {"Comp_Pair_PoisGamma2mem",         (DL_FUNC) &Comp_Pair_PoisGamma2mem,         12},
    {"Comp_Pair_Pois2mem",         (DL_FUNC) &Comp_Pair_Pois2mem,         12},
    {"Comp_Pair_BinomGauss2mem",         (DL_FUNC) &Comp_Pair_BinomGauss2mem,         12},
    {"Comp_Pair_BinomLogi2mem",         (DL_FUNC) &Comp_Pair_BinomLogi2mem,         12},
    {"Comp_Pair_BinomNNGauss2mem",         (DL_FUNC) &Comp_Pair_BinomNNGauss2mem,         12},
    {"Comp_Pair_BinomNNLogi2mem",         (DL_FUNC) &Comp_Pair_BinomNNLogi2mem,         12},
    {"Comp_Pair_BinomnegGauss2mem",         (DL_FUNC) &Comp_Pair_BinomnegGauss2mem,         12},
    {"Comp_Pair_TWOPIECETukeyh2mem",         (DL_FUNC) &Comp_Pair_TWOPIECETukeyh2mem,         12},
    {"Comp_Pair_TWOPIECET2mem",         (DL_FUNC) &Comp_Pair_TWOPIECET2mem,         12},
    {"Comp_Pair_TWOPIECEGauss2mem",         (DL_FUNC) &Comp_Pair_TWOPIECEGauss2mem,         12},
    {"Comp_Pair_TWOPIECEBIMODAL2mem",         (DL_FUNC) &Comp_Pair_TWOPIECEBIMODAL2mem,         12},
    {"Comp_Pair_BinomnegGaussZINB2mem",         (DL_FUNC) &Comp_Pair_BinomnegGaussZINB2mem,         12},
    {"Comp_Pair_PoisZIP2mem",         (DL_FUNC) &Comp_Pair_PoisZIP2mem,         12},
    {"Comp_Pair_Gauss_misp_PoisZIP2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisZIP2mem,         12},
    {"Comp_Pair_Gauss_st2mem",         (DL_FUNC) &Comp_Pair_Gauss_st2mem,         12},
    {"Comp_Pair_T_st2mem",         (DL_FUNC) &Comp_Pair_T_st2mem,         12},
    {"Comp_Pair_Gauss_misp_T_st2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_T_st2mem,         12},
    {"Comp_Pair_Tukeyh_st2mem",         (DL_FUNC) &Comp_Pair_Tukeyh_st2mem,         12},
    {"Comp_Pair_Tukeyhh_st2mem",         (DL_FUNC) &Comp_Pair_Tukeyhh_st2mem,         12},
    {"Comp_Pair_SkewGauss_st2mem",         (DL_FUNC) &Comp_Pair_SkewGauss_st2mem,         12},
    {"Comp_Pair_SinhGauss_st2mem",         (DL_FUNC) &Comp_Pair_SinhGauss_st2mem,         12},
    {"Comp_Pair_Gamma_st2mem",         (DL_FUNC) &Comp_Pair_Gamma_st2mem,         12},
    {"Comp_Pair_Weibull_st2mem",         (DL_FUNC) &Comp_Pair_Weibull_st2mem,         12},
    {"Comp_Pair_LogGauss_st2mem",         (DL_FUNC) &Comp_Pair_LogGauss_st2mem,         12},
    {"Comp_Pair_Beta_st2mem",         (DL_FUNC) &Comp_Pair_Beta_st2mem,         12},
    {"Comp_Pair_Kumaraswamy_st2mem",         (DL_FUNC) &Comp_Pair_Kumaraswamy_st2mem,         12},//85
    {"Comp_Pair_Kumaraswamy2_st2mem",         (DL_FUNC) &Comp_Pair_Kumaraswamy2_st2mem,         12},
    {"Comp_Pair_Gauss_misp_Pois_st2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_Pois_st2mem,         12},
    {"Comp_Pair_Gauss_misp_PoisGamma_st2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisGamma_st2mem,         12},
    {"Comp_Pair_PoisGamma_st2mem",         (DL_FUNC) &Comp_Pair_PoisGamma_st2mem,         12},
    {"Comp_Pair_Pois_st2mem",         (DL_FUNC) &Comp_Pair_Pois_st2mem,         12},
    {"Comp_Pair_BinomGauss_st2mem",         (DL_FUNC) &Comp_Pair_BinomGauss_st2mem,         12},
    {"Comp_Pair_BinomLogi_st2mem",         (DL_FUNC) &Comp_Pair_BinomLogi_st2mem,         12},
    {"Comp_Pair_BinomNNGauss_st2mem",         (DL_FUNC) &Comp_Pair_BinomNNGauss_st2mem,         12},
    {"Comp_Pair_BinomNNLogi_st2mem",         (DL_FUNC) &Comp_Pair_BinomNNLogi_st2mem,         12},
    {"Comp_Pair_BinomnegGauss_st2mem",         (DL_FUNC) &Comp_Pair_BinomnegGauss_st2mem,         12},
    {"Comp_Pair_BinomnegLogi_st2mem",         (DL_FUNC) &Comp_Pair_BinomnegLogi_st2mem,         12},//96
    {"Comp_Pair_TWOPIECETukeyh_st2mem",         (DL_FUNC) &Comp_Pair_TWOPIECETukeyh_st2mem,         12},
    {"Comp_Pair_TWOPIECET_st2mem",         (DL_FUNC) &Comp_Pair_TWOPIECET_st2mem,         12},
    {"Comp_Pair_TWOPIECEGauss_st2mem",         (DL_FUNC) &Comp_Pair_TWOPIECEGauss_st2mem,         12},
    {"Comp_Pair_TWOPIECEBIMODAL_st2mem",         (DL_FUNC) &Comp_Pair_TWOPIECEBIMODAL_st2mem,         12},
    {"Comp_Pair_BinomnegGaussZINB_st2mem",         (DL_FUNC) &Comp_Pair_BinomnegGaussZINB_st2mem,         12},
    {"Comp_Pair_PoisZIP_st2mem",         (DL_FUNC) &Comp_Pair_PoisZIP_st2mem,         12},
    {"Comp_Pair_Gauss_misp_PoisZIP_st2mem",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisZIP_st2mem,         12},
    {"Comp_Pair_LogLogistic_st2mem",         (DL_FUNC) &Comp_Pair_LogLogistic_st2mem,         12},
    {"Comp_Pair_Logistic_st2mem",         (DL_FUNC) &Comp_Pair_Logistic_st2mem,         12},
    {"Comp_Pair_GaussGCop2mem",         (DL_FUNC) &Comp_Pair_GaussGCop2mem,         12},
    {"Comp_Pair_BetaGCop2mem",         (DL_FUNC) &Comp_Pair_BetaGCop2mem,         12},
    {"Comp_Pair_Beta2GCop2mem",         (DL_FUNC) &Comp_Pair_Beta2GCop2mem,         12},
    {"Comp_Pair_KumaraswamyGCop2mem",         (DL_FUNC) &Comp_Pair_KumaraswamyGCop2mem,         12},
    {"Comp_Pair_Kumaraswamy2GCop2mem",         (DL_FUNC) &Comp_Pair_Kumaraswamy2GCop2mem,         12},//90
    {"Comp_Pair_GaussCCop2mem",         (DL_FUNC) &Comp_Pair_GaussCCop2mem,         12},
    {"Comp_Pair_BetaCCop2mem",         (DL_FUNC) &Comp_Pair_BetaCCop2mem,         12},
    {"Comp_Pair_Beta2CCop2mem",         (DL_FUNC) &Comp_Pair_Beta2CCop2mem,         12},//93
  
    /*********************** for conditional composite likelihood ***************************************************/
    
    {"Comp_Cond_Gauss2mem",         (DL_FUNC) &Comp_Cond_Gauss2mem,         12},
    {"Comp_Cond_Tukeyh2mem",         (DL_FUNC) &Comp_Cond_Tukeyh2mem,         12},
    {"Comp_Cond_Tukeyhh2mem",         (DL_FUNC) &Comp_Cond_Tukeyhh2mem,         12},
    {"Comp_Cond_SkewGauss2mem",         (DL_FUNC) &Comp_Cond_SkewGauss2mem,         12},
    {"Comp_Cond_T2mem",         (DL_FUNC) &Comp_Cond_T2mem,         12},
    {"Comp_Cond_Gauss_misp_T2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_T2mem,         12},
    {"Comp_Cond_Gauss_misp_SkewT2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_SkewT2mem,         12},
    {"Comp_Cond_Gauss_misp_Tukeygh2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_Tukeygh2mem,         12},
    {"Comp_Cond_SinhGauss2mem",         (DL_FUNC) &Comp_Cond_SinhGauss2mem,         12},
    {"Comp_Cond_Gamma2mem",         (DL_FUNC) &Comp_Cond_Gamma2mem,         12},
    {"Comp_Cond_Weibull2mem",         (DL_FUNC) &Comp_Cond_Weibull2mem,         12},
    {"Comp_Cond_LogGauss2mem",         (DL_FUNC) &Comp_Cond_LogGauss2mem,         12},
    {"Comp_Cond_Beta2mem",         (DL_FUNC) &Comp_Cond_Beta2mem,         12},
    {"Comp_Cond_Kumaraswamy2mem",         (DL_FUNC) &Comp_Cond_Kumaraswamy2mem,         12},
    {"Comp_Cond_Kumaraswamy22mem",         (DL_FUNC) &Comp_Cond_Kumaraswamy22mem,         12},
    {"Comp_Cond_Gauss_misp_Pois2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_Pois2mem,         12},
    {"Comp_Cond_BinomNNGauss_misp2mem",         (DL_FUNC) &Comp_Cond_BinomNNGauss_misp2mem,         12},
    {"Comp_Cond_Gauss_misp_PoisGamma2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_PoisGamma2mem,         12},
    {"Comp_Cond_PoisGamma2mem",         (DL_FUNC) &Comp_Cond_PoisGamma2mem,         12},
    {"Comp_Cond_Pois2mem",         (DL_FUNC) &Comp_Cond_Pois2mem,         12},
    {"Comp_Cond_BinomGauss2mem",         (DL_FUNC) &Comp_Cond_BinomGauss2mem,         12},
    {"Comp_Cond_BinomLogi2mem",         (DL_FUNC) &Comp_Cond_BinomLogi2mem,         12},
    {"Comp_Cond_BinomNNGauss2mem",         (DL_FUNC) &Comp_Cond_BinomNNGauss2mem,         12},
    {"Comp_Cond_BinomNNLogi2mem",         (DL_FUNC) &Comp_Cond_BinomNNLogi2mem,         12},
    {"Comp_Cond_BinomnegGauss2mem",         (DL_FUNC) &Comp_Cond_BinomnegGauss2mem,         12},
    {"Comp_Cond_TWOPIECETukeyh2mem",         (DL_FUNC) &Comp_Cond_TWOPIECETukeyh2mem,         12},
    {"Comp_Cond_TWOPIECET2mem",         (DL_FUNC) &Comp_Cond_TWOPIECET2mem,         12},
    {"Comp_Cond_TWOPIECEGauss2mem",         (DL_FUNC) &Comp_Cond_TWOPIECEGauss2mem,         12},
    {"Comp_Cond_TWOPIECEBIMODAL2mem",         (DL_FUNC) &Comp_Cond_TWOPIECEBIMODAL2mem,         12},
    {"Comp_Cond_BinomnegGaussZINB2mem",         (DL_FUNC) &Comp_Cond_BinomnegGaussZINB2mem,         12},
    {"Comp_Cond_PoisZIP2mem",         (DL_FUNC) &Comp_Cond_PoisZIP2mem,         12},
    {"Comp_Cond_Gauss_misp_PoisZIP2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_PoisZIP2mem,         12},
    {"Comp_Cond_Gauss_st2mem",         (DL_FUNC) &Comp_Cond_Gauss_st2mem,         12},
    {"Comp_Cond_T_st2mem",         (DL_FUNC) &Comp_Cond_T_st2mem,         12},
    {"Comp_Cond_Gauss_misp_T_st2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_T_st2mem,         12},
    {"Comp_Cond_Tukeyh_st2mem",         (DL_FUNC) &Comp_Cond_Tukeyh_st2mem,         12},
    {"Comp_Cond_Tukeyhh_st2mem",         (DL_FUNC) &Comp_Cond_Tukeyhh_st2mem,         12},
    {"Comp_Cond_SkewGauss_st2mem",         (DL_FUNC) &Comp_Cond_SkewGauss_st2mem,         12},
    {"Comp_Cond_SinhGauss_st2mem",         (DL_FUNC) &Comp_Cond_SinhGauss_st2mem,         12},
    {"Comp_Cond_Gamma_st2mem",         (DL_FUNC) &Comp_Cond_Gamma_st2mem,         12},
    {"Comp_Cond_Weibull_st2mem",         (DL_FUNC) &Comp_Cond_Weibull_st2mem,         12},
    {"Comp_Cond_LogGauss_st2mem",         (DL_FUNC) &Comp_Cond_LogGauss_st2mem,         12},
    {"Comp_Cond_Beta_st2mem",         (DL_FUNC) &Comp_Cond_Beta_st2mem,         12},
    {"Comp_Cond_Kumaraswamy_st2mem",         (DL_FUNC) &Comp_Cond_Kumaraswamy_st2mem,         12},//85
    {"Comp_Cond_Kumaraswamy2_st2mem",         (DL_FUNC) &Comp_Cond_Kumaraswamy2_st2mem,         12},
    {"Comp_Cond_Gauss_misp_Pois_st2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_Pois_st2mem,         12},
    {"Comp_Cond_Gauss_misp_PoisGamma_st2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_PoisGamma_st2mem,         12},
    {"Comp_Cond_PoisGamma_st2mem",         (DL_FUNC) &Comp_Cond_PoisGamma_st2mem,         12},
    {"Comp_Cond_Pois_st2mem",         (DL_FUNC) &Comp_Cond_Pois_st2mem,         12},
    {"Comp_Cond_BinomGauss_st2mem",         (DL_FUNC) &Comp_Cond_BinomGauss_st2mem,         12},
    {"Comp_Cond_BinomLogi_st2mem",         (DL_FUNC) &Comp_Cond_BinomLogi_st2mem,         12},
    {"Comp_Cond_BinomNNGauss_st2mem",         (DL_FUNC) &Comp_Cond_BinomNNGauss_st2mem,         12},
    {"Comp_Cond_BinomNNLogi_st2mem",         (DL_FUNC) &Comp_Cond_BinomNNLogi_st2mem,         12},
    {"Comp_Cond_BinomnegGauss_st2mem",         (DL_FUNC) &Comp_Cond_BinomnegGauss_st2mem,         12},
    {"Comp_Cond_BinomnegLogi_st2mem",         (DL_FUNC) &Comp_Cond_BinomnegLogi_st2mem,         12},//96
    {"Comp_Cond_TWOPIECETukeyh_st2mem",         (DL_FUNC) &Comp_Cond_TWOPIECETukeyh_st2mem,         12},
    {"Comp_Cond_TWOPIECET_st2mem",         (DL_FUNC) &Comp_Cond_TWOPIECET_st2mem,         12},
    {"Comp_Cond_TWOPIECEGauss_st2mem",         (DL_FUNC) &Comp_Cond_TWOPIECEGauss_st2mem,         12},
    {"Comp_Cond_TWOPIECEBIMODAL_st2mem",         (DL_FUNC) &Comp_Cond_TWOPIECEBIMODAL_st2mem,         12},
    {"Comp_Cond_BinomnegGaussZINB_st2mem",         (DL_FUNC) &Comp_Cond_BinomnegGaussZINB_st2mem,         12},
    {"Comp_Cond_PoisZIP_st2mem",         (DL_FUNC) &Comp_Cond_PoisZIP_st2mem,         12},
    {"Comp_Cond_Gauss_misp_PoisZIP_st2mem",         (DL_FUNC) &Comp_Cond_Gauss_misp_PoisZIP_st2mem,         12},
    {"Comp_Cond_LogLogistic_st2mem",         (DL_FUNC) &Comp_Cond_LogLogistic_st2mem,         12},
    {"Comp_Cond_Logistic_st2mem",         (DL_FUNC) &Comp_Cond_Logistic_st2mem,         12},
    {"Comp_Cond_GaussGCop2mem",         (DL_FUNC) &Comp_Cond_GaussGCop2mem,         12},
    {"Comp_Cond_BetaGCop2mem",         (DL_FUNC) &Comp_Cond_BetaGCop2mem,         12},
    {"Comp_Cond_Beta2GCop2mem",         (DL_FUNC) &Comp_Cond_Beta2GCop2mem,         12},
    {"Comp_Cond_KumaraswamyGCop2mem",         (DL_FUNC) &Comp_Cond_KumaraswamyGCop2mem,         12},
    {"Comp_Cond_Kumaraswamy2GCop2mem",         (DL_FUNC) &Comp_Cond_Kumaraswamy2GCop2mem,         12},//90
    {"Comp_Cond_GaussCCop2mem",         (DL_FUNC) &Comp_Cond_GaussCCop2mem,         12},
    {"Comp_Cond_BetaCCop2mem",         (DL_FUNC) &Comp_Cond_BetaCCop2mem,         12},
    {"Comp_Cond_Beta2CCop2mem",         (DL_FUNC) &Comp_Cond_Beta2CCop2mem,         12},//93
    
    /********************** spatial anisotropic +************************************/
    {"Comp_Pair_Gauss2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss2mem_aniso,         14},
    {"Comp_Diff_Gauss2mem_aniso",         (DL_FUNC) &Comp_Diff_Gauss2mem_aniso,         14},
    {"Comp_Pair_WrapGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_WrapGauss2mem_aniso,         14},
    {"Comp_Pair_SinhGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_SinhGauss2mem_aniso,         14},
    {"Comp_Pair_SkewGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_SkewGauss2mem_aniso,         14},
    {"Comp_Pair_Gamma2mem_aniso",         (DL_FUNC) &Comp_Pair_Gamma2mem_aniso,         14},
    {"Comp_Pair_Weibull2mem_aniso",         (DL_FUNC) &Comp_Pair_Weibull2mem_aniso,         14},
    {"Comp_Pair_Kumaraswamy22mem_aniso",         (DL_FUNC) &Comp_Pair_Kumaraswamy22mem_aniso,         14},
    {"Comp_Pair_Beta2mem_aniso",         (DL_FUNC) &Comp_Pair_Beta2mem_aniso,         14},
    {"Comp_Pair_LogGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_LogGauss2mem_aniso,         14},
    {"Comp_Pair_PoisbinnegGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_PoisbinnegGauss2mem_aniso,         14},
    {"Comp_Pair_PoisbinGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_PoisbinGauss2mem_aniso,         14},
    {"Comp_Pair_BinomnegGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomnegGauss2mem_aniso,         14},//109
    {"Comp_Pair_BinomnegLogi2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomnegLogi2mem_aniso,         14},
    {"Comp_Pair_BinomnegGaussZINB2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomnegGaussZINB2mem_aniso,         14},
    {"Comp_Pair_BinomGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomGauss2mem_aniso,         14},//112
    {"Comp_Pair_BinomLogi2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomLogi2mem_aniso,         14},
    {"Comp_Pair_BinomNNGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomNNGauss2mem_aniso,         14},
    {"Comp_Pair_BinomNNGauss_misp2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomNNGauss_misp2mem_aniso,         14},
    {"Comp_Pair_BinomNNLogi2mem_aniso",         (DL_FUNC) &Comp_Pair_BinomNNLogi2mem_aniso,         14},
    {"Comp_Pair_LogLogistic2mem_aniso",         (DL_FUNC) &Comp_Pair_LogLogistic2mem_aniso,         14},
    {"Comp_Pair_Logistic2mem_aniso",         (DL_FUNC) &Comp_Pair_Logistic2mem_aniso,         14},
    {"Comp_Pair_Pois2mem_aniso",         (DL_FUNC) &Comp_Pair_Pois2mem_aniso,         14},
    {"Comp_Pair_PoisGamma2mem_aniso",         (DL_FUNC) &Comp_Pair_PoisGamma2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_PoisGamma2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisGamma2mem_aniso,         14},
    {"Comp_Pair_PoisZIP2mem_aniso",         (DL_FUNC) &Comp_Pair_PoisZIP2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_Pois2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_Pois2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_PoisZIP2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_PoisZIP2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_SkewT2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_SkewT2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_T2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_T2mem_aniso,         14},
    {"Comp_Pair_Tukeyhh2mem_aniso",         (DL_FUNC) &Comp_Pair_Tukeyhh2mem_aniso,         14},
    {"Comp_Pair_Tukeyh2mem_aniso",         (DL_FUNC) &Comp_Pair_Tukeyh2mem_aniso,         14},
    {"Comp_Pair_Gauss_misp_Tukeygh2mem_aniso",         (DL_FUNC) &Comp_Pair_Gauss_misp_Tukeygh2mem_aniso,         14},
    {"Comp_Pair_T2mem_aniso",         (DL_FUNC) &Comp_Pair_T2mem_aniso,         14},
    {"Comp_Pair_TWOPIECETukeyh2mem_aniso",         (DL_FUNC) &Comp_Pair_TWOPIECETukeyh2mem_aniso,         14},
    {"Comp_Pair_TWOPIECET2mem_aniso",         (DL_FUNC) &Comp_Pair_TWOPIECET2mem_aniso,         14},
    {"Comp_Pair_TWOPIECEGauss2mem_aniso",         (DL_FUNC) &Comp_Pair_TWOPIECEGauss2mem_aniso,         14},
    {"Comp_Pair_TWOPIECEBIMODAL2mem_aniso",         (DL_FUNC) &Comp_Pair_TWOPIECEBIMODAL2mem_aniso,         14},
    {"Comp_Pair_GaussGCop2mem_aniso",         (DL_FUNC) &Comp_Pair_GaussGCop2mem_aniso,         14},
    {"Comp_Pair_BetaGCop2mem_aniso",         (DL_FUNC) &Comp_Pair_BetaGCop2mem_aniso,         14},
    {"Comp_Pair_Beta2GCop2mem_aniso",         (DL_FUNC) &Comp_Pair_Beta2GCop2mem_aniso,         14},
    {"Comp_Pair_KumaraswamyGCop2mem_aniso",         (DL_FUNC) &Comp_Pair_KumaraswamyGCop2mem_aniso,         14},
    {"Comp_Pair_Kumaraswamy2GCop2mem_aniso",         (DL_FUNC) &Comp_Pair_Kumaraswamy2GCop2mem_aniso,         14},
    {"Comp_Pair_GaussCCop2mem_aniso",         (DL_FUNC) &Comp_Pair_GaussCCop2mem_aniso,         14},
    {"Comp_Pair_Beta2CCop2mem_aniso",         (DL_FUNC) &Comp_Pair_Beta2CCop2mem_aniso,         14},
    {"Comp_Pair_KumaraswamyCCop2mem_aniso",         (DL_FUNC) &Comp_Pair_KumaraswamyCCop2mem_aniso,         14},
    {"Comp_Pair_Kumaraswamy2CCop2mem_aniso",         (DL_FUNC) &Comp_Pair_Kumaraswamy2CCop2mem_aniso,         14},
    {"Comp_Cond_Gauss2mem_aniso",         (DL_FUNC) &Comp_Cond_Gauss2mem_aniso,         14},
    {"Comp_Cond_Tukeyhh2mem_aniso",         (DL_FUNC) &Comp_Cond_Tukeyhh2mem_aniso,         14},
    {"Comp_Cond_SkewGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_SkewGauss2mem_aniso,         14},
    {"Comp_Cond_T2mem_aniso",         (DL_FUNC) &Comp_Cond_T2mem_aniso,         14},
    {"Comp_Cond_Gauss_misp_T2mem_aniso",         (DL_FUNC) &Comp_Cond_Gauss_misp_T2mem_aniso,         14},
    {"Comp_Cond_Gauss_misp_SkewT2mem_aniso",         (DL_FUNC) &Comp_Cond_Gauss_misp_SkewT2mem_aniso,         14},
    {"Comp_Cond_SinhGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_SinhGauss2mem_aniso,         14},
    {"Comp_Cond_Gamma2mem_aniso",         (DL_FUNC) & Comp_Cond_Gamma2mem_aniso,         14},
    {"Comp_Cond_Weibull2mem_aniso",         (DL_FUNC) &Comp_Cond_Weibull2mem_aniso,         14},
    {"Comp_Cond_LogGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_LogGauss2mem_aniso,         14},
    {"Comp_Cond_Beta2mem_aniso",         (DL_FUNC) &Comp_Cond_Beta2mem_aniso,         14},
    {"Comp_Cond_Kumaraswamy2mem_aniso",         (DL_FUNC) &Comp_Cond_Kumaraswamy2mem_aniso,         14},
    {"Comp_Cond_Gauss_misp_Pois2mem_aniso",         (DL_FUNC) &Comp_Cond_Gauss_misp_Pois2mem_aniso,         14},
    {"Comp_Cond_BinomNNGauss_misp2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomNNGauss_misp2mem_aniso,         14},
    {"Comp_Cond_Gauss_misp_PoisGamma2mem_aniso",         (DL_FUNC) &Comp_Cond_Gauss_misp_PoisGamma2mem_aniso,         14},
    {"Comp_Cond_PoisGamma2mem_aniso",         (DL_FUNC) &Comp_Cond_PoisGamma2mem_aniso,         14},
    {"Comp_Cond_Pois2mem_aniso",         (DL_FUNC) &Comp_Cond_Pois2mem_aniso,         14},
    {"Comp_Cond_BinomGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomGauss2mem_aniso,         14},
    {"Comp_Cond_BinomLogi2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomLogi2mem_aniso,         14},
    {"Comp_Cond_BinomNNGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomNNGauss2mem_aniso,         14},
    {"Comp_Cond_BinomNNLogi2mem_aniso",         (DL_FUNC) & Comp_Cond_BinomNNLogi2mem_aniso,         14},
    {"Comp_Cond_BinomnegGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomnegGauss2mem_aniso,         14},
    {"Comp_Cond_TWOPIECETukeyh2mem_aniso",         (DL_FUNC) &Comp_Cond_TWOPIECETukeyh2mem_aniso,         14},
    {"Comp_Cond_TWOPIECET2mem_aniso",         (DL_FUNC) &Comp_Cond_TWOPIECET2mem_aniso,         14},
    {"Comp_Cond_TWOPIECEGauss2mem_aniso",         (DL_FUNC) &Comp_Cond_TWOPIECEGauss2mem_aniso,         14},
    {"Comp_Cond_TWOPIECEBIMODAL2mem_aniso",         (DL_FUNC) &Comp_Cond_TWOPIECEBIMODAL2mem_aniso,         14},
    {"Comp_Cond_BinomnegGaussZINB2mem_aniso",         (DL_FUNC) &Comp_Cond_BinomnegGaussZINB2mem_aniso,         14},
    {"Comp_Cond_PoisZIP2mem_aniso",         (DL_FUNC) &Comp_Cond_PoisZIP2mem_aniso,         14},
    {"Comp_Cond_LogLogistic2mem_aniso",         (DL_FUNC) &Comp_Cond_LogLogistic2mem_aniso,         14},
    {"Comp_Cond_Logistic2mem_aniso",         (DL_FUNC) &Comp_Cond_Logistic2mem_aniso,         14},
    {"Comp_Pair_Gauss_biv2mem",         (DL_FUNC) &Comp_Pair_Gauss_biv2mem,         12},
    {NULL, NULL, 0}
};

void R_init_GeoModels(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
void R_unload_GeoModels(DllInfo *info) {
  // just to avoid warning from compiler
}
