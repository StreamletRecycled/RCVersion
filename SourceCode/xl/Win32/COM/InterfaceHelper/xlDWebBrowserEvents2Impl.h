//--------------------------------------------------------------------
//
//    Copyright (C) Streamlet. All rights reserved.
//
//    File Name:   xlDWebBrowserEvents2Impl.h
//    Author:      Streamlet
//    Create Time: 2012-09-01
//    Description: 
//
//    Version history:
//
//
//--------------------------------------------------------------------

#ifndef __XLDWEBBROWSEREVENTS2IMPL_H_EA31A245_A931_42E6_9D29_E0C24E2B1ADC_INCLUDED__
#define __XLDWEBBROWSEREVENTS2IMPL_H_EA31A245_A931_42E6_9D29_E0C24E2B1ADC_INCLUDED__


#include <ExDisp.h>
#include <xl/Win32/COM/xlComDef.h>
#include <xl/Win32/COM/InterfaceHelper/xlIDispatchImpl.h>

namespace xl
{
    template <typename T = DWebBrowserEvents2>
    class DWebBrowserEvents2Impl : public IDispatchImpl<T>
    {
    public:
        XL_COM_INTERFACE_BEGIN()
            XL_COM_INTERFACE(DWebBrowserEvents2)
            XL_COM_INTERFACE_CHAIN(IDispatchImpl<T>)
        XL_COM_INTERFACE_END()
    };

} // namespace xl


#endif // #ifndef __XLDWEBBROWSEREVENTS2IMPL_H_EA31A245_A931_42E6_9D29_E0C24E2B1ADC_INCLUDED__
