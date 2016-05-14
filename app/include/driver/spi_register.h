/*
 *  Copyright (c) 2010 - 2011 Espressif System
 *
 */

#ifndef SPI_REGISTER_H_INCLUDED
#define SPI_REGISTER_H_INCLUDED

#define REG_SPI_BASE(i)		(0x60000200 - i * 0x100)
#define SPI_CMD(i)			(REG_SPI_BASE(i) + 0x00)
#define SPI_FLASH_READ		BIT31
#define SPI_FLASH_WREN		BIT30
#define SPI_FLASH_WRDI		BIT29
#define SPI_FLASH_RDID		BIT28
#define SPI_FLASH_RDSR		BIT27
#define SPI_FLASH_WRSR		BIT26
#define SPI_FLASH_PP		BIT25
#define SPI_FLASH_SE		BIT24
#define SPI_FLASH_BE		BIT23
#define SPI_FLASH_CE		BIT22
#define SPI_FLASH_RES		BIT20
#define SPI_USR				BIT18

#define SPI_ADDR(i)			(REG_SPI_BASE(i) + 0x04)

#define SPI_CTRL(i)			(REG_SPI_BASE(i) + 0x08)
#define SPI_WR_BIT_ORDER	BIT26
#define SPI_RD_BIT_ORDER	BIT25
#define SPI_QIO_MODE		BIT24
#define SPI_DIO_MODE		BIT23
#define SPI_QOUT_MODE		BIT20
#define SPI_DOUT_MODE		BIT14
#define SPI_FASTRD_MODE		BIT13

#define SPI_CTRL1(i)		(REG_SPI_BASE(i) + 0x0C)
#define  SPI_CS_HOLD_DELAY					((u32)0x0000000f)
#define  SPI_CS_HOLD_DELAY_RES				((u32)0x00000fff)

#define SPI_RD_STATUS(i)	(REG_SPI_BASE(i) + 0x10)

#define SPI_CTRL2(i)		(REG_SPI_BASE(i) + 0x14)

#define SPI_CS_DELAY_NUM		0x0000000F
#define SPI_CS_DELAY_NUM_S 		28
#define SPI_CS_DELAY_MODE 		0x00000003
#define SPI_CS_DELAY_MODE_S 	26
#define SPI_MOSI_DELAY_NUM 		0x00000007
#define SPI_MOSI_DELAY_NUM_S 	23
#define SPI_MOSI_DELAY_MODE 	0x00000003
#define SPI_MOSI_DELAY_MODE_S 	21
#define SPI_MISO_DELAY_NUM 		0x00000007
#define SPI_MISO_DELAY_NUM_S 	18
#define SPI_MISO_DELAY_MODE 	0x00000003
#define SPI_MISO_DELAY_MODE_S	16

#define SPI_CLOCK(i)		(REG_SPI_BASE(i) + 0x18)
#define SPI_CLK_EQU_SYSCLK	(BIT31)
#define SPI_CLKDIV_PRE		0x00001FFF
#define SPI_CLKDIV_PRE_S	18
#define SPI_CLKCNT_N 		0x0000003F
#define SPI_CLKCNT_N_S		12
#define SPI_CLKCNT_H		0x0000003F
#define SPI_CLKCNT_H_S		6
#define SPI_CLKCNT_L		0x0000003F
#define SPI_CLKCNT_L_S		0

#define SPI_USER(i)			(REG_SPI_BASE(i) + 0x1C)
#define SPI_USR_COMMAND		BIT31
#define SPI_USR_ADDR 		BIT30
#define SPI_USR_DUMMY 		BIT29
#define SPI_USR_MISO 		BIT28
#define SPI_USR_MOSI 		BIT27

#define SPI_USR_MOSI_HIGHPART	BIT25
#define SPI_USR_MISO_HIGHPART	BIT24

#define SPI_SIO				BIT16
#define SPI_FWRITE_QIO		BIT15
#define SPI_FWRITE_DIO		BIT14
#define SPI_FWRITE_QUAD		BIT13
#define SPI_FWRITE_DUAL		BIT12
#define SPI_WR_BYTE_ORDER	BIT11
#define SPI_RD_BYTE_ORDER	BIT10
#define SPI_CK_OUT_EDGE		BIT7
#define SPI_CK_I_EDGE		BIT6
#define SPI_CS_SETUP		BIT5
#define SPI_CS_HOLD			BIT4
#define SPI_FLASH_MODE		BIT2
#define SPI_USR_DOUTDIN		BIT0

