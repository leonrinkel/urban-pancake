PROJECT := urban-pancake

INC_DIR := inc
OUT_DIR := out
SRC_DIR := src

AS := arm-none-eabi-gcc
CC := arm-none-eabi-gcc
LD := arm-none-eabi-gcc
OBJCOPY := arm-none-eabi-objcopy

ASFLAGS = \
	-mcpu=cortex-m0 \
	-mthumb \
	-Wall

CFLAGS := \
	-mcpu=cortex-m0 \
	-mthumb \
	-Wall \
	--specs=nosys.specs \
	-I$(INC_DIR) \
	-g3 \
	-O0 \
	-fdata-sections \
	-ffunction-sections \
	-nostdlib

LDFLAGS = \
	-mcpu=cortex-m0 \
	-mthumb \
	-Wall \
	--specs=nosys.specs \
	-Wl,--gc-sections \
	-nostdlib \
	-Tlink.ld

SRCS := \
	$(SRC_DIR)/entry.s \
	$(SRC_DIR)/start.c

OBJS := \
	$(addprefix $(OUT_DIR)/,$(notdir $(patsubst %.s,%.o,$(filter %.s,$(SRCS))))) \
	$(addprefix $(OUT_DIR)/,$(notdir $(patsubst %.c,%.o,$(filter %.c,$(SRCS)))))

OUT_ELF := $(OUT_DIR)/$(PROJECT).elf
OUT_BIN := $(OUT_DIR)/$(PROJECT).bin
OUT_HEX := $(OUT_DIR)/$(PROJECT).hex

.PHONY: all clean

all: $(OUT_DIR) $(OUT_ELF) $(OUT_BIN) $(OUT_HEX)

$(OUT_DIR):
	@mkdir -p $@

$(OUT_ELF): $(OBJS)
	@echo "[LD] $@"
	@$(LD) -o $@ $^ $(LDFLAGS)

$(OUT_BIN): $(OUT_ELF)
	@$(OBJCOPY) -O binary $< $@

$(OUT_HEX): $(OUT_ELF)
	@$(OBJCOPY) -O ihex $< $@

$(OUT_DIR)/%.o: $(SRC_DIR)/%.s
	@echo "[AS] $(strip $<)"
	@$(AS) -c -o $@ $< $(ASFLAGS)

$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "[CC] $(strip $<)"
	@$(CC) -c -o $@ $< $(CFLAGS)

clean:
	@rm -f $(OUT_DIR)/*
