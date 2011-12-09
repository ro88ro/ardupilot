
#ifndef __PERIODICPROCESS_H__
#define __PERIODICPROCESS_H__

typedef void (*ap_procedure)(void);

class AP_PeriodicProcess
{
    public:
        virtual void register_process(void (* proc)(void)) = 0;
};

#endif // __PERIODICPROCESS_H__