#define SPI_USER1(i)			(REG_SPI_BASE(i) + 0x20)
#define SPI_USR_ADDR_BITLEN		0x0000003F
#define SPI_USR_ADDR_BITLEN_S	26
#define SPI_USR_MOSI_BITLEN 	0x000001FF
#define SPI_USR_MOSI_BITLEN_S 	17
#define SPI_USR_MISO_BITLEN 	0x000001FF
#define SPI_USR_MISO_BITLEN_S 	8

#define SPI_USR_DUMMY_CYCLELEN		0x000000FF
#define SPI_USR_DUMMY_CYCLELEN_S	0

#define SPI_USER2(i)				(REG_SPI_BASE(i) + 0x24)
#define SPI_USR_COMMAND_BITLEN 		0x0000000F
#define SPI_USR_COMMAND_BITLEN_S 	28
#define SPI_USR_COMMAND_VALUE 		0x0000FFFF
#define SPI_USR_COMMAND_VALUE_S 	0

#define SPI_WR_STATUS(i)			(REG_SPI_BASE(i) + 0x28)
#define SPI_PIN(i)					(REG_SPI_BASE(i) + 0x2C)
#define SPI_CS2_DIS				BIT2
#define SPI_CS1_DIS 			BIT1
#define SPI_CS0_DIS 			BIT0
#define SPI_CS_DIS 				BIT30

#define SPI_SLAVE(i)				(REG_SPI_BASE(i) + 0x30)
#define SPI_SYNC_RESET			BIT31
#define SPI_SLAVE_MODE			BIT30
#define SPI_SLV_WR_RD_BUF_EN	BIT29
#define SPI_SLV_WR_RD_STA_EN	BIT28
#define SPI_SLV_CMD_DEFINE		BIT27
#define SPI_TRANS_CNT			0x0000000F
#define SPI_TRANS_CNT_S			23
#define SPI_TRANS_DONE_EN 		BIT9
#define SPI_SLV_WR_STA_DONE_EN 	BIT8
#define SPI_SLV_RD_STA_DONE_EN 	BIT7
#define SPI_SLV_WR_BUF_DONE_EN 	BIT6
#define SPI_SLV_RD_BUF_DONE_EN 	BIT5

#define SLV_SPI_INT_EN			0x0000001f
#define SLV_SPI_INT_EN_S		5

#define SPI_TRANS_DONE 			BIT4
#define SPI_SLV_WR_STA_DONE 	BIT3
#define SPI_SLV_RD_STA_DONE 	BIT2
#define SPI_SLV_WR_BUF_DONE 	BIT1
#define SPI_SLV_RD_BUF_DONE 	BIT0

#define SPI_SLAVE1(i)				(REG_SPI_BASE(i)  + 0x34)
#define SPI_SLV_STATUS_BITLEN		0x0000001F
#define SPI_SLV_STATUS_BITLEN_S		27
#define SPI_SLV_BUF_BITLEN			0x000001FF
#define SPI_SLV_BUF_BITLEN_S 		16
#define SPI_SLV_RD_ADDR_BITLEN 		0x0000003F
#define SPI_SLV_RD_ADDR_BITLEN_S 	10
#define SPI_SLV_WR_ADDR_BITLEN 		0x0000003F
#define SPI_SLV_WR_ADDR_BITLEN_S 	4

#define SPI_SLV_WRSTA_DUMMY_EN 		BIT3
#define SPI_SLV_RDSTA_DUMMY_EN 		BIT2
#define SPI_SLV_WRBUF_DUMMY_EN 		BIT1
#define SPI_SLV_RDBUF_DUMMY_EN 		BIT0

#define SPI_SLAVE2(i)					(REG_SPI_BASE(i)  + 0x38)
#define SPI_SLV_WRBUF_DUMMY_CYCLELEN	0X000000FF
#define SPI_SLV_WRBUF_DUMMY_CYCLELEN_S	24
#define SPI_SLV_RDBUF_DUMMY_CYCLELEN	0X000000FF
#define SPI_SLV_RDBUF_DUMMY_CYCLELEN_S	16
#define SPI_SLV_WRSTR_DUMMY_CYCLELEN	0X000000FF
#define SPI_SLV_WRSTR_DUMMY_CYCLELEN_S	8
#define SPI_SLV_RDSTR_DUMMY_CYCLELEN	0x000000FF
#define SPI_SLV_RDSTR_DUMMY_CYCLELEN_S	0

