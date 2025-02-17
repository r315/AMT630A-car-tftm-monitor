/********************************************
[PannelName]
SAT070AT50DHY0
[PannelType]
D_RGB888
[PannelResolution]
 800
 480
1056
 525
  20
  10
  46
  23
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
  -1
Update date:Friday, February 06, 2015
Update time:15:02:53
History:
HDSA191106PFW
********************************************/

typedef struct _PanlstaticPara
{
    unsigned int addr;
    unsigned char dat;
}PanlstaticPara;

typedef struct _PanlPosDynPara
{
    unsigned int addr;
    unsigned char dat_posDyn[6];
}PanlPosDynPara;

typedef struct _PanlSysDynPara
{
    unsigned int addr;
    unsigned char dat_sysDyn[8];
}PanlSysDynPara;



/*==============start===============*/
/*AV1
[VideoChannel]
AV1
[VideoType]
CVBS
[VideoPI]
VIDEO_P
[VideoPicSys]
PAL
[VideoData]
13500000
 690
 280
 864
 312

Update date:Friday, February 06, 2015
Update time:15:02:53
*/
//0x5D84
PanlstaticPara code AV1_staticPara[] = 
{
//GLOBAL
	{0xFD0A, 0x79},
	{0xFD0B, 0x40},
	{0xFD0D, 0xD0},
	{0xFD0F, 0x09},
	{0xFD10, 0x04},
	{0xFD14, 0x03},
	{0xFD15, 0x02},
	{0xFD16, 0x0A},
	{0xFD1A, 0x08},
	{0xFD19, 0xC3},
	
//Decoder
	{0xFE54, 0x00},
	{0xFE83, 0xFE},
	
//VP
	{0xFFB0, 0x23},
	{0xFFB1, 0x0E},
	{0xFFB2, 0x20},
	{0xFFB3, 0x20},
	{0xFFB4, 0x20},
	{0xFFB7, 0x90},
	{0xFFCB, 0x2A},
	{0xFFF0, 0x11},
	{0xFFF1, 0x0C},
	{0xFFF2, 0xEA},
	{0xFFF3, 0xE5},
	{0xFFF4, 0xF1},
	{0xFFF5, 0x0E},
	{0xFFF6, 0x0D},
	{0xFFF7, 0xD1},
	{0xFFF8, 0x0F},
	{0xFFF9, 0x31},
	{0xFFFA, 0x23},
	{0xFFFB, 0x81},
	
//TCON
	{0xFC00, 0x00},
//SCALE
	{0xFC90, 0xC2},
	{0xFC91, 0x01},
	{0xFC92, 0x04},
	{0xFC93, 0x00},
	{0xFC98, 0xE2},
	{0xFC99, 0x01},
	{0xFC9A, 0x88},
	{0xFC9B, 0x03},
	{0xFC9C, 0x01},
	{0xFC9D, 0x00},
	{0xFC9E, 0x06},
	{0xFC9F, 0x00},
	{0xFCA0, 0x28},
	{0xFCA1, 0x00},
	{0xFCA2, 0x48},
	{0xFCA3, 0x03},
	{0xFCA4, 0x0A},
	{0xFCA5, 0x00},
	{0xFCA6, 0x10},
	{0xFCA7, 0x00},
	{0xFCA8, 0x2C},
	{0xFCA9, 0x00},
	{0xFCAA, 0x0C},
	{0xFCAB, 0x02},
	{0xFCAC, 0x1F},
	{0xFCB7, 0x2E},
	{0xFCB8, 0x02},
	{0xFCBB, 0x26},
	{0xFCBC, 0x02},
	{0xFCBD, 0x01},
	{0xFCBE, 0x00},
	{0xFCBF, 0x00},
	{0xFCC4, 0x44},
	{0xFCC5, 0x02},
	{0xFCC6, 0x4C},
	{0xFCC7, 0x04},
	{0xFCC8, 0x01},
	{0xFCC9, 0x00},
	{0xFCCA, 0x09},
	{0xFCCB, 0x00},
	{0xFCCC, 0x27},
	{0xFCCD, 0x00},
	{0xFCCE, 0x47},
	{0xFCCF, 0x03},
	{0xFCD1, 0x00},
	{0xFCD2, 0x0C},
	{0xFCD3, 0x00},
	{0xFCD4, 0x25},
	{0xFCD5, 0x00},
	{0xFCD6, 0x14},
	{0xFCD7, 0x02},
	{0xFCD8, 0x0B},
	{0xFCD0, 0x04},
	{0xFCE2, 0x02},
	{0xFCB6, 0x02},
	
	{0xFB35, 0x00},
	{0xFB89, 0x01},
	
//GAMA
	{0xFF00, 0x03},
	{0xFF01, 0x04},
	{0xFF02, 0x08},
	{0xFF03, 0x0D},
	{0xFF04, 0x12},
	{0xFF05, 0x17},
	{0xFF06, 0x1D},
	{0xFF07, 0x23},
	{0xFF08, 0x2A},
	{0xFF09, 0x33},
	{0xFF0A, 0x3D},
	{0xFF0B, 0x49},
	{0xFF0C, 0x55},
	{0xFF0D, 0x60},
	{0xFF0E, 0x6C},
	{0xFF0F, 0x78},
	{0xFF10, 0x83},
	{0xFF11, 0x90},
	{0xFF12, 0x9C},
	{0xFF13, 0xA7},
	{0xFF14, 0xB3},
	{0xFF15, 0xBD},
	{0xFF16, 0xC7},
	{0xFF17, 0xCF},
	{0xFF18, 0xD7},
	{0xFF19, 0xDE},
	{0xFF1A, 0xE4},
	{0xFF1B, 0xE9},
	{0xFF1C, 0xEE},
	{0xFF1D, 0xF3},
	{0xFF1E, 0xF7},
	{0xFF1F, 0xFB},
	{0xFF20, 0x04},
	{0xFF21, 0x08},
	{0xFF22, 0x0D},
	{0xFF23, 0x12},
	{0xFF24, 0x17},
	{0xFF25, 0x1D},
	{0xFF26, 0x23},
	{0xFF27, 0x2A},
	{0xFF28, 0x33},
	{0xFF29, 0x3D},
	{0xFF2A, 0x49},
	{0xFF2B, 0x55},
	{0xFF2C, 0x60},
	{0xFF2D, 0x6C},
	{0xFF2E, 0x78},
	{0xFF2F, 0x83},
	{0xFF30, 0x90},
	{0xFF31, 0x9C},
	{0xFF32, 0xA7},
	{0xFF33, 0xB3},
	{0xFF34, 0xBD},
	{0xFF35, 0xC7},
	{0xFF36, 0xCF},
	{0xFF37, 0xD7},
	{0xFF38, 0xDE},
	{0xFF39, 0xE4},
	{0xFF3A, 0xE9},
	{0xFF3B, 0xEE},
	{0xFF3C, 0xF3},
	{0xFF3D, 0xF7},
	{0xFF3E, 0xFB},
	{0xFF3F, 0x04},
	{0xFF40, 0x08},
	{0xFF41, 0x0D},
	{0xFF42, 0x12},
	{0xFF43, 0x17},
	{0xFF44, 0x1D},
	{0xFF45, 0x23},
	{0xFF46, 0x2A},
	{0xFF47, 0x33},
	{0xFF48, 0x3D},
	{0xFF49, 0x49},
	{0xFF4A, 0x55},
	{0xFF4B, 0x60},
	{0xFF4C, 0x6C},
	{0xFF4D, 0x78},
	{0xFF4E, 0x83},
	{0xFF4F, 0x90},
	{0xFF50, 0x9C},
	{0xFF51, 0xA7},
	{0xFF52, 0xB3},
	{0xFF53, 0xBD},
	{0xFF54, 0xC7},
	{0xFF55, 0xCF},
	{0xFF56, 0xD7},
	{0xFF57, 0xDE},
	{0xFF58, 0xE4},
	{0xFF59, 0xE9},
	{0xFF5A, 0xEE},
	{0xFF5B, 0xF3},
	{0xFF5C, 0xF7},
	{0xFF5D, 0xFB},
};

