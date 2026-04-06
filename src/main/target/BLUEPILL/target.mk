F1_TARGETS  += $(TARGET)

# TẮT FLASH NGOÀI
FEATURES    =

# CHỈ GIỮ MPU6500 SPI
TARGET_SRC = \
            drivers/accgyro/accgyro_mpu.c \
            drivers/accgyro/accgyro_mpu6500.c \
            drivers/accgyro/accgyro_spi_mpu6500.c