#define SPI_SLAVE3(i)					(REG_SPI_BASE(i)  + 0x3C)
#define SPI_SLV_WRSTA_CMD_VALUE			0x000000FF
#define SPI_SLV_WRSTA_CMD_VALUE_S		24
#define SPI_SLV_RDSTA_CMD_VALUE			0x000000FF
#define SPI_SLV_RDSTA_CMD_VALUE_S		16
#define SPI_SLV_WRBUF_CMD_VALUE			0x000000FF
#define SPI_SLV_WRBUF_CMD_VALUE_S		8
#define SPI_SLV_RDBUF_CMD_VALUE 		0x000000FF
#define SPI_SLV_RDBUF_CMD_VALUE_S		0

#define SPI_W0(i) 						(REG_SPI_BASE(i) +0x40)
#define SPI_W1(i) 						(REG_SPI_BASE(i) +0x44)
#define SPI_W2(i) 						(REG_SPI_BASE(i) +0x48)
#define SPI_W3(i) 						(REG_SPI_BASE(i) +0x4C)
#define SPI_W4(i) 						(REG_SPI_BASE(i) +0x50)
#define SPI_W5(i) 						(REG_SPI_BASE(i) +0x54)
#define SPI_W6(i) 						(REG_SPI_BASE(i) +0x58)
#define SPI_W7(i) 						(REG_SPI_BASE(i) +0x5C)
#define SPI_W8(i) 						(REG_SPI_BASE(i) +0x60)
#define SPI_W9(i) 						(REG_SPI_BASE(i) +0x64)
#define SPI_W10(i) 						(REG_SPI_BASE(i) +0x68)
#define SPI_W11(i) 						(REG_SPI_BASE(i) +0x6C)
#define SPI_W12(i) 						(REG_SPI_BASE(i) +0x70)
#define SPI_W13(i) 						(REG_SPI_BASE(i) +0x74)
#define SPI_W14(i) 						(REG_SPI_BASE(i) +0x78)
#define SPI_W15(i) 						(REG_SPI_BASE(i) +0x7C)

#define SPI_EXT2(i)                           (REG_SPI_BASE(i)  + 0xF8)

#define SPI_EXT3(i)                           (REG_SPI_BASE(i)  + 0xFC)
#define SPI_INT_HOLD_ENA 0x00000003
#define SPI_INT_HOLD_ENA_S 0

#define     __I     volatile const   /*!< defines 'read only' permissions     */
#define     __O     volatile         /*!< defines 'write only' permissions    */
#define     __IO    volatile         /*!< defines 'read / write' permissions  */


// описания битовых полей
typedef struct
{
	unsigned	flash_read		:1;
	unsigned	flash_wren		:1;
	unsigned	flash_wrdi		:1;
	unsigned	flash_rdid		:1;
	unsigned	flash_rdsr		:1;
	unsigned	flash_wrsr		:1;
	unsigned	flash_pp		:1;
	unsigned	flash_se		:1;
	unsigned	flash_be		:1;
	unsigned	flash_ce		:1;
	unsigned	dummy1			:1;
	unsigned	flash_res		:1;
	unsigned	dummy2			:1;
	unsigned	usr				:1;
	u32			dummy3			:18;
} SPI_cmd_t;

typedef struct
{
	u8			dummy3			:5;
	unsigned	wr_bit_order	:1;
	unsigned	rd_bit_order	:1;
	unsigned	qio_mode		:1;
	unsigned	dio_mode		:1;
	u8			dummy2			:2;
	unsigned	qout_mode		:1;
	u8			dummy1			:5;
	unsigned	dout_mode		:1;
	unsigned	fastrd_mode		:1;
	u16			dummy			:13;
} SPI_ctrl_t;

typedef struct
{
	u8	cs_hold_delay		:4;
	u16	cs_hold_delay_res	:12;
	u16	dummy				:16;
} SPI_ctrl1_t;

typedef struct
{
	u8	cs_delay_num	:4;
	u8	cs_delay_mode	:2;
	u8	mosi_delay_num	:3;
	u8	mosi_delay_mode	:2;
	u8	miso_delay_num	:3;
	u8	miso_delay_mode	:2;
	u16	dummy :16;
} SPI_ctrl2_t;