PanlPosDynPara code AV1_posDynPara[]=
{
//dispmode:  16:9  4:3  DM_EX0  DM_EX1  DM_EX2  DM_EX3
//GLOBAL
//PAD MUX
//PWM
//GPIO
//DECODER
//VP
//TCON
//SCALE
	{0xFC96, {0x6A, 0x92, 0x5B, 0x5B, 0x5B, 0x5B}},
	{0xFC97, {0x03, 0x04, 0x03, 0x03, 0x03, 0x03}},
	{0xFCAD, {0x00, 0x64, 0x09, 0x09, 0x09, 0x09}},
	{0xFCAE, {0x00, 0x64, 0x00, 0x00, 0x00, 0x00}},
	{0xFCAF, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
	{0xFCB0, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
	{0xFCC2, {0x6A, 0x8E, 0x63, 0x63, 0x63, 0x63}},
	{0xFCC3, {0x03, 0x04, 0x03, 0x03, 0x03, 0x03}},
	{0xFCD9, {0x00, 0x64, 0x06, 0x06, 0x06, 0x06}},
	{0xFCDA, {0x00, 0x64, 0x00, 0x00, 0x00, 0x00}},
	{0xFCDB, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
	{0xFCDC, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
//GAMMA
};

PanlSysDynPara code AV1_sysDynPara[]=
{
//picSys:   PAL  PAL-N  PAL-M  NTSC SECAM PAL-60 NTSC-J NTSC-4.43
//GLOBAL
//PAD MUX
//PWM
//GPIO
//DECODER
//VP
	{0xFFD3, {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}},
	{0xFFD4, {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}},
	{0xFFD5, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
	{0xFFD6, {0x30, 0x36, 0x36, 0x30, 0x36, 0x36, 0x36, 0x36}},
//TCON
//SCALE
//GAMMA
};
/*============== end ===============*/

/*���� PAD MUX ����*/
PanlstaticPara code AMT_PadMuxStaticPara[]=
{
//PAD MUX
	{0xFD32, 0x11},
	{0xFD33, 0x11},
	{0xFD34, 0x22},
	{0xFD35, 0x22},
	{0xFD36, 0x22},
	{0xFD37, 0x22},
	{0xFD38, 0x22},
	{0xFD39, 0x22},
	{0xFD3A, 0x22},
	{0xFD3B, 0x22},
	{0xFD3C, 0x22},
	{0xFD3D, 0x22},
	{0xFD3E, 0x22},
	{0xFD3F, 0x22},
	{0xFD40, 0x22},
	{0xFD41, 0x22},
	{0xFD44, 0x01},
	{0xFD45, 0x00},
	{0xFD46, 0x00},
	{0xFD47, 0x00},
	{0xFD48, 0x00},
	{0xFD49, 0x00},
	{0xFD4A, 0x00},
	{0xFD4B, 0x00},
	{0xFD50, 0x0F},
};

/*���β�����صĽṹ��*/
typedef struct _PannelPara
{
   PanlstaticPara  *pVideoStaicPara;
   PanlPosDynPara *pVideoPosDynPara;
   PanlSysDynPara  *pVideoSysDynPara;
}PannelPara;

typedef struct _VideoChannel
{
   unsigned char INPUT_ID;
   PannelPara    VideoPara;
}VideoChannel;

/*��ͬͨ�����εĶ��塢��ʼ��*/
VideoChannel code VideoChannelPara[]=
{
	{INPUT_AV1, {AV1_staticPara,AV1_posDynPara,AV1_sysDynPara}},
};

#define STATIC_NUM  183
#define POS_DYN_NUM 12
#define SYS_DYN_NUM 4
#define PAD_MUX_NUM 25

