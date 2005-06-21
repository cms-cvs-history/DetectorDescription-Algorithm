//<<<<<< INCLUDES                                                       >>>>>>

//#include "Utilities/Configuration/interface/Architecture.h"
#include "DetectorDescription/DDAlgorithm/interface/DDAlgorithmFactory.h"

//<<<<<< PRIVATE DEFINES                                                >>>>>>
//<<<<<< PRIVATE CONSTANTS                                              >>>>>>
//<<<<<< PRIVATE TYPES                                                  >>>>>>
//<<<<<< PRIVATE VARIABLE DEFINITIONS                                   >>>>>>
//<<<<<< PUBLIC VARIABLE DEFINITIONS                                    >>>>>>
//<<<<<< CLASS STRUCTURE INITIALIZATION                                 >>>>>>

DDAlgorithmFactory DDAlgorithmFactory::s_instance;

//<<<<<< PRIVATE FUNCTION DEFINITIONS                                   >>>>>>
//<<<<<< PUBLIC FUNCTION DEFINITIONS                                    >>>>>>
//<<<<<< MEMBER FUNCTION DEFINITIONS                                    >>>>>>

DDAlgorithmFactory::DDAlgorithmFactory (void)
    : seal::PluginFactory<DDAlgorithm *(void)> ("DDAlgorithm")
{}

DDAlgorithmFactory *
DDAlgorithmFactory::get (void)
{ return &s_instance; }