typedef struct
{
	unsigned	equ_sysclk	:1;
	u16			pre_s		:13;
	u8			clkcnt_n	:6;
	u8			clkcnt_h	:6;
	u8			clkcnt_l	:6;
} SPI_clock_t;

typedef struct
{
	unsigned	command			:1;
	unsigned	addr			:1;
	unsigned	dummy			:1;
	unsigned	miso			:1;
	unsigned	mosi			:1;
	unsigned	dummy1			:1;
	unsigned	mosi_highpart	:1;
	unsigned	miso_highpart	:1;
	u8			dummy2			:7;
	unsigned	sio				:1;
	unsigned	fwrite_qio		:1;
	unsigned	fwrite_dio		:1;
	unsigned	fwrite_quad		:1;
	unsigned	fwrite_dual		:1;
	unsigned	wr_byte_order	:1;
	unsigned	rd_byte_order	:1;
	u8			dummy3			:2;
	unsigned	ck_out_edge		:1;
	unsigned	ck_i_edge		:1;
	unsigned	cs_setup		:1;
	unsigned	cs_hold			:1;
	unsigned	dummy4			:1;
	unsigned	flash_mode		:1;
	unsigned	dummy5			:1;
	unsigned	usr_dout_din	:1;
} SPI_user_t;

typedef struct
{
	u8	addr_bitlen 	:6;
	u16	mosi_bitlen 	:9;
	u16	miso_bitlen 	:9;
	u8	dummy_cyclelen	:8;
} SPI_user1_t;

typedef struct
{
	u8	command_bitlen	:4;
	u16	dummy			:12;
	u16	command_value	:16;
} SPI_user2_t;

typedef struct
{
	u32	dummy			:29;
	unsigned	cs2_dis	:1;
	unsigned	cs1_dis	:1;
	unsigned	cs0_dis	:1;
} SPI_pin_t;

typedef struct
{
	u8	dummy1			:5;
	u8	trans_cnt		:4;
	u16	dummy2			:13;
	u8	spi_int_en		:5;
	u8	spi_int_status	:5;
} SPI_slave_t;

typedef struct
{
	u8	status_bitlen	:5;
	u8	dummy1			:2;
	u16	buf_bitlen		:9;
	u8	rd_addr_bitlen	:6;
	u8	wr_addr_bitlen	:6;
	u8	dummy2			:4;
} SPI_slave1_t;

typedef struct
{
	u8	wrbuf_dummy_cyclelen	:8;
	u8	rdbuf_dummy_cyclelen	:8;
	u8	wrsta_dummy_cyclelen	:8;
	u8	rdsta_dummy_cyclelen	:8;
} SPI_slave2_t;

typedef struct
{
	u8	wrsta_cmd_value :8;
	u8	rdsta_cmd_value :8;
	u8	wrbuf_cmd_value :8;
	u8	rdbuf_cmd_value :8;
} SPI_slave3_t;

typedef struct SPI_struct
{
	union
	{
		__IO u32			spi_cmd;
		__IO SPI_cmd_t		spi_cmd_bits;
	};
	__IO u32 spi_addr;
	union
	{
		__IO u32			spi_ctrl;
		__IO SPI_ctrl_t		spi_ctrl_bits;
	};
	union
	{
		__IO u32			spi_ctrl1;
		__IO SPI_ctrl1_t	spi_ctrl1_bits;
	};
	__IO u32 spi_rd_status;
	union
	{
		__IO u32			spi_ctrl2;
		__IO SPI_ctrl2_t	spi_ctrl2_bits;
	};
	union
	{
		__IO u32			spi_clock;
		__IO SPI_clock_t	spi_clock_bits;
	};
	union
	{
		__IO u32			spi_user;
		__IO SPI_user_t		spi_user_bits;
	};
	union
	{
		__IO u32			spi_user1;
		__IO SPI_user1_t	spi_user1_bits;
	};
	union
	{
		__IO u32			spi_user2;
		__IO SPI_user2_t	spi_user2_bits;
	};
	__IO u32 spi_wr_status;
	union
	{
		__IO u32			spi_pin;
		__IO SPI_pin_t		spi_pin_bits;
	};
	union
	{
		__IO u32			spi_slave;
		__IO SPI_slave_t	spi_slave_bits;
	};
	union
	{
		__IO u32			spi_slave1;
		__IO SPI_slave1_t	spi_slave1_bits;
	};
	union
	{
		__IO u32			spi_slave2;
		__IO SPI_slave2_t	spi_slave2_bits;
	};
	union
	{
		__IO u32			spi_slave3;
		__IO SPI_slave3_t	spi_slave3_bits;
	};
	__IO u32 spi_w0;
	__IO u32 spi_w1;
	__IO u32 spi_w2;
	__IO u32 spi_w3;
	__IO u32 spi_w4;
	__IO u32 spi_w5;
	__IO u32 spi_w6;
	__IO u32 spi_w7;
	__IO u32 spi_w8;
	__IO u32 spi_w9;
	__IO u32 spi_w10;
	__IO u32 spi_w11;
	__IO u32 spi_w12;
	__IO u32 spi_w13;
	__IO u32 spi_w14;
	__IO u32 spi_w15;
} SPI_TypeDef;

