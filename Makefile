# Oliver Kullmann, 1.3.2012 (Swansea)

.SUFFIXES :

.PHONY : all cleanall

source_dir = .
bin_dir = bin

compilation_units = $(wildcard $(source_dir)/*.cpp)
source_files = $(notdir $(compilation_units))
programs = $(addprefix $(bin_dir)/, $(source_files:.cpp=))

compilation_units_dir = $(wildcard $(source_dir)/CoreLanguage/*.cpp)
source_files_dir = $(notdir $(compilation_units_dir))
programs_dir = $(addprefix $(bin_dir)/, $(source_files_dir:.cpp=))


CXX = g++
standard_options = -std=c++0x -Wall -pedantic

all : $(programs)  $(programs_dir)

$(programs) : $(bin_dir)/% : %.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<

$(programs_dir) : $(bin_dir)/% : CoreLanguage/%.cpp
	$(CXX) -o $@ $(standard_options) $(CPPFLAGS) $(CXXFLAGS) $<


cleanall :
	- rm $(programs) $(programs_dir)
