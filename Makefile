TARGET = hello

CC = g++

CPPFLAGS = -Wall -MP -MD

LINKER = g++ -o
LFLAGS = -Wall -I.

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEPS := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.d)

RM = rm -rf

DIR_GUARD = mkdir -p $(@D)

$(BINDIR)/$(TARGET): $(OBJECTS)
		@$(DIR_GUARD)
		@$(LINKER) $@ $(LFLAGS) $(OBJECTS)
		@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o: $(SRCDIR)/%.cpp
		@$(DIR_GUARD)
		@$(CC) $(CPPFLAGS) -c $< -o $@
		@echo "Compiled "$<" successfully!"

-include $(DEPS)

.PHONEY: clean
clean:
		@$(RM) $(OBJDIR)/* $(BINDIR)/*
		@echo "Cleanup complete!"