#define SPI_CMD_RESET_VALUE			((u32)0x00000000)
#define SPI_ADDR_RESET_VALUE		((u32)0x00000000)
#define SPI_CTRL_RESET_VALUE		((u32)0x00001000)
#define SPI_CTRL1_RESET_VALUE		((u32)0x00000000)
#define SPI_RD_STATUS_RESET_VALUE	((u32)0x00000000)
#define SPI_CTRL2_RESET_VALUE		((u32)0x00000000)
#define SPI_CLOCK_RESET_VALUE		((u32)0x80003023)
#define SPI_USER_RESET_VALUE		((u32)0x80000020)
#define SPI_USER1_RESET_VALUE		((u32)0x3C000000)
#define SPI_USER2_RESET_VALUE		((u32)0x70000000)
#define SPI_WR_STATUS_RESET_VALUE	((u32)0x00000000)
#define SPI_PIN_RESET_VALUE			((u32)0x00000006)
#define SPI_SLAVE_RESET_VALUE		((u32)0x00000200)
#define SPI_SLAVE1_RESET_VALUE		((u32)0x00000000)
#define SPI_SLAVE2_RESET_VALUE		((u32)0x00000000)
#define SPI_SLAVE3_RESET_VALUE		((u32)0x00000000)
#define SPI_W0_RESET_VALUE			((u32)0x00000000)
#define SPI_W1_RESET_VALUE			((u32)0x00000000)
#define SPI_W2_RESET_VALUE			((u32)0x00000000)
#define SPI_W3_RESET_VALUE			((u32)0x00000000)
#define SPI_W4_RESET_VALUE			((u32)0x00000000)
#define SPI_W5_RESET_VALUE			((u32)0x00000000)
#define SPI_W6_RESET_VALUE			((u32)0x00000000)
#define SPI_W7_RESET_VALUE			((u32)0x00000000)
#define SPI_W8_RESET_VALUE			((u32)0x00000000)
#define SPI_W9_RESET_VALUE			((u32)0x00000000)
#define SPI_W10_RESET_VALUE			((u32)0x00000000)
#define SPI_W11_RESET_VALUE			((u32)0x00000000)
#define SPI_W12_RESET_VALUE			((u32)0x00000000)
#define SPI_W13_RESET_VALUE			((u32)0x00000000)
#define SPI_W14_RESET_VALUE			((u32)0x00000000)
#define SPI_W15_RESET_VALUE			((u32)0x00000000)

// битовые маски в регистрах
#define SPI_CMD_FLASH_READ			BIT31
#define SPI_CMD_FLASH_WREN			BIT30
#define SPI_CMD_FLASH_WRDI			BIT29
#define SPI_CMD_FLASH_RDID			BIT28
#define SPI_CMD_FLASH_RDSR			BIT27
#define SPI_CMD_FLASH_WRSR			BIT26
#define SPI_CMD_FLASH_PP			BIT25
#define SPI_CMD_FLASH_SE			BIT24
#define SPI_CMD_FLASH_BE			BIT23
#define SPI_CMD_FLASH_CE			BIT22
#define SPI_CMD_FLASH_RES			BIT20
#define SPI_CMD_USR					BIT18

#define SPI_CTRL_WR_BIT_ORDER		BIT26
#define SPI_CTRL_RD_BIT_ORDER		BIT25
#define SPI_CTRL_QIO_MODE			BIT24
#define SPI_CTRL_DIO_MODE			BIT23
#define SPI_CTRL_QOUT_MODE			BIT20
#define SPI_CTRL_DOUT_MODE			BIT14
#define SPI_CTRL_FASTRD_MODE		BIT13

