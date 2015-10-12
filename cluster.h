
#ifndef ____cluster__
#define ____cluster__

#include <stdio.h>

class cluster {
public:
    
    Int_t cont;
    void  set_intput_pointer_digitizer(const std::vector<hit_with_charge>* input_pointer);
    void FindClusterNumber();
    void processEvent();
    
private:
    const std::vector<hit_with_charge>*  m_digitized_hit;
    const std::vector<hit_with_charge>* get_hit_ptr() const;
    
#endif /* defined(____cluster__) */
    
    
};