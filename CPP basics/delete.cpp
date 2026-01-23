int age=5;
// how to delete this age variable from memory in cpp
delete &age; // this is wrong way to delete variable from memory // we cannot delete variable which is created in stack memory
// we can delete only those variables which are created in heap memory using new keyword
// correct way to delete variable from memory
int *pAge = new int; // creating variable in heap memory
*pAge = 5;
delete pAge; // deleting variable from heap memory

//this age will be done automatically when program ends by compiler while in heap memory we have to delete manually using delete keyword
//heap is a run time memory while stack is compile time memory
// we can also create array in heap memory