#define SPI_CTRL1_CS_HOLD_DELAY_MASK		((u32)0xF0000000)
#define SPI_CTRL1_CS_HOLD_DELAY_S				28
#define SPI_CTRL1_CS_HOLD_DELAY_RES_MASK	((u32)0x0FFF0000)
#define SPI_CTRL1_CS_HOLD_DELAY_RES_S			16

#define SPI_CTRL2_CS_DELAY_NUM_MASK			((u32)0xF0000000)
#define SPI_CTRL2_CS_DELAY_NUM_S			28
#define SPI_CTRL2_CS_DELAY_MODE_MASK		((u32)0x0C000000)
#define SPI_CTRL2_CS_DELAY_MODE_S			26
#define SPI_CTRL2_MOSI_DELAY_NUM_MASK		((u32)0x03800000)
#define SPI_CTRL2_MOSI_DELAY_NUM_S			23
#define SPI_CTRL2_MOSI_DELAY_MODE_MASK		((u32)0x00600000)
#define SPI_CTRL2_MOSI_DELAY_MODE_S			21
#define SPI_CTRL2_MISO_DELAY_NUM_MASK		((u32)0x00180000)
#define SPI_CTRL2_MISO_DELAY_NUM_S			18
#define SPI_CTRL2_MISO_DELAY_MODE_MASK		((u32)0x00030000)
#define SPI_CTRL2_MISO_DELAY_MODE_S			16

#define SPI_CLOCK_EQU_SYSCLK				BIT31
#define SPI_CLOCK_CLKDIV_PRE_MASK			((u32)0x7FFC0000)
#define SPI_CLOCK_CLKDIV_PRE_S				18
#define SPI_CLOCK_CLKCNT_N_MASK				((u32)0x0003F000)
#define SPI_CLOCK_CLKCNT_N_S				12
#define SPI_CLOCK_CLKCNT_H_MASK				((u32)0x00000FC0)
#define SPI_CLOCK_CLKCNT_H_S				6
#define SPI_CLOCK_CLKCNT_L_MASK				((u32)0x0000003F)

#define SPI_USER_COMMAND					BIT31
#define SPI_USER_ADDR						BIT30
#define SPI_USER_DUMMY						BIT29
#define SPI_USER_MISO						BIT28
#define SPI_USER_MOSI						BIT27
#define SPI_USER_MOSI_HIGHPART				BIT25
#define SPI_USER_MISO_HIGHPART				BIT24
#define SPI_USER_SIO						BIT16
#define SPI_USER_FWRITE_QIO					BIT15
#define SPI_USER_FWRITE_DIO					BIT14
#define SPI_USER_FWRITE_QUAD				BIT13
#define SPI_USER_FWRITE_DUAL				BIT12
#define SPI_USER_WR_BYTE_ORDER				BIT11
#define SPI_USER_RD_BYTE_ORDER				BIT10
#define SPI_USER_CK_OUT_EDGE				BIT7
#define SPI_USER_CK_I_EDGE					BIT6
#define SPI_USER_CS_SETUP					BIT5
#define SPI_USER_CS_HOLD					BIT4
#define SPI_USER_FLASH_MODE					BIT2
#define SPI_USER_USR_DOUTDIN				BIT0

#define SPI_USER1_ADDR_BITLLEN_MASK			((u32)0xFC000000)
#define SPI_USER1_ADDR_BITLLEN_S			26
#define SPI_USER1_MOSI_BITLLEN_MASK			((u32)0x03CE0000)
#define SPI_USER1_MOSI_BITLLEN_S			17
#define SPI_USER1_MISO_BITLLEN_MASK			((u32)0x0001FF00)
#define SPI_USER1_MISO_BITLLEN_S			8
#define SPI_USER1_DUMMY_CYCLELEN_MASK		((u32)0x00000FF)

#define SPI_USER2_COMMAND_BITLEN_MASK		((u32)0xF0000000)
#define SPI_USER2_COMMAND_BITLEN_S			28
#define SPI_USER2_COMMAND_VALUE_MASK		((u32)0x0000FFFF)

#define SPI_PIN_CS2_DIS						BIT2
#define SPI_PIN_CS1_DIS						BIT1
#define SPI_PIN_CS0_DIS						BIT0

