# Oliver Kullmann, 1.3.2012 (Swansea)

.SUFFIXES :

.PHONY : all cleanall

source_dir = .
bin_dir = bin
CLR = CoreLanguage/RunTime
CLF = CoreLanguage/FunctionalityImprovements
CLU = CoreLanguage/UsabilityEnhancements

compilation_units = $(wildcard $(source_dir)/*.cpp)
source_files = $(notdir $(compilation_units))
programs = $(addprefix $(bin_dir)/, $(source_files:.cpp=))

compilation_units_dir = $(wildcard $(source_dir)/$(CLR)/*.cpp)
source_files_dir = $(notdir $(compilation_units_dir))
programs_dir = $(addprefix $(bin_dir)/, $(source_files_dir:.cpp=))

compilation_units_dir1 = $(wildcard $(source_dir)/$(CLF)/*.cpp)
source_files_dir1 = $(notdir $(compilation_units_dir1))
programs_dir1 = $(addprefix $(bin_dir)/, $(source_files_dir1:.cpp=))
	
compilation_units_dir2 = $(wildcard $(source_dir)/$(CLU)/*.cpp)
source_files_dir2 = $(notdir $(compilation_units_dir2))
programs_dir2 = $(addprefix $(bin_dir)/, $(source_files_dir2:.cpp=))	

CXX = g++
standard_options = -std=c++11 -Wall -pedantic

all : $(programs)  $(programs_dir)  $(programs_dir1)  $(programs_dir2)

$(programs) : $(bin_dir)/% : %.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<

$(programs_dir) : $(bin_dir)/% : $(CLR)/%.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<
	
$(programs_dir1) : $(bin_dir)/% : $(CLF)/%.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<	

$(programs_dir2) : $(bin_dir)/% : $(CLU)/%.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<	

cleanall :
	- rm $(programs) $(programs_dir) $(programs_dir1) $(programs_dir2)