#define SPI_SLAVE_SYNC_RESET				BIT31
#define SPI_SLAVE_SLAVE_MODE				BIT30
#define SPI_SLAVE_CMD_DEFINE				BIT27
#define SPI_SLAVE_TRANS_CNT_MASK			((u32)0x07800000)
#define SPI_SLAVE_TRANS_CNT__S				23
#define SPI_SLAVE_INT_EN_MASK				((u32)0x000003E0)
#define SPI_SLAVE_INT_EN_TRANS_DONE			BIT9
#define SPI_SLAVE_INT_EN_WR_STA_DONE		BIT8
#define SPI_SLAVE_INT_EN_RD_STA_DONE		BIT7
#define SPI_SLAVE_INT_EN_WR_BUF_DONE		BIT6
#define SPI_SLAVE_INT_EN_RD_BUF_DONE		BIT5
#define SPI_SLAVE_STT_MASK					((u32)0x0000001F)
#define SPI_SLAVE_STT_TRANS_DONE			BIT4
#define SPI_SLAVE_STT_WR_STA_DONE			BIT3
#define SPI_SLAVE_STT_RD_STA_DONE			BIT2
#define SPI_SLAVE_STT_WR_BUF_DONE			BIT1
#define SPI_SLAVE_STT_RD_BUF_DONE			BIT0

#define SPI_SLAVE1_STATUS_BITLEN_MASK		((u32)0xF8000000)
#define SPI_SLAVE1_STATUS_BITLEN_S			27
#define SPI_SLAVE1_BUF_BITLEN_MASK			((u32)0x01FF0000)
#define SPI_SLAVE1_BUF_BITLEN_S				16
#define SPI_SLAVE1_RD_ADDR_BITLEN_MASK		((u32)0x0000FC00)
#define SPI_SLAVE1_RD_ADDR_BITLEN_S			10
#define SPI_SLAVE1_WR_ADDR_BITLEN_MASK		((u32)0x000003F0)
#define SPI_SLAVE1_WR_ADDR_BITLEN_S			4
#define SPI_SLAVE1_WRSTA_DUMMY_EN			BIT3
#define SPI_SLAVE1_RDSTA_DUMMY_EN			BIT2
#define SPI_SLAVE1_WRBUF_DUMMY_EN			BIT1
#define SPI_SLAVE1_RDBUF_DUMMY_EN			BIT0

#define SPI_SLAVE2_WRBUF_DUMMY_CYCLELEN_MASK	((u32)0xFF000000)
#define SPI_SLAVE2_WRBUF_DUMMY_CYCLELEN_S		24
#define SPI_SLAVE2_RDBUF_DUMMY_CYCLELEN_MASK	((u32)0x00FF0000)
#define SPI_SLAVE2_RDBUF_DUMMY_CYCLELEN_S		16
#define SPI_SLAVE2_WRSTA_DUMMY_CYCLELEN_MASK	((u32)0x0000FF00)
#define SPI_SLAVE2_WRSTA_DUMMY_CYCLELEN_S		8
#define SPI_SLAVE2_RDSTA_DUMMY_CYCLELEN_MASK	((u32)0x000000FF)

#define SPI_SLAVE3_WRSTA_CMD_VALUE_MASK		((u32)0xFF000000)
#define SPI_SLAVE3_WRSTA_CMD_VALUE__S		24
#define SPI_SLAVE3_RDSTA_CMD_VALUE_MASK		((u32)0x00FF0000)
#define SPI_SLAVE3_RDSTA_CMD_VALUE__S		16
#define SPI_SLAVE3_WRBUF_CMD_VALUE_MASK		((u32)0x0000FF00)
#define SPI_SLAVE3_WRBUF_CMD_VALUE__S		8
#define SPI_SLAVE3_RDBUF_CMD_VALUE_MASK		((u32)0x000000FF)

#define SPI0_BaseAddress			0x60000200
#define SPI1_BaseAddress			0x60000100

#define SPI0 		((SPI_TypeDef *) SPI0_BaseAddress)
#define SPI1 		((SPI_TypeDef *) SPI1_BaseAddress)

//#define SPI 		((SPI_TypeDef *) SPI0_BaseAddress)
//#define HSPI		((SPI_TypeDef *) SPI1_BaseAddress)

#endif // SPI_REGISTER_H_INCLUDED
