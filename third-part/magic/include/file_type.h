#ifndef FILE_TYPE_H
#define FILE_TYPE_H

enum file_type_e {
	BINARY_DATA = 0,

	/* TYPE GUESTED FROM SOFT MAGIC FILE */

	/* category: acorn */
	/* description: RISC OS Chunk data */
	RISC_OS_CHUNK_DATA = 1,

	/* category: acorn */
	/* description: RISC OS Chunk data, AOF object */
	RISC_OS_CHUNK_DATA_AOF_OBJECT = 2,

	/* category: acorn */
	/* description: RISC OS Chunk data, ALF library */
	RISC_OS_CHUNK_DATA_ALF_LIBRARY = 3,

	/* category: acorn */
	/* description: RISC OS AIF executable */
	RISC_OS_AIF_EXECUTABLE = 4,

	/* category: acorn */
	/* description: RISC OS Draw file data */
	RISC_OS_DRAW_FILE_DATA = 5,

	/* category: acorn */
	/* description: RISC OS outline font data, */
	RISC_OS_OUTLINE_FONT_DATA = 6,

	/* category: acorn */
	/* description: RISC OS 1bpp font data, */
	RISC_OS_1BPP_FONT_DATA = 7,

	/* category: acorn */
	/* description: RISC OS 4bpp font data */
	RISC_OS_4BPP_FONT_DATA = 8,

	/* category: acorn */
	/* description: RISC OS music file */
	RISC_OS_MUSIC_FILE = 9,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS = 10,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), 8-bit logarithmic */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_8_BIT_LOGARITHMIC = 11,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), LZW-compressed linear */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_LZW_COMPRESSED_LINEAR = 12,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), 8-bit linear signed */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_8_BIT_LINEAR_SIGNED = 13,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), 16-bit linear signed */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_16_BIT_LINEAR_SIGNED = 14,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), SigmaDelta-compressed linear */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_SIGMADELTA_COMPRESSED_LINEAR = 15,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), SigmaDelta-compressed logarithmic */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_SIGMADELTA_COMPRESSED_LOGARITHMIC = 16,

	/* category: acorn */
	/* description: Digital Symphony sound sample (RISC OS), unknown format */
	DIGITAL_SYMPHONY_SOUND_SAMPLE_RISC_OS_UNKNOWN_FORMAT = 17,

	/* category: acorn */
	/* description: Digital Symphony song (RISC OS), */
	DIGITAL_SYMPHONY_SONG_RISC_OS = 18,

	/* category: acorn */
	/* description: Digital Symphony song (RISC OS), 1 voice, */
	DIGITAL_SYMPHONY_SONG_RISC_OS_1_VOICE = 19,

	/* category: acorn */
	/* description: Digital Symphony song (RISC OS), %d voices, */
	DIGITAL_SYMPHONY_SONG_RISC_OS_DD_VOICES = 20,

	/* category: acorn */
	/* description: Digital Symphony sequence (RISC OS), */
	DIGITAL_SYMPHONY_SEQUENCE_RISC_OS = 21,

	/* category: acorn */
	/* description: Digital Symphony sequence (RISC OS), 1 line, */
	DIGITAL_SYMPHONY_SEQUENCE_RISC_OS_1_LINE = 22,

	/* category: acorn */
	/* description: Digital Symphony sequence (RISC OS), %d lines, */
	DIGITAL_SYMPHONY_SEQUENCE_RISC_OS_DD_LINES = 23,

	/* category: acorn */
	/* description: Digital Symphony pattern data (RISC OS), */
	DIGITAL_SYMPHONY_PATTERN_DATA_RISC_OS = 24,

	/* category: acorn */
	/* description: Digital Symphony pattern data (RISC OS), 1 pattern */
	DIGITAL_SYMPHONY_PATTERN_DATA_RISC_OS_1_PATTERN = 25,

	/* category: acorn */
	/* description: Digital Symphony pattern data (RISC OS), %d patterns */
	DIGITAL_SYMPHONY_PATTERN_DATA_RISC_OS_DD_PATTERNS = 26,

	/* category: acorn */
	/* description: PackDir archive (RISC OS) */
	PACKDIR_ARCHIVE_RISC_OS = 27,

	/* category: adi */
	/* description: COFF DSP21k */
	COFF_DSP21K = 28,

	/* category: adi */
	/* description: COFF DSP21k executable, */
	COFF_DSP21K_EXECUTABLE = 29,

	/* category: adi */
	/* description: COFF DSP21k static object, */
	COFF_DSP21K_STATIC_OBJECT = 30,

	/* category: adi */
	/* description: COFF DSP21k relocatable object, */
	COFF_DSP21K_RELOCATABLE_OBJECT = 31,

	/* category: adventure */
	/* description: ALAN game data */
	ALAN_GAME_DATA = 32,

	/* category: adventure */
	/* description: Infocom (Z-machine %d */
	INFOCOM_Z_MACHINE_DD = 33,

	/* category: adventure */
	/* description: Glulx game data */
	GLULX_GAME_DATA = 34,

	/* category: adventure */
	/* description: TADS */
	TADS = 35,

	/* category: adventure */
	/* description: TADS game data, CORRUPTED */
	TADS_GAME_DATA_CORRUPTED = 36,

	/* category: adventure */
	/* description: TADS %s game data */
	TADS_SS_GAME_DATA = 37,

	/* category: adventure */
	/* description: TADS resource data, CORRUPTED */
	TADS_RESOURCE_DATA_CORRUPTED = 38,

	/* category: adventure */
	/* description: TADS %s resource data */
	TADS_SS_RESOURCE_DATA = 39,

	/* category: adventure */
	/* description: TADS saved game data, CORRUPTED */
	TADS_SAVED_GAME_DATA_CORRUPTED = 40,

	/* category: adventure */
	/* description: TADS %s saved game data */
	TADS_SS_SAVED_GAME_DATA = 41,

	/* category: adventure */
	/* description: TADS 3 game data (format version %d) */
	TADS_3_GAME_DATA_FORMAT_VERSION_DD = 42,

	/* category: adventure */
	/* description: TADS 3 saved game data (format version */
	TADS_3_SAVED_GAME_DATA_FORMAT_VERSION = 43,

	/* category: adventure */
	/* description: Adrift game file version */
	ADRIFT_GAME_FILE_VERSION = 44,

	/* category: adventure */
	/* description: Adrift game file version 3.80 */
	ADRIFT_GAME_FILE_VERSION_3_80 = 45,

	/* category: adventure */
	/* description: Adrift game file version 3.90 */
	ADRIFT_GAME_FILE_VERSION_3_90 = 46,

	/* category: adventure */
	/* description: Adrift game file version 4.0 */
	ADRIFT_GAME_FILE_VERSION_4_0 = 47,

	/* category: adventure */
	/* description: Adrift game file version 5.0 */
	ADRIFT_GAME_FILE_VERSION_5_0 = 48,

	/* category: adventure */
	/* description: Adrift game file version unknown */
	ADRIFT_GAME_FILE_VERSION_UNKNOWN = 49,

	/* category: algol68 */
	/* description: Algol 68 source text */
	ALGOL_68_SOURCE_TEXT = 50,

	/* category: allegro */
	/* description: Allegro datafile (packed) */
	ALLEGRO_DATAFILE_PACKED = 51,

	/* category: allegro */
	/* description: Allegro datafile (not packed/autodetect) */
	ALLEGRO_DATAFILE_NOT_PACKED_AUTODETECT = 52,

	/* category: allegro */
	/* description: Allegro datafile (appended exe data) */
	ALLEGRO_DATAFILE_APPENDED_EXE_DATA = 53,

	/* category: alliant */
	/* description: 0420 Alliant virtual executable */
	A_0420_ALLIANT_VIRTUAL_EXECUTABLE = 54,

	/* category: alliant */
	/* description: 0421 Alliant compact executable */
	A_0421_ALLIANT_COMPACT_EXECUTABLE = 55,

	/* category: alpha */
	/* description: COFF format alpha */
	COFF_FORMAT_ALPHA = 56,

	/* category: digital */
	/* description: Alpha COFF format core dump (Digital UNIX) */
	ALPHA_COFF_FORMAT_CORE_DUMP_DIGITAL_UNIX = 57,

	/* category: amanda */
	/* description: AMANDA */
	AMANDA = 58,

	/* category: amanda */
	/* description: AMANDA tape header file, */
	AMANDA_TAPE_HEADER_FILE = 59,

	/* category: amanda */
	/* description: AMANDA dump file, */
	AMANDA_DUMP_FILE = 60,

	/* category: amigaos */
	/* description: AmigaOS shared library */
	AMIGAOS_SHARED_LIBRARY = 61,

	/* category: amigaos */
	/* description: AmigaOS loadseg()ble executable/binary */
	AMIGAOS_LOADSEG_BLE_EXECUTABLE_BINARY = 62,

	/* category: amigaos */
	/* description: AmigaOS object/library data */
	AMIGAOS_OBJECT_LIBRARY_DATA = 63,

	/* category: amigaos */
	/* description: Amiga Workbench */
	AMIGA_WORKBENCH = 64,

	/* category: amigaos */
	/* description: Amiga Workbench disk icon */
	AMIGA_WORKBENCH_DISK_ICON = 65,

	/* category: amigaos */
	/* description: Amiga Workbench drawer icon */
	AMIGA_WORKBENCH_DRAWER_ICON = 66,

	/* category: amigaos */
	/* description: Amiga Workbench tool icon */
	AMIGA_WORKBENCH_TOOL_ICON = 67,

	/* category: amigaos */
	/* description: Amiga Workbench project icon */
	AMIGA_WORKBENCH_PROJECT_ICON = 68,

	/* category: amigaos */
	/* description: Amiga Workbench garbage icon */
	AMIGA_WORKBENCH_GARBAGE_ICON = 69,

	/* category: amigaos */
	/* description: Amiga Workbench device icon */
	AMIGA_WORKBENCH_DEVICE_ICON = 70,

	/* category: amigaos */
	/* description: Amiga Workbench kickstart icon */
	AMIGA_WORKBENCH_KICKSTART_ICON = 71,

	/* category: amigaos */
	/* description: Amiga Workbench workbench application icon */
	AMIGA_WORKBENCH_WORKBENCH_APPLICATION_ICON = 72,

	/* category: amigaos */
	/* description: Amiga Workbench icon, vers. %d */
	AMIGA_WORKBENCH_ICON_VERS_DD = 73,

	/* category: amigaos */
	/* description: Future Composer 1.4 Module sound file */
	FUTURE_COMPOSER_1_4_MODULE_SOUND_FILE = 74,

	/* category: amigaos */
	/* description: Future Composer 1.3 Module sound file */
	FUTURE_COMPOSER_1_3_MODULE_SOUND_FILE = 75,

	/* category: amigaos */
	/* description: Art Of Noise Module sound file */
	ART_OF_NOISE_MODULE_SOUND_FILE = 76,

	/* category: amigaos */
	/* description: Mugician Module sound file */
	MUGICIAN_MODULE_SOUND_FILE = 77,

	/* category: amigaos */
	/* description: Sidmon 2.0 Module sound file */
	SIDMON_2_0_MODULE_SOUND_FILE = 78,

	/* category: amigaos */
	/* description: Synthesis Module sound file */
	SYNTHESIS_MODULE_SOUND_FILE = 79,

	/* category: amigaos */
	/* description: The Holy Noise Module sound file */
	THE_HOLY_NOISE_MODULE_SOUND_FILE = 80,

	/* category: amigaos */
	/* description: JamCracker Module sound file */
	JAMCRACKER_MODULE_SOUND_FILE = 81,

	/* category: amigaos */
	/* description: Hippel-COSO Module sound file */
	HIPPEL_COSO_MODULE_SOUND_FILE = 82,

	/* category: amigaos */
	/* description: AmigaOS bitmap font */
	AMIGAOS_BITMAP_FONT = 83,

	/* category: amigaos */
	/* description: AmigaOS outline font */
	AMIGAOS_OUTLINE_FONT = 84,

	/* category: amigaos */
	/* description: AmigaOS outline tag */
	AMIGAOS_OUTLINE_TAG = 85,

	/* category: amigaos */
	/* description: catalog translation */
	CATALOG_TRANSLATION = 86,

	/* category: amigaos */
	/* description: Amiga E module */
	AMIGA_E_MODULE = 87,

	/* category: amigaos */
	/* description: ECX module */
	ECX_MODULE = 88,

	/* category: amigaos */
	/* description: AmigaGuide file */
	AMIGAGUIDE_FILE = 89,

	/* category: amigaos */
	/* description: Rigid Disk Block */
	RIGID_DISK_BLOCK = 90,

	/* category: amigaos */
	/* description: Amiga DOS disk */
	AMIGA_DOS_DISK = 91,

	/* category: amigaos */
	/* description: Amiga FFS disk */
	AMIGA_FFS_DISK = 92,

	/* category: amigaos */
	/* description: Amiga Inter DOS disk */
	AMIGA_INTER_DOS_DISK = 93,

	/* category: amigaos */
	/* description: Amiga Inter FFS disk */
	AMIGA_INTER_FFS_DISK = 94,

	/* category: amigaos */
	/* description: Amiga Fastdir DOS disk */
	AMIGA_FASTDIR_DOS_DISK = 95,

	/* category: amigaos */
	/* description: Amiga Fastdir FFS disk */
	AMIGA_FASTDIR_FFS_DISK = 96,

	/* category: amigaos */
	/* description: Kickstart disk */
	KICKSTART_DISK = 97,

	/* category: amigaos */
	/* description: LZX compressed archive (Amiga) */
	LZX_COMPRESSED_ARCHIVE_AMIGA = 98,

	/* category: amigaos */
	/* description: AmigaDOS script */
	AMIGADOS_SCRIPT = 99,

	/* category: amigaos */
	/* description: AMOS Basic source code */
	AMOS_BASIC_SOURCE_CODE = 100,

	/* category: amigaos */
	/* description: AMOS Basic source code, tested */
	AMOS_BASIC_SOURCE_CODE_TESTED = 101,

	/* category: amigaos */
	/* description: AMOS Basic source code, untested */
	AMOS_BASIC_SOURCE_CODE_UNTESTED = 102,

	/* category: amigaos */
	/* description: AMOS Basic sprite bank */
	AMOS_BASIC_SPRITE_BANK = 103,

	/* category: amigaos */
	/* description: AMOS Basic icon bank */
	AMOS_BASIC_ICON_BANK = 104,

	/* category: amigaos */
	/* description: AMOS Basic memory bank */
	AMOS_BASIC_MEMORY_BANK = 105,

	/* category: amigaos */
	/* description: AMOS Basic memory banks */
	AMOS_BASIC_MEMORY_BANKS = 106,

	/* category: android */
	/* description: Dalvik dex file */
	DALVIK_DEX_FILE = 107,

	/* category: android */
	/* description: Dalvik dex file (optimized for host) */
	DALVIK_DEX_FILE_OPTIMIZED_FOR_HOST = 108,

	/* category: android */
	/* description: Android bootimg */
	ANDROID_BOOTIMG = 109,

	/* category: android */
	/* description: Android Backup */
	ANDROID_BACKUP = 110,

	/* category: android */
	/* description: Partition Information Table for Samsung smartphone */
	PARTITION_INFORMATION_TABLE_FOR_SAMSUNG_SMARTPHONE = 111,

	/* category: android */
	/* description: Android sparse image */
	ANDROID_SPARSE_IMAGE = 112,

	/* category: android */
	/* description: Android binary XML */
	ANDROID_BINARY_XML = 113,

	/* category: animation */
	/* description: Silicon Graphics movie file */
	SILICON_GRAPHICS_MOVIE_FILE = 114,

	/* category: animation */
	/* description: Apple QuickTime */
	APPLE_QUICKTIME = 115,

	/* category: animation */
	/* description: Apple QuickTime movie (fast start) */
	APPLE_QUICKTIME_MOVIE_FAST_START = 116,

	/* category: animation */
	/* description: Apple QuickTime URL */
	APPLE_QUICKTIME_URL = 117,

	/* category: animation */
	/* description: Apple QuickTime movie (fast start, compressed header) */
	APPLE_QUICKTIME_MOVIE_FAST_START_COMPRESSED_HEADER = 118,

	/* category: animation */
	/* description: Apple QuickTime multiple URLs */
	APPLE_QUICKTIME_MULTIPLE_URLS = 119,

	/* category: animation */
	/* description: Apple QuickTime movie (unoptimized) */
	APPLE_QUICKTIME_MOVIE_UNOPTIMIZED = 120,

	/* category: animation */
	/* description: Apple QuickTime image (fast start) */
	APPLE_QUICKTIME_IMAGE_FAST_START = 121,

	/* category: animation */
	/* description: Apple QuickTime compressed archive */
	APPLE_QUICKTIME_COMPRESSED_ARCHIVE = 122,

	/* category: animation */
	/* description: JPEG 2000 image */
	JPEG_2000_IMAGE = 123,

	/* category: animation */
	/* description: ISO Media */
	ISO_MEDIA = 124,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, Sony XAVC Codec */
	ISO_MEDIA_MPEG_V4_SYSTEM_SONY_XAVC_CODEC = 125,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2 = 126,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 v4 (H.263/AMR GSM 6.10) */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_V4_H_263_AMR_GSM_6_10 = 127,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 v5 (H.263/AMR GSM 6.10) */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_V5_H_263_AMR_GSM_6_10 = 128,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 v6 (ITU H.264/AMR GSM 6.10) */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_V6_ITU_H_264_AMR_GSM_6_10 = 129,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 C.S0050-0 V1.0 */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_C_S0050_0_V1_0 = 130,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 C.S0050-0-A V1.0.0 */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_C_S0050_0_A_V1_0_0 = 131,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP2 C.S0050-0-B V1.0 */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP2_C_S0050_0_B_V1_0 = 132,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP = 133,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP, Release 6 MBMS Extended Presentations */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP_RELEASE_6_MBMS_EXTENDED_PRESENTATIONS = 134,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP, Release 7 MBMS Extended Presentations */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP_RELEASE_7_MBMS_EXTENDED_PRESENTATIONS = 135,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP, Release 6 General Profile */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP_RELEASE_6_GENERAL_PROFILE = 136,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP JVT AVC [ISO 14496-12:2005] */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP_JVT_AVC_ISO_14496_12_2005 = 137,

	/* category: animation */
	/* description: ISO Media, Apple QuickTime movie */
	ISO_MEDIA_APPLE_QUICKTIME_MOVIE = 138,

	/* category: animation */
	/* description: ISO Media, Canon Digital Camera */
	ISO_MEDIA_CANON_DIGITAL_CAMERA = 139,

	/* category: animation */
	/* description: ISO Media, Casio Digital Camera */
	ISO_MEDIA_CASIO_DIGITAL_CAMERA = 140,

	/* category: animation */
	/* description: ISO Media, Convergent Design */
	ISO_MEDIA_CONVERGENT_DESIGN = 141,

	/* category: animation */
	/* description: ISO Media, DMB MAF w/ MPEG Layer II aud, MOT slides, DLS, JPG/PNG/MNG */
	ISO_MEDIA_DMB_MAF_W_MPEG_LAYER_II_AUD_MOT_SLIDES_DLS_JPG_PNG_MNG = 142,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext DA0A, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DA0A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 143,

	/* category: animation */
	/* description: ISO Media, DMB MAF audio with ER-BSAC audio, JPG/PNG/MNG images */
	ISO_MEDIA_DMB_MAF_AUDIO_WITH_ER_BSAC_AUDIO_JPG_PNG_MNG_IMAGES = 144,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext da1a, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DA1A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 145,

	/* category: animation */
	/* description: ISO Media, DMB MAF aud w/ HE-AAC v2 aud, MOT slides, DLS, JPG/PNG/MNG */
	ISO_MEDIA_DMB_MAF_AUD_W_HE_AAC_V2_AUD_MOT_SLIDES_DLS_JPG_PNG_MNG = 146,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext da2a, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DA2A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 147,

	/* category: animation */
	/* description: ISO Media, DMB MAF aud with HE-AAC aud, JPG/PNG/MNG images */
	ISO_MEDIA_DMB_MAF_AUD_WITH_HE_AAC_AUD_JPG_PNG_MNG_IMAGES = 148,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext da3a w/ BIFS, 3GPP, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DA3A_W_BIFS_3GPP_DID_TVA_REL_IPMP = 149,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, Dynamic Adaptive Streaming over HTTP */
	ISO_MEDIA_MPEG_V4_SYSTEM_DYNAMIC_ADAPTIVE_STREAMING_OVER_HTTP = 150,

	/* category: animation */
	/* description: ISO Media, DMB MAF supporting all the components defined in the spec */
	ISO_MEDIA_DMB_MAF_SUPPORTING_ALL_THE_COMPONENTS_DEFINED_IN_THE_SPEC = 151,

	/* category: animation */
	/* description: ISO Media, Digital Media Project */
	ISO_MEDIA_DIGITAL_MEDIA_PROJECT = 152,

	/* category: animation */
	/* description: ISO Media, Dirac (wavelet compression), encap in ISO base media (MP4) */
	ISO_MEDIA_DIRAC_WAVELET_COMPRESSION_ENCAP_IN_ISO_BASE_MEDIA_MP4 = 153,

	/* category: animation */
	/* description: ISO Media, DMB MAF vid w/ AVC vid, ER-BSAC aud, BIFS, JPG/PNG/MNG, TS */
	ISO_MEDIA_DMB_MAF_VID_W_AVC_VID_ER_BSAC_AUD_BIFS_JPG_PNG_MNG_TS = 154,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext dv1a, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DV1A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 155,

	/* category: animation */
	/* description: ISO Media, DMB MAF vid w/ AVC vid, HE-AAC v2 aud, BIFS, JPG/PNG/MNG, TS */
	ISO_MEDIA_DMB_MAF_VID_W_AVC_VID_HE_AAC_V2_AUD_BIFS_JPG_PNG_MNG_TS = 156,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext dv2a, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DV2A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 157,

	/* category: animation */
	/* description: ISO Media, DMB MAF vid w/ AVC vid, HE-AAC aud, BIFS, JPG/PNG/MNG, TS */
	ISO_MEDIA_DMB_MAF_VID_W_AVC_VID_HE_AAC_AUD_BIFS_JPG_PNG_MNG_TS = 158,

	/* category: animation */
	/* description: ISO Media, DMB MAF, ext dv3a, with 3GPP timed text, DID, TVA, REL, IPMP */
	ISO_MEDIA_DMB_MAF_EXT_DV3A_WITH_3GPP_TIMED_TEXT_DID_TVA_REL_IPMP = 159,

	/* category: animation */
	/* description: ISO Media, DVB (.DVB) over RTP */
	ISO_MEDIA_DVB_DVB_OVER_RTP = 160,

	/* category: animation */
	/* description: ISO Media, DVB (.DVB) over MPEG-2 Transport Stream */
	ISO_MEDIA_DVB_DVB_OVER_MPEG_2_TRANSPORT_STREAM = 161,

	/* category: animation */
	/* description: ISO Media, Video for Adobe Flash Player 9+ (.F4V) */
	ISO_MEDIA_VIDEO_FOR_ADOBE_FLASH_PLAYER_9P_F4V = 162,

	/* category: animation */
	/* description: ISO Media, Protected Video for Adobe Flash Player 9+ (.F4P) */
	ISO_MEDIA_PROTECTED_VIDEO_FOR_ADOBE_FLASH_PLAYER_9P_F4P = 163,

	/* category: animation */
	/* description: ISO Media, Audio for Adobe Flash Player 9+ (.F4A) */
	ISO_MEDIA_AUDIO_FOR_ADOBE_FLASH_PLAYER_9P_F4A = 164,

	/* category: animation */
	/* description: ISO Media, Audio Book for Adobe Flash Player 9+ (.F4B) */
	ISO_MEDIA_AUDIO_BOOK_FOR_ADOBE_FLASH_PLAYER_9P_F4B = 165,

	/* category: animation */
	/* description: ISO Media, ISMACryp 2.0 Encrypted File */
	ISO_MEDIA_ISMACRYP_2_0_ENCRYPTED_FILE = 166,

	/* category: animation */
	/* description: ISO Media, MP4 Base Media v2 [ISO 14496-12:2005] */
	ISO_MEDIA_MP4_BASE_MEDIA_V2_ISO_14496_12_2005 = 167,

	/* category: animation */
	/* description: ISO Media, MP4 Base Media v1 [IS0 14496-12:2003] */
	ISO_MEDIA_MP4_BASE_MEDIA_V1_IS0_14496_12_2003 = 168,

	/* category: animation */
	/* description: ISO Media, JPEG 2000 */
	ISO_MEDIA_JPEG_2000 = 169,

	/* category: animation */
	/* description: ISO Media, JPEG 2000 Image (.JP2) [ISO 15444-1 ?] */
	ISO_MEDIA_JPEG_2000_IMAGE_JP2_ISO_15444_1 = 170,

	/* category: animation */
	/* description: ISO Media, Unknown, from GPAC samples (prob non-existent) */
	ISO_MEDIA_UNKNOWN_FROM_GPAC_SAMPLES_PROB_NON_EXISTENT = 171,

	/* category: animation */
	/* description: ISO Media, JPEG 2000 Compound Image (.JPM) [ISO 15444-6] */
	ISO_MEDIA_JPEG_2000_COMPOUND_IMAGE_JPM_ISO_15444_6 = 172,

	/* category: animation */
	/* description: ISO Media, JPEG 2000 w/ extensions (.JPX) [ISO 15444-2] */
	ISO_MEDIA_JPEG_2000_W_EXTENSIONS_JPX_ISO_15444_2 = 173,

	/* category: animation */
	/* description: ISO Media, 3GPP2 EZmovie for KDDI 3G cellphones */
	ISO_MEDIA_3GPP2_EZMOVIE_FOR_KDDI_3G_CELLPHONES = 174,

	/* category: animation */
	/* description: ISO Media, Apple iTunes ALAC/AAC-LC (.M4A) Audio */
	ISO_MEDIA_APPLE_ITUNES_ALAC_AAC_LC_M4A_AUDIO = 175,

	/* category: animation */
	/* description: ISO Media, Apple iTunes ALAC/AAC-LC (.M4B) Audio Book */
	ISO_MEDIA_APPLE_ITUNES_ALAC_AAC_LC_M4B_AUDIO_BOOK = 176,

	/* category: animation */
	/* description: ISO Media, Apple iTunes ALAC/AAC-LC (.M4P) AES Protected Audio */
	ISO_MEDIA_APPLE_ITUNES_ALAC_AAC_LC_M4P_AES_PROTECTED_AUDIO = 177,

	/* category: animation */
	/* description: ISO Media, Apple iTunes Video (.M4V) Video */
	ISO_MEDIA_APPLE_ITUNES_VIDEO_M4V_VIDEO = 178,

	/* category: animation */
	/* description: ISO Media, Apple TV (.M4V) */
	ISO_MEDIA_APPLE_TV_M4V = 179,

	/* category: animation */
	/* description: ISO Media, Apple iPhone (.M4V) */
	ISO_MEDIA_APPLE_IPHONE_M4V = 180,

	/* category: animation */
	/* description: ISO Media, Motion JPEG 2000 [ISO 15444-3] Simple Profile */
	ISO_MEDIA_MOTION_JPEG_2000_ISO_15444_3_SIMPLE_PROFILE = 181,

	/* category: animation */
	/* description: ISO Media, Motion JPEG 2000 [ISO 15444-3] General Profile */
	ISO_MEDIA_MOTION_JPEG_2000_ISO_15444_3_GENERAL_PROFILE = 182,

	/* category: animation */
	/* description: ISO Media, MPEG-4, MOBI format */
	ISO_MEDIA_MPEG_4_MOBI_FORMAT = 183,

	/* category: animation */
	/* description: ISO Media, MPEG-21 [ISO/IEC 21000-9] */
	ISO_MEDIA_MPEG_21_ISO_IEC_21000_9 = 184,

	/* category: animation */
	/* description: ISO Media, MP4 v1 [ISO 14496-1:ch13] */
	ISO_MEDIA_MP4_V1_ISO_14496_1_CH13 = 185,

	/* category: animation */
	/* description: ISO Media, MP4 v2 [ISO 14496-14] */
	ISO_MEDIA_MP4_V2_ISO_14496_14 = 186,

	/* category: animation */
	/* description: ISO Media, MP4 w/ MPEG-7 Metadata [per ISO 14496-12] */
	ISO_MEDIA_MP4_W_MPEG_7_METADATA_PER_ISO_14496_12 = 187,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, MPEG v7 XML */
	ISO_MEDIA_MPEG_V4_SYSTEM_MPEG_V7_XML = 188,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, MPEG v7 binary XML */
	ISO_MEDIA_MPEG_V4_SYSTEM_MPEG_V7_BINARY_XML = 189,

	/* category: animation */
	/* description: ISO Media, MPEG v4 system, 3GPP Mobile */
	ISO_MEDIA_MPEG_V4_SYSTEM_3GPP_MOBILE = 190,

	/* category: animation */
	/* description: ISO Media, Photo Player, MAF [ISO/IEC 23000-3] */
	ISO_MEDIA_PHOTO_PLAYER_MAF_ISO_IEC_23000_3 = 191,

	/* category: animation */
	/* description: ISO Media, Sony / Mobile QuickTime (.MQV) US Pat 7,477,830 */
	ISO_MEDIA_SONY_MOBILE_QUICKTIME_MQV_US_PAT_7_477_830 = 192,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) for SonyPSP */
	ISO_MEDIA_MPEG_4_MP4_FOR_SONYPSP = 193,

	/* category: animation */
	/* description: ISO Media, MP4 v2 [ISO 14496-14] Nero Digital AAC Audio */
	ISO_MEDIA_MP4_V2_ISO_14496_14_NERO_DIGITAL_AAC_AUDIO = 194,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) Nero Cinema Profile */
	ISO_MEDIA_MPEG_4_MP4_NERO_CINEMA_PROFILE = 195,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) Nero HDTV Profile */
	ISO_MEDIA_MPEG_4_MP4_NERO_HDTV_PROFILE = 196,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) Nero Mobile Profile */
	ISO_MEDIA_MPEG_4_MP4_NERO_MOBILE_PROFILE = 197,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) Nero Portable Profile */
	ISO_MEDIA_MPEG_4_MP4_NERO_PORTABLE_PROFILE = 198,

	/* category: animation */
	/* description: ISO Media, MPEG-4 (.MP4) Nero Standard Profile */
	ISO_MEDIA_MPEG_4_MP4_NERO_STANDARD_PROFILE = 199,

	/* category: animation */
	/* description: ISO Media, H.264/MPEG-4 AVC (.MP4) Nero Cinema Profile */
	ISO_MEDIA_H_264_MPEG_4_AVC_MP4_NERO_CINEMA_PROFILE = 200,

	/* category: animation */
	/* description: ISO Media, H.264/MPEG-4 AVC (.MP4) Nero HDTV Profile */
	ISO_MEDIA_H_264_MPEG_4_AVC_MP4_NERO_HDTV_PROFILE = 201,

	/* category: animation */
	/* description: ISO Media, H.264/MPEG-4 AVC (.MP4) Nero Mobile Profile */
	ISO_MEDIA_H_264_MPEG_4_AVC_MP4_NERO_MOBILE_PROFILE = 202,

	/* category: animation */
	/* description: ISO Media, H.264/MPEG-4 AVC (.MP4) Nero Portable Profile */
	ISO_MEDIA_H_264_MPEG_4_AVC_MP4_NERO_PORTABLE_PROFILE = 203,

	/* category: animation */
	/* description: ISO Media, H.264/MPEG-4 AVC (.MP4) Nero Standard Profile */
	ISO_MEDIA_H_264_MPEG_4_AVC_MP4_NERO_STANDARD_PROFILE = 204,

	/* category: animation */
	/* description: ISO Media, OMA DCF DRM Format 2.0 (OMA-TS-DRM-DCF-V2_0-20060303-A) */
	ISO_MEDIA_OMA_DCF_DRM_FORMAT_2_0_OMA_TS_DRM_DCF_V2_0_20060303_A = 205,

	/* category: animation */
	/* description: ISO Media, OMA PDCF DRM Format 2.1 (OMA-TS-DRM-DCF-V2_1-20070724-C) */
	ISO_MEDIA_OMA_PDCF_DRM_FORMAT_2_1_OMA_TS_DRM_DCF_V2_1_20070724_C = 206,

	/* category: animation */
	/* description: ISO Media, OMA PDCF DRM + XBS ext (OMA-TS-DRM_XBS-V1_0-20070529-C) */
	ISO_MEDIA_OMA_PDCF_DRM_P_XBS_EXT_OMA_TS_DRM_XBS_V1_0_20070529_C = 207,

	/* category: animation */
	/* description: ISO Media, Panasonic Digital Camera */
	ISO_MEDIA_PANASONIC_DIGITAL_CAMERA = 208,

	/* category: animation */
	/* description: ISO Media, Apple QuickTime (.MOV/QT) */
	ISO_MEDIA_APPLE_QUICKTIME_MOV_QT = 209,

	/* category: animation */
	/* description: ISO Media, HEIF Image */
	ISO_MEDIA_HEIF_IMAGE = 210,

	/* category: animation */
	/* description: ISO Media, HEIF Image Sequence */
	ISO_MEDIA_HEIF_IMAGE_SEQUENCE = 211,

	/* category: animation */
	/* description: ISO Media, HEIF Image HEVC Main or Main Still Picture Profile */
	ISO_MEDIA_HEIF_IMAGE_HEVC_MAIN_OR_MAIN_STILL_PICTURE_PROFILE = 212,

	/* category: animation */
	/* description: ISO Media, HEIF Image HEVC Main 10 Profile */
	ISO_MEDIA_HEIF_IMAGE_HEVC_MAIN_10_PROFILE = 213,

	/* category: animation */
	/* description: ISO Media, HEIF Image Sequenz HEVC Main or Main Still Picture Profile */
	ISO_MEDIA_HEIF_IMAGE_SEQUENZ_HEVC_MAIN_OR_MAIN_STILL_PICTURE_PROFILE = 214,

	/* category: animation */
	/* description: ISO Media, HEIF Image Sequence HEVC Main 10 Profile */
	ISO_MEDIA_HEIF_IMAGE_SEQUENCE_HEVC_MAIN_10_PROFILE = 215,

	/* category: animation */
	/* description: ISO Media, HEIF Image L-HEVC */
	ISO_MEDIA_HEIF_IMAGE_L_HEVC = 216,

	/* category: animation */
	/* description: ISO Media, HEIF Image AVC */
	ISO_MEDIA_HEIF_IMAGE_AVC = 217,

	/* category: animation */
	/* description: ISO Media, HEIF Image Sequence L-HEVC */
	ISO_MEDIA_HEIF_IMAGE_SEQUENCE_L_HEVC = 218,

	/* category: animation */
	/* description: ISO Media, HEIF Image Sequence AVC */
	ISO_MEDIA_HEIF_IMAGE_SEQUENCE_AVC = 219,

	/* category: animation */
	/* description: ISO Media, Ross Video */
	ISO_MEDIA_ROSS_VIDEO = 220,

	/* category: animation */
	/* description: ISO Media, SD Memory Card Video */
	ISO_MEDIA_SD_MEMORY_CARD_VIDEO = 221,

	/* category: animation */
	/* description: ISO Media, Samsung stereo, single stream (patent pending) */
	ISO_MEDIA_SAMSUNG_STEREO_SINGLE_STREAM_PATENT_PENDING = 222,

	/* category: animation */
	/* description: ISO Media, Samsung stereo, dual stream (patent pending) */
	ISO_MEDIA_SAMSUNG_STEREO_DUAL_STREAM_PATENT_PENDING = 223,

	/* category: animation */
	/* description: JVT NAL sequence, H.264 video */
	JVT_NAL_SEQUENCE_H_264_VIDEO = 224,

	/* category: animation */
	/* description: JVT NAL sequence, H.264 video, baseline */
	JVT_NAL_SEQUENCE_H_264_VIDEO_BASELINE = 225,

	/* category: animation */
	/* description: JVT NAL sequence, H.264 video, main */
	JVT_NAL_SEQUENCE_H_264_VIDEO_MAIN = 226,

	/* category: animation */
	/* description: JVT NAL sequence, H.264 video, extended */
	JVT_NAL_SEQUENCE_H_264_VIDEO_EXTENDED = 227,

	/* category: animation */
	/* description: MPEG sequence */
	MPEG_SEQUENCE = 228,

	/* category: animation */
	/* description: MPEG sequence, v2, program multiplex */
	MPEG_SEQUENCE_V2_PROGRAM_MULTIPLEX = 229,

	/* category: animation */
	/* description: MPEG sequence, v1, system multiplex */
	MPEG_SEQUENCE_V1_SYSTEM_MULTIPLEX = 230,

	/* category: animation */
	/* description: MPEG sequence, v1/2, multiplex (missing pack header) */
	MPEG_SEQUENCE_V1_2_MULTIPLEX_MISSING_PACK_HEADER = 231,

	/* category: animation */
	/* description: MPEG sequence, H.264 video */
	MPEG_SEQUENCE_H_264_VIDEO = 232,

	/* category: animation */
	/* description: MPEG sequence, H.264 video, baseline */
	MPEG_SEQUENCE_H_264_VIDEO_BASELINE = 233,

	/* category: animation */
	/* description: MPEG sequence, H.264 video, main */
	MPEG_SEQUENCE_H_264_VIDEO_MAIN = 234,

	/* category: animation */
	/* description: MPEG sequence, H.264 video, extended */
	MPEG_SEQUENCE_H_264_VIDEO_EXTENDED = 235,

	/* category: animation */
	/* description: MPEG sequence, v4 */
	MPEG_SEQUENCE_V4 = 236,

	/* category: animation */
	/* description: MPEG sequence, v4, video (missing profile header) */
	MPEG_SEQUENCE_V4_VIDEO_MISSING_PROFILE_HEADER = 237,

	/* category: animation */
	/* description: MPEG sequence, v4, still texture (missing profile header) */
	MPEG_SEQUENCE_V4_STILL_TEXTURE_MISSING_PROFILE_HEADER = 238,

	/* category: animation */
	/* description: MPEG sequence, v4, mesh (missing profile header) */
	MPEG_SEQUENCE_V4_MESH_MISSING_PROFILE_HEADER = 239,

	/* category: animation */
	/* description: MPEG sequence, v4, face (missing profile header) */
	MPEG_SEQUENCE_V4_FACE_MISSING_PROFILE_HEADER = 240,

	/* category: animation */
	/* description: MPEG sequence, v1, progressive Y'CbCr 4:2:0 video */
	MPEG_SEQUENCE_V1_PROGRESSIVE_Y_CBCR_4_2_0_VIDEO = 241,

	/* category: animation */
	/* description: MPEG sequence, v2, */
	MPEG_SEQUENCE_V2 = 242,

	/* category: animation */
	/* description: MPEG sequence, v2, HP */
	MPEG_SEQUENCE_V2_HP = 243,

	/* category: animation */
	/* description: MPEG sequence, v2, Spt */
	MPEG_SEQUENCE_V2_SPT = 244,

	/* category: animation */
	/* description: MPEG sequence, v2, SNR */
	MPEG_SEQUENCE_V2_SNR = 245,

	/* category: animation */
	/* description: MPEG sequence, v2, MP */
	MPEG_SEQUENCE_V2_MP = 246,

	/* category: animation */
	/* description: MPEG sequence, v2, SP */
	MPEG_SEQUENCE_V2_SP = 247,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  32 kbps */
	MPEG_ADTS_LAYER_III_V1_32_KBPS = 248,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  40 kbps */
	MPEG_ADTS_LAYER_III_V1_40_KBPS = 249,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  48 kbps */
	MPEG_ADTS_LAYER_III_V1_48_KBPS = 250,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  56 kbps */
	MPEG_ADTS_LAYER_III_V1_56_KBPS = 251,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  64 kbps */
	MPEG_ADTS_LAYER_III_V1_64_KBPS = 252,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  80 kbps */
	MPEG_ADTS_LAYER_III_V1_80_KBPS = 253,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1,  96 kbps */
	MPEG_ADTS_LAYER_III_V1_96_KBPS = 254,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 112 kbps */
	MPEG_ADTS_LAYER_III_V1_112_KBPS = 255,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 128 kbps */
	MPEG_ADTS_LAYER_III_V1_128_KBPS = 256,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 160 kbps */
	MPEG_ADTS_LAYER_III_V1_160_KBPS = 257,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 192 kbps */
	MPEG_ADTS_LAYER_III_V1_192_KBPS = 258,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 224 kbps */
	MPEG_ADTS_LAYER_III_V1_224_KBPS = 259,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 256 kbps */
	MPEG_ADTS_LAYER_III_V1_256_KBPS = 260,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v1, 320 kbps */
	MPEG_ADTS_LAYER_III_V1_320_KBPS = 261,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1 */
	MPEG_ADTS_LAYER_II_V1 = 262,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  32 kbps */
	MPEG_ADTS_LAYER_II_V1_32_KBPS = 263,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  48 kbps */
	MPEG_ADTS_LAYER_II_V1_48_KBPS = 264,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  56 kbps */
	MPEG_ADTS_LAYER_II_V1_56_KBPS = 265,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  64 kbps */
	MPEG_ADTS_LAYER_II_V1_64_KBPS = 266,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  80 kbps */
	MPEG_ADTS_LAYER_II_V1_80_KBPS = 267,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1,  96 kbps */
	MPEG_ADTS_LAYER_II_V1_96_KBPS = 268,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 112 kbps */
	MPEG_ADTS_LAYER_II_V1_112_KBPS = 269,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 128 kbps */
	MPEG_ADTS_LAYER_II_V1_128_KBPS = 270,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 160 kbps */
	MPEG_ADTS_LAYER_II_V1_160_KBPS = 271,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 192 kbps */
	MPEG_ADTS_LAYER_II_V1_192_KBPS = 272,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 224 kbps */
	MPEG_ADTS_LAYER_II_V1_224_KBPS = 273,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 256 kbps */
	MPEG_ADTS_LAYER_II_V1_256_KBPS = 274,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 320 kbps */
	MPEG_ADTS_LAYER_II_V1_320_KBPS = 275,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 384 kbps */
	MPEG_ADTS_LAYER_II_V1_384_KBPS = 276,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 44.1 kHz */
	MPEG_ADTS_LAYER_II_V1_44_1_KHZ = 277,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 48 kHz */
	MPEG_ADTS_LAYER_II_V1_48_KHZ = 278,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v1, 32 kHz */
	MPEG_ADTS_LAYER_II_V1_32_KHZ = 279,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2 */
	MPEG_ADTS_LAYER_III_V2 = 280,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,   8 kbps */
	MPEG_ADTS_LAYER_III_V2_8_KBPS = 281,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  16 kbps */
	MPEG_ADTS_LAYER_III_V2_16_KBPS = 282,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  24 kbps */
	MPEG_ADTS_LAYER_III_V2_24_KBPS = 283,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  32 kbps */
	MPEG_ADTS_LAYER_III_V2_32_KBPS = 284,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  40 kbps */
	MPEG_ADTS_LAYER_III_V2_40_KBPS = 285,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  48 kbps */
	MPEG_ADTS_LAYER_III_V2_48_KBPS = 286,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  56 kbps */
	MPEG_ADTS_LAYER_III_V2_56_KBPS = 287,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  64 kbps */
	MPEG_ADTS_LAYER_III_V2_64_KBPS = 288,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  80 kbps */
	MPEG_ADTS_LAYER_III_V2_80_KBPS = 289,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2,  96 kbps */
	MPEG_ADTS_LAYER_III_V2_96_KBPS = 290,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 112 kbps */
	MPEG_ADTS_LAYER_III_V2_112_KBPS = 291,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 128 kbps */
	MPEG_ADTS_LAYER_III_V2_128_KBPS = 292,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 144 kbps */
	MPEG_ADTS_LAYER_III_V2_144_KBPS = 293,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 160 kbps */
	MPEG_ADTS_LAYER_III_V2_160_KBPS = 294,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 22.05 kHz */
	MPEG_ADTS_LAYER_III_V2_22_05_KHZ = 295,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 24 kHz */
	MPEG_ADTS_LAYER_III_V2_24_KHZ = 296,

	/* category: animation */
	/* description: MPEG ADTS, layer III, v2, 16 kHz */
	MPEG_ADTS_LAYER_III_V2_16_KHZ = 297,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2 */
	MPEG_ADTS_LAYER_II_V2 = 298,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,   8 kbps */
	MPEG_ADTS_LAYER_II_V2_8_KBPS = 299,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  16 kbps */
	MPEG_ADTS_LAYER_II_V2_16_KBPS = 300,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  24 kbps */
	MPEG_ADTS_LAYER_II_V2_24_KBPS = 301,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  32 kbps */
	MPEG_ADTS_LAYER_II_V2_32_KBPS = 302,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  40 kbps */
	MPEG_ADTS_LAYER_II_V2_40_KBPS = 303,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  48 kbps */
	MPEG_ADTS_LAYER_II_V2_48_KBPS = 304,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  56 kbps */
	MPEG_ADTS_LAYER_II_V2_56_KBPS = 305,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  64 kbps */
	MPEG_ADTS_LAYER_II_V2_64_KBPS = 306,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  80 kbps */
	MPEG_ADTS_LAYER_II_V2_80_KBPS = 307,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2,  96 kbps */
	MPEG_ADTS_LAYER_II_V2_96_KBPS = 308,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 112 kbps */
	MPEG_ADTS_LAYER_II_V2_112_KBPS = 309,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 128 kbps */
	MPEG_ADTS_LAYER_II_V2_128_KBPS = 310,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 144 kbps */
	MPEG_ADTS_LAYER_II_V2_144_KBPS = 311,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 160 kbps */
	MPEG_ADTS_LAYER_II_V2_160_KBPS = 312,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 22.05 kHz */
	MPEG_ADTS_LAYER_II_V2_22_05_KHZ = 313,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 24 kHz */
	MPEG_ADTS_LAYER_II_V2_24_KHZ = 314,

	/* category: animation */
	/* description: MPEG ADTS, layer II, v2, 16 kHz */
	MPEG_ADTS_LAYER_II_V2_16_KHZ = 315,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2 */
	MPEG_ADTS_LAYER_I_V2 = 316,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  32 kbps */
	MPEG_ADTS_LAYER_I_V2_32_KBPS = 317,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  48 kbps */
	MPEG_ADTS_LAYER_I_V2_48_KBPS = 318,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  56 kbps */
	MPEG_ADTS_LAYER_I_V2_56_KBPS = 319,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  64 kbps */
	MPEG_ADTS_LAYER_I_V2_64_KBPS = 320,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  80 kbps */
	MPEG_ADTS_LAYER_I_V2_80_KBPS = 321,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2,  96 kbps */
	MPEG_ADTS_LAYER_I_V2_96_KBPS = 322,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 112 kbps */
	MPEG_ADTS_LAYER_I_V2_112_KBPS = 323,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 128 kbps */
	MPEG_ADTS_LAYER_I_V2_128_KBPS = 324,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 144 kbps */
	MPEG_ADTS_LAYER_I_V2_144_KBPS = 325,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 160 kbps */
	MPEG_ADTS_LAYER_I_V2_160_KBPS = 326,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 176 kbps */
	MPEG_ADTS_LAYER_I_V2_176_KBPS = 327,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 192 kbps */
	MPEG_ADTS_LAYER_I_V2_192_KBPS = 328,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 224 kbps */
	MPEG_ADTS_LAYER_I_V2_224_KBPS = 329,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 256 kbps */
	MPEG_ADTS_LAYER_I_V2_256_KBPS = 330,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 22.05 kHz */
	MPEG_ADTS_LAYER_I_V2_22_05_KHZ = 331,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 24 kHz */
	MPEG_ADTS_LAYER_I_V2_24_KHZ = 332,

	/* category: animation */
	/* description: MPEG ADTS, layer I, v2, 16 kHz */
	MPEG_ADTS_LAYER_I_V2_16_KHZ = 333,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5 */
	MPEG_ADTS_LAYER_III_V2_5 = 334,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,   8 kbps */
	MPEG_ADTS_LAYER_III_V2_5_8_KBPS = 335,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  16 kbps */
	MPEG_ADTS_LAYER_III_V2_5_16_KBPS = 336,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  24 kbps */
	MPEG_ADTS_LAYER_III_V2_5_24_KBPS = 337,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  32 kbps */
	MPEG_ADTS_LAYER_III_V2_5_32_KBPS = 338,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  40 kbps */
	MPEG_ADTS_LAYER_III_V2_5_40_KBPS = 339,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  48 kbps */
	MPEG_ADTS_LAYER_III_V2_5_48_KBPS = 340,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  56 kbps */
	MPEG_ADTS_LAYER_III_V2_5_56_KBPS = 341,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  64 kbps */
	MPEG_ADTS_LAYER_III_V2_5_64_KBPS = 342,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  80 kbps */
	MPEG_ADTS_LAYER_III_V2_5_80_KBPS = 343,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5,  96 kbps */
	MPEG_ADTS_LAYER_III_V2_5_96_KBPS = 344,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 112 kbps */
	MPEG_ADTS_LAYER_III_V2_5_112_KBPS = 345,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 128 kbps */
	MPEG_ADTS_LAYER_III_V2_5_128_KBPS = 346,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 144 kbps */
	MPEG_ADTS_LAYER_III_V2_5_144_KBPS = 347,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 160 kbps */
	MPEG_ADTS_LAYER_III_V2_5_160_KBPS = 348,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 11.025 kHz */
	MPEG_ADTS_LAYER_III_V2_5_11_025_KHZ = 349,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 12 kHz */
	MPEG_ADTS_LAYER_III_V2_5_12_KHZ = 350,

	/* category: animation */
	/* description: MPEG ADTS, layer III,  v2.5, 8 kHz */
	MPEG_ADTS_LAYER_III_V2_5_8_KHZ = 351,

	/* category: animation */
	/* description: MPEG ADIF, AAC */
	MPEG_ADIF_AAC = 352,

	/* category: animation */
	/* description: MPEG ADIF, AAC, VBR */
	MPEG_ADIF_AAC_VBR = 353,

	/* category: animation */
	/* description: MPEG ADIF, AAC, CBR */
	MPEG_ADIF_AAC_CBR = 354,

	/* category: animation */
	/* description: MPEG ADTS, AAC */
	MPEG_ADTS_AAC = 355,

	/* category: animation */
	/* description: MPEG ADTS, AAC, v2 */
	MPEG_ADTS_AAC_V2 = 356,

	/* category: animation */
	/* description: MPEG ADTS, AAC, v4 */
	MPEG_ADTS_AAC_V4 = 357,

	/* category: animation */
	/* description: MPEG ADTS, AAC, v4 LTP */
	MPEG_ADTS_AAC_V4_LTP = 358,

	/* category: animation */
	/* description: MPEG-4 LOAS */
	MPEG_4_LOAS = 359,

	/* category: animation */
	/* description: MPEG-4 LOAS, single stream */
	MPEG_4_LOAS_SINGLE_STREAM = 360,

	/* category: animation */
	/* description: MPEG-4 LOAS, 2 streams */
	MPEG_4_LOAS_2_STREAMS = 361,

	/* category: animation */
	/* description: MPEG-4 LOAS, 3 streams */
	MPEG_4_LOAS_3_STREAMS = 362,

	/* category: animation */
	/* description: MPEG-4 LOAS, 4 or more streams */
	MPEG_4_LOAS_4_OR_MORE_STREAMS = 363,

	/* category: animation */
	/* description: FLI animation, 320x200x8 */
	FLI_ANIMATION_320X200X8 = 364,

	/* category: animation */
	/* description: FLC animation */
	FLC_ANIMATION = 365,

	/* category: animation */
	/* description: MPEG transport stream data */
	MPEG_TRANSPORT_STREAM_DATA = 366,

	/* category: animation */
	/* description: DIF */
	DIF = 367,

	/* category: animation */
	/* description: DIF (DVCPRO) movie file */
	DIF_DVCPRO_MOVIE_FILE = 368,

	/* category: animation */
	/* description: DIF (DV) movie file */
	DIF_DV_MOVIE_FILE = 369,

	/* category: animation */
	/* description: Microsoft ASF */
	MICROSOFT_ASF = 370,

	/* category: animation */
	/* description: MNG video data, */
	MNG_VIDEO_DATA = 371,

	/* category: animation */
	/* description: MNG video data, CORRUPTED, */
	MNG_VIDEO_DATA_CORRUPTED = 372,

	/* category: animation */
	/* description: JNG video data, */
	JNG_VIDEO_DATA = 373,

	/* category: animation */
	/* description: JNG video data, CORRUPTED, */
	JNG_VIDEO_DATA_CORRUPTED = 374,

	/* category: animation */
	/* description: Vivo video data */
	VIVO_VIDEO_DATA = 375,

	/* category: animation */
	/* description: VRML 1 file */
	VRML_1_FILE = 376,

	/* category: animation */
	/* description: ISO/IEC 14772 VRML 97 file */
	ISO_IEC_14772_VRML_97_FILE = 377,

	/* category: animation */
	/* description: X3D (Extensible 3D) model xml text */
	X3D_EXTENSIBLE_3D_MODEL_XML_TEXT = 378,

	/* category: animation */
	/* description: HVQM4 */
	HVQM4 = 379,

	/* category: animation */
	/* description: Video title set, */
	VIDEO_TITLE_SET = 380,

	/* category: animation */
	/* description: Video manager, */
	VIDEO_MANAGER = 381,

	/* category: animation */
	/* description: MythTV NuppelVideo */
	MYTHTV_NUPPELVIDEO = 382,

	/* category: animation */
	/* description: MythTV NuppelVideoprogressive, */
	MYTHTV_NUPPELVIDEOPROGRESSIVE = 383,

	/* category: animation */
	/* description: MythTV NuppelVideointerlaced, */
	MYTHTV_NUPPELVIDEOINTERLACED = 384,

	/* category: animation */
	/* description: Bink Video */
	BINK_VIDEO = 385,

	/* category: animation */
	/* description: NUT multimedia container */
	NUT_MULTIMEDIA_CONTAINER = 386,

	/* category: animation */
	/* description: Nullsoft Video */
	NULLSOFT_VIDEO = 387,

	/* category: animation */
	/* description: REDCode Video */
	REDCODE_VIDEO = 388,

	/* category: animation */
	/* description: MTV Multimedia File */
	MTV_MULTIMEDIA_FILE = 389,

	/* category: animation */
	/* description: ARMovie */
	ARMOVIE = 390,

	/* category: animation */
	/* description: Interplay MVE Movie */
	INTERPLAY_MVE_MOVIE = 391,

	/* category: animation */
	/* description: Windows Television DVR Media */
	WINDOWS_TELEVISION_DVR_MEDIA = 392,

	/* category: animation */
	/* description: Sega FILM/CPK Multimedia, */
	SEGA_FILM_CPK_MULTIMEDIA = 393,

	/* category: animation */
	/* description: Nintendo THP Multimedia */
	NINTENDO_THP_MULTIMEDIA = 394,

	/* category: animation */
	/* description: BBC Dirac Video */
	BBC_DIRAC_VIDEO = 395,

	/* category: animation */
	/* description: RAD Game Tools Smacker Multimedia */
	RAD_GAME_TOOLS_SMACKER_MULTIMEDIA = 396,

	/* category: animation */
	/* description: Material exchange container format */
	MATERIAL_EXCHANGE_CONTAINER_FORMAT = 397,

	/* category: animation */
	/* description: LucasArts Smush Animation Format (SAN) video */
	LUCASARTS_SMUSH_ANIMATION_FORMAT_SAN_VIDEO = 398,

	/* category: animation */
	/* description: LucasArts Smush v2 (SANM) video */
	LUCASARTS_SMUSH_V2_SANM_VIDEO = 399,

	/* category: aout */
	/* description: a.out little-endian 32-bit executable */
	A_OUT_LITTLE_ENDIAN_32_BIT_EXECUTABLE = 400,

	/* category: aout */
	/* description: a.out little-endian 32-bit pure executable */
	A_OUT_LITTLE_ENDIAN_32_BIT_PURE_EXECUTABLE = 401,

	/* category: aout */
	/* description: a.out little-endian 32-bit demand paged pure executable */
	A_OUT_LITTLE_ENDIAN_32_BIT_DEMAND_PAGED_PURE_EXECUTABLE = 402,

	/* category: aout */
	/* description: a.out big-endian 32-bit executable */
	A_OUT_BIG_ENDIAN_32_BIT_EXECUTABLE = 403,

	/* category: aout */
	/* description: a.out big-endian 32-bit executable not stripped */
	A_OUT_BIG_ENDIAN_32_BIT_EXECUTABLE_NOT_STRIPPED = 404,

	/* category: aout */
	/* description: a.out big-endian 32-bit pure executable */
	A_OUT_BIG_ENDIAN_32_BIT_PURE_EXECUTABLE = 405,

	/* category: aout */
	/* description: a.out big-endian 32-bit pure executable not stripped */
	A_OUT_BIG_ENDIAN_32_BIT_PURE_EXECUTABLE_NOT_STRIPPED = 406,

	/* category: aout */
	/* description: a.out big-endian 32-bit demand paged executable */
	A_OUT_BIG_ENDIAN_32_BIT_DEMAND_PAGED_EXECUTABLE = 407,

	/* category: aout */
	/* description: a.out big-endian 32-bit demand paged executable not stripped */
	A_OUT_BIG_ENDIAN_32_BIT_DEMAND_PAGED_EXECUTABLE_NOT_STRIPPED = 408,

	/* category: apache */
	/* description: Apache Avro */
	APACHE_AVRO = 409,

	/* category: apache */
	/* description: Apache ORC */
	APACHE_ORC = 410,

	/* category: apache */
	/* description: Apache Parquet */
	APACHE_PARQUET = 411,

	/* category: apache */
	/* description: Apache Hive RC file */
	APACHE_HIVE_RC_FILE = 412,

	/* category: apache */
	/* description: Apache Hadoop Sequence file version %d */
	APACHE_HADOOP_SEQUENCE_FILE_VERSION_DD = 413,

	/* category: apache */
	/* description: Apache Hive RC file version 0 */
	APACHE_HIVE_RC_FILE_VERSION_0 = 414,

	/* category: apache */
	/* description: Apache Hadoop Sequence file version 6 */
	APACHE_HADOOP_SEQUENCE_FILE_VERSION_6 = 415,

	/* category: apl */
	/* description: APL workspace (Ken's original?) */
	APL_WORKSPACE_KEN_S_ORIGINAL = 416,

	/* category: apple */
	/* description: binscii (apple ][) text */
	BINSCII_APPLE_TEXT = 417,

	/* category: apple */
	/* description: Binary II (apple ][) data */
	BINARY_II_APPLE_DATA = 418,

	/* category: apple */
	/* description: Squeezed (apple ][) data */
	SQUEEZED_APPLE_DATA = 419,

	/* category: apple */
	/* description: NuFile archive (apple ][) data */
	NUFILE_ARCHIVE_APPLE_DATA = 420,

	/* category: apple */
	/* description: AppleSingle encoded Macintosh file */
	APPLESINGLE_ENCODED_MACINTOSH_FILE = 421,

	/* category: apple */
	/* description: AppleDouble encoded Macintosh file */
	APPLEDOUBLE_ENCODED_MACINTOSH_FILE = 422,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image */
	APPLE_2IMG_DISK_IMAGE = 423,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image, XGS */
	APPLE_2IMG_DISK_IMAGE_XGS = 424,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image, Catakig */
	APPLE_2IMG_DISK_IMAGE_CATAKIG = 425,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image, Sheppy's ImageMaker */
	APPLE_2IMG_DISK_IMAGE_SHEPPY_S_IMAGEMAKER = 426,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image, Sweet 16 */
	APPLE_2IMG_DISK_IMAGE_SWEET_16 = 427,

	/* category: apple */
	/* description: Apple ][ 2IMG Disk Image, Bernie ][ the Rescue */
	APPLE_2IMG_DISK_IMAGE_BERNIE_THE_RESCUE = 428,

	/* category: apple */
	/* description: Newton package, NOS 1.x, */
	NEWTON_PACKAGE_NOS_1_X = 429,

	/* category: apple */
	/* description: Newton package, NOS 2.x, */
	NEWTON_PACKAGE_NOS_2_X = 430,

	/* category: apple */
	/* description: Newton package, */
	NEWTON_PACKAGE = 431,

	/* category: apple */
	/* description: AppleWorks Word Processor */
	APPLEWORKS_WORD_PROCESSOR = 432,

	/* category: apple */
	/* description: AppleWorks Word Processor 3.0 */
	APPLEWORKS_WORD_PROCESSOR_3_0 = 433,

	/* category: apple */
	/* description: Applesoft BASIC program data, first line number %d */
	APPLESOFT_BASIC_PROGRAM_DATA_FIRST_LINE_NUMBER_DD = 434,

	/* category: apple */
	/* description: Apple Mechanic font */
	APPLE_MECHANIC_FONT = 435,

	/* category: apple */
	/* description: Apple binary property list */
	APPLE_BINARY_PROPERTY_LIST = 436,

	/* category: apple */
	/* description: CoreFoundation binary property list data, version 0x%c */
	COREFOUNDATION_BINARY_PROPERTY_LIST_DATA_VERSION_0XCC = 437,

	/* category: apple */
	/* description: NeXT/Apple typedstream data, big endian */
	NEXT_APPLE_TYPEDSTREAM_DATA_BIG_ENDIAN = 438,

	/* category: apple */
	/* description: NeXT/Apple typedstream data, little endian */
	NEXT_APPLE_TYPEDSTREAM_DATA_LITTLE_ENDIAN = 439,

	/* category: apple */
	/* description: CoreAudio Format audio file */
	COREAUDIO_FORMAT_AUDIO_FILE = 440,

	/* category: apple */
	/* description: Mac OS X Keychain File */
	MAC_OS_X_KEYCHAIN_FILE = 441,

	/* category: apple */
	/* description: Mac OS X Code Requirement */
	MAC_OS_X_CODE_REQUIREMENT = 442,

	/* category: apple */
	/* description: Mac OS X Code Requirement Set */
	MAC_OS_X_CODE_REQUIREMENT_SET = 443,

	/* category: apple */
	/* description: Mac OS X Code Directory */
	MAC_OS_X_CODE_DIRECTORY = 444,

	/* category: apple */
	/* description: Mac OS X Detached Code Signature (non-executable) */
	MAC_OS_X_DETACHED_CODE_SIGNATURE_NON_EXECUTABLE = 445,

	/* category: apple */
	/* description: Mac OS X Detached Code Signature */
	MAC_OS_X_DETACHED_CODE_SIGNATURE = 446,

	/* category: apple */
	/* description: innotek VirtualBox Disk Image */
	INNOTEK_VIRTUALBOX_DISK_IMAGE = 447,

	/* category: apple */
	/* description: Apple Driver Map */
	APPLE_DRIVER_MAP = 448,

	/* category: apple */
	/* description: Apple Partition Map */
	APPLE_PARTITION_MAP = 449,

	/* category: apple */
	/* description: Apple Desktop Services Store */
	APPLE_DESKTOP_SERVICES_STORE = 450,

	/* category: apple */
	/* description: Apple HFS/HFS+ resource fork */
	APPLE_HFS_HFSP_RESOURCE_FORK = 451,

	/* category: apple */
	/* description: AppleScript compiled */
	APPLESCRIPT_COMPILED = 452,

	/* category: apple */
	/* description: AppleWorks CWK Document */
	APPLEWORKS_CWK_DOCUMENT = 453,

	/* category: apple */
	/* description: ClarisWorks CWK Document */
	CLARISWORKS_CWK_DOCUMENT = 454,

	/* category: apple */
	/* description: AppleWorks/ClarisWorks CWK Document */
	APPLEWORKS_CLARISWORKS_CWK_DOCUMENT = 455,

	/* category: apple */
	/* description: Apple File System (APFS) */
	APPLE_FILE_SYSTEM_APFS = 456,

	/* category: apple */
	/* description: iTunes cover art */
	ITUNES_COVER_ART = 457,

	/* category: apple */
	/* description: MacPaint image data */
	MACPAINT_IMAGE_DATA = 458,

	/* category: application */
	/* description: Pebble application */
	PEBBLE_APPLICATION = 459,

	/* category: applix */
	/* description: Applixware */
	APPLIXWARE = 460,

	/* category: applix */
	/* description: Applixware Words Document */
	APPLIXWARE_WORDS_DOCUMENT = 461,

	/* category: applix */
	/* description: Applixware Graphic */
	APPLIXWARE_GRAPHIC = 462,

	/* category: applix */
	/* description: Applixware Bitmap */
	APPLIXWARE_BITMAP = 463,

	/* category: applix */
	/* description: Applixware Spreadsheet */
	APPLIXWARE_SPREADSHEET = 464,

	/* category: applix */
	/* description: Applixware Macro */
	APPLIXWARE_MACRO = 465,

	/* category: applix */
	/* description: Applixware Builder Object */
	APPLIXWARE_BUILDER_OBJECT = 466,

	/* category: apt */
	/* description: APT cache data, version %u */
	APT_CACHE_DATA_VERSION_UU = 467,

	/* category: archive */
	/* description: GNU tar archive */
	GNU_TAR_ARCHIVE = 468,

	/* category: archive */
	/* description: tar archive (V7) */
	TAR_ARCHIVE_V7 = 469,

	/* category: archive */
	/* description: tar archive (old) */
	TAR_ARCHIVE_OLD = 470,

	/* category: archive */
	/* description: POSIX tar archive (GNU) */
	POSIX_TAR_ARCHIVE_GNU = 471,

	/* category: archive */
	/* description: POSIX */
	POSIX = 472,

	/* category: archive */
	/* description: POSIX.1-2001 */
	POSIX_1_2001 = 473,

	/* category: archive */
	/* description: tar archive (ustar) */
	TAR_ARCHIVE_USTAR = 474,

	/* category: archive */
	/* description: tar archive (unknown ustar) */
	TAR_ARCHIVE_UNKNOWN_USTAR = 475,

	/* category: archive */
	/* description: GNU tar incremental snapshot data */
	GNU_TAR_INCREMENTAL_SNAPSHOT_DATA = 476,

	/* category: archive */
	/* description: cpio archive */
	CPIO_ARCHIVE = 477,

	/* category: archive */
	/* description: byte-swapped cpio archive */
	BYTE_SWAPPED_CPIO_ARCHIVE = 478,

	/* category: archive */
	/* description: ASCII cpio archive (pre-SVR4 or odc) */
	ASCII_CPIO_ARCHIVE_PRE_SVR4_OR_ODC = 479,

	/* category: archive */
	/* description: ASCII cpio archive (SVR4 with no CRC) */
	ASCII_CPIO_ARCHIVE_SVR4_WITH_NO_CRC = 480,

	/* category: archive */
	/* description: ASCII cpio archive (SVR4 with CRC) */
	ASCII_CPIO_ARCHIVE_SVR4_WITH_CRC = 481,

	/* category: archive */
	/* description: very old 16-bit-int little-endian archive */
	VERY_OLD_16_BIT_INT_LITTLE_ENDIAN_ARCHIVE = 482,

	/* category: archive */
	/* description: very old 16-bit-int big-endian archive */
	VERY_OLD_16_BIT_INT_BIG_ENDIAN_ARCHIVE = 483,

	/* category: archive */
	/* description: very old 32-bit-int little-endian archive */
	VERY_OLD_32_BIT_INT_LITTLE_ENDIAN_ARCHIVE = 484,

	/* category: archive */
	/* description: very old 32-bit-int big-endian archive */
	VERY_OLD_32_BIT_INT_BIG_ENDIAN_ARCHIVE = 485,

	/* category: archive */
	/* description: old 16-bit-int little-endian archive */
	OLD_16_BIT_INT_LITTLE_ENDIAN_ARCHIVE = 486,

	/* category: archive */
	/* description: old 16-bit-int little-endian archive random library */
	OLD_16_BIT_INT_LITTLE_ENDIAN_ARCHIVE_RANDOM_LIBRARY = 487,

	/* category: archive */
	/* description: old 16-bit-int big-endian archive */
	OLD_16_BIT_INT_BIG_ENDIAN_ARCHIVE = 488,

	/* category: archive */
	/* description: old 16-bit-int big-endian archive random library */
	OLD_16_BIT_INT_BIG_ENDIAN_ARCHIVE_RANDOM_LIBRARY = 489,

	/* category: archive */
	/* description: old 32-bit-int little-endian archive */
	OLD_32_BIT_INT_LITTLE_ENDIAN_ARCHIVE = 490,

	/* category: archive */
	/* description: old 32-bit-int little-endian archive random library */
	OLD_32_BIT_INT_LITTLE_ENDIAN_ARCHIVE_RANDOM_LIBRARY = 491,

	/* category: archive */
	/* description: old 32-bit-int big-endian archive */
	OLD_32_BIT_INT_BIG_ENDIAN_ARCHIVE = 492,

	/* category: archive */
	/* description: old 32-bit-int big-endian archive random library */
	OLD_32_BIT_INT_BIG_ENDIAN_ARCHIVE_RANDOM_LIBRARY = 493,

	/* category: archive */
	/* description: PDP-11 old archive */
	PDP_11_OLD_ARCHIVE = 494,

	/* category: archive */
	/* description: PDP-11 4.0 archive */
	PDP_11_4_0_ARCHIVE = 495,

	/* category: archive */
	/* description: apl workspace */
	APL_WORKSPACE = 496,

	/* category: archive */
	/* description: System V Release 1 ar archive */
	SYSTEM_V_RELEASE_1_AR_ARCHIVE = 497,

	/* category: archive */
	/* description: part of multipart Debian package */
	PART_OF_MULTIPART_DEBIAN_PACKAGE = 498,

	/* category: archive */
	/* description: Debian binary package */
	DEBIAN_BINARY_PACKAGE = 499,

	/* category: archive */
	/* description: MIPS archive */
	MIPS_ARCHIVE = 500,

	/* category: archive */
	/* description: current ar archive */
	CURRENT_AR_ARCHIVE = 501,

	/* category: archive */
	/* description: thin archive with */
	THIN_ARCHIVE_WITH = 502,

	/* category: archive */
	/* description: thin archive with no symbol entries */
	THIN_ARCHIVE_WITH_NO_SYMBOL_ENTRIES = 503,

	/* category: archive */
	/* description: thin archive with %d symbol entry */
	THIN_ARCHIVE_WITH_DD_SYMBOL_ENTRY = 504,

	/* category: archive */
	/* description: thin archive with %d symbol entries */
	THIN_ARCHIVE_WITH_DD_SYMBOL_ENTRIES = 505,

	/* category: archive */
	/* description: Software Tools format archive text */
	SOFTWARE_TOOLS_FORMAT_ARCHIVE_TEXT = 506,

	/* category: archive */
	/* description: ARC archive data, dynamic LZW */
	ARC_ARCHIVE_DATA_DYNAMIC_LZW = 507,

	/* category: archive */
	/* description: ARC archive data, squashed */
	ARC_ARCHIVE_DATA_SQUASHED = 508,

	/* category: archive */
	/* description: ARC archive data, uncompressed */
	ARC_ARCHIVE_DATA_UNCOMPRESSED = 509,

	/* category: archive */
	/* description: ARC archive data, packed */
	ARC_ARCHIVE_DATA_PACKED = 510,

	/* category: archive */
	/* description: ARC archive data, squeezed */
	ARC_ARCHIVE_DATA_SQUEEZED = 511,

	/* category: archive */
	/* description: ARC archive data, crunched */
	ARC_ARCHIVE_DATA_CRUNCHED = 512,

	/* category: archive */
	/* description: PAK archive data */
	PAK_ARCHIVE_DATA = 513,

	/* category: archive */
	/* description: ARC+ archive data */
	ARCP_ARCHIVE_DATA = 514,

	/* category: archive */
	/* description: HYP archive data */
	HYP_ARCHIVE_DATA = 515,

	/* category: archive */
	/* description: RISC OS archive (ArcFS format) */
	RISC_OS_ARCHIVE_ARCFS_FORMAT = 516,

	/* category: archive */
	/* description: Crush archive data */
	CRUSH_ARCHIVE_DATA = 517,

	/* category: archive */
	/* description: Squeeze It archive data */
	SQUEEZE_IT_ARCHIVE_DATA = 518,

	/* category: archive */
	/* description: SQWEZ archive data */
	SQWEZ_ARCHIVE_DATA = 519,

	/* category: archive */
	/* description: HPACK archive data */
	HPACK_ARCHIVE_DATA = 520,

	/* category: archive */
	/* description: HAP archive data */
	HAP_ARCHIVE_DATA = 521,

	/* category: archive */
	/* description: MDCD archive data */
	MDCD_ARCHIVE_DATA = 522,

	/* category: archive */
	/* description: LIM archive data */
	LIM_ARCHIVE_DATA = 523,

	/* category: archive */
	/* description: SAR archive data */
	SAR_ARCHIVE_DATA = 524,

	/* category: archive */
	/* description: BSArc/BS2 archive data */
	BSARC_BS2_ARCHIVE_DATA = 525,

	/* category: archive */
	/* description: BSArc archive data */
	BSARC_ARCHIVE_DATA = 526,

	/* category: archive */
	/* description: MAR archive data */
	MAR_ARCHIVE_DATA = 527,

	/* category: archive */
	/* description: JRC archive data */
	JRC_ARCHIVE_DATA = 528,

	/* category: archive */
	/* description: Quantum archive data */
	QUANTUM_ARCHIVE_DATA = 529,

	/* category: archive */
	/* description: ReSOF archive data */
	RESOF_ARCHIVE_DATA = 530,

	/* category: archive */
	/* description: QuArk archive data */
	QUARK_ARCHIVE_DATA = 531,

	/* category: archive */
	/* description: YAC archive data */
	YAC_ARCHIVE_DATA = 532,

	/* category: archive */
	/* description: X1 archive data */
	X1_ARCHIVE_DATA = 533,

	/* category: archive */
	/* description: CDC Codec archive data */
	CDC_CODEC_ARCHIVE_DATA = 534,

	/* category: archive */
	/* description: AMGC archive data */
	AMGC_ARCHIVE_DATA = 535,

	/* category: archive */
	/* description: NuLIB archive data */
	NULIB_ARCHIVE_DATA = 536,

	/* category: archive */
	/* description: PAKLeo archive data */
	PAKLEO_ARCHIVE_DATA = 537,

	/* category: archive */
	/* description: ChArc archive data */
	CHARC_ARCHIVE_DATA = 538,

	/* category: archive */
	/* description: PSA archive data */
	PSA_ARCHIVE_DATA = 539,

	/* category: archive */
	/* description: CrossePAC archive data */
	CROSSEPAC_ARCHIVE_DATA = 540,

	/* category: archive */
	/* description: Freeze archive data */
	FREEZE_ARCHIVE_DATA = 541,

	/* category: archive */
	/* description: KBoom archive data */
	KBOOM_ARCHIVE_DATA = 542,

	/* category: archive */
	/* description: NSQ archive data */
	NSQ_ARCHIVE_DATA = 543,

	/* category: archive */
	/* description: DPA archive data */
	DPA_ARCHIVE_DATA = 544,

	/* category: archive */
	/* description: TTComp archive, binary, 4K dictionary */
	TTCOMP_ARCHIVE_BINARY_4K_DICTIONARY = 545,

	/* category: archive */
	/* description: ESP archive data */
	ESP_ARCHIVE_DATA = 546,

	/* category: archive */
	/* description: ZPack archive data */
	ZPACK_ARCHIVE_DATA = 547,

	/* category: archive */
	/* description: Sky archive data */
	SKY_ARCHIVE_DATA = 548,

	/* category: archive */
	/* description: UFA archive data */
	UFA_ARCHIVE_DATA = 549,

	/* category: archive */
	/* description: DRY archive data */
	DRY_ARCHIVE_DATA = 550,

	/* category: archive */
	/* description: FoxSQZ archive data */
	FOXSQZ_ARCHIVE_DATA = 551,

	/* category: archive */
	/* description: AR7 archive data */
	AR7_ARCHIVE_DATA = 552,

	/* category: archive */
	/* description: PPMZ archive data */
	PPMZ_ARCHIVE_DATA = 553,

	/* category: archive */
	/* description: MS Compress archive data, KWAJ variant */
	MS_COMPRESS_ARCHIVE_DATA_KWAJ_VARIANT = 554,

	/* category: archive */
	/* description: MS Compress archive data, SZDD variant */
	MS_COMPRESS_ARCHIVE_DATA_SZDD_VARIANT = 555,

	/* category: archive */
	/* description: MS Compress archive data, QBasic variant */
	MS_COMPRESS_ARCHIVE_DATA_QBASIC_VARIANT = 556,

	/* category: archive */
	/* description: MP3-Archiver archive data */
	MP3_ARCHIVER_ARCHIVE_DATA = 557,

	/* category: archive */
	/* description: ZET archive data */
	ZET_ARCHIVE_DATA = 558,

	/* category: archive */
	/* description: TSComp archive data */
	TSCOMP_ARCHIVE_DATA = 559,

	/* category: archive */
	/* description: ARQ archive data */
	ARQ_ARCHIVE_DATA = 560,

	/* category: archive */
	/* description: Squash archive data */
	SQUASH_ARCHIVE_DATA = 561,

	/* category: archive */
	/* description: Terse archive data */
	TERSE_ARCHIVE_DATA = 562,

	/* category: archive */
	/* description: PUCrunch archive data */
	PUCRUNCH_ARCHIVE_DATA = 563,

	/* category: archive */
	/* description: UHarc archive data */
	UHARC_ARCHIVE_DATA = 564,

	/* category: archive */
	/* description: ABComp archive data */
	ABCOMP_ARCHIVE_DATA = 565,

	/* category: archive */
	/* description: CMP archive data */
	CMP_ARCHIVE_DATA = 566,

	/* category: archive */
	/* description: Splint archive data */
	SPLINT_ARCHIVE_DATA = 567,

	/* category: archive */
	/* description: InstallShield Z archive Data */
	INSTALLSHIELD_Z_ARCHIVE_DATA = 568,

	/* category: archive */
	/* description: Gather archive data */
	GATHER_ARCHIVE_DATA = 569,

	/* category: archive */
	/* description: BOA archive data */
	BOA_ARCHIVE_DATA = 570,

	/* category: archive */
	/* description: RAX archive data */
	RAX_ARCHIVE_DATA = 571,

	/* category: archive */
	/* description: Xtreme archive data */
	XTREME_ARCHIVE_DATA = 572,

	/* category: archive */
	/* description: Pack Magic archive data */
	PACK_MAGIC_ARCHIVE_DATA = 573,

	/* category: archive */
	/* description: BTS archive data */
	BTS_ARCHIVE_DATA = 574,

	/* category: archive */
	/* description: ELI 5750 archive data */
	ELI_5750_ARCHIVE_DATA = 575,

	/* category: archive */
	/* description: QFC archive data */
	QFC_ARCHIVE_DATA = 576,

	/* category: archive */
	/* description: PRO-PACK archive data */
	PRO_PACK_ARCHIVE_DATA = 577,

	/* category: archive */
	/* description: 777 archive data */
	A_777_ARCHIVE_DATA = 578,

	/* category: archive */
	/* description: LZS221 archive data */
	LZS221_ARCHIVE_DATA = 579,

	/* category: archive */
	/* description: HPA archive data */
	HPA_ARCHIVE_DATA = 580,

	/* category: archive */
	/* description: Arhangel archive data */
	ARHANGEL_ARCHIVE_DATA = 581,

	/* category: archive */
	/* description: EXP1 archive data */
	EXP1_ARCHIVE_DATA = 582,

	/* category: archive */
	/* description: IMP archive data */
	IMP_ARCHIVE_DATA = 583,

	/* category: archive */
	/* description: NRV archive data */
	NRV_ARCHIVE_DATA = 584,

	/* category: archive */
	/* description: Squish archive data */
	SQUISH_ARCHIVE_DATA = 585,

	/* category: archive */
	/* description: Par archive data */
	PAR_ARCHIVE_DATA = 586,

	/* category: archive */
	/* description: HIT archive data */
	HIT_ARCHIVE_DATA = 587,

	/* category: archive */
	/* description: SBX archive data */
	SBX_ARCHIVE_DATA = 588,

	/* category: archive */
	/* description: NaShrink archive data */
	NASHRINK_ARCHIVE_DATA = 589,

	/* category: archive */
	/* description: SAPCAR archive data */
	SAPCAR_ARCHIVE_DATA = 590,

	/* category: archive */
	/* description: Disintegrator archive data */
	DISINTEGRATOR_ARCHIVE_DATA = 591,

	/* category: archive */
	/* description: ASD archive data */
	ASD_ARCHIVE_DATA = 592,

	/* category: archive */
	/* description: InstallShield CAB */
	INSTALLSHIELD_CAB = 593,

	/* category: archive */
	/* description: TOP4 archive data */
	TOP4_ARCHIVE_DATA = 594,

	/* category: archive */
	/* description: BlakHole archive data */
	BLAKHOLE_ARCHIVE_DATA = 595,

	/* category: archive */
	/* description: BIX archive data */
	BIX_ARCHIVE_DATA = 596,

	/* category: archive */
	/* description: ChiefLZA archive data */
	CHIEFLZA_ARCHIVE_DATA = 597,

	/* category: archive */
	/* description: Blink archive data */
	BLINK_ARCHIVE_DATA = 598,

	/* category: archive */
	/* description: Logitech Compress archive data */
	LOGITECH_COMPRESS_ARCHIVE_DATA = 599,

	/* category: archive */
	/* description: ARS-Sfx archive data */
	ARS_SFX_ARCHIVE_DATA = 600,

	/* category: archive */
	/* description: AKT32 archive data */
	AKT32_ARCHIVE_DATA = 601,

	/* category: archive */
	/* description: AKT archive data */
	AKT_ARCHIVE_DATA = 602,

	/* category: archive */
	/* description: NPack archive data */
	NPACK_ARCHIVE_DATA = 603,

	/* category: archive */
	/* description: PFT archive data */
	PFT_ARCHIVE_DATA = 604,

	/* category: archive */
	/* description: SemOne archive data */
	SEMONE_ARCHIVE_DATA = 605,

	/* category: archive */
	/* description: PPMD archive data */
	PPMD_ARCHIVE_DATA = 606,

	/* category: archive */
	/* description: FIZ archive data */
	FIZ_ARCHIVE_DATA = 607,

	/* category: archive */
	/* description: MSXiE archive data */
	MSXIE_ARCHIVE_DATA = 608,

	/* category: archive */
	/* description: DeepFreezer archive data */
	DEEPFREEZER_ARCHIVE_DATA = 609,

	/* category: archive */
	/* description: DC archive data */
	DC_ARCHIVE_DATA = 610,

	/* category: archive */
	/* description: TPac archive data */
	TPAC_ARCHIVE_DATA = 611,

	/* category: archive */
	/* description: Ai archive data */
	AI_ARCHIVE_DATA = 612,

	/* category: archive */
	/* description: Ai32 archive data */
	AI32_ARCHIVE_DATA = 613,

	/* category: archive */
	/* description: SBC archive data */
	SBC_ARCHIVE_DATA = 614,

	/* category: archive */
	/* description: Ybs archive data */
	YBS_ARCHIVE_DATA = 615,

	/* category: archive */
	/* description: DitPack archive data */
	DITPACK_ARCHIVE_DATA = 616,

	/* category: archive */
	/* description: DMS archive data */
	DMS_ARCHIVE_DATA = 617,

	/* category: archive */
	/* description: EPC archive data */
	EPC_ARCHIVE_DATA = 618,

	/* category: archive */
	/* description: VSARC archive data */
	VSARC_ARCHIVE_DATA = 619,

	/* category: archive */
	/* description: PDZ archive data */
	PDZ_ARCHIVE_DATA = 620,

	/* category: archive */
	/* description: ReDuq archive data */
	REDUQ_ARCHIVE_DATA = 621,

	/* category: archive */
	/* description: GCA archive data */
	GCA_ARCHIVE_DATA = 622,

	/* category: archive */
	/* description: PPMN archive data */
	PPMN_ARCHIVE_DATA = 623,

	/* category: archive */
	/* description: WinImage archive data */
	WINIMAGE_ARCHIVE_DATA = 624,

	/* category: archive */
	/* description: Compressia archive data */
	COMPRESSIA_ARCHIVE_DATA = 625,

	/* category: archive */
	/* description: UHBC archive data */
	UHBC_ARCHIVE_DATA = 626,

	/* category: archive */
	/* description: WinHKI archive data */
	WINHKI_ARCHIVE_DATA = 627,

	/* category: archive */
	/* description: WWPack archive data */
	WWPACK_ARCHIVE_DATA = 628,

	/* category: archive */
	/* description: BSN archive data */
	BSN_ARCHIVE_DATA = 629,

	/* category: archive */
	/* description: AIN archive data */
	AIN_ARCHIVE_DATA = 630,

	/* category: archive */
	/* description: SZip archive data */
	SZIP_ARCHIVE_DATA = 631,

	/* category: archive */
	/* description: Xpack DiskImage archive data */
	XPACK_DISKIMAGE_ARCHIVE_DATA = 632,

	/* category: archive */
	/* description: XPA */
	XPA = 633,

	/* category: archive */
	/* description: Xpack single archive data */
	XPACK_SINGLE_ARCHIVE_DATA = 634,

	/* category: archive */
	/* description: Dzip archive data */
	DZIP_ARCHIVE_DATA = 635,

	/* category: archive */
	/* description: ZZip archive data */
	ZZIP_ARCHIVE_DATA = 636,

	/* category: archive */
	/* description: PAQ archive data */
	PAQ_ARCHIVE_DATA = 637,

	/* category: archive */
	/* description: JAR (ARJ Software, Inc.) archive data */
	JAR_ARJ_SOFTWARE_INC_ARCHIVE_DATA = 638,

	/* category: archive */
	/* description: ARJ archive data */
	ARJ_ARCHIVE_DATA = 639,

	/* category: archive */
	/* description: HA archive data */
	HA_ARCHIVE_DATA = 640,

	/* category: archive */
	/* description: HA archive data 1 file, */
	HA_ARCHIVE_DATA_1_FILE = 641,

	/* category: archive */
	/* description: HA archive data %u files, */
	HA_ARCHIVE_DATA_UU_FILES = 642,

	/* category: archive */
	/* description: JAM archive, */
	JAM_ARCHIVE = 643,

	/* category: archive */
	/* description: LHarc 1.x archive data */
	LHARC_1_X_ARCHIVE_DATA = 644,

	/* category: archive */
	/* description: LArc archive */
	LARC_ARCHIVE = 645,

	/* category: archive */
	/* description: LHa/LZS archive data */
	LHA_LZS_ARCHIVE_DATA = 646,

	/* category: archive */
	/* description: LHarc 1.x/ARX archive data */
	LHARC_1_X_ARX_ARCHIVE_DATA = 647,

	/* category: archive */
	/* description: LHa (2.x) archive data */
	LHA_2_X_ARCHIVE_DATA = 648,

	/* category: archive */
	/* description: LHa (2.x)/LHark archive data */
	LHA_2_X_LHARK_ARCHIVE_DATA = 649,

	/* category: archive */
	/* description: LHa (Joe Jared) archive */
	LHA_JOE_JARED_ARCHIVE = 650,

	/* category: archive */
	/* description: LHa (UNLHA32) archive */
	LHA_UNLHA32_ARCHIVE = 651,

	/* category: archive */
	/* description: LHa (unknown) archive */
	LHA_UNKNOWN_ARCHIVE = 652,

	/* category: archive */
	/* description: PMarc archive data */
	PMARC_ARCHIVE_DATA = 653,

	/* category: archive */
	/* description: PUT archive data */
	PUT_ARCHIVE_DATA = 654,

	/* category: archive */
	/* description: Swag archive data */
	SWAG_ARCHIVE_DATA = 655,

	/* category: archive */
	/* description: RAR archive data */
	RAR_ARCHIVE_DATA = 656,

	/* category: archive */
	/* description: RAR archive data, v5 */
	RAR_ARCHIVE_DATA_V5 = 657,

	/* category: archive */
	/* description: RAR archive data (<v1.5) */
	RAR_ARCHIVE_DATA_V1_5 = 658,

	/* category: archive */
	/* description: squished archive data (Acorn RISCOS) */
	SQUISHED_ARCHIVE_DATA_ACORN_RISCOS = 659,

	/* category: archive */
	/* description: UC2 archive data */
	UC2_ARCHIVE_DATA = 660,

	/* category: archive */
	/* description: Zip multi-volume archive data, at least PKZIP v2.50 to extract */
	ZIP_MULTI_VOLUME_ARCHIVE_DATA_AT_LEAST_PKZIP_V2_50_TO_EXTRACT = 661,

	/* category: archive */
	/* description: Zip archive data (empty) */
	ZIP_ARCHIVE_DATA_EMPTY = 662,

	/* category: archive */
	/* description: KOffice (>=1.2) */
	KOFFICE_1_2 = 663,

	/* category: archive */
	/* description: KOffice (>=1.2) Karbon document */
	KOFFICE_1_2_KARBON_DOCUMENT = 664,

	/* category: archive */
	/* description: KOffice (>=1.2) KChart document */
	KOFFICE_1_2_KCHART_DOCUMENT = 665,

	/* category: archive */
	/* description: KOffice (>=1.2) KFormula document */
	KOFFICE_1_2_KFORMULA_DOCUMENT = 666,

	/* category: archive */
	/* description: KOffice (>=1.2) Kivio document */
	KOFFICE_1_2_KIVIO_DOCUMENT = 667,

	/* category: archive */
	/* description: KOffice (>=1.2) Kontour document */
	KOFFICE_1_2_KONTOUR_DOCUMENT = 668,

	/* category: archive */
	/* description: KOffice (>=1.2) KPresenter document */
	KOFFICE_1_2_KPRESENTER_DOCUMENT = 669,

	/* category: archive */
	/* description: KOffice (>=1.2) KSpread document */
	KOFFICE_1_2_KSPREAD_DOCUMENT = 670,

	/* category: archive */
	/* description: KOffice (>=1.2) KWord document */
	KOFFICE_1_2_KWORD_DOCUMENT = 671,

	/* category: archive */
	/* description: OpenOffice.org 1.x */
	OPENOFFICE_ORG_1_X = 672,

	/* category: archive */
	/* description: OpenOffice.org 1.x Writer */
	OPENOFFICE_ORG_1_X_WRITER = 673,

	/* category: archive */
	/* description: OpenOffice.org 1.x Writer document */
	OPENOFFICE_ORG_1_X_WRITER_DOCUMENT = 674,

	/* category: archive */
	/* description: OpenOffice.org 1.x Writer template */
	OPENOFFICE_ORG_1_X_WRITER_TEMPLATE = 675,

	/* category: archive */
	/* description: OpenOffice.org 1.x Writer global document */
	OPENOFFICE_ORG_1_X_WRITER_GLOBAL_DOCUMENT = 676,

	/* category: archive */
	/* description: OpenOffice.org 1.x Calc */
	OPENOFFICE_ORG_1_X_CALC = 677,

	/* category: archive */
	/* description: OpenOffice.org 1.x Calc spreadsheet */
	OPENOFFICE_ORG_1_X_CALC_SPREADSHEET = 678,

	/* category: archive */
	/* description: OpenOffice.org 1.x Calc template */
	OPENOFFICE_ORG_1_X_CALC_TEMPLATE = 679,

	/* category: archive */
	/* description: OpenOffice.org 1.x Draw */
	OPENOFFICE_ORG_1_X_DRAW = 680,

	/* category: archive */
	/* description: OpenOffice.org 1.x Draw document */
	OPENOFFICE_ORG_1_X_DRAW_DOCUMENT = 681,

	/* category: archive */
	/* description: OpenOffice.org 1.x Draw template */
	OPENOFFICE_ORG_1_X_DRAW_TEMPLATE = 682,

	/* category: archive */
	/* description: OpenOffice.org 1.x Impress */
	OPENOFFICE_ORG_1_X_IMPRESS = 683,

	/* category: archive */
	/* description: OpenOffice.org 1.x Impress presentation */
	OPENOFFICE_ORG_1_X_IMPRESS_PRESENTATION = 684,

	/* category: archive */
	/* description: OpenOffice.org 1.x Impress template */
	OPENOFFICE_ORG_1_X_IMPRESS_TEMPLATE = 685,

	/* category: archive */
	/* description: OpenOffice.org 1.x Math document */
	OPENOFFICE_ORG_1_X_MATH_DOCUMENT = 686,

	/* category: archive */
	/* description: OpenOffice.org 1.x Database file */
	OPENOFFICE_ORG_1_X_DATABASE_FILE = 687,

	/* category: archive */
	/* description: OpenDocument */
	OPENDOCUMENT = 688,

	/* category: archive */
	/* description: OpenDocument Text */
	OPENDOCUMENT_TEXT = 689,

	/* category: archive */
	/* description: OpenDocument Text Template */
	OPENDOCUMENT_TEXT_TEMPLATE = 690,

	/* category: archive */
	/* description: OpenDocument HTML Document Template */
	OPENDOCUMENT_HTML_DOCUMENT_TEMPLATE = 691,

	/* category: archive */
	/* description: OpenDocument Master Document */
	OPENDOCUMENT_MASTER_DOCUMENT = 692,

	/* category: archive */
	/* description: OpenDocument Drawing */
	OPENDOCUMENT_DRAWING = 693,

	/* category: archive */
	/* description: OpenDocument Template */
	OPENDOCUMENT_TEMPLATE = 694,

	/* category: archive */
	/* description: OpenDocument Presentation */
	OPENDOCUMENT_PRESENTATION = 695,

	/* category: archive */
	/* description: OpenDocument Spreadsheet */
	OPENDOCUMENT_SPREADSHEET = 696,

	/* category: archive */
	/* description: OpenDocument Chart */
	OPENDOCUMENT_CHART = 697,

	/* category: archive */
	/* description: OpenDocument Formula */
	OPENDOCUMENT_FORMULA = 698,

	/* category: archive */
	/* description: OpenDocument Database */
	OPENDOCUMENT_DATABASE = 699,

	/* category: archive */
	/* description: OpenDocument Image */
	OPENDOCUMENT_IMAGE = 700,

	/* category: archive */
	/* description: EPUB document */
	EPUB_DOCUMENT = 701,

	/* category: archive */
	/* description: Zip data (MIME type "%s"?) */
	ZIP_DATA_MIME_TYPE_SS = 702,

	/* category: archive */
	/* description: Java archive data (JAR) */
	JAVA_ARCHIVE_DATA_JAR = 703,

	/* category: archive */
	/* description: iOS App */
	IOS_APP = 704,

	/* category: zip */
	/* description: Zip archive data */
	ZIP_ARCHIVE_DATA = 705,

	/* category: archive */
	/* description: Zip archive data, at least */
	ZIP_ARCHIVE_DATA_AT_LEAST = 706,

	/* category: archive */
	/* description: StarView MetaFile */
	STARVIEW_METAFILE = 707,

	/* category: archive */
	/* description: Zoo archive data */
	ZOO_ARCHIVE_DATA = 708,

	/* category: archive */
	/* description: shell archive text */
	SHELL_ARCHIVE_TEXT = 709,

	/* category: archive */
	/* description: LBR archive data */
	LBR_ARCHIVE_DATA = 710,

	/* category: archive */
	/* description: PMarc SFX archive (CP/M, DOS) */
	PMARC_SFX_ARCHIVE_CP_M_DOS = 711,

	/* category: archive */
	/* description: PopCom compressed executable (CP/M) */
	POPCOM_COMPRESSED_EXECUTABLE_CP_M = 712,

	/* category: archive */
	/* description: PRCS packaged project */
	PRCS_PACKAGED_PROJECT = 713,

	/* category: archive */
	/* description: GTKtalog catalog data, */
	GTKTALOG_CATALOG_DATA = 714,

	/* category: archive */
	/* description: GTKtalog catalog data, version 3 */
	GTKTALOG_CATALOG_DATA_VERSION_3 = 715,

	/* category: archive */
	/* description: GTKtalog catalog data, version 3 (gzipped) */
	GTKTALOG_CATALOG_DATA_VERSION_3_GZIPPED = 716,

	/* category: archive */
	/* description: GTKtalog catalog data, version 3 (not gzipped) */
	GTKTALOG_CATALOG_DATA_VERSION_3_NOT_GZIPPED = 717,

	/* category: archive */
	/* description: PARity archive data */
	PARITY_ARCHIVE_DATA = 718,

	/* category: archive */
	/* description: PARity archive data - Index file */
	PARITY_ARCHIVE_DATA_INDEX_FILE = 719,

	/* category: archive */
	/* description: PARity archive data - file number %d */
	PARITY_ARCHIVE_DATA_FILE_NUMBER_DD = 720,

	/* category: archive */
	/* description: BitTorrent file */
	BITTORRENT_FILE = 721,

	/* category: archive */
	/* description: Atari MSA archive data */
	ATARI_MSA_ARCHIVE_DATA = 722,

	/* category: archive */
	/* description: Atari MSA archive data, 1 sided */
	ATARI_MSA_ARCHIVE_DATA_1_SIDED = 723,

	/* category: archive */
	/* description: Atari MSA archive data, 2 sided */
	ATARI_MSA_ARCHIVE_DATA_2_SIDED = 724,

	/* category: archive */
	/* description: ACE archive data */
	ACE_ARCHIVE_DATA = 725,

	/* category: archive */
	/* description: sfArk compressed Soundfont */
	SFARK_COMPRESSED_SOUNDFONT = 726,

	/* category: archive */
	/* description: Personal NetWare Packed File */
	PERSONAL_NETWARE_PACKED_FILE = 727,

	/* category: archive */
	/* description: EET archive */
	EET_ARCHIVE = 728,

	/* category: compress */
	/* description: rzip compressed data */
	RZIP_COMPRESSED_DATA = 729,

	/* category: archive */
	/* description: dar archive, */
	DAR_ARCHIVE = 730,

	/* category: archive */
	/* description: Symbian installation file */
	SYMBIAN_INSTALLATION_FILE = 731,

	/* category: archive */
	/* description: Symbian installation file (EPOC release 3/4/5) */
	SYMBIAN_INSTALLATION_FILE_EPOC_RELEASE_3_4_5 = 732,

	/* category: archive */
	/* description: Symbian installation file (EPOC release 6) */
	SYMBIAN_INSTALLATION_FILE_EPOC_RELEASE_6 = 733,

	/* category: archive */
	/* description: Symbian installation file (Symbian OS 9.x) */
	SYMBIAN_INSTALLATION_FILE_SYMBIAN_OS_9_X = 734,

	/* category: archive */
	/* description: MoPaQ (MPQ) archive */
	MOPAQ_MPQ_ARCHIVE = 735,

	/* category: archive */
	/* description: KGB Archiver file */
	KGB_ARCHIVER_FILE = 736,

	/* category: archive */
	/* description: xar archive */
	XAR_ARCHIVE = 737,

	/* category: archive */
	/* description: xar archive no checksum */
	XAR_ARCHIVE_NO_CHECKSUM = 738,

	/* category: archive */
	/* description: xar archive SHA-1 checksum */
	XAR_ARCHIVE_SHA_1_CHECKSUM = 739,

	/* category: archive */
	/* description: xar archive MD5 checksum */
	XAR_ARCHIVE_MD5_CHECKSUM = 740,

	/* category: archive */
	/* description: Parity Archive Volume Set */
	PARITY_ARCHIVE_VOLUME_SET = 741,

	/* category: archive */
	/* description: Bacula volume */
	BACULA_VOLUME = 742,

	/* category: archive */
	/* description: ZPAQ stream */
	ZPAQ_STREAM = 743,

	/* category: archive */
	/* description: ZPAQ file */
	ZPAQ_FILE = 744,

	/* category: archive */
	/* description: BBeB ebook data, unencrypted */
	BBEB_EBOOK_DATA_UNENCRYPTED = 745,

	/* category: archive */
	/* description: BBeB ebook data, unencrypted, front-to-back */
	BBEB_EBOOK_DATA_UNENCRYPTED_FRONT_TO_BACK = 746,

	/* category: archive */
	/* description: BBeB ebook data, unencrypted, back-to-front */
	BBEB_EBOOK_DATA_UNENCRYPTED_BACK_TO_FRONT = 747,

	/* category: archive */
	/* description: Norton GHost image */
	NORTON_GHOST_IMAGE = 748,

	/* category: archive */
	/* description: Norton GHost image, first file */
	NORTON_GHOST_IMAGE_FIRST_FILE = 749,

	/* category: archive */
	/* description: Norton GHost image, split file */
	NORTON_GHOST_IMAGE_SPLIT_FILE = 750,

	/* category: archive */
	/* description: Google Chrome extension */
	GOOGLE_CHROME_EXTENSION = 751,

	/* category: archive */
	/* description: SeqBox, */
	SEQBOX = 752,

	/* category: archive */
	/* description: LyNX archive */
	LYNX_ARCHIVE = 753,

	/* category: archive */
	/* description: Acronis True Image backup */
	ACRONIS_TRUE_IMAGE_BACKUP = 754,

	/* category: archive */
	/* description: Gentoo binary package (XPAK) */
	GENTOO_BINARY_PACKAGE_XPAK = 755,

	/* category: assembler */
	/* description: assembler source text */
	ASSEMBLER_SOURCE_TEXT = 756,

	/* category: asterix */
	/* description: Aster*x */
	ASTER_X = 757,

	/* category: asterix */
	/* description: Aster*x Words Document */
	ASTER_X_WORDS_DOCUMENT = 758,

	/* category: asterix */
	/* description: Aster*x Graphic */
	ASTER_X_GRAPHIC = 759,

	/* category: asterix */
	/* description: Aster*x Spreadsheet */
	ASTER_X_SPREADSHEET = 760,

	/* category: asterix */
	/* description: Aster*x Macro */
	ASTER_X_MACRO = 761,

	/* category: asterix */
	/* description: Aster*x Version 2 */
	ASTER_X_VERSION_2 = 762,

	/* category: asterix */
	/* description: Aster*x Version 2 Words Document */
	ASTER_X_VERSION_2_WORDS_DOCUMENT = 763,

	/* category: asterix */
	/* description: Aster*x Version 2 Graphic */
	ASTER_X_VERSION_2_GRAPHIC = 764,

	/* category: asterix */
	/* description: Aster*x Version 2 Spreadsheet */
	ASTER_X_VERSION_2_SPREADSHEET = 765,

	/* category: asterix */
	/* description: Aster*x Version 2 Macro */
	ASTER_X_VERSION_2_MACRO = 766,

	/* category: att3b */
	/* description: WE32000 COFF */
	WE32000_COFF = 767,

	/* category: att3b */
	/* description: WE32000 COFF object */
	WE32000_COFF_OBJECT = 768,

	/* category: att3b */
	/* description: WE32000 COFF executable */
	WE32000_COFF_EXECUTABLE = 769,

	/* category: att3b */
	/* description: WE32000 COFF executable (TV) */
	WE32000_COFF_EXECUTABLE_TV = 770,

	/* category: att3b */
	/* description: WE32000 COFF executable (TV) not stripped */
	WE32000_COFF_EXECUTABLE_TV_NOT_STRIPPED = 771,

	/* category: att3b */
	/* description: 3b2 core file */
	A_3B2_CORE_FILE = 772,

	/* category: att3b */
	/* description: 3b2 core file of '%s' */
	A_3B2_CORE_FILE_OF_SS = 773,

	/* category: audio */
	/* description: Sun/NeXT audio data: */
	SUN_NEXT_AUDIO_DATA = 774,

	/* category: audio */
	/* description: Sun/NeXT audio data: 8-bit ISDN mu-law, */
	SUN_NEXT_AUDIO_DATA_8_BIT_ISDN_MU_LAW = 775,

	/* category: audio */
	/* description: Sun/NeXT audio data: 8-bit linear PCM [REF-PCM], */
	SUN_NEXT_AUDIO_DATA_8_BIT_LINEAR_PCM_REF_PCM = 776,

	/* category: audio */
	/* description: Sun/NeXT audio data: 16-bit linear PCM, */
	SUN_NEXT_AUDIO_DATA_16_BIT_LINEAR_PCM = 777,

	/* category: audio */
	/* description: Sun/NeXT audio data: 24-bit linear PCM, */
	SUN_NEXT_AUDIO_DATA_24_BIT_LINEAR_PCM = 778,

	/* category: audio */
	/* description: Sun/NeXT audio data: 32-bit linear PCM, */
	SUN_NEXT_AUDIO_DATA_32_BIT_LINEAR_PCM = 779,

	/* category: audio */
	/* description: Sun/NeXT audio data: 32-bit IEEE floating point, */
	SUN_NEXT_AUDIO_DATA_32_BIT_IEEE_FLOATING_POINT = 780,

	/* category: audio */
	/* description: Sun/NeXT audio data: 64-bit IEEE floating point, */
	SUN_NEXT_AUDIO_DATA_64_BIT_IEEE_FLOATING_POINT = 781,

	/* category: audio */
	/* description: Sun/NeXT audio data: Fragmented sample data, */
	SUN_NEXT_AUDIO_DATA_FRAGMENTED_SAMPLE_DATA = 782,

	/* category: audio */
	/* description: Sun/NeXT audio data: DSP program, */
	SUN_NEXT_AUDIO_DATA_DSP_PROGRAM = 783,

	/* category: audio */
	/* description: Sun/NeXT audio data: 8-bit fixed point, */
	SUN_NEXT_AUDIO_DATA_8_BIT_FIXED_POINT = 784,

	/* category: audio */
	/* description: Sun/NeXT audio data: 16-bit fixed point, */
	SUN_NEXT_AUDIO_DATA_16_BIT_FIXED_POINT = 785,

	/* category: audio */
	/* description: Sun/NeXT audio data: 24-bit fixed point, */
	SUN_NEXT_AUDIO_DATA_24_BIT_FIXED_POINT = 786,

	/* category: audio */
	/* description: Sun/NeXT audio data: 32-bit fixed point, */
	SUN_NEXT_AUDIO_DATA_32_BIT_FIXED_POINT = 787,

	/* category: audio */
	/* description: Sun/NeXT audio data: 16-bit linear with emphasis, */
	SUN_NEXT_AUDIO_DATA_16_BIT_LINEAR_WITH_EMPHASIS = 788,

	/* category: audio */
	/* description: Sun/NeXT audio data: 16-bit linear compressed, */
	SUN_NEXT_AUDIO_DATA_16_BIT_LINEAR_COMPRESSED = 789,

	/* category: audio */
	/* description: Sun/NeXT audio data: 16-bit linear with emphasis and compression, */
	SUN_NEXT_AUDIO_DATA_16_BIT_LINEAR_WITH_EMPHASIS_AND_COMPRESSION = 790,

	/* category: audio */
	/* description: Sun/NeXT audio data: Music kit DSP commands, */
	SUN_NEXT_AUDIO_DATA_MUSIC_KIT_DSP_COMMANDS = 791,

	/* category: audio */
	/* description: Sun/NeXT audio data: 8-bit ISDN mu-law compressed (CCITT G.721 ADPCM voice enc.), */
	SUN_NEXT_AUDIO_DATA_8_BIT_ISDN_MU_LAW_COMPRESSED_CCITT_G_721_ADPCM_VOICE_ENC = 792,

	/* category: audio */
	/* description: Sun/NeXT audio data: compressed (8-bit CCITT G.722 ADPCM) */
	SUN_NEXT_AUDIO_DATA_COMPRESSED_8_BIT_CCITT_G_722_ADPCM = 793,

	/* category: audio */
	/* description: Sun/NeXT audio data: compressed (3-bit CCITT G.723.3 ADPCM), */
	SUN_NEXT_AUDIO_DATA_COMPRESSED_3_BIT_CCITT_G_723_3_ADPCM = 794,

	/* category: audio */
	/* description: Sun/NeXT audio data: compressed (5-bit CCITT G.723.5 ADPCM), */
	SUN_NEXT_AUDIO_DATA_COMPRESSED_5_BIT_CCITT_G_723_5_ADPCM = 795,

	/* category: audio */
	/* description: Sun/NeXT audio data: 8-bit A-law (CCITT G.711), */
	SUN_NEXT_AUDIO_DATA_8_BIT_A_LAW_CCITT_G_711 = 796,

	/* category: audio */
	/* description: DEC audio data: */
	DEC_AUDIO_DATA = 797,

	/* category: audio */
	/* description: DEC audio data: 8-bit ISDN mu-law, */
	DEC_AUDIO_DATA_8_BIT_ISDN_MU_LAW = 798,

	/* category: audio */
	/* description: DEC audio data: 8-bit linear PCM [REF-PCM], */
	DEC_AUDIO_DATA_8_BIT_LINEAR_PCM_REF_PCM = 799,

	/* category: audio */
	/* description: DEC audio data: 16-bit linear PCM, */
	DEC_AUDIO_DATA_16_BIT_LINEAR_PCM = 800,

	/* category: audio */
	/* description: DEC audio data: 24-bit linear PCM, */
	DEC_AUDIO_DATA_24_BIT_LINEAR_PCM = 801,

	/* category: audio */
	/* description: DEC audio data: 32-bit linear PCM, */
	DEC_AUDIO_DATA_32_BIT_LINEAR_PCM = 802,

	/* category: audio */
	/* description: DEC audio data: 32-bit IEEE floating point, */
	DEC_AUDIO_DATA_32_BIT_IEEE_FLOATING_POINT = 803,

	/* category: audio */
	/* description: DEC audio data: 64-bit IEEE floating point, */
	DEC_AUDIO_DATA_64_BIT_IEEE_FLOATING_POINT = 804,

	/* category: audio */
	/* description: Standard MIDI data */
	STANDARD_MIDI_DATA = 805,

	/* category: audio */
	/* description: Creative Music (CMF) data */
	CREATIVE_MUSIC_CMF_DATA = 806,

	/* category: audio */
	/* description: SoundBlaster instrument data */
	SOUNDBLASTER_INSTRUMENT_DATA = 807,

	/* category: audio */
	/* description: Creative Labs voice data */
	CREATIVE_LABS_VOICE_DATA = 808,

	/* category: audio */
	/* description: MultiTrack sound data */
	MULTITRACK_SOUND_DATA = 809,

	/* category: audio */
	/* description: Extended MOD sound data, */
	EXTENDED_MOD_SOUND_DATA = 810,

	/* category: audio */
	/* description: Extended MOD sound data, %d instruments */
	EXTENDED_MOD_SOUND_DATA_DD_INSTRUMENTS = 811,

	/* category: audio */
	/* description: Extended MOD sound data, (module) */
	EXTENDED_MOD_SOUND_DATA_MODULE = 812,

	/* category: audio */
	/* description: Extended MOD sound data, (song) */
	EXTENDED_MOD_SOUND_DATA_SONG = 813,

	/* category: audio */
	/* description: RealAudio sound file */
	REALAUDIO_SOUND_FILE = 814,

	/* category: audio */
	/* description: RealMedia file */
	REALMEDIA_FILE = 815,

	/* category: audio */
	/* description: ULT(imate) Module sound data */
	ULT_IMATE_MODULE_SOUND_DATA = 816,

	/* category: audio */
	/* description: ScreamTracker III Module sound data */
	SCREAMTRACKER_III_MODULE_SOUND_DATA = 817,

	/* category: audio */
	/* description: GUS patch */
	GUS_PATCH = 818,

	/* category: audio */
	/* description: Old GUS	patch */
	OLD_GUS_PATCH = 819,

	/* category: audio */
	/* description: ultratracker V1.%.1s module sound data */
	ULTRATRACKER_V1_SS_MODULE_SOUND_DATA = 820,

	/* category: audio */
	/* description: MikMod UNI format module sound data */
	MIKMOD_UNI_FORMAT_MODULE_SOUND_DATA = 821,

	/* category: audio */
	/* description: Fasttracker II module sound data */
	FASTTRACKER_II_MODULE_SOUND_DATA = 822,

	/* category: audio */
	/* description: Screamtracker 2 module sound data */
	SCREAMTRACKER_2_MODULE_SOUND_DATA = 823,

	/* category: audio */
	/* description: 4-channel Protracker module sound data */
	A_4_CHANNEL_PROTRACKER_MODULE_SOUND_DATA = 824,

	/* category: audio */
	/* description: 4-channel Startracker module sound data */
	A_4_CHANNEL_STARTRACKER_MODULE_SOUND_DATA = 825,

	/* category: audio */
	/* description: 8-channel Startracker module sound data */
	A_8_CHANNEL_STARTRACKER_MODULE_SOUND_DATA = 826,

	/* category: audio */
	/* description: 4-channel Fasttracker module sound data */
	A_4_CHANNEL_FASTTRACKER_MODULE_SOUND_DATA = 827,

	/* category: audio */
	/* description: 6-channel Fasttracker module sound data */
	A_6_CHANNEL_FASTTRACKER_MODULE_SOUND_DATA = 828,

	/* category: audio */
	/* description: 8-channel Fasttracker module sound data */
	A_8_CHANNEL_FASTTRACKER_MODULE_SOUND_DATA = 829,

	/* category: audio */
	/* description: 8-channel Octalyser module sound data */
	A_8_CHANNEL_OCTALYSER_MODULE_SOUND_DATA = 830,

	/* category: audio */
	/* description: 8-channel Octalyzer module sound data */
	A_8_CHANNEL_OCTALYZER_MODULE_SOUND_DATA = 831,

	/* category: audio */
	/* description: 16-channel Taketracker module sound data */
	A_16_CHANNEL_TAKETRACKER_MODULE_SOUND_DATA = 832,

	/* category: audio */
	/* description: 32-channel Taketracker module sound data */
	A_32_CHANNEL_TAKETRACKER_MODULE_SOUND_DATA = 833,

	/* category: audio */
	/* description: TOC sound file */
	TOC_SOUND_FILE = 834,

	/* category: audio */
	/* description: Sidplay info file */
	SIDPLAY_INFO_FILE = 835,

	/* category: audio */
	/* description: PlaySID v2.2+ (AMIGA) sidtune */
	PLAYSID_V2_2P_AMIGA_SIDTUNE = 836,

	/* category: audio */
	/* description: RSID sidtune PlaySID compatible */
	RSID_SIDTUNE_PLAYSID_COMPATIBLE = 837,

	/* category: audio */
	/* description: IRCAM file (VAX little-endian) */
	IRCAM_FILE_VAX_LITTLE_ENDIAN = 838,

	/* category: audio */
	/* description: IRCAM file (VAX big-endian) */
	IRCAM_FILE_VAX_BIG_ENDIAN = 839,

	/* category: audio */
	/* description: IRCAM file (Sun big-endian) */
	IRCAM_FILE_SUN_BIG_ENDIAN = 840,

	/* category: audio */
	/* description: IRCAM file (Sun little-endian) */
	IRCAM_FILE_SUN_LITTLE_ENDIAN = 841,

	/* category: audio */
	/* description: IRCAM file (MIPS little-endian) */
	IRCAM_FILE_MIPS_LITTLE_ENDIAN = 842,

	/* category: audio */
	/* description: IRCAM file (MIPS big-endian) */
	IRCAM_FILE_MIPS_BIG_ENDIAN = 843,

	/* category: audio */
	/* description: IRCAM file (NeXT big-endian) */
	IRCAM_FILE_NEXT_BIG_ENDIAN = 844,

	/* category: audio */
	/* description: IRCAM file (NeXT little-endian) */
	IRCAM_FILE_NEXT_LITTLE_ENDIAN = 845,

	/* category: audio */
	/* description: NIST SPHERE file */
	NIST_SPHERE_FILE = 846,

	/* category: audio */
	/* description: Sample Vision file */
	SAMPLE_VISION_FILE = 847,

	/* category: audio */
	/* description: Audio Visual Research file, */
	AUDIO_VISUAL_RESEARCH_FILE = 848,

	/* category: audio */
	/* description: Audio Visual Research file, mono, */
	AUDIO_VISUAL_RESEARCH_FILE_MONO = 849,

	/* category: audio */
	/* description: Audio Visual Research file, stereo, */
	AUDIO_VISUAL_RESEARCH_FILE_STEREO = 850,

	/* category: audio */
	/* description: SGI SoundTrack project file */
	SGI_SOUNDTRACK_PROJECT_FILE = 851,

	/* category: audio */
	/* description: Audio file with ID3 version 2 */
	AUDIO_FILE_WITH_ID3_VERSION_2 = 852,

	/* category: audio */
	/* description: NES Sound File */
	NES_SOUND_FILE = 853,

	/* category: audio */
	/* description: Extended NES Sound File */
	EXTENDED_NES_SOUND_FILE = 854,

	/* category: audio */
	/* description: SNES SPC700 sound file */
	SNES_SPC700_SOUND_FILE = 855,

	/* category: audio */
	/* description: SNES SPC700 sound file, version 0.30 */
	SNES_SPC700_SOUND_FILE_VERSION_0_30 = 856,

	/* category: audio */
	/* description: SNES SPC700 sound file, version 0.30, without ID666 tag */
	SNES_SPC700_SOUND_FILE_VERSION_0_30_WITHOUT_ID666_TAG = 857,

	/* category: audio */
	/* description: SNES SPC700 sound file, version 0.30, with ID666 tag */
	SNES_SPC700_SOUND_FILE_VERSION_0_30_WITH_ID666_TAG = 858,

	/* category: audio */
	/* description: Impulse Tracker module sound data - */
	IMPULSE_TRACKER_MODULE_SOUND_DATA = 859,

	/* category: audio */
	/* description: Imago Orpheus module sound data - */
	IMAGO_ORPHEUS_MODULE_SOUND_DATA = 860,

	/* category: audio */
	/* description: Impulse Tracker Sample */
	IMPULSE_TRACKER_SAMPLE = 861,

	/* category: audio */
	/* description: Impulse Tracker Sample 16 bit */
	IMPULSE_TRACKER_SAMPLE_16_BIT = 862,

	/* category: audio */
	/* description: Impulse Tracker Sample 8 bit */
	IMPULSE_TRACKER_SAMPLE_8_BIT = 863,

	/* category: audio */
	/* description: Impulse Tracker Instrument */
	IMPULSE_TRACKER_INSTRUMENT = 864,

	/* category: audio */
	/* description: Yamaha TX Wave */
	YAMAHA_TX_WAVE = 865,

	/* category: audio */
	/* description: Yamaha TX Wave looped */
	YAMAHA_TX_WAVE_LOOPED = 866,

	/* category: audio */
	/* description: Yamaha TX Wave non-looped */
	YAMAHA_TX_WAVE_NON_LOOPED = 867,

	/* category: audio */
	/* description: Scream Tracker Sample */
	SCREAM_TRACKER_SAMPLE = 868,

	/* category: audio */
	/* description: Scream Tracker Sample sample */
	SCREAM_TRACKER_SAMPLE_SAMPLE = 869,

	/* category: audio */
	/* description: Scream Tracker Sample adlib melody */
	SCREAM_TRACKER_SAMPLE_ADLIB_MELODY = 870,

	/* category: audio */
	/* description: Scream Tracker Sample adlib drum */
	SCREAM_TRACKER_SAMPLE_ADLIB_DRUM = 871,

	/* category: audio */
	/* description: MED music file, version 0 */
	MED_MUSIC_FILE_VERSION_0 = 872,

	/* category: audio */
	/* description: OctaMED Pro music file, version 1 */
	OCTAMED_PRO_MUSIC_FILE_VERSION_1 = 873,

	/* category: audio */
	/* description: OctaMED Soundstudio music file, version 3 */
	OCTAMED_SOUNDSTUDIO_MUSIC_FILE_VERSION_3 = 874,

	/* category: audio */
	/* description: OctaMED Soundstudio compressed file */
	OCTAMED_SOUNDSTUDIO_COMPRESSED_FILE = 875,

	/* category: audio */
	/* description: MED_Song */
	MED_SONG = 876,

	/* category: audio */
	/* description: Symphonie SymMOD music file */
	SYMPHONIE_SYMMOD_MUSIC_FILE = 877,

	/* category: audio */
	/* description: AHX version */
	AHX_VERSION = 878,

	/* category: audio */
	/* description: AHX version 1 module data */
	AHX_VERSION_1_MODULE_DATA = 879,

	/* category: audio */
	/* description: AHX version 2 module data */
	AHX_VERSION_2_MODULE_DATA = 880,

	/* category: audio */
	/* description: Oktalyzer module data */
	OKTALYZER_MODULE_DATA = 881,

	/* category: audio */
	/* description: DIGI Booster module\0 */
	DIGI_BOOSTER_MODULE_0 = 882,

	/* category: audio */
	/* description: DIGI Booster Pro Module */
	DIGI_BOOSTER_PRO_MODULE = 883,

	/* category: audio */
	/* description: FaceTheMusic module */
	FACETHEMUSIC_MODULE = 884,

	/* category: audio */
	/* description: Velvet Studio AMS Module v2.2 */
	VELVET_STUDIO_AMS_MODULE_V2_2 = 885,

	/* category: audio */
	/* description: Extreme Tracker AMS Module v1.3 */
	EXTREME_TRACKER_AMS_MODULE_V1_3 = 886,

	/* category: audio */
	/* description: Xtracker DMF Module */
	XTRACKER_DMF_MODULE = 887,

	/* category: audio */
	/* description: Dynamic Studio Module DSM */
	DYNAMIC_STUDIO_MODULE_DSM = 888,

	/* category: audio */
	/* description: DigiTrekker DTM Module */
	DIGITREKKER_DTM_MODULE = 889,

	/* category: audio */
	/* description: DigiTrakker MDL Module */
	DIGITRAKKER_MDL_MODULE = 890,

	/* category: audio */
	/* description: Protracker Studio PSM Module */
	PROTRACKER_STUDIO_PSM_MODULE = 891,

	/* category: audio */
	/* description: Poly Tracker PTM Module */
	POLY_TRACKER_PTM_MODULE = 892,

	/* category: audio */
	/* description: MadTracker 2.0 Module MT2 */
	MADTRACKER_2_0_MODULE_MT2 = 893,

	/* category: audio */
	/* description: RAD Adlib Tracker Module RAD */
	RAD_ADLIB_TRACKER_MODULE_RAD = 894,

	/* category: audio */
	/* description: RTM Module */
	RTM_MODULE = 895,

	/* category: audio */
	/* description: XMS Adlib Module */
	XMS_ADLIB_MODULE = 896,

	/* category: audio */
	/* description: XMS Adlib Module Composer: "%s" */
	XMS_ADLIB_MODULE_COMPOSER_SS = 897,

	/* category: audio */
	/* description: AMF Module */
	AMF_MODULE = 898,

	/* category: audio */
	/* description: Open Cubic Player Module Inforation MDZ */
	OPEN_CUBIC_PLAYER_MODULE_INFORATION_MDZ = 899,

	/* category: audio */
	/* description: Fast Tracker II Instrument */
	FAST_TRACKER_II_INSTRUMENT = 900,

	/* category: audio */
	/* description: NOA Nancy Codec Movie file */
	NOA_NANCY_CODEC_MOVIE_FILE = 901,

	/* category: audio */
	/* description: Yamaha SMAF file */
	YAMAHA_SMAF_FILE = 902,

	/* category: audio */
	/* description: SHARP Cell-Phone ringing Melody */
	SHARP_CELL_PHONE_RINGING_MELODY = 903,

	/* category: audio */
	/* description: SHARP Cell-Phone ringing Melody Ver. 1.00 */
	SHARP_CELL_PHONE_RINGING_MELODY_VER_1_00 = 904,

	/* category: audio */
	/* description: FLAC audio bitstream data */
	FLAC_AUDIO_BITSTREAM_DATA = 905,

	/* category: audio */
	/* description: FLAC audio bitstream data, unknown version */
	FLAC_AUDIO_BITSTREAM_DATA_UNKNOWN_VERSION = 906,

	/* category: audio */
	/* description: FLAC audio bitstream data, 4 bit */
	FLAC_AUDIO_BITSTREAM_DATA_4_BIT = 907,

	/* category: audio */
	/* description: FLAC audio bitstream data, 6 bit */
	FLAC_AUDIO_BITSTREAM_DATA_6_BIT = 908,

	/* category: audio */
	/* description: FLAC audio bitstream data, 8 bit */
	FLAC_AUDIO_BITSTREAM_DATA_8_BIT = 909,

	/* category: audio */
	/* description: FLAC audio bitstream data, 12 bit */
	FLAC_AUDIO_BITSTREAM_DATA_12_BIT = 910,

	/* category: audio */
	/* description: FLAC audio bitstream data, 16 bit */
	FLAC_AUDIO_BITSTREAM_DATA_16_BIT = 911,

	/* category: audio */
	/* description: FLAC audio bitstream data, 24 bit */
	FLAC_AUDIO_BITSTREAM_DATA_24_BIT = 912,

	/* category: audio */
	/* description: VBOX voice message data */
	VBOX_VOICE_MESSAGE_DATA = 913,

	/* category: audio */
	/* description: RBS Song file */
	RBS_SONG_FILE = 914,

	/* category: audio */
	/* description: Synthesizer Generator or Kimwitu data */
	SYNTHESIZER_GENERATOR_OR_KIMWITU_DATA = 915,

	/* category: audio */
	/* description: Kimwitu++ data */
	KIMWITUPP_DATA = 916,

	/* category: audio */
	/* description: TFMX module sound data */
	TFMX_MODULE_SOUND_DATA = 917,

	/* category: audio */
	/* description: Monkey's Audio compressed format */
	MONKEY_S_AUDIO_COMPRESSED_FORMAT = 918,

	/* category: audio */
	/* description: BambooTracker */
	BAMBOOTRACKER = 919,

	/* category: audio */
	/* description: RdosPlay RAW */
	RDOSPLAY_RAW = 920,

	/* category: audio */
	/* description: AMUSIC Adlib Tracker */
	AMUSIC_ADLIB_TRACKER = 921,

	/* category: audio */
	/* description: EdLib */
	EDLIB = 922,

	/* category: audio */
	/* description: MPU-401 Trakker */
	MPU_401_TRAKKER = 923,

	/* category: audio */
	/* description: Surprise! Adlib Tracker */
	SURPRISE_ADLIB_TRACKER = 924,

	/* category: audio */
	/* description: eXotic ADlib */
	EXOTIC_ADLIB = 925,

	/* category: audio */
	/* description: eXtra Simple Music */
	EXTRA_SIMPLE_MUSIC = 926,

	/* category: audio */
	/* description: FM Kingtracker Song */
	FM_KINGTRACKER_SONG = 927,

	/* category: audio */
	/* description: DFM Song */
	DFM_SONG = 928,

	/* category: audio */
	/* description: CFF Song */
	CFF_SONG = 929,

	/* category: audio */
	/* description: A2M Song */
	A2M_SONG = 930,

	/* category: audio */
	/* description: Spectrum 128 tune */
	SPECTRUM_128_TUNE = 931,

	/* category: audio */
	/* description: BONK, */
	BONK = 932,

	/* category: audio */
	/* description: BONK, %d channel(s), */
	BONK_DD_CHANNEL_S = 933,

	/* category: audio */
	/* description: BONK, lossless, */
	BONK_LOSSLESS = 934,

	/* category: audio */
	/* description: BONK, lossy, */
	BONK_LOSSY = 935,

	/* category: audio */
	/* description: LockStream Embedded file (mostly MP3 on old Nokia phones) */
	LOCKSTREAM_EMBEDDED_FILE_MOSTLY_MP3_ON_OLD_NOKIA_PHONES = 936,

	/* category: audio */
	/* description: VQF data */
	VQF_DATA = 937,

	/* category: audio */
	/* description: VQF data, Mono */
	VQF_DATA_MONO = 938,

	/* category: audio */
	/* description: VQF data, Stereo */
	VQF_DATA_STEREO = 939,

	/* category: audio */
	/* description: Winamp EQ library file */
	WINAMP_EQ_LIBRARY_FILE = 940,

	/* category: audio */
	/* description: XMMS equalizer preset */
	XMMS_EQUALIZER_PRESET = 941,

	/* category: audio */
	/* description: M3U playlist text */
	M3U_PLAYLIST_TEXT = 942,

	/* category: audio */
	/* description: PLS playlist text */
	PLS_PLAYLIST_TEXT = 943,

	/* category: audio */
	/* description: LICQ configuration file */
	LICQ_CONFIGURATION_FILE = 944,

	/* category: audio */
	/* description: SNDH Atari ST music */
	SNDH_ATARI_ST_MUSIC = 945,

	/* category: audio */
	/* description: sc68 Atari ST music */
	SC68_ATARI_ST_MUSIC = 946,

	/* category: audio */
	/* description: Musepack audio (MP+) */
	MUSEPACK_AUDIO_MPP = 947,

	/* category: audio */
	/* description: Musepack audio (MP+), SV pre8 */
	MUSEPACK_AUDIO_MPP_SV_PRE8 = 948,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 6 */
	MUSEPACK_AUDIO_MPP_SV_6 = 949,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 8 */
	MUSEPACK_AUDIO_MPP_SV_8 = 950,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 7 */
	MUSEPACK_AUDIO_MPP_SV_7 = 951,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 7.0 */
	MUSEPACK_AUDIO_MPP_SV_7_0 = 952,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 7.1 */
	MUSEPACK_AUDIO_MPP_SV_7_1 = 953,

	/* category: audio */
	/* description: Musepack audio (MP+), SV 7.15 */
	MUSEPACK_AUDIO_MPP_SV_7_15 = 954,

	/* category: audio */
	/* description: Musepack audio (MPCK) */
	MUSEPACK_AUDIO_MPCK = 955,

	/* category: audio */
	/* description: iMelody Ringtone Format */
	IMELODY_RINGTONE_FORMAT = 956,

	/* category: audio */
	/* description: Guitar Pro Ver. 3 Tablature */
	GUITAR_PRO_VER_3_TABLATURE = 957,

	/* category: audio */
	/* description: SoundFX Module sound file */
	SOUNDFX_MODULE_SOUND_FILE = 958,

	/* category: audio */
	/* description: Adaptive Multi-Rate Codec (GSM telephony) */
	ADAPTIVE_MULTI_RATE_CODEC_GSM_TELEPHONY = 959,

	/* category: audio */
	/* description: SuperCollider3 Synth Definition file, */
	SUPERCOLLIDER3_SYNTH_DEFINITION_FILE = 960,

	/* category: audio */
	/* description: True Audio Lossless Audio */
	TRUE_AUDIO_LOSSLESS_AUDIO = 961,

	/* category: audio */
	/* description: WavPack Lossless Audio */
	WAVPACK_LOSSLESS_AUDIO = 962,

	/* category: audio */
	/* description: VGM Video Game Music dump v */
	VGM_VIDEO_GAME_MUSIC_DUMP_V = 963,

	/* category: audio */
	/* description: GVOX Encore music, version 5.0 or above */
	GVOX_ENCORE_MUSIC_VERSION_5_0_OR_ABOVE = 964,

	/* category: audio */
	/* description: GVOX Encore music, version < 5.0 */
	GVOX_ENCORE_MUSIC_VERSION_5_0 = 965,

	/* category: audio */
	/* description: Garmin Voice Processing Module */
	GARMIN_VOICE_PROCESSING_MODULE = 966,

	/* category: audio */
	/* description: Garmin Voice Processing Module (encrypted) */
	GARMIN_VOICE_PROCESSING_MODULE_ENCRYPTED = 967,

	/* category: audio */
	/* description: General Digital Music. */
	GENERAL_DIGITAL_MUSIC = 968,

	/* category: audio */
	/* description: Multitracker */
	MULTITRACKER = 969,

	/* category: audio */
	/* description: Hively Tracker Song */
	HIVELY_TRACKER_SONG = 970,

	/* category: audio */
	/* description: Hively Tracker Song Hively Tracker Song 1 module data; @reduced@ */
	HIVELY_TRACKER_SONG_HIVELY_TRACKER_SONG_1_MODULE_DATA_REDUCED = 971,

	/* category: audio */
	/* description: Hively Tracker Song Hively Tracker Song 2 module data; @reduced@ */
	HIVELY_TRACKER_SONG_HIVELY_TRACKER_SONG_2_MODULE_DATA_REDUCED = 972,

	/* category: audio */
	/* description: MOdule with MP3 */
	MODULE_WITH_MP3 = 973,

	/* category: audio */
	/* description: MOdule with MP3 Version	0	(With MP3 and lossless) */
	MODULE_WITH_MP3_VERSION_0_WITH_MP3_AND_LOSSLESS = 974,

	/* category: audio */
	/* description: MOdule with MP3 Version	1	(With ogg and lossless) */
	MODULE_WITH_MP3_VERSION_1_WITH_OGG_AND_LOSSLESS = 975,

	/* category: audio */
	/* description: MOdule with MP3 Version 2.2 */
	MODULE_WITH_MP3_VERSION_2_2 = 976,

	/* category: audio */
	/* description: MOdule with MP3 (With no LAME header) */
	MODULE_WITH_MP3_WITH_NO_LAME_HEADER = 977,

	/* category: audio */
	/* description: MOdule with MP3 Version 2.4 */
	MODULE_WITH_MP3_VERSION_2_4 = 978,

	/* category: audio */
	/* description: AProSys	module */
	APROSYS_MODULE = 979,

	/* category: audio */
	/* description: Art of Noise Tracker Song */
	ART_OF_NOISE_TRACKER_SONG = 980,

	/* category: audio */
	/* description: Farandole Tracker Song */
	FARANDOLE_TRACKER_SONG = 981,

	/* category: audio */
	/* description: Klystrack song */
	KLYSTRACK_SONG = 982,

	/* category: audio */
	/* description: Klystrack instrument */
	KLYSTRACK_INSTRUMENT = 983,

	/* category: audio */
	/* description: WOPL instrument */
	WOPL_INSTRUMENT = 984,

	/* category: audio */
	/* description: WOPL instrument bank */
	WOPL_INSTRUMENT_BANK = 985,

	/* category: audio */
	/* description: Junglevision instrument data */
	JUNGLEVISION_INSTRUMENT_DATA = 986,

	/* category: audio */
	/* description: DMX OP2 instrument data */
	DMX_OP2_INSTRUMENT_DATA = 987,

	/* category: audio */
	/* description: IBK instrument data */
	IBK_INSTRUMENT_DATA = 988,

	/* category: audio */
	/* description: IBK instrument data, 2 operators */
	IBK_INSTRUMENT_DATA_2_OPERATORS = 989,

	/* category: audio */
	/* description: IBK instrument data, 4 operators */
	IBK_INSTRUMENT_DATA_4_OPERATORS = 990,

	/* category: audio */
	/* description: AdLib instrument data */
	ADLIB_INSTRUMENT_DATA = 991,

	/* category: audio */
	/* description: CRI ADX ADPCM audio */
	CRI_ADX_ADPCM_AUDIO = 992,

	/* category: audio */
	/* description: CRI ADX ADPCM audio, pre-set prediction coefficients */
	CRI_ADX_ADPCM_AUDIO_PRE_SET_PREDICTION_COEFFICIENTS = 993,

	/* category: audio */
	/* description: CRI ADX ADPCM audio, standard ADX */
	CRI_ADX_ADPCM_AUDIO_STANDARD_ADX = 994,

	/* category: audio */
	/* description: CRI ADX ADPCM audio, exponential scale */
	CRI_ADX_ADPCM_AUDIO_EXPONENTIAL_SCALE = 995,

	/* category: audio */
	/* description: CRI ADX ADPCM audio, AHX */
	CRI_ADX_ADPCM_AUDIO_AHX = 996,

	/* category: audio */
	/* description: Lossless audio version 0.3 */
	LOSSLESS_AUDIO_VERSION_0_3 = 997,

	/* category: audio */
	/* description: Lossless audio version 0.4 */
	LOSSLESS_AUDIO_VERSION_0_4 = 998,

	/* category: audio */
	/* description: Sony PlayStation Audio */
	SONY_PLAYSTATION_AUDIO = 999,

	/* category: basis */
	/* description: BBx */
	BBX = 1000,

	/* category: basis */
	/* description: BBx indexed file */
	BBX_INDEXED_FILE = 1001,

	/* category: basis */
	/* description: BBx serial file */
	BBX_SERIAL_FILE = 1002,

	/* category: basis */
	/* description: BBx keyed file */
	BBX_KEYED_FILE = 1003,

	/* category: basis */
	/* description: BBx keyed file (sort) */
	BBX_KEYED_FILE_SORT = 1004,

	/* category: basis */
	/* description: BBx program */
	BBX_PROGRAM = 1005,

	/* category: basis */
	/* description: BBx mkeyed file */
	BBX_MKEYED_FILE = 1006,

	/* category: beetle */
	/* description: Beetle VM object file */
	BEETLE_VM_OBJECT_FILE = 1007,

	/* category: ber */
	/* description: TAP 3.%d Batch (TD.57, Transferred Account) */
	TAP_3_DD_BATCH_TD_57_TRANSFERRED_ACCOUNT = 1008,

	/* category: ber */
	/* description: TAP 3.%d Notification (TD.57, Transferred Account) */
	TAP_3_DD_NOTIFICATION_TD_57_TRANSFERRED_ACCOUNT = 1009,

	/* category: ber */
	/* description: NRT 2.%d (TD.35, Near Real Time Roaming Data Exchange) */
	NRT_2_DD_TD_35_NEAR_REAL_TIME_ROAMING_DATA_EXCHANGE = 1010,

	/* category: ber */
	/* description: RAP 1.%d Batch (TD.32, Returned Account Procedure), */
	RAP_1_DD_BATCH_TD_32_RETURNED_ACCOUNT_PROCEDURE = 1011,

	/* category: ber */
	/* description: RAP Acknowledgement (TD.32, Returned Account Procedure) */
	RAP_ACKNOWLEDGEMENT_TD_32_RETURNED_ACCOUNT_PROCEDURE = 1012,

	/* category: bflt */
	/* description: BFLT executable */
	BFLT_EXECUTABLE = 1013,

	/* category: bhl */
	/* description: BlockHashLoc recovery info, */
	BLOCKHASHLOC_RECOVERY_INFO = 1014,

	/* category: bioinformatics */
	/* description: Blocked GNU Zip Format (BGZF; gzip compatible) */
	BLOCKED_GNU_ZIP_FORMAT_BGZF_GZIP_COMPATIBLE = 1015,

	/* category: bioinformatics */
	/* description: SAMtools TBI (Tabix index format) */
	SAMTOOLS_TBI_TABIX_INDEX_FORMAT = 1016,

	/* category: bioinformatics */
	/* description: SAMtools BAM (Binary Sequence Alignment/Map) */
	SAMTOOLS_BAM_BINARY_SEQUENCE_ALIGNMENT_MAP = 1017,

	/* category: bioinformatics */
	/* description: SAMtools BAI (BAM indexing format) */
	SAMTOOLS_BAI_BAM_INDEXING_FORMAT = 1018,

	/* category: bioinformatics */
	/* description: CRAM */
	CRAM = 1019,

	/* category: bioinformatics */
	/* description: SAMtools BCF (Binary Call Format) */
	SAMTOOLS_BCF_BINARY_CALL_FORMAT = 1020,

	/* category: bioinformatics */
	/* description: Binary Call Format (BCF) version 2.1 */
	BINARY_CALL_FORMAT_BCF_VERSION_2_1 = 1021,

	/* category: bioinformatics */
	/* description: Binary Call Format (BCF) version 2.2 */
	BINARY_CALL_FORMAT_BCF_VERSION_2_2 = 1022,

	/* category: bioinformatics */
	/* description: Variant Call Format (VCF) */
	VARIANT_CALL_FORMAT_VCF = 1023,

	/* category: bioinformatics */
	/* description: Sequence Alignment/Map (SAM), with header */
	SEQUENCE_ALIGNMENT_MAP_SAM_WITH_HEADER = 1024,

	/* category: bioinformatics */
	/* description: Sequence Alignment/Map (SAM) */
	SEQUENCE_ALIGNMENT_MAP_SAM = 1025,

	/* category: biosig */
	/* description: Biosig/Axon Binary format */
	BIOSIG_AXON_BINARY_FORMAT = 1026,

	/* category: biosig */
	/* description: Biosig/ATES MEDICA SOFT. EEG for Windows */
	BIOSIG_ATES_MEDICA_SOFT_EEG_FOR_WINDOWS = 1027,

	/* category: biosig */
	/* description: Biosig/Axon Text fomrat */
	BIOSIG_AXON_TEXT_FOMRAT = 1028,

	/* category: biosig */
	/* description: Biosig/Axona file format */
	BIOSIG_AXONA_FILE_FORMAT = 1029,

	/* category: biosig */
	/* description: Biosig/alpha trace */
	BIOSIG_ALPHA_TRACE = 1030,

	/* category: biosig */
	/* description: Biosig/AXG */
	BIOSIG_AXG = 1031,

	/* category: biosig */
	/* description: Biosig/BCI2000 */
	BIOSIG_BCI2000 = 1032,

	/* category: biosig */
	/* description: Biosig/Biosemi data format */
	BIOSIG_BIOSEMI_DATA_FORMAT = 1033,

	/* category: biosig */
	/* description: Biosig/Brainvision data file */
	BIOSIG_BRAINVISION_DATA_FILE = 1034,

	/* category: biosig */
	/* description: Biosig/Brainvision V-Amp file */
	BIOSIG_BRAINVISION_V_AMP_FILE = 1035,

	/* category: biosig */
	/* description: Biosig/Brainvision Marker file */
	BIOSIG_BRAINVISION_MARKER_FILE = 1036,

	/* category: biosig */
	/* description: Biosig/CFS: Cambridge Electronic devices File format */
	BIOSIG_CFS_CAMBRIDGE_ELECTRONIC_DEVICES_FILE_FORMAT = 1037,

	/* category: biosig */
	/* description: Biosig/EDF: European Data format */
	BIOSIG_EDF_EUROPEAN_DATA_FORMAT = 1038,

	/* category: biosig */
	/* description: Biosig/GDF: General data format for biosignals */
	BIOSIG_GDF_GENERAL_DATA_FORMAT_FOR_BIOSIGNALS = 1039,

	/* category: biosig */
	/* description: Biosig/Heka Patchmaster */
	BIOSIG_HEKA_PATCHMASTER = 1040,

	/* category: biosig */
	/* description: Biosig/CED SMR */
	BIOSIG_CED_SMR = 1041,

	/* category: biosig */
	/* description: Biosig/CFWB */
	BIOSIG_CFWB = 1042,

	/* category: biosig */
	/* description: Biosig/DEMG */
	BIOSIG_DEMG = 1043,

	/* category: biosig */
	/* description: Biosig/EBS */
	BIOSIG_EBS = 1044,

	/* category: biosig */
	/* description: Biosig/Embla */
	BIOSIG_EMBLA = 1045,

	/* category: biosig */
	/* description: Version			Biosig/ETG4000 */
	VERSION_BIOSIG_ETG4000 = 1046,

	/* category: biosig */
	/* description: Biosig/Galileo */
	BIOSIG_GALILEO = 1047,

	/* category: biosig */
	/* description: Biosig/IgorPro ITX file */
	BIOSIG_IGORPRO_ITX_FILE = 1048,

	/* category: biosig */
	/* description: Biosig/ISHNE */
	BIOSIG_ISHNE = 1049,

	/* category: biosig */
	/* description: Biosig/MFER */
	BIOSIG_MFER = 1050,

	/* category: biosig */
	/* description: Biosig/NEV */
	BIOSIG_NEV = 1051,

	/* category: biosig */
	/* description: Biosig/NEX */
	BIOSIG_NEX = 1052,

	/* category: biosig */
	/* description: Biosig/Plexon v1.0 */
	BIOSIG_PLEXON_V1_0 = 1053,

	/* category: biosig */
	/* description: Biosig/Plexon v2.0 */
	BIOSIG_PLEXON_V2_0 = 1054,

	/* category: biosig */
	/* description: Biosig/RHD2000: Intan RHD2000 format */
	BIOSIG_RHD2000_INTAN_RHD2000_FORMAT = 1055,

	/* category: biosig */
	/* description: Biosig/SCP-ECG format CEN 1064:2005/ISO 11073:91064 */
	BIOSIG_SCP_ECG_FORMAT_CEN_1064_2005_ISO_11073_91064 = 1056,

	/* category: biosig */
	/* description: Biosig/SIGIF */
	BIOSIG_SIGIF = 1057,

	/* category: biosig */
	/* description: Biosig/TMS32 */
	BIOSIG_TMS32 = 1058,

	/* category: biosig */
	/* description: Biosig/TMSiLOG */
	BIOSIG_TMSILOG = 1059,

	/* category: biosig */
	/* description: Biosig/SYNERGY */
	BIOSIG_SYNERGY = 1060,

	/* category: biosig */
	/* description: Biosig/UNIPRO */
	BIOSIG_UNIPRO = 1061,

	/* category: biosig */
	/* description: Biosig/WCP */
	BIOSIG_WCP = 1062,

	/* category: biosig */
	/* description: Biosig/Walter Graphtek */
	BIOSIG_WALTER_GRAPHTEK = 1063,

	/* category: biosig */
	/* description: Biosig/Sigma */
	BIOSIG_SIGMA = 1064,

	/* category: biosig */
	/* description: Biosig/File exchange format (FEF) */
	BIOSIG_FILE_EXCHANGE_FORMAT_FEF = 1065,

	/* category: biosig */
	/* description: Biosig/FIFF */
	BIOSIG_FIFF = 1066,

	/* category: blackberry */
	/* description: BlackBerry RIM ETP file */
	BLACKBERRY_RIM_ETP_FILE = 1067,

	/* category: blcr */
	/* description: BLCR */
	BLCR = 1068,

	/* category: blcr */
	/* description: BLCR x86 */
	BLCR_X86 = 1069,

	/* category: blcr */
	/* description: BLCR alpha */
	BLCR_ALPHA = 1070,

	/* category: blcr */
	/* description: BLCR x86-64 */
	BLCR_X86_64 = 1071,

	/* category: blcr */
	/* description: BLCR ARM */
	BLCR_ARM = 1072,

	/* category: blcr */
	/* description: BLCR SPARC */
	BLCR_SPARC = 1073,

	/* category: blcr */
	/* description: BLCR ppc */
	BLCR_PPC = 1074,

	/* category: blcr */
	/* description: BLCR ppc64 */
	BLCR_PPC64 = 1075,

	/* category: blcr */
	/* description: BLCR ARMEB */
	BLCR_ARMEB = 1076,

	/* category: blcr */
	/* description: BLCR SPARC64 */
	BLCR_SPARC64 = 1077,

	/* category: blender */
	/* description: Blender3D, */
	BLENDER3D = 1078,

	/* category: blender */
	/* description: Blender3D, saved as 32-bits */
	BLENDER3D_SAVED_AS_32_BITS = 1079,

	/* category: blender */
	/* description: Blender3D, saved as 32-bits little endian */
	BLENDER3D_SAVED_AS_32_BITS_LITTLE_ENDIAN = 1080,

	/* category: blender */
	/* description: Blender3D, saved as 32-bits big endian */
	BLENDER3D_SAVED_AS_32_BITS_BIG_ENDIAN = 1081,

	/* category: blender */
	/* description: Blender3D, saved as 64-bits */
	BLENDER3D_SAVED_AS_64_BITS = 1082,

	/* category: blender */
	/* description: Blender3D BPython script */
	BLENDER3D_BPYTHON_SCRIPT = 1083,

	/* category: blit */
	/* description: VAX-order 68K Blit (standalone) executable */
	VAX_ORDER_68K_BLIT_STANDALONE_EXECUTABLE = 1084,

	/* category: blit */
	/* description: 68k Blit mpx/mux executable */
	A_68K_BLIT_MPX_MUX_EXECUTABLE = 1085,

	/* category: blit */
	/* description: VAX-order2 68k Blit mpx/mux executable */
	VAX_ORDER2_68K_BLIT_MPX_MUX_EXECUTABLE = 1086,

	/* category: blit */
	/* description: VAX-order 68k Blit mpx/mux executable */
	VAX_ORDER_68K_BLIT_MPX_MUX_EXECUTABLE = 1087,

	/* category: bout */
	/* description: i960 b.out relocatable object */
	I960_B_OUT_RELOCATABLE_OBJECT = 1088,

	/* category: bout */
	/* description: i960 b.out relocatable object not stripped */
	I960_B_OUT_RELOCATABLE_OBJECT_NOT_STRIPPED = 1089,

	/* category: bout */
	/* description: b.out archive */
	B_OUT_ARCHIVE = 1090,

	/* category: bout */
	/* description: b.out archive random library */
	B_OUT_ARCHIVE_RANDOM_LIBRARY = 1091,

	/* category: bsdi */
	/* description: 386 compact demand paged pure executable */
	A_386_COMPACT_DEMAND_PAGED_PURE_EXECUTABLE = 1092,

	/* category: bsdi */
	/* description: SPARC demand paged */
	SPARC_DEMAND_PAGED = 1093,

	/* category: bsdi */
	/* description: SPARC demand paged shared library */
	SPARC_DEMAND_PAGED_SHARED_LIBRARY = 1094,

	/* category: bsdi */
	/* description: SPARC demand paged dynamically linked executable */
	SPARC_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 1095,

	/* category: bsdi */
	/* description: SPARC demand paged executable */
	SPARC_DEMAND_PAGED_EXECUTABLE = 1096,

	/* category: bsdi */
	/* description: SPARC pure */
	SPARC_PURE = 1097,

	/* category: bsdi */
	/* description: SPARC pure dynamically linked executable */
	SPARC_PURE_DYNAMICALLY_LINKED_EXECUTABLE = 1098,

	/* category: bsdi */
	/* description: SPARC pure executable */
	SPARC_PURE_EXECUTABLE = 1099,

	/* category: bsdi */
	/* description: SPARC */
	SPARC = 1100,

	/* category: bsdi */
	/* description: SPARC dynamically linked executable */
	SPARC_DYNAMICALLY_LINKED_EXECUTABLE = 1101,

	/* category: bsdi */
	/* description: SPARC executable */
	SPARC_EXECUTABLE = 1102,

	/* category: bsi */
	/* description: Chiasmus encrypted data */
	CHIASMUS_ENCRYPTED_DATA = 1103,

	/* category: bsi */
	/* description: Chiasmus key */
	CHIASMUS_KEY = 1104,

	/* category: btsnoop */
	/* description: BTSnoop */
	BTSNOOP = 1105,

	/* category: btsnoop */
	/* description: BTSnoop Unencapsulated HCI */
	BTSNOOP_UNENCAPSULATED_HCI = 1106,

	/* category: btsnoop */
	/* description: BTSnoop HCI UART (H4) */
	BTSNOOP_HCI_UART_H4 = 1107,

	/* category: btsnoop */
	/* description: BTSnoop HCI BCSP */
	BTSNOOP_HCI_BCSP = 1108,

	/* category: btsnoop */
	/* description: BTSnoop HCI Serial (H5) */
	BTSNOOP_HCI_SERIAL_H5 = 1109,

	/* category: c-lang */
	/* description: BCPL source text */
	BCPL_SOURCE_TEXT = 1110,

	/* category: c-lang */
	/* description: C source text */
	C_SOURCE_TEXT = 1111,

	/* category: c-lang */
	/* description: C++ source text */
	CPP_SOURCE_TEXT = 1112,

	/* category: c-lang */
	/* description: Objective-C source text */
	OBJECTIVE_C_SOURCE_TEXT = 1113,

	/* category: c-lang */
	/* description: cscope reference data */
	CSCOPE_REFERENCE_DATA = 1114,

	/* category: c64 */
	/* description: D64 Image */
	D64_IMAGE = 1115,

	/* category: c64 */
	/* description: D71 Image */
	D71_IMAGE = 1116,

	/* category: c64 */
	/* description: D81 Image */
	D81_IMAGE = 1117,

	/* category: c64 */
	/* description: CCS C64 Emultar Cartridge Image */
	CCS_C64_EMULTAR_CARTRIDGE_IMAGE = 1118,

	/* category: c64 */
	/* description: X64 Image */
	X64_IMAGE = 1119,

	/* category: c64 */
	/* description: GCR Image */
	GCR_IMAGE = 1120,

	/* category: c64 */
	/* description: ARC archive (c64) */
	ARC_ARCHIVE_C64 = 1121,

	/* category: c64 */
	/* description: LHA archive (c64) */
	LHA_ARCHIVE_C64 = 1122,

	/* category: c64 */
	/* description: PC64 Emulator file */
	PC64_EMULATOR_FILE = 1123,

	/* category: c64 */
	/* description: PC64 Freezer Image */
	PC64_FREEZER_IMAGE = 1124,

	/* category: c64 */
	/* description: C64 PCLink Image */
	C64_PCLINK_IMAGE = 1125,

	/* category: c64 */
	/* description: Power 64 C64 Emulator Snapshot */
	POWER_64_C64_EMULATOR_SNAPSHOT = 1126,

	/* category: c64 */
	/* description: WRAptor packer (c64) */
	WRAPTOR_PACKER_C64 = 1127,

	/* category: c64 */
	/* description: T64 tape Image */
	T64_TAPE_IMAGE = 1128,

	/* category: c64 */
	/* description: C64 Raw Tape File (.tap), */
	C64_RAW_TAPE_FILE_TAP = 1129,

	/* category: c64 */
	/* description: GoatTracker 2 song */
	GOATTRACKER_2_SONG = 1130,

	/* category: cad */
	/* description: Microstation */
	MICROSTATION = 1131,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 1.0 */
	DWG_AUTODESK_AUTOCAD_RELEASE_1_0 = 1132,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 1.2 */
	DWG_AUTODESK_AUTOCAD_RELEASE_1_2 = 1133,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 1.3 */
	DWG_AUTODESK_AUTOCAD_RELEASE_1_3 = 1134,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 1.40 */
	DWG_AUTODESK_AUTOCAD_RELEASE_1_40 = 1135,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.05 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_05 = 1136,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.10 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_10 = 1137,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.21 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_21 = 1138,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.22 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_22 = 1139,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.50 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_50 = 1140,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 2.60 */
	DWG_AUTODESK_AUTOCAD_RELEASE_2_60 = 1141,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 9 */
	DWG_AUTODESK_AUTOCAD_RELEASE_9 = 1142,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 10 */
	DWG_AUTODESK_AUTOCAD_RELEASE_10 = 1143,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 11/12 */
	DWG_AUTODESK_AUTOCAD_RELEASE_11_12 = 1144,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 13 */
	DWG_AUTODESK_AUTOCAD_RELEASE_13 = 1145,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD Release 14 */
	DWG_AUTODESK_AUTOCAD_RELEASE_14 = 1146,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD 2000/2002 */
	DWG_AUTODESK_AUTOCAD_2000_2002 = 1147,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD 2004/2005/2006 */
	DWG_AUTODESK_AUTOCAD_2004_2005_2006 = 1148,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD 2007/2008/2009 */
	DWG_AUTODESK_AUTOCAD_2007_2008_2009 = 1149,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD 2010/2011/2012 */
	DWG_AUTODESK_AUTOCAD_2010_2011_2012 = 1150,

	/* category: cad */
	/* description: DWG AutoDesk AutoCAD 2013/2014 */
	DWG_AUTODESK_AUTOCAD_2013_2014 = 1151,

	/* category: cad */
	/* description: Kompas drawing 12.0 SP1 */
	KOMPAS_DRAWING_12_0_SP1 = 1152,

	/* category: cad */
	/* description: Kompas drawing 12.0 */
	KOMPAS_DRAWING_12_0 = 1153,

	/* category: cad */
	/* description: Kompas drawing 11.0 SP1 */
	KOMPAS_DRAWING_11_0_SP1 = 1154,

	/* category: cad */
	/* description: Kompas drawing 11.0 */
	KOMPAS_DRAWING_11_0 = 1155,

	/* category: cad */
	/* description: Kompas drawing 10.0 SP1 */
	KOMPAS_DRAWING_10_0_SP1 = 1156,

	/* category: cad */
	/* description: Kompas drawing 10.0 */
	KOMPAS_DRAWING_10_0 = 1157,

	/* category: cad */
	/* description: Kompas drawing 9.0 SP1 */
	KOMPAS_DRAWING_9_0_SP1 = 1158,

	/* category: cad */
	/* description: Kompas drawing 9.0 */
	KOMPAS_DRAWING_9_0 = 1159,

	/* category: cad */
	/* description: Kompas drawing 8+ */
	KOMPAS_DRAWING_8P = 1160,

	/* category: cad */
	/* description: Kompas drawing 8.0 */
	KOMPAS_DRAWING_8_0 = 1161,

	/* category: cad */
	/* description: Kompas drawing 7+ */
	KOMPAS_DRAWING_7P = 1162,

	/* category: cad */
	/* description: Kompas drawing 7.0 */
	KOMPAS_DRAWING_7_0 = 1163,

	/* category: cad */
	/* description: Kompas drawing 6+ */
	KOMPAS_DRAWING_6P = 1164,

	/* category: cad */
	/* description: Kompas drawing 6.0 */
	KOMPAS_DRAWING_6_0 = 1165,

	/* category: cad */
	/* description: Kompas drawing 5.11R03 */
	KOMPAS_DRAWING_5_11R03 = 1166,

	/* category: cad */
	/* description: Kompas drawing 5.11R02 */
	KOMPAS_DRAWING_5_11R02 = 1167,

	/* category: cad */
	/* description: Kompas drawing 5.11R01 */
	KOMPAS_DRAWING_5_11R01 = 1168,

	/* category: cad */
	/* description: Kompas drawing 5.10R03 */
	KOMPAS_DRAWING_5_10R03 = 1169,

	/* category: cad */
	/* description: Kompas drawing 5.10R02 mar */
	KOMPAS_DRAWING_5_10R02_MAR = 1170,

	/* category: cad */
	/* description: Kompas drawing 5.10R02 febr */
	KOMPAS_DRAWING_5_10R02_FEBR = 1171,

	/* category: cad */
	/* description: Kompas drawing 5.10R01 */
	KOMPAS_DRAWING_5_10R01 = 1172,

	/* category: cad */
	/* description: Kompas drawing 5.9R01.003 */
	KOMPAS_DRAWING_5_9R01_003 = 1173,

	/* category: cad */
	/* description: Kompas drawing 5.9R01.002 */
	KOMPAS_DRAWING_5_9R01_002 = 1174,

	/* category: cad */
	/* description: Kompas drawing 5.8R01.003 */
	KOMPAS_DRAWING_5_8R01_003 = 1175,

	/* category: cad */
	/* description: Bentley/Intergraph MicroStation DGN cell library */
	BENTLEY_INTERGRAPH_MICROSTATION_DGN_CELL_LIBRARY = 1176,

	/* category: cad */
	/* description: Bentley/Intergraph MicroStation DGN vector CAD */
	BENTLEY_INTERGRAPH_MICROSTATION_DGN_VECTOR_CAD = 1177,

	/* category: cad */
	/* description: Bentley/Intergraph MicroStation */
	BENTLEY_INTERGRAPH_MICROSTATION = 1178,

	/* category: cad */
	/* description: Bentley/Intergraph MicroStation CIT raster CAD */
	BENTLEY_INTERGRAPH_MICROSTATION_CIT_RASTER_CAD = 1179,

	/* category: cad */
	/* description: 3D Studio model */
	A_3D_STUDIO_MODEL = 1180,

	/* category: cad */
	/* description: MegaCAD 2D/3D drawing */
	MEGACAD_2D_3D_DRAWING = 1181,

	/* category: cad */
	/* description: OpenHSF (Hoops Stream Format) */
	OPENHSF_HOOPS_STREAM_FORMAT = 1182,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT = 1183,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, R10 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_R10 = 1184,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, R11/R12 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_R11_R12 = 1185,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, R13 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_R13 = 1186,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, R14 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_R14 = 1187,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, version 2000 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_VERSION_2000 = 1188,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, version 2004 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_VERSION_2004 = 1189,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, version 2007 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_VERSION_2007 = 1190,

	/* category: cad */
	/* description: AutoCAD Drawing Exchange Format, version 2010 */
	AUTOCAD_DRAWING_EXCHANGE_FORMAT_VERSION_2010 = 1191,

	/* category: cad */
	/* description: SketchUp Model */
	SKETCHUP_MODEL = 1192,

	/* category: cafebabe */
	/* description: compiled Java class data, */
	COMPILED_JAVA_CLASS_DATA = 1193,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.2) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_2 = 1194,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.3) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_3 = 1195,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.4) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_4 = 1196,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.5) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_5 = 1197,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.6) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_6 = 1198,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.7) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_7 = 1199,

	/* category: cafebabe */
	/* description: compiled Java class data, (Java 1.8) */
	COMPILED_JAVA_CLASS_DATA_JAVA_1_8 = 1200,

	/* category: cafebabe */
	/* description: JAR compressed with pack200, */
	JAR_COMPRESSED_WITH_PACK200 = 1201,

	/* category: cafebabe */
	/* description: Mach-O universal binary with 1 architecture: */
	MACH_O_UNIVERSAL_BINARY_WITH_1_ARCHITECTURE = 1202,

	/* category: cafebabe */
	/* description: Mach-O universal binary with %d architectures: */
	MACH_O_UNIVERSAL_BINARY_WITH_DD_ARCHITECTURES = 1203,

	/* category: cbor */
	/* description: Concise Binary Object Representation (CBOR) container */
	CONCISE_BINARY_OBJECT_REPRESENTATION_CBOR_CONTAINER = 1204,

	/* category: cddb */
	/* description: CDDB(tm) format CD text data */
	CDDB_TM_FORMAT_CD_TEXT_DATA = 1205,

	/* category: chord */
	/* description: Chord text file */
	CHORD_TEXT_FILE = 1206,

	/* category: chord */
	/* description: Power-Tab v3 Tablature File */
	POWER_TAB_V3_TABLATURE_FILE = 1207,

	/* category: chord */
	/* description: Power-Tab v4 Tablature File */
	POWER_TAB_V4_TABLATURE_FILE = 1208,

	/* category: cisco */
	/* description: cisco IOS microcode */
	CISCO_IOS_MICROCODE = 1209,

	/* category: cisco */
	/* description: cisco IOS experimental microcode */
	CISCO_IOS_EXPERIMENTAL_MICROCODE = 1210,

	/* category: citrus */
	/* description: Citrus locale declaration for LC_CTYPE */
	CITRUS_LOCALE_DECLARATION_FOR_LC_CTYPE = 1211,

	/* category: clarion */
	/* description: Clarion Developer (v2 and above) data file */
	CLARION_DEVELOPER_V2_AND_ABOVE_DATA_FILE = 1212,

	/* category: clarion */
	/* description: Clarion Developer (v2 and above) memo data */
	CLARION_DEVELOPER_V2_AND_ABOVE_MEMO_DATA = 1213,

	/* category: clarion */
	/* description: Clarion Developer (v2 and above) help data */
	CLARION_DEVELOPER_V2_AND_ABOVE_HELP_DATA = 1214,

	/* category: claris */
	/* description: Claris clip art */
	CLARIS_CLIP_ART = 1215,

	/* category: claris */
	/* description: Claris Works palette files .plt */
	CLARIS_WORKS_PALETTE_FILES_PLT = 1216,

	/* category: claris */
	/* description: Claris works dictionary */
	CLARIS_WORKS_DICTIONARY = 1217,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) */
	CLIPPER_COFF_EXECUTABLE_VAX = 1218,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) (impure) */
	CLIPPER_COFF_EXECUTABLE_VAX_IMPURE = 1219,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) (5.2 compatible) */
	CLIPPER_COFF_EXECUTABLE_VAX_5_2_COMPATIBLE = 1220,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) (pure) */
	CLIPPER_COFF_EXECUTABLE_VAX_PURE = 1221,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) (demand paged) */
	CLIPPER_COFF_EXECUTABLE_VAX_DEMAND_PAGED = 1222,

	/* category: clipper */
	/* description: CLIPPER COFF executable (VAX #) (target shared library) */
	CLIPPER_COFF_EXECUTABLE_VAX_TARGET_SHARED_LIBRARY = 1223,

	/* category: clipper */
	/* description: CLIPPER COFF executable */
	CLIPPER_COFF_EXECUTABLE = 1224,

	/* category: clipper */
	/* description: CLIPPER COFF executable C1 R1 */
	CLIPPER_COFF_EXECUTABLE_C1_R1 = 1225,

	/* category: clipper */
	/* description: CLIPPER COFF executable C2 R1 */
	CLIPPER_COFF_EXECUTABLE_C2_R1 = 1226,

	/* category: clipper */
	/* description: CLIPPER COFF executable C3 R1 */
	CLIPPER_COFF_EXECUTABLE_C3_R1 = 1227,

	/* category: clipper */
	/* description: CLIPPER COFF executable TEST */
	CLIPPER_COFF_EXECUTABLE_TEST = 1228,

	/* category: clipper */
	/* description: CLIPPER instruction trace */
	CLIPPER_INSTRUCTION_TRACE = 1229,

	/* category: clipper */
	/* description: CLIPPER instruction profile */
	CLIPPER_INSTRUCTION_PROFILE = 1230,

	/* category: clojure */
	/* description: Clojure script text executable */
	CLOJURE_SCRIPT_TEXT_EXECUTABLE = 1231,

	/* category: clojure */
	/* description: Clojure module source text */
	CLOJURE_MODULE_SOURCE_TEXT = 1232,

	/* category: commands */
	/* description: POSIX shell script text executable */
	POSIX_SHELL_SCRIPT_TEXT_EXECUTABLE = 1233,

	/* category: commands */
	/* description: POSIX shell script executable (binary data) */
	POSIX_SHELL_SCRIPT_EXECUTABLE_BINARY_DATA = 1234,

	/* category: commands */
	/* description: C shell script text executable */
	C_SHELL_SCRIPT_TEXT_EXECUTABLE = 1235,

	/* category: commands */
	/* description: Korn shell script text executable */
	KORN_SHELL_SCRIPT_TEXT_EXECUTABLE = 1236,

	/* category: commands */
	/* description: Korn shell script executable (binary data) */
	KORN_SHELL_SCRIPT_EXECUTABLE_BINARY_DATA = 1237,

	/* category: commands */
	/* description: Tenex C shell script text executable */
	TENEX_C_SHELL_SCRIPT_TEXT_EXECUTABLE = 1238,

	/* category: commands */
	/* description: Paul Falstad's zsh script text executable */
	PAUL_FALSTAD_S_ZSH_SCRIPT_TEXT_EXECUTABLE = 1239,

	/* category: commands */
	/* description: Neil Brown's ash script text executable */
	NEIL_BROWN_S_ASH_SCRIPT_TEXT_EXECUTABLE = 1240,

	/* category: commands */
	/* description: Neil Brown's ae script text executable */
	NEIL_BROWN_S_AE_SCRIPT_TEXT_EXECUTABLE = 1241,

	/* category: commands */
	/* description: new awk script text executable */
	NEW_AWK_SCRIPT_TEXT_EXECUTABLE = 1242,

	/* category: commands */
	/* description: GNU awk script text executable */
	GNU_AWK_SCRIPT_TEXT_EXECUTABLE = 1243,

	/* category: commands */
	/* description: awk script text executable */
	AWK_SCRIPT_TEXT_EXECUTABLE = 1244,

	/* category: commands */
	/* description: awk or perl script text */
	AWK_OR_PERL_SCRIPT_TEXT = 1245,

	/* category: commands */
	/* description: Plan 9 rc shell script text executable */
	PLAN_9_RC_SHELL_SCRIPT_TEXT_EXECUTABLE = 1246,

	/* category: commands */
	/* description: Bourne-Again shell script text executable */
	BOURNE_AGAIN_SHELL_SCRIPT_TEXT_EXECUTABLE = 1247,

	/* category: commands */
	/* description: Bourne-Again shell script executable (binary data) */
	BOURNE_AGAIN_SHELL_SCRIPT_EXECUTABLE_BINARY_DATA = 1248,

	/* category: commands */
	/* description: PHP script text */
	PHP_SCRIPT_TEXT = 1249,

	/* category: commands */
	/* description: PHP script text executable */
	PHP_SCRIPT_TEXT_EXECUTABLE = 1250,

	/* category: commands */
	/* description: Smarty compiled template */
	SMARTY_COMPILED_TEMPLATE = 1251,

	/* category: commands */
	/* description: PHP script Zend Optimizer data */
	PHP_SCRIPT_ZEND_OPTIMIZER_DATA = 1252,

	/* category: commands */
	/* description: DCL command file */
	DCL_COMMAND_FILE = 1253,

	/* category: commands */
	/* description: Pdmenu configuration file text */
	PDMENU_CONFIGURATION_FILE_TEXT = 1254,

	/* category: communications */
	/* description: TTCN Abstract Test Suite */
	TTCN_ABSTRACT_TEST_SUITE = 1255,

	/* category: communications */
	/* description: Message Sequence Chart (document) */
	MESSAGE_SEQUENCE_CHART_DOCUMENT = 1256,

	/* category: communications */
	/* description: Message Sequence Chart (chart) */
	MESSAGE_SEQUENCE_CHART_CHART = 1257,

	/* category: communications */
	/* description: Message Sequence Chart (subchart) */
	MESSAGE_SEQUENCE_CHART_SUBCHART = 1258,

	/* category: compress */
	/* description: compress'd data */
	COMPRESS_D_DATA = 1259,

	/* category: compress */
	/* description: gzip compressed data */
	GZIP_COMPRESSED_DATA = 1260,

	/* category: compress */
	/* description: gzip compressed data, reserved method */
	GZIP_COMPRESSED_DATA_RESERVED_METHOD = 1261,

	/* category: compress */
	/* description: gzip compressed data, unknown method */
	GZIP_COMPRESSED_DATA_UNKNOWN_METHOD = 1262,

	/* category: compress */
	/* description: packed data */
	PACKED_DATA = 1263,

	/* category: compress */
	/* description: old packed data */
	OLD_PACKED_DATA = 1264,

	/* category: compress */
	/* description: compacted data */
	COMPACTED_DATA = 1265,

	/* category: compress */
	/* description: huf output */
	HUF_OUTPUT = 1266,

	/* category: compress */
	/* description: bzip2 compressed data */
	BZIP2_COMPRESSED_DATA = 1267,

	/* category: compress */
	/* description: bzip compressed data */
	BZIP_COMPRESSED_DATA = 1268,

	/* category: compress */
	/* description: lzip compressed data */
	LZIP_COMPRESSED_DATA = 1269,

	/* category: compress */
	/* description: squeezed data, */
	SQUEEZED_DATA = 1270,

	/* category: compress */
	/* description: crunched data, */
	CRUNCHED_DATA = 1271,

	/* category: compress */
	/* description: LZH compressed data, */
	LZH_COMPRESSED_DATA = 1272,

	/* category: compress */
	/* description: frozen file 2.1 */
	FROZEN_FILE_2_1 = 1273,

	/* category: compress */
	/* description: frozen file 1.0 (or gzip 0.5) */
	FROZEN_FILE_1_0_OR_GZIP_0_5 = 1274,

	/* category: compress */
	/* description: SCO compress -H (LZH) data */
	SCO_COMPRESS_H_LZH_DATA = 1275,

	/* category: compress */
	/* description: lzop compressed data */
	LZOP_COMPRESSED_DATA = 1276,

	/* category: compress */
	/* description: Quasijarus strong compressed data */
	QUASIJARUS_STRONG_COMPRESSED_DATA = 1277,

	/* category: compress */
	/* description: Amiga xpkf.library compressed data */
	AMIGA_XPKF_LIBRARY_COMPRESSED_DATA = 1278,

	/* category: compress */
	/* description: Power Packer 1.1 compressed data */
	POWER_PACKER_1_1_COMPRESSED_DATA = 1279,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, */
	POWER_PACKER_2_0_COMPRESSED_DATA = 1280,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, fast compression */
	POWER_PACKER_2_0_COMPRESSED_DATA_FAST_COMPRESSION = 1281,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, mediocre compression */
	POWER_PACKER_2_0_COMPRESSED_DATA_MEDIOCRE_COMPRESSION = 1282,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, good compression */
	POWER_PACKER_2_0_COMPRESSED_DATA_GOOD_COMPRESSION = 1283,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, very good compression */
	POWER_PACKER_2_0_COMPRESSED_DATA_VERY_GOOD_COMPRESSION = 1284,

	/* category: compress */
	/* description: Power Packer 2.0 compressed data, best compression */
	POWER_PACKER_2_0_COMPRESSED_DATA_BEST_COMPRESSION = 1285,

	/* category: compress */
	/* description: 7-zip archive data, */
	A_7_ZIP_ARCHIVE_DATA = 1286,

	/* category: compress */
	/* description: LZMA compressed data, */
	LZMA_COMPRESSED_DATA = 1287,

	/* category: compress */
	/* description: LZMA compressed data, streamed */
	LZMA_COMPRESSED_DATA_STREAMED = 1288,

	/* category: compress */
	/* description: LZMA compressed data, non-streamed, size %lld */
	LZMA_COMPRESSED_DATA_NON_STREAMED_SIZE_LLLD = 1289,

	/* category: compress */
	/* description: XZ compressed data */
	XZ_COMPRESSED_DATA = 1290,

	/* category: compress */
	/* description: LRZIP compressed data */
	LRZIP_COMPRESSED_DATA = 1291,

	/* category: compress */
	/* description: LZ4 compressed data (v1.4+) */
	LZ4_COMPRESSED_DATA_V1_4P = 1292,

	/* category: compress */
	/* description: LZ4 compressed data (v1.0-v1.3) */
	LZ4_COMPRESSED_DATA_V1_0_V1_3 = 1293,

	/* category: compress */
	/* description: LZ4 compressed data (v0.1-v0.9) */
	LZ4_COMPRESSED_DATA_V0_1_V0_9 = 1294,

	/* category: compress */
	/* description: Zstandard compressed data (v0.2) */
	ZSTANDARD_COMPRESSED_DATA_V0_2 = 1295,

	/* category: compress */
	/* description: Zstandard compressed data (v0.3) */
	ZSTANDARD_COMPRESSED_DATA_V0_3 = 1296,

	/* category: compress */
	/* description: Zstandard compressed data (v0.4) */
	ZSTANDARD_COMPRESSED_DATA_V0_4 = 1297,

	/* category: compress */
	/* description: Zstandard compressed data (v0.5) */
	ZSTANDARD_COMPRESSED_DATA_V0_5 = 1298,

	/* category: compress */
	/* description: Zstandard compressed data (v0.6) */
	ZSTANDARD_COMPRESSED_DATA_V0_6 = 1299,

	/* category: compress */
	/* description: Zstandard compressed data (v0.7) */
	ZSTANDARD_COMPRESSED_DATA_V0_7 = 1300,

	/* category: compress */
	/* description: Zstandard compressed data (v0.8+) */
	ZSTANDARD_COMPRESSED_DATA_V0_8P = 1301,

	/* category: compress */
	/* description: Zstandard dictionary */
	ZSTANDARD_DICTIONARY = 1302,

	/* category: compress */
	/* description: AFX compressed file data */
	AFX_COMPRESSED_FILE_DATA = 1303,

	/* category: compress */
	/* description: FreeArc archive <http://freearc.org> */
	FREEARC_ARCHIVE_HTTP_FREEARC_ORG = 1304,

	/* category: dact */
	/* description: DACT compressed data */
	DACT_COMPRESSED_DATA = 1305,

	/* category: compress */
	/* description: Valve Pak file */
	VALVE_PAK_FILE = 1306,

	/* category: compress */
	/* description: snappy framed data */
	SNAPPY_FRAMED_DATA = 1307,

	/* category: compress */
	/* description: qpress compressed data */
	QPRESS_COMPRESSED_DATA = 1308,

	/* category: compress */
	/* description: zlib compressed data */
	ZLIB_COMPRESSED_DATA = 1309,

	/* category: compress */
	/* description: BWC compressed data */
	BWC_COMPRESSED_DATA = 1310,

	/* category: compress */
	/* description: UCL compressed data */
	UCL_COMPRESSED_DATA = 1311,

	/* category: compress */
	/* description: Softlib archive */
	SOFTLIB_ARCHIVE = 1312,

	/* category: compress */
	/* description: lzfse encoded, no compression */
	LZFSE_ENCODED_NO_COMPRESSION = 1313,

	/* category: compress */
	/* description: lzfse compressed, uncompressed tables */
	LZFSE_COMPRESSED_UNCOMPRESSED_TABLES = 1314,

	/* category: compress */
	/* description: lzfse compressed, compressed tables */
	LZFSE_COMPRESSED_COMPRESSED_TABLES = 1315,

	/* category: compress */
	/* description: lzfse encoded, lzvn compressed */
	LZFSE_ENCODED_LZVN_COMPRESSED = 1316,

	/* category: console */
	/* description: NES ROM image (iNES) */
	NES_ROM_IMAGE_INES = 1317,

	/* category: console */
	/* description: NES ROM image (Wii U Virtual Console) */
	NES_ROM_IMAGE_WII_U_VIRTUAL_CONSOLE = 1318,

	/* category: console */
	/* description: NES ROM image (UNIF v%d format) */
	NES_ROM_IMAGE_UNIF_VDD_FORMAT = 1319,

	/* category: console */
	/* description: Famicom Disk System disk image: */
	FAMICOM_DISK_SYSTEM_DISK_IMAGE = 1320,

	/* category: console */
	/* description: NES ROM image (Nintendo 3DS Virtual Console) */
	NES_ROM_IMAGE_NINTENDO_3DS_VIRTUAL_CONSOLE = 1321,

	/* category: console */
	/* description: NES ROM image (Nintendo 3DS Virtual Console): TNES mapper %u */
	NES_ROM_IMAGE_NINTENDO_3DS_VIRTUAL_CONSOLE_TNES_MAPPER_UU = 1322,

	/* category: console */
	/* description: Game Boy ROM image */
	GAME_BOY_ROM_IMAGE = 1323,

	/* category: console */
	/* description: Sega Mega CD disc image */
	SEGA_MEGA_CD_DISC_IMAGE = 1324,

	/* category: console */
	/* description: Sega 32X ROM image */
	SEGA_32X_ROM_IMAGE = 1325,

	/* category: console */
	/* description: Sega Pico ROM image */
	SEGA_PICO_ROM_IMAGE = 1326,

	/* category: console */
	/* description: Sega Mega CD Boot ROM image */
	SEGA_MEGA_CD_BOOT_ROM_IMAGE = 1327,

	/* category: console */
	/* description: Sega Mega Drive / Genesis ROM image */
	SEGA_MEGA_DRIVE_GENESIS_ROM_IMAGE = 1328,

	/* category: console */
	/* description: Sega Mega Drive / Genesis ROM image (SMD format): */
	SEGA_MEGA_DRIVE_GENESIS_ROM_IMAGE_SMD_FORMAT = 1329,

	/* category: console */
	/* description: Sega Master System ROM image: */
	SEGA_MASTER_SYSTEM_ROM_IMAGE = 1330,

	/* category: console */
	/* description: Sega Game Gear ROM image: */
	SEGA_GAME_GEAR_ROM_IMAGE = 1331,

	/* category: console */
	/* description: Sega Master System / Game Gear ROM image: */
	SEGA_MASTER_SYSTEM_GAME_GEAR_ROM_IMAGE = 1332,

	/* category: console */
	/* description: Sega Saturn disc image */
	SEGA_SATURN_DISC_IMAGE = 1333,

	/* category: console */
	/* description: Sega Dreamcast disc image */
	SEGA_DREAMCAST_DISC_IMAGE = 1334,

	/* category: console */
	/* description: Sega Dreamcast VMU game image */
	SEGA_DREAMCAST_VMU_GAME_IMAGE = 1335,

	/* category: console */
	/* description: Dream Animator file */
	DREAM_ANIMATOR_FILE = 1336,

	/* category: console */
	/* description: Nintendo 64 ROM image */
	NINTENDO_64_ROM_IMAGE = 1337,

	/* category: console */
	/* description: Nintendo 64 ROM image (V64) */
	NINTENDO_64_ROM_IMAGE_V64 = 1338,

	/* category: console */
	/* description: Nintendo 64 ROM image (wordswapped) */
	NINTENDO_64_ROM_IMAGE_WORDSWAPPED = 1339,

	/* category: console */
	/* description: Nintendo 64 ROM image (32-bit byteswapped) */
	NINTENDO_64_ROM_IMAGE_32_BIT_BYTESWAPPED = 1340,

	/* category: console */
	/* description: Game Boy Advance ROM image */
	GAME_BOY_ADVANCE_ROM_IMAGE = 1341,

	/* category: console */
	/* description: Nintendo DS ROM image */
	NINTENDO_DS_ROM_IMAGE = 1342,

	/* category: console */
	/* description: Nintendo DS Slot-2 ROM image (PassMe) */
	NINTENDO_DS_SLOT_2_ROM_IMAGE_PASSME = 1343,

	/* category: console */
	/* description: Neo Geo Pocket */
	NEO_GEO_POCKET = 1344,

	/* category: console */
	/* description: Sony Playstation executable */
	SONY_PLAYSTATION_EXECUTABLE = 1345,

	/* category: console */
	/* description: CPE executable */
	CPE_EXECUTABLE = 1346,

	/* category: console */
	/* description: XBE, Microsoft Xbox executable */
	XBE_MICROSOFT_XBOX_EXECUTABLE = 1347,

	/* category: console */
	/* description: XIP, Microsoft Xbox data */
	XIP_MICROSOFT_XBOX_DATA = 1348,

	/* category: console */
	/* description: XTF, Microsoft Xbox data */
	XTF_MICROSOFT_XBOX_DATA = 1349,

	/* category: console */
	/* description: Lynx homebrew cartridge */
	LYNX_HOMEBREW_CARTRIDGE = 1350,

	/* category: console */
	/* description: Lynx cartridge */
	LYNX_CARTRIDGE = 1351,

	/* category: console */
	/* description: 3DO "Opera" file system */
	A_3DO_OPERA_FILE_SYSTEM = 1352,

	/* category: console */
	/* description: Nintendo Gameboy Music/Audio Data */
	NINTENDO_GAMEBOY_MUSIC_AUDIO_DATA = 1353,

	/* category: console */
	/* description: IPS patch file */
	IPS_PATCH_FILE = 1354,

	/* category: console */
	/* description: Playstation Patch File version 3.0 */
	PLAYSTATION_PATCH_FILE_VERSION_3_0 = 1355,

	/* category: console */
	/* description: Playstation Patch File version 3.0, PPF 1.0 patch */
	PLAYSTATION_PATCH_FILE_VERSION_3_0_PPF_1_0_PATCH = 1356,

	/* category: console */
	/* description: Playstation Patch File version 3.0, PPF 2.0 patch */
	PLAYSTATION_PATCH_FILE_VERSION_3_0_PPF_2_0_PATCH = 1357,

	/* category: console */
	/* description: Playstation Patch File version 3.0, PPF 3.0 patch */
	PLAYSTATION_PATCH_FILE_VERSION_3_0_PPF_3_0_PATCH = 1358,

	/* category: console */
	/* description: Playstation Patch File version 3.0, PPF 3.0 patch, Imagetype BIN (any) */
	PLAYSTATION_PATCH_FILE_VERSION_3_0_PPF_3_0_PATCH_IMAGETYPE_BIN_ANY = 1359,

	/* category: console */
	/* description: Playstation Patch File version 3.0, PPF 3.0 patch, Imagetype GI (PrimoDVD) */
	PLAYSTATION_PATCH_FILE_VERSION_3_0_PPF_3_0_PATCH_IMAGETYPE_GI_PRIMODVD = 1360,

	/* category: console */
	/* description: Playstation Patch File version 2.0 */
	PLAYSTATION_PATCH_FILE_VERSION_2_0 = 1361,

	/* category: console */
	/* description: Playstation Patch File version 2.0, PPF 1.0 patch */
	PLAYSTATION_PATCH_FILE_VERSION_2_0_PPF_1_0_PATCH = 1362,

	/* category: console */
	/* description: Playstation Patch File version 2.0, PPF 2.0 patch */
	PLAYSTATION_PATCH_FILE_VERSION_2_0_PPF_2_0_PATCH = 1363,

	/* category: console */
	/* description: Playstation Patch File version 1.0 */
	PLAYSTATION_PATCH_FILE_VERSION_1_0 = 1364,

	/* category: console */
	/* description: SNES9x input recording */
	SNES9X_INPUT_RECORDING = 1365,

	/* category: console */
	/* description: ScummVM savegame */
	SCUMMVM_SAVEGAME = 1366,

	/* category: console */
	/* description: Nintendo GameCube disc image: */
	NINTENDO_GAMECUBE_DISC_IMAGE = 1367,

	/* category: console */
	/* description: Nintendo GameCube embedded disc image: */
	NINTENDO_GAMECUBE_EMBEDDED_DISC_IMAGE = 1368,

	/* category: console */
	/* description: Nintendo Wii disc image: */
	NINTENDO_WII_DISC_IMAGE = 1369,

	/* category: console */
	/* description: Nintendo Wii disc image (WBFS format): */
	NINTENDO_WII_DISC_IMAGE_WBFS_FORMAT = 1370,

	/* category: console */
	/* description: Nintendo GameCube disc image (CISO format): */
	NINTENDO_GAMECUBE_DISC_IMAGE_CISO_FORMAT = 1371,

	/* category: console */
	/* description: Nintendo GameCube disc image (GCZ format) */
	NINTENDO_GAMECUBE_DISC_IMAGE_GCZ_FORMAT = 1372,

	/* category: console */
	/* description: Nintendo Wii disc image (GCZ format) */
	NINTENDO_WII_DISC_IMAGE_GCZ_FORMAT = 1373,

	/* category: console */
	/* description: Nintendo GameCube/Wii disc image (GCZ format) */
	NINTENDO_GAMECUBE_WII_DISC_IMAGE_GCZ_FORMAT = 1374,

	/* category: console */
	/* description: Nintendo GameCube disc image (WDFv1 format): */
	NINTENDO_GAMECUBE_DISC_IMAGE_WDFV1_FORMAT = 1375,

	/* category: console */
	/* description: Nintendo GameCube disc image (WDFv2 format): */
	NINTENDO_GAMECUBE_DISC_IMAGE_WDFV2_FORMAT = 1376,

	/* category: console */
	/* description: Nintendo */
	NINTENDO = 1377,

	/* category: console */
	/* description: Nintendo GameCube */
	NINTENDO_GAMECUBE = 1378,

	/* category: console */
	/* description: Nintendo Wii */
	NINTENDO_WII = 1379,

	/* category: console */
	/* description: Nintendo GameCube/Wii */
	NINTENDO_GAMECUBE_WII = 1380,

	/* category: console */
	/* description: Nintendo Wii SDK disc image: */
	NINTENDO_WII_SDK_DISC_IMAGE = 1381,

	/* category: console */
	/* description: Nintendo 3DS Game Card image */
	NINTENDO_3DS_GAME_CARD_IMAGE = 1382,

	/* category: console */
	/* description: Nintendo 3DS */
	NINTENDO_3DS = 1383,

	/* category: console */
	/* description: Nintendo 3DS File Archive (CFA) */
	NINTENDO_3DS_FILE_ARCHIVE_CFA = 1384,

	/* category: console */
	/* description: Nintendo 3DS Executable Image (CXI) */
	NINTENDO_3DS_EXECUTABLE_IMAGE_CXI = 1385,

	/* category: console */
	/* description: Nintendo 3DS SMDH file */
	NINTENDO_3DS_SMDH_FILE = 1386,

	/* category: console */
	/* description: Nintendo 3DS Homebrew Application (3DSX) */
	NINTENDO_3DS_HOMEBREW_APPLICATION_3DSX = 1387,

	/* category: console */
	/* description: Atari 7800 ROM image */
	ATARI_7800_ROM_IMAGE = 1388,

	/* category: console */
	/* description: Vectrex ROM image */
	VECTREX_ROM_IMAGE = 1389,

	/* category: console */
	/* description: Nintendo amiibo NFC dump - amiibo ID: %08X- */
	NINTENDO_AMIIBO_NFC_DUMP_AMIIBO_ID_XX = 1390,

	/* category: convex */
	/* description: Convex old-style object */
	CONVEX_OLD_STYLE_OBJECT = 1391,

	/* category: convex */
	/* description: Convex old-style object not stripped */
	CONVEX_OLD_STYLE_OBJECT_NOT_STRIPPED = 1392,

	/* category: convex */
	/* description: Convex old-style demand paged executable */
	CONVEX_OLD_STYLE_DEMAND_PAGED_EXECUTABLE = 1393,

	/* category: convex */
	/* description: Convex old-style demand paged executable not stripped */
	CONVEX_OLD_STYLE_DEMAND_PAGED_EXECUTABLE_NOT_STRIPPED = 1394,

	/* category: convex */
	/* description: Convex old-style pre-paged executable */
	CONVEX_OLD_STYLE_PRE_PAGED_EXECUTABLE = 1395,

	/* category: convex */
	/* description: Convex old-style pre-paged executable not stripped */
	CONVEX_OLD_STYLE_PRE_PAGED_EXECUTABLE_NOT_STRIPPED = 1396,

	/* category: convex */
	/* description: Convex old-style pre-paged, non-swapped executable */
	CONVEX_OLD_STYLE_PRE_PAGED_NON_SWAPPED_EXECUTABLE = 1397,

	/* category: convex */
	/* description: Convex old-style pre-paged, non-swapped executable not stripped */
	CONVEX_OLD_STYLE_PRE_PAGED_NON_SWAPPED_EXECUTABLE_NOT_STRIPPED = 1398,

	/* category: hp */
	/* description: core file */
	CORE_FILE = 1399,

	/* category: convex */
	/* description: dump format, 4.2 or 4.3 BSD (IDC compatible) */
	DUMP_FORMAT_4_2_OR_4_3_BSD_IDC_COMPATIBLE = 1400,

	/* category: convex */
	/* description: dump format, Convex Storage Manager by-reference dump */
	DUMP_FORMAT_CONVEX_STORAGE_MANAGER_BY_REFERENCE_DUMP = 1401,

	/* category: convex */
	/* description: Convex SOFF */
	CONVEX_SOFF = 1402,

	/* category: convex */
	/* description: Convex SOFF c1 */
	CONVEX_SOFF_C1 = 1403,

	/* category: convex */
	/* description: Convex SOFF c2 */
	CONVEX_SOFF_C2 = 1404,

	/* category: convex */
	/* description: Convex SOFF core */
	CONVEX_SOFF_CORE = 1405,

	/* category: convex */
	/* description: Convex SOFF checkpoint */
	CONVEX_SOFF_CHECKPOINT = 1406,

	/* category: convex */
	/* description: Convex SOFF checkpoint c1 */
	CONVEX_SOFF_CHECKPOINT_C1 = 1407,

	/* category: convex */
	/* description: Convex SOFF checkpoint c2 */
	CONVEX_SOFF_CHECKPOINT_C2 = 1408,

	/* category: coverage */
	/* description: GCC gcno coverage (-ftest-coverage), */
	GCC_GCNO_COVERAGE_FTEST_COVERAGE = 1409,

	/* category: coverage */
	/* description: GCC gcda coverage (-fprofile-arcs), */
	GCC_GCDA_COVERAGE_FPROFILE_ARCS = 1410,

	/* category: coverage */
	/* description: LCOV coverage tracefile */
	LCOV_COVERAGE_TRACEFILE = 1411,

	/* category: coverage */
	/* description: GCOV coverage report */
	GCOV_COVERAGE_REPORT = 1412,

	/* category: coverage */
	/* description: LLVM raw profile data, */
	LLVM_RAW_PROFILE_DATA = 1413,

	/* category: coverage */
	/* description: LLVM indexed profile data, */
	LLVM_INDEXED_PROFILE_DATA = 1414,

	/* category: cracklib */
	/* description: Cracklib password index, little endian */
	CRACKLIB_PASSWORD_INDEX_LITTLE_ENDIAN = 1415,

	/* category: cracklib */
	/* description: Cracklib password index, little endian (%i words) */
	CRACKLIB_PASSWORD_INDEX_LITTLE_ENDIAN_II_WORDS = 1416,

	/* category: cracklib */
	/* description: Cracklib password index, little endian ("64-bit") */
	CRACKLIB_PASSWORD_INDEX_LITTLE_ENDIAN_64_BIT = 1417,

	/* category: cracklib */
	/* description: Cracklib password index, little endian ("64-bit") (%i words) */
	CRACKLIB_PASSWORD_INDEX_LITTLE_ENDIAN_64_BIT_II_WORDS = 1418,

	/* category: cracklib */
	/* description: Cracklib password index, big endian */
	CRACKLIB_PASSWORD_INDEX_BIG_ENDIAN = 1419,

	/* category: cracklib */
	/* description: Cracklib password index, big endian (%i words) */
	CRACKLIB_PASSWORD_INDEX_BIG_ENDIAN_II_WORDS = 1420,

	/* category: cracklib */
	/* description: Cracklib password index, big endian ("64-bit") */
	CRACKLIB_PASSWORD_INDEX_BIG_ENDIAN_64_BIT = 1421,

	/* category: cracklib */
	/* description: Cracklib password index, big endian ("64-bit") (%i words) */
	CRACKLIB_PASSWORD_INDEX_BIG_ENDIAN_64_BIT_II_WORDS = 1422,

	/* category: ctags */
	/* description: Exuberant Ctags tag file text */
	EXUBERANT_CTAGS_TAG_FILE_TEXT = 1423,

	/* category: ctf */
	/* description: Common Trace Format (CTF) trace data (LE) */
	COMMON_TRACE_FORMAT_CTF_TRACE_DATA_LE = 1424,

	/* category: ctf */
	/* description: Common Trace Format (CTF) trace data (BE) */
	COMMON_TRACE_FORMAT_CTF_TRACE_DATA_BE = 1425,

	/* category: ctf */
	/* description: Common Trace Format (CTF) packetized metadata (LE) */
	COMMON_TRACE_FORMAT_CTF_PACKETIZED_METADATA_LE = 1426,

	/* category: ctf */
	/* description: Common Trace Format (CTF) packetized metadata (BE) */
	COMMON_TRACE_FORMAT_CTF_PACKETIZED_METADATA_BE = 1427,

	/* category: ctf */
	/* description: Common Trace Format (CTF) plain text metadata */
	COMMON_TRACE_FORMAT_CTF_PLAIN_TEXT_METADATA = 1428,

	/* category: cubemap */
	/* description: Map file for the AssaultCube FPS game */
	MAP_FILE_FOR_THE_ASSAULTCUBE_FPS_GAME = 1429,

	/* category: cubemap */
	/* description: Map file for cube and cube2 engine games */
	MAP_FILE_FOR_CUBE_AND_CUBE2_ENGINE_GAMES = 1430,

	/* category: cubemap */
	/* description: Map file for the Blood Frontier/Red Eclipse FPS games */
	MAP_FILE_FOR_THE_BLOOD_FRONTIER_RED_ECLIPSE_FPS_GAMES = 1431,

	/* category: cups */
	/* description: Cups Raster version 1, Big Endian */
	CUPS_RASTER_VERSION_1_BIG_ENDIAN = 1432,

	/* category: cups */
	/* description: Cups Raster version 2, Big Endian */
	CUPS_RASTER_VERSION_2_BIG_ENDIAN = 1433,

	/* category: cups */
	/* description: Cups Raster version 3, Big Endian */
	CUPS_RASTER_VERSION_3_BIG_ENDIAN = 1434,

	/* category: cups */
	/* description: Cups Raster version 1, Little Endian */
	CUPS_RASTER_VERSION_1_LITTLE_ENDIAN = 1435,

	/* category: cups */
	/* description: Cups Raster version 2, Little Endian */
	CUPS_RASTER_VERSION_2_LITTLE_ENDIAN = 1436,

	/* category: cups */
	/* description: Cups Raster version 3, Little Endian */
	CUPS_RASTER_VERSION_3_LITTLE_ENDIAN = 1437,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, big endian, 32-bit */
	GNU_DBM_1_X_OR_NDBM_DATABASE_BIG_ENDIAN_32_BIT = 1438,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, big endian, old */
	GNU_DBM_1_X_OR_NDBM_DATABASE_BIG_ENDIAN_OLD = 1439,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, big endian, 64-bit */
	GNU_DBM_1_X_OR_NDBM_DATABASE_BIG_ENDIAN_64_BIT = 1440,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, little endian, 32-bit */
	GNU_DBM_1_X_OR_NDBM_DATABASE_LITTLE_ENDIAN_32_BIT = 1441,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, little endian, old */
	GNU_DBM_1_X_OR_NDBM_DATABASE_LITTLE_ENDIAN_OLD = 1442,

	/* category: database */
	/* description: GNU dbm 1.x or ndbm database, little endian, 64-bit */
	GNU_DBM_1_X_OR_NDBM_DATABASE_LITTLE_ENDIAN_64_BIT = 1443,

	/* category: database */
	/* description: GNU dbm 2.x database */
	GNU_DBM_2_X_DATABASE = 1444,

	/* category: database */
	/* description: Berkeley DB */
	BERKELEY_DB = 1445,

	/* category: database */
	/* description: Berkeley DB 1.86 */
	BERKELEY_DB_1_86 = 1446,

	/* category: database */
	/* description: Berkeley DB 1.85 */
	BERKELEY_DB_1_85 = 1447,

	/* category: database */
	/* description: Berkeley DB 1.85/1.86 */
	BERKELEY_DB_1_85_1_86 = 1448,

	/* category: database */
	/* description: Berkeley DB 1.85/1.86 (Btree, version %d, little-endian) */
	BERKELEY_DB_1_85_1_86_BTREE_VERSION_DD_LITTLE_ENDIAN = 1449,

	/* category: database */
	/* description: Berkeley DB (Hash, version %d, little-endian) */
	BERKELEY_DB_HASH_VERSION_DD_LITTLE_ENDIAN = 1450,

	/* category: database */
	/* description: Berkeley DB (Btree, version %d, little-endian) */
	BERKELEY_DB_BTREE_VERSION_DD_LITTLE_ENDIAN = 1451,

	/* category: database */
	/* description: Berkeley DB (Queue, version %d, little-endian) */
	BERKELEY_DB_QUEUE_VERSION_DD_LITTLE_ENDIAN = 1452,

	/* category: database */
	/* description: RRDTool DB */
	RRDTOOL_DB = 1453,

	/* category: database */
	/* description: ROOT file */
	ROOT_FILE = 1454,

	/* category: database */
	/* description: FoxBase */
	FOXBASE = 1455,

	/* category: database */
	/* description: FoxBase+/dBase III */
	FOXBASEP_DBASE_III = 1456,

	/* category: database */
	/* description: dBase IV */
	DBASE_IV = 1457,

	/* category: database */
	/* description: dBase V */
	DBASE_V = 1458,

	/* category: database */
	/* description: Visual FoxPro */
	VISUAL_FOXPRO = 1459,

	/* category: database */
	/* description: Visual FoxPro, autoincrement */
	VISUAL_FOXPRO_AUTOINCREMENT = 1460,

	/* category: database */
	/* description: Visual FoxPro, with field type Varchar */
	VISUAL_FOXPRO_WITH_FIELD_TYPE_VARCHAR = 1461,

	/* category: database */
	/* description: dBase IV, with SQL table */
	DBASE_IV_WITH_SQL_TABLE = 1462,

	/* category: database */
	/* description: dBase IV, with memo */
	DBASE_IV_WITH_MEMO = 1463,

	/* category: database */
	/* description: FoxBase+/dBase III, with memo .DBT */
	FOXBASEP_DBASE_III_WITH_MEMO_DBT = 1464,

	/* category: database */
	/* description: VISUAL OBJECTS, with memo file */
	VISUAL_OBJECTS_WITH_MEMO_FILE = 1465,

	/* category: database */
	/* description: dBase IV, with memo .DBT */
	DBASE_IV_WITH_MEMO_DBT = 1466,

	/* category: database */
	/* description: Flagship */
	FLAGSHIP = 1467,

	/* category: database */
	/* description: dBase IV with SQL table, with memo .DBT */
	DBASE_IV_WITH_SQL_TABLE_WITH_MEMO_DBT = 1468,

	/* category: database */
	/* description: Clipper SIX with memo */
	CLIPPER_SIX_WITH_MEMO = 1469,

	/* category: database */
	/* description: FoxPro with memo */
	FOXPRO_WITH_MEMO = 1470,

	/* category: database */
	/* description: xBase */
	XBASE = 1471,

	/* category: database */
	/* description:  DBF */
	DBF = 1472,

	/* category: database */
	/* description:  DBF, no records */
	DBF_NO_RECORDS = 1473,

	/* category: database */
	/* description:  MDX */
	MDX = 1474,

	/* category: database */
	/* description: dBase III DBT */
	DBASE_III_DBT = 1475,

	/* category: database */
	/* description: FoxPro FPT */
	FOXPRO_FPT = 1476,

	/* category: database */
	/* description: dBase IV DBT */
	DBASE_IV_DBT = 1477,

	/* category: database */
	/* description: Microsoft Access Database */
	MICROSOFT_ACCESS_DATABASE = 1478,

	/* category: database */
	/* description: Extensible storage engine */
	EXTENSIBLE_STORAGE_ENGINE = 1479,

	/* category: database */
	/* description: Extensible storage engine DataBase */
	EXTENSIBLE_STORAGE_ENGINE_DATABASE = 1480,

	/* category: database */
	/* description: Extensible storage engine STreaMing */
	EXTENSIBLE_STORAGE_ENGINE_STREAMING = 1481,

	/* category: database */
	/* description: Windows application compatibility Shim DataBase */
	WINDOWS_APPLICATION_COMPATIBILITY_SHIM_DATABASE = 1482,

	/* category: database */
	/* description: TDB database */
	TDB_DATABASE = 1483,

	/* category: database */
	/* description: TDB database version 6, little-endian */
	TDB_DATABASE_VERSION_6_LITTLE_ENDIAN = 1484,

	/* category: linux */
	/* description: SE Linux policy */
	SE_LINUX_POLICY = 1485,

	/* category: database */
	/* description: ICE authority data */
	ICE_AUTHORITY_DATA = 1486,

	/* category: database */
	/* description: X11 Xauthority data */
	X11_XAUTHORITY_DATA = 1487,

	/* category: database */
	/* description: PostgreSQL custom database dump */
	POSTGRESQL_CUSTOM_DATABASE_DUMP = 1488,

	/* category: database */
	/* description: PostgreSQL custom database dump-0 */
	POSTGRESQL_CUSTOM_DATABASE_DUMP_0 = 1489,

	/* category: database */
	/* description: CGNS Advanced Data Format */
	CGNS_ADVANCED_DATA_FORMAT = 1490,

	/* category: database */
	/* description: Tokyo Cabinet */
	TOKYO_CABINET = 1491,

	/* category: database */
	/* description: Tokyo Cabinet (%s) */
	TOKYO_CABINET_SS = 1492,

	/* category: database */
	/* description: Tokyo Cabinet, Hash */
	TOKYO_CABINET_HASH = 1493,

	/* category: database */
	/* description: Tokyo Cabinet, B+ tree */
	TOKYO_CABINET_BP_TREE = 1494,

	/* category: database */
	/* description: Tokyo Cabinet, Fixed-length */
	TOKYO_CABINET_FIXED_LENGTH = 1495,

	/* category: database */
	/* description: Tokyo Cabinet, Table */
	TOKYO_CABINET_TABLE = 1496,

	/* category: database */
	/* description: Quick Database Manager, little endian */
	QUICK_DATABASE_MANAGER_LITTLE_ENDIAN = 1497,

	/* category: database */
	/* description: Quick Database Manager, big endian */
	QUICK_DATABASE_MANAGER_BIG_ENDIAN = 1498,

	/* category: database */
	/* description: TokyoCabinet database */
	TOKYOCABINET_DATABASE = 1499,

	/* category: database */
	/* description: Zope Object Database File Storage v3 (data) */
	ZOPE_OBJECT_DATABASE_FILE_STORAGE_V3_DATA = 1500,

	/* category: database */
	/* description: Zope Object Database File Storage v4 (data) */
	ZOPE_OBJECT_DATABASE_FILE_STORAGE_V4_DATA = 1501,

	/* category: database */
	/* description: Zope Object Database Client Cache File (data) */
	ZOPE_OBJECT_DATABASE_CLIENT_CACHE_FILE_DATA = 1502,

	/* category: database */
	/* description: IDA (Interactive Disassembler) database */
	IDA_INTERACTIVE_DISASSEMBLER_DATABASE = 1503,

	/* category: database */
	/* description: Hopper database */
	HOPPER_DATABASE = 1504,

	/* category: database */
	/* description: Panorama database */
	PANORAMA_DATABASE = 1505,

	/* category: database */
	/* description: askSam DB */
	ASKSAM_DB = 1506,

	/* category: database */
	/* description: MUIbase DB */
	MUIBASE_DB = 1507,

	/* category: database */
	/* description: NetBSD Constant Database */
	NETBSD_CONSTANT_DATABASE = 1508,

	/* category: database */
	/* description: Redis RDB file, */
	REDIS_RDB_FILE = 1509,

	/* category: database */
	/* description: Mozilla Mork database */
	MOZILLA_MORK_DATABASE = 1510,

	/* category: dataone */
	/* description: eml://ecoinformatics.org/%s */
	EML_ECOINFORMATICS_ORG_SS = 1511,

	/* category: dataone */
	/* description: http://ns.dataone.org/metadata/schema/onedcx/v1.0 */
	HTTP_NS_DATAONE_ORG_METADATA_SCHEMA_ONEDCX_V1_0 = 1512,

	/* category: dataone */
	/* description: FGDC-STD-001-1998 */
	FGDC_STD_001_1998 = 1513,

	/* category: dataone */
	/* description: http://purl.org/ornl/schema/mercury/terms/v1.0 */
	HTTP_PURL_ORG_ORNL_SCHEMA_MERCURY_TERMS_V1_0 = 1514,

	/* category: dataone */
	/* description: http://www.isotc211.org/2005/gmd */
	HTTP_WWW_ISOTC211_ORG_2005_GMD = 1515,

	/* category: dataone */
	/* description: http://www.isotc211.org/2005/gmd-noaa */
	HTTP_WWW_ISOTC211_ORG_2005_GMD_NOAA = 1516,

	/* category: dataone */
	/* description: http://www.isotc211.org/2005/gmd-pangaea */
	HTTP_WWW_ISOTC211_ORG_2005_GMD_PANGAEA = 1517,

	/* category: dataone */
	/* description: http://www.openarchives.org/ore/terms */
	HTTP_WWW_OPENARCHIVES_ORG_ORE_TERMS = 1518,

	/* category: dataone */
	/* description: http://datadryad.org/profile/v3.1 */
	HTTP_DATADRYAD_ORG_PROFILE_V3_1 = 1519,

	/* category: dbpf */
	/* description: Maxis Database Packed File */
	MAXIS_DATABASE_PACKED_FILE = 1520,

	/* category: der */
	/* description: DER Encoded Certificate request */
	DER_ENCODED_CERTIFICATE_REQUEST = 1521,

	/* category: der */
	/* description: DER Encoded Key Pair, 512 bits */
	DER_ENCODED_KEY_PAIR_512_BITS = 1522,

	/* category: der */
	/* description: DER Encoded Key Pair, 1024 bits */
	DER_ENCODED_KEY_PAIR_1024_BITS = 1523,

	/* category: der */
	/* description: DER Encoded Key Pair, 2048 bits */
	DER_ENCODED_KEY_PAIR_2048_BITS = 1524,

	/* category: der */
	/* description: DER Encoded Key Pair, 4096 bits */
	DER_ENCODED_KEY_PAIR_4096_BITS = 1525,

	/* category: der */
	/* description: DER Encoded Key Pair, 8192 bits */
	DER_ENCODED_KEY_PAIR_8192_BITS = 1526,

	/* category: der */
	/* description: DER Encoded Key Pair, 16k bits */
	DER_ENCODED_KEY_PAIR_16K_BITS = 1527,

	/* category: der */
	/* description: DER Encoded Key Pair, 32k bits */
	DER_ENCODED_KEY_PAIR_32K_BITS = 1528,

	/* category: der */
	/* description: DER Encoded Certificate, 512 bits */
	DER_ENCODED_CERTIFICATE_512_BITS = 1529,

	/* category: der */
	/* description: DER Encoded Certificate, 1024 bits */
	DER_ENCODED_CERTIFICATE_1024_BITS = 1530,

	/* category: der */
	/* description: DER Encoded Certificate, 2048 bits */
	DER_ENCODED_CERTIFICATE_2048_BITS = 1531,

	/* category: der */
	/* description: DER Encoded Certificate, 4096 bits */
	DER_ENCODED_CERTIFICATE_4096_BITS = 1532,

	/* category: der */
	/* description: DER Encoded Certificate, 8192 bits */
	DER_ENCODED_CERTIFICATE_8192_BITS = 1533,

	/* category: der */
	/* description: DER Encoded Certificate, 16k bits */
	DER_ENCODED_CERTIFICATE_16K_BITS = 1534,

	/* category: der */
	/* description: DER Encoded Certificate, 32k bits */
	DER_ENCODED_CERTIFICATE_32K_BITS = 1535,

	/* category: der */
	/* description: DER Encoded Certificate, ? bits (%s) */
	DER_ENCODED_CERTIFICATE_BITS_SS = 1536,

	/* category: diamond */
	/* description: Diamond Multimedia Document */
	DIAMOND_MULTIMEDIA_DOCUMENT = 1537,

	/* category: diff */
	/* description: diff output text */
	DIFF_OUTPUT_TEXT = 1538,

	/* category: diff */
	/* description: RCS/CVS diff output text */
	RCS_CVS_DIFF_OUTPUT_TEXT = 1539,

	/* category: diff */
	/* description: bsdiff(1) patch file */
	BSDIFF_1_PATCH_FILE = 1540,

	/* category: diff */
	/* description: unified diff output text */
	UNIFIED_DIFF_OUTPUT_TEXT = 1541,

	/* category: diff */
	/* description: rdiff network-delta data */
	RDIFF_NETWORK_DELTA_DATA = 1542,

	/* category: diff */
	/* description: rdiff network-delta signature data */
	RDIFF_NETWORK_DELTA_SIGNATURE_DATA = 1543,

	/* category: digital */
	/* description: Alpha archive */
	ALPHA_ARCHIVE = 1544,

	/* category: digital */
	/* description: Alpha archive -- out of date */
	ALPHA_ARCHIVE_OUT_OF_DATE = 1545,

	/* category: digital */
	/* description: COFF format alpha pure */
	COFF_FORMAT_ALPHA_PURE = 1546,

	/* category: digital */
	/* description: COFF format alpha demand paged */
	COFF_FORMAT_ALPHA_DEMAND_PAGED = 1547,

	/* category: digital */
	/* description: COFF format alpha object */
	COFF_FORMAT_ALPHA_OBJECT = 1548,

	/* category: digital */
	/* description: Alpha compressed COFF */
	ALPHA_COMPRESSED_COFF = 1549,

	/* category: digital */
	/* description: Alpha u-code object */
	ALPHA_U_CODE_OBJECT = 1550,

	/* category: digital */
	/* description: ddis/ddif */
	DDIS_DDIF = 1551,

	/* category: digital */
	/* description: ddis/dots archive */
	DDIS_DOTS_ARCHIVE = 1552,

	/* category: digital */
	/* description: ddis/dtif table data */
	DDIS_DTIF_TABLE_DATA = 1553,

	/* category: digital */
	/* description: LN03 output */
	LN03_OUTPUT = 1554,

	/* category: digital */
	/* description: X image */
	X_IMAGE = 1555,

	/* category: digital */
	/* description: profiling data file */
	PROFILING_DATA_FILE = 1556,

	/* category: digital */
	/* description: locale data table */
	LOCALE_DATA_TABLE = 1557,

	/* category: digital */
	/* description: locale data table for MIPS */
	LOCALE_DATA_TABLE_FOR_MIPS = 1558,

	/* category: digital */
	/* description: locale data table for Alpha */
	LOCALE_DATA_TABLE_FOR_ALPHA = 1559,

	/* category: dolby */
	/* description: ATSC A/52 aka AC-3 aka Dolby Digital stream, */
	ATSC_A_52_AKA_AC_3_AKA_DOLBY_DIGITAL_STREAM = 1560,

	/* category: dolby */
	/* description: ATSC A/52 aka AC-3 aka Dolby Digital stream, 48 kHz, */
	ATSC_A_52_AKA_AC_3_AKA_DOLBY_DIGITAL_STREAM_48_KHZ = 1561,

	/* category: dolby */
	/* description: ATSC A/52 aka AC-3 aka Dolby Digital stream, 44.1 kHz, */
	ATSC_A_52_AKA_AC_3_AKA_DOLBY_DIGITAL_STREAM_44_1_KHZ = 1562,

	/* category: dolby */
	/* description: ATSC A/52 aka AC-3 aka Dolby Digital stream, 32 kHz, */
	ATSC_A_52_AKA_AC_3_AKA_DOLBY_DIGITAL_STREAM_32_KHZ = 1563,

	/* category: dolby */
	/* description: ATSC A/52 aka AC-3 aka Dolby Digital stream, reserved frequency, */
	ATSC_A_52_AKA_AC_3_AKA_DOLBY_DIGITAL_STREAM_RESERVED_FREQUENCY = 1564,

	/* category: dump */
	/* description: new-fs dump file (big endian), */
	NEW_FS_DUMP_FILE_BIG_ENDIAN = 1565,

	/* category: dump */
	/* description: old-fs dump file (big endian), */
	OLD_FS_DUMP_FILE_BIG_ENDIAN = 1566,

	/* category: dump */
	/* description: new-fs dump file (little endian), */
	NEW_FS_DUMP_FILE_LITTLE_ENDIAN = 1567,

	/* category: dump */
	/* description: old-fs dump file (little endian), */
	OLD_FS_DUMP_FILE_LITTLE_ENDIAN = 1568,

	/* category: dump */
	/* description: new-fs dump file (ufs2, big endian), */
	NEW_FS_DUMP_FILE_UFS2_BIG_ENDIAN = 1569,

	/* category: dump */
	/* description: new-fs dump file (ufs2, little endian), */
	NEW_FS_DUMP_FILE_UFS2_LITTLE_ENDIAN = 1570,

	/* category: dump */
	/* description: old-fs dump file (16-bit, assuming PDP-11 endianness), */
	OLD_FS_DUMP_FILE_16_BIT_ASSUMING_PDP_11_ENDIANNESS = 1571,

	/* category: dyadic */
	/* description: Dyalog APL */
	DYALOG_APL = 1572,

	/* category: dyadic */
	/* description: Dyalog APL aplcore */
	DYALOG_APL_APLCORE = 1573,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit non-journaled non-checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_NON_JOURNALED_NON_CHECKSUMMED = 1574,

	/* category: dyadic */
	/* description: Dyalog APL external variable exclusive */
	DYALOG_APL_EXTERNAL_VARIABLE_EXCLUSIVE = 1575,

	/* category: dyadic */
	/* description: Dyalog APL workspace */
	DYALOG_APL_WORKSPACE = 1576,

	/* category: dyadic */
	/* description: Dyalog APL workspace 32-bit */
	DYALOG_APL_WORKSPACE_32_BIT = 1577,

	/* category: dyadic */
	/* description: Dyalog APL workspace 64-bit */
	DYALOG_APL_WORKSPACE_64_BIT = 1578,

	/* category: dyadic */
	/* description: Dyalog APL external variable shared */
	DYALOG_APL_EXTERNAL_VARIABLE_SHARED = 1579,

	/* category: dyadic */
	/* description: Dyalog APL session */
	DYALOG_APL_SESSION = 1580,

	/* category: dyadic */
	/* description: Dyalog APL mapped file 32-bit */
	DYALOG_APL_MAPPED_FILE_32_BIT = 1581,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit non-journaled non-checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_NON_JOURNALED_NON_CHECKSUMMED = 1582,

	/* category: dyadic */
	/* description: Dyalog APL mapped file 64-bit */
	DYALOG_APL_MAPPED_FILE_64_BIT = 1583,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit level 1 journaled non-checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_LEVEL_1_JOURNALED_NON_CHECKSUMMED = 1584,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit level 1 journaled non-checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_LEVEL_1_JOURNALED_NON_CHECKSUMMED = 1585,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit level 1 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_LEVEL_1_JOURNALED_CHECKSUMMED = 1586,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit level 1 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_LEVEL_1_JOURNALED_CHECKSUMMED = 1587,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit level 2 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_LEVEL_2_JOURNALED_CHECKSUMMED = 1588,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit level 2 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_LEVEL_2_JOURNALED_CHECKSUMMED = 1589,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit level 3 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_LEVEL_3_JOURNALED_CHECKSUMMED = 1590,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit level 3 journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_LEVEL_3_JOURNALED_CHECKSUMMED = 1591,

	/* category: dyadic */
	/* description: Dyalog APL component file 32-bit non-journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_32_BIT_NON_JOURNALED_CHECKSUMMED = 1592,

	/* category: dyadic */
	/* description: Dyalog APL component file 64-bit non-journaled checksummed */
	DYALOG_APL_COMPONENT_FILE_64_BIT_NON_JOURNALED_CHECKSUMMED = 1593,

	/* category: dyadic */
	/* description: Dyalog APL component file under construction */
	DYALOG_APL_COMPONENT_FILE_UNDER_CONSTRUCTION = 1594,

	/* category: dyadic */
	/* description: Dyalog APL DFS component file 64-bit level 1 journaled checksummed */
	DYALOG_APL_DFS_COMPONENT_FILE_64_BIT_LEVEL_1_JOURNALED_CHECKSUMMED = 1595,

	/* category: dyadic */
	/* description: Dyalog APL DFS component file 64-bit level 2 journaled checksummed */
	DYALOG_APL_DFS_COMPONENT_FILE_64_BIT_LEVEL_2_JOURNALED_CHECKSUMMED = 1596,

	/* category: dyadic */
	/* description: Dyalog APL DFS component file 64-bit level 3 journaled checksummed */
	DYALOG_APL_DFS_COMPONENT_FILE_64_BIT_LEVEL_3_JOURNALED_CHECKSUMMED = 1597,

	/* category: dyadic */
	/* description: Dyalog APL external workspace */
	DYALOG_APL_EXTERNAL_WORKSPACE = 1598,

	/* category: dyadic */
	/* description: Dyalog APL DDB */
	DYALOG_APL_DDB = 1599,

	/* category: dyadic */
	/* description: Dyalog APL transfer */
	DYALOG_APL_TRANSFER = 1600,

	/* category: ebml */
	/* description: EBML file */
	EBML_FILE = 1601,

	/* category: editors */
	/* description: T602 document data, */
	T602_DOCUMENT_DATA = 1602,

	/* category: editors */
	/* description: T602 document data, Kamenicky */
	T602_DOCUMENT_DATA_KAMENICKY = 1603,

	/* category: editors */
	/* description: T602 document data, CP 852 */
	T602_DOCUMENT_DATA_CP_852 = 1604,

	/* category: editors */
	/* description: T602 document data, KOI8-CS */
	T602_DOCUMENT_DATA_KOI8_CS = 1605,

	/* category: editors */
	/* description: T602 document data, unknown encoding */
	T602_DOCUMENT_DATA_UNKNOWN_ENCODING = 1606,

	/* category: editors */
	/* description: Vim encrypted file data */
	VIM_ENCRYPTED_FILE_DATA = 1607,

	/* category: editors */
	/* description: Vim swap file */
	VIM_SWAP_FILE = 1608,

	/* category: editors */
	/* description: Nano swap file */
	NANO_SWAP_FILE = 1609,

	/* category: editors */
	/* description: Kate swap file */
	KATE_SWAP_FILE = 1610,

	/* category: efi */
	/* description: Universal EFI binary with 1 architecture */
	UNIVERSAL_EFI_BINARY_WITH_1_ARCHITECTURE = 1611,

	/* category: efi */
	/* description: Universal EFI binary with 1 architecture, i386 */
	UNIVERSAL_EFI_BINARY_WITH_1_ARCHITECTURE_I386 = 1612,

	/* category: efi */
	/* description: Universal EFI binary with 1 architecture, x86_64 */
	UNIVERSAL_EFI_BINARY_WITH_1_ARCHITECTURE_X86_64 = 1613,

	/* category: efi */
	/* description: Universal EFI binary with 2 architectures */
	UNIVERSAL_EFI_BINARY_WITH_2_ARCHITECTURES = 1614,

	/* category: efi */
	/* description: Universal EFI binary with 2 architectures, i386 */
	UNIVERSAL_EFI_BINARY_WITH_2_ARCHITECTURES_I386 = 1615,

	/* category: efi */
	/* description: Universal EFI binary with 2 architectures, x86_64 */
	UNIVERSAL_EFI_BINARY_WITH_2_ARCHITECTURES_X86_64 = 1616,

	/* category: efi */
	/* description: Universal EFI binary with %d architectures */
	UNIVERSAL_EFI_BINARY_WITH_DD_ARCHITECTURES = 1617,

	/* category: elf */
	/* description: ELF */
	ELF = 1618,

	/* category: elf */
	/* description: ELF invalid class */
	ELF_INVALID_CLASS = 1619,

	/* category: elf */
	/* description: ELF 32-bit */
	ELF_32_BIT = 1620,

	/* category: elf */
	/* description: ELF 64-bit */
	ELF_64_BIT = 1621,

	/* category: encore */
	/* description: Encore */
	ENCORE = 1622,

	/* category: encore */
	/* description: Encore executable */
	ENCORE_EXECUTABLE = 1623,

	/* category: encore */
	/* description: Encore pure executable */
	ENCORE_PURE_EXECUTABLE = 1624,

	/* category: encore */
	/* description: Encore demand-paged executable */
	ENCORE_DEMAND_PAGED_EXECUTABLE = 1625,

	/* category: encore */
	/* description: Encore unsupported executable */
	ENCORE_UNSUPPORTED_EXECUTABLE = 1626,

	/* category: epoc */
	/* description: Psion Series 5 */
	PSION_SERIES_5 = 1627,

	/* category: epoc */
	/* description: Psion Series 5 font file */
	PSION_SERIES_5_FONT_FILE = 1628,

	/* category: epoc */
	/* description: Psion Series 5 printer driver */
	PSION_SERIES_5_PRINTER_DRIVER = 1629,

	/* category: epoc */
	/* description: Psion Series 5 clipboard */
	PSION_SERIES_5_CLIPBOARD = 1630,

	/* category: epoc */
	/* description: Psion Series 5 multi-bitmap image */
	PSION_SERIES_5_MULTI_BITMAP_IMAGE = 1631,

	/* category: epoc */
	/* description: Psion Series 5 application information file */
	PSION_SERIES_5_APPLICATION_INFORMATION_FILE = 1632,

	/* category: epoc */
	/* description: Psion Series 5 Sketch image */
	PSION_SERIES_5_SKETCH_IMAGE = 1633,

	/* category: epoc */
	/* description: Psion Series 5 voice note */
	PSION_SERIES_5_VOICE_NOTE = 1634,

	/* category: epoc */
	/* description: Psion Series 5 Word file */
	PSION_SERIES_5_WORD_FILE = 1635,

	/* category: epoc */
	/* description: Psion Series 5 OPL program (TextEd) */
	PSION_SERIES_5_OPL_PROGRAM_TEXTED = 1636,

	/* category: epoc */
	/* description: Psion Series 5 Comms settings */
	PSION_SERIES_5_COMMS_SETTINGS = 1637,

	/* category: epoc */
	/* description: Psion Series 5 Sheet file */
	PSION_SERIES_5_SHEET_FILE = 1638,

	/* category: epoc */
	/* description: Psion Series 5 EasyFax initialisation file */
	PSION_SERIES_5_EASYFAX_INITIALISATION_FILE = 1639,

	/* category: epoc */
	/* description: Psion Series 5 OPO module */
	PSION_SERIES_5_OPO_MODULE = 1640,

	/* category: epoc */
	/* description: Psion Series 5 OPL application */
	PSION_SERIES_5_OPL_APPLICATION = 1641,

	/* category: epoc */
	/* description: Psion Series 5 exported multi-bitmap image */
	PSION_SERIES_5_EXPORTED_MULTI_BITMAP_IMAGE = 1642,

	/* category: epoc */
	/* description: Psion Series 5 Comms names */
	PSION_SERIES_5_COMMS_NAMES = 1643,

	/* category: epoc */
	/* description: Psion Series 5 ROM multi-bitmap image */
	PSION_SERIES_5_ROM_MULTI_BITMAP_IMAGE = 1644,

	/* category: epoc */
	/* description: Psion Series 5 database */
	PSION_SERIES_5_DATABASE = 1645,

	/* category: epoc */
	/* description: Psion Series 5 database Agenda file */
	PSION_SERIES_5_DATABASE_AGENDA_FILE = 1646,

	/* category: epoc */
	/* description: Psion Series 5 database Data file */
	PSION_SERIES_5_DATABASE_DATA_FILE = 1647,

	/* category: epoc */
	/* description: Psion Series 5 database Jotter file */
	PSION_SERIES_5_DATABASE_JOTTER_FILE = 1648,

	/* category: epoc */
	/* description: Psion Series 5 ini file */
	PSION_SERIES_5_INI_FILE = 1649,

	/* category: epoc */
	/* description: Psion Series 5 binary: */
	PSION_SERIES_5_BINARY = 1650,

	/* category: epoc */
	/* description: Psion Series 5 binary: DLL */
	PSION_SERIES_5_BINARY_DLL = 1651,

	/* category: epoc */
	/* description: Psion Series 5 binary: comms hardware library */
	PSION_SERIES_5_BINARY_COMMS_HARDWARE_LIBRARY = 1652,

	/* category: epoc */
	/* description: Psion Series 5 binary: comms protocol library */
	PSION_SERIES_5_BINARY_COMMS_PROTOCOL_LIBRARY = 1653,

	/* category: epoc */
	/* description: Psion Series 5 binary: OPX */
	PSION_SERIES_5_BINARY_OPX = 1654,

	/* category: epoc */
	/* description: Psion Series 5 binary: application */
	PSION_SERIES_5_BINARY_APPLICATION = 1655,

	/* category: epoc */
	/* description: Psion Series 5 binary: logical device driver */
	PSION_SERIES_5_BINARY_LOGICAL_DEVICE_DRIVER = 1656,

	/* category: epoc */
	/* description: Psion Series 5 binary: physical device driver */
	PSION_SERIES_5_BINARY_PHYSICAL_DEVICE_DRIVER = 1657,

	/* category: epoc */
	/* description: Psion Series 5 binary: file transfer protocol */
	PSION_SERIES_5_BINARY_FILE_TRANSFER_PROTOCOL = 1658,

	/* category: epoc */
	/* description: Psion Series 5 executable */
	PSION_SERIES_5_EXECUTABLE = 1659,

	/* category: erlang */
	/* description: Old Erlang BEAM file */
	OLD_ERLANG_BEAM_FILE = 1660,

	/* category: erlang */
	/* description: Erlang BEAM file */
	ERLANG_BEAM_FILE = 1661,

	/* category: erlang */
	/* description: Erlang JAM file - version 4.2 */
	ERLANG_JAM_FILE_VERSION_4_2 = 1662,

	/* category: erlang */
	/* description: Erlang JAM file - version 4.3 */
	ERLANG_JAM_FILE_VERSION_4_3 = 1663,

	/* category: erlang */
	/* description: Erlang DETS file */
	ERLANG_DETS_FILE = 1664,

	/* category: espressif */
	/* description: configuration of Tasmota firmware (ESP8266) */
	CONFIGURATION_OF_TASMOTA_FIRMWARE_ESP8266 = 1665,

	/* category: esri */
	/* description: ESRI Shapefile */
	ESRI_SHAPEFILE = 1666,

	/* category: etf */
	/* description: Erlang External Term Format, compressed, original size = %d */
	ERLANG_EXTERNAL_TERM_FORMAT_COMPRESSED_ORIGINAL_SIZE_DD = 1667,

	/* category: etf */
	/* description: Erlang External Term Format, starts with NEW_FLOAT_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_NEW_FLOAT_EXT = 1668,

	/* category: etf */
	/* description: Erlang External Term Format, starts with BIT_BINARY_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_BIT_BINARY_EXT = 1669,

	/* category: etf */
	/* description: Erlang External Term Format, starts with SMALL_INTEGER_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_SMALL_INTEGER_EXT = 1670,

	/* category: etf */
	/* description: Erlang External Term Format, starts with INTEGER_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_INTEGER_EXT = 1671,

	/* category: etf */
	/* description: Erlang External Term Format, starts with FLOAT_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_FLOAT_EXT = 1672,

	/* category: etf */
	/* description: Erlang External Term Format, starts with ATOM_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_ATOM_EXT = 1673,

	/* category: etf */
	/* description: Erlang External Term Format, starts with REFERENCE_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_REFERENCE_EXT = 1674,

	/* category: etf */
	/* description: Erlang External Term Format, starts with PORT_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_PORT_EXT = 1675,

	/* category: etf */
	/* description: Erlang External Term Format, starts with PID_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_PID_EXT = 1676,

	/* category: etf */
	/* description: Erlang External Term Format, starts with SMALL_TUPLE_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_SMALL_TUPLE_EXT = 1677,

	/* category: etf */
	/* description: Erlang External Term Format, starts with LARGE_TUPLE_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_LARGE_TUPLE_EXT = 1678,

	/* category: etf */
	/* description: Erlang External Term Format, starts with NIL_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_NIL_EXT = 1679,

	/* category: etf */
	/* description: Erlang External Term Format, starts with STRING_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_STRING_EXT = 1680,

	/* category: etf */
	/* description: Erlang External Term Format, starts with LIST_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_LIST_EXT = 1681,

	/* category: etf */
	/* description: Erlang External Term Format, starts with BINARY_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_BINARY_EXT = 1682,

	/* category: etf */
	/* description: Erlang External Term Format, starts with SMALL_BIG_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_SMALL_BIG_EXT = 1683,

	/* category: etf */
	/* description: Erlang External Term Format, starts with LARGE_BIG_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_LARGE_BIG_EXT = 1684,

	/* category: etf */
	/* description: Erlang External Term Format, starts with NEW_FUN_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_NEW_FUN_EXT = 1685,

	/* category: etf */
	/* description: Erlang External Term Format, starts with EXPORT_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_EXPORT_EXT = 1686,

	/* category: etf */
	/* description: Erlang External Term Format, starts with NEW_REFERENCE_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_NEW_REFERENCE_EXT = 1687,

	/* category: etf */
	/* description: Erlang External Term Format, starts with SMALL_ATOM_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_SMALL_ATOM_EXT = 1688,

	/* category: etf */
	/* description: Erlang External Term Format, starts with MAP_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_MAP_EXT = 1689,

	/* category: etf */
	/* description: Erlang External Term Format, starts with FUN_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_FUN_EXT = 1690,

	/* category: etf */
	/* description: Erlang External Term Format, starts with ATOM_UTF8_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_ATOM_UTF8_EXT = 1691,

	/* category: etf */
	/* description: Erlang External Term Format, starts with SMALL_ATOM_UTF8_EXT */
	ERLANG_EXTERNAL_TERM_FORMAT_STARTS_WITH_SMALL_ATOM_UTF8_EXT = 1692,

	/* category: fcs */
	/* description: Flow Cytometry Standard (FCS) data, version 1.0 */
	FLOW_CYTOMETRY_STANDARD_FCS_DATA_VERSION_1_0 = 1693,

	/* category: fcs */
	/* description: Flow Cytometry Standard (FCS) data, version 2.0 */
	FLOW_CYTOMETRY_STANDARD_FCS_DATA_VERSION_2_0 = 1694,

	/* category: fcs */
	/* description: Flow Cytometry Standard (FCS) data, version 3.0 */
	FLOW_CYTOMETRY_STANDARD_FCS_DATA_VERSION_3_0 = 1695,

	/* category: filesystems */
	/* description: PC formatted floppy with no filesystem */
	PC_FORMATTED_FLOPPY_WITH_NO_FILESYSTEM = 1696,

	/* category: filesystems */
	/* description: Sun disk label */
	SUN_DISK_LABEL = 1697,

	/* category: filesystems */
	/* description: Smart Boot Manager backup file */
	SMART_BOOT_MANAGER_BACKUP_FILE = 1698,

	/* category: filesystems */
	/* description: DOS Emulator image */
	DOS_EMULATOR_IMAGE = 1699,

	/* category: filesystems */
	/* description: Norton Utilities disc image data */
	NORTON_UTILITIES_DISC_IMAGE_DATA = 1700,

	/* category: filesystems */
	/* description: Norton Disk Doctor UnDo file */
	NORTON_DISK_DOCTOR_UNDO_FILE = 1701,

	/* category: filesystems */
	/* description: DOS/MBR boot sector */
	DOS_MBR_BOOT_SECTOR = 1702,

	/* category: filesystems */
	/* description: FATX filesystem data */
	FATX_FILESYSTEM_DATA = 1703,

	/* category: filesystems */
	/* description: romfs filesystem, version 1 */
	ROMFS_FILESYSTEM_VERSION_1 = 1704,

	/* category: filesystems */
	/* description: Netboot image, */
	NETBOOT_IMAGE = 1705,

	/* category: filesystems */
	/* description: Netboot image, mode 2 */
	NETBOOT_IMAGE_MODE_2 = 1706,

	/* category: filesystems */
	/* description: Netboot image, mode 3 */
	NETBOOT_IMAGE_MODE_3 = 1707,

	/* category: filesystems */
	/* description: Netboot image, unknown mode */
	NETBOOT_IMAGE_UNKNOWN_MODE = 1708,

	/* category: filesystems */
	/* description: OS/2 Boot Manager */
	OS_2_BOOT_MANAGER = 1709,

	/* category: filesystems */
	/* description: isolinux Loader */
	ISOLINUX_LOADER = 1710,

	/* category: filesystems */
	/* description: pxelinux loader (version 2.13 or older) */
	PXELINUX_LOADER_VERSION_2_13_OR_OLDER = 1711,

	/* category: filesystems */
	/* description: pxelinux loader */
	PXELINUX_LOADER = 1712,

	/* category: filesystems */
	/* description: pxelinux loader (version 3.70 or newer) */
	PXELINUX_LOADER_VERSION_3_70_OR_NEWER = 1713,

	/* category: filesystems */
	/* description: SYSLINUX loader */
	SYSLINUX_LOADER = 1714,

	/* category: filesystems */
	/* description: Syslinux bootloader (version 2.13 or older) */
	SYSLINUX_BOOTLOADER_VERSION_2_13_OR_OLDER = 1715,

	/* category: filesystems */
	/* description: Syslinux bootloader (version 3.10 or newer) */
	SYSLINUX_BOOTLOADER_VERSION_3_10_OR_NEWER = 1716,

	/* category: filesystems */
	/* description: SYSLINUX MBR */
	SYSLINUX_MBR = 1717,

	/* category: filesystems */
	/* description: SYSLINUX MBR (version 3.35 or older) */
	SYSLINUX_MBR_VERSION_3_35_OR_OLDER = 1718,

	/* category: filesystems */
	/* description: SYSLINUX MBR (version 3.52 or newer) */
	SYSLINUX_MBR_VERSION_3_52_OR_NEWER = 1719,

	/* category: filesystems */
	/* description: SYSLINUX MBR (version 3.36-3.51 ) */
	SYSLINUX_MBR_VERSION_3_36_3_51 = 1720,

	/* category: filesystems */
	/* description: SYSLINUX GPT-MBR */
	SYSLINUX_GPT_MBR = 1721,

	/* category: filesystems */
	/* description: NetBSD mbr */
	NETBSD_MBR = 1722,

	/* category: filesystems */
	/* description: AdvanceMAME mbr */
	ADVANCEMAME_MBR = 1723,

	/* category: filesystems */
	/* description: Turton mbr ( */
	TURTON_MBR = 1724,

	/* category: filesystems */
	/* description: Turton mbr (,Y2K-Fix */
	TURTON_MBR_Y2K_FIX = 1725,

	/* category: filesystems */
	/* description: Turton mbr (,TestDisk */
	TURTON_MBR_TESTDISK = 1726,

	/* category: filesystems */
	/* description: GRand Unified Bootloader */
	GRAND_UNIFIED_BOOTLOADER = 1727,

	/* category: filesystems */
	/* description: GRand Unified Bootloader stage1_5 */
	GRAND_UNIFIED_BOOTLOADER_STAGE1_5 = 1728,

	/* category: filesystems */
	/* description: GRand Unified Bootloader stage2 */
	GRAND_UNIFIED_BOOTLOADER_STAGE2 = 1729,

	/* category: filesystems */
	/* description: Microsoft Windows XP/VISTA bootloader %-5.5s */
	MICROSOFT_WINDOWS_XP_VISTA_BOOTLOADER_SS = 1730,

	/* category: filesystems */
	/* description: ntfsclone image, */
	NTFSCLONE_IMAGE = 1731,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN = 1732,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), last mounted on %s, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_LAST_MOUNTED_ON_SS = 1733,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), last written at %s, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_LAST_WRITTEN_AT_SS = 1734,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), clean flag %d, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_CLEAN_FLAG_DD = 1735,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), number of cylinder groups %d, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_NUMBER_OF_CYLINDER_GROUPS_DD = 1736,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), minimum percentage of free blocks %d, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_MINIMUM_PERCENTAGE_OF_FREE_BLOCKS_DD = 1737,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), rotational delay %dms, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_ROTATIONAL_DELAY_DDMS = 1738,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), disk rotational speed %drps, */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_DISK_ROTATIONAL_SPEED_DDRPS = 1739,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), TIME optimization */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_TIME_OPTIMIZATION = 1740,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (little-endian), SPACE optimization */
	UNIX_FAST_FILE_SYSTEM_V1_LITTLE_ENDIAN_SPACE_OPTIMIZATION = 1741,

	/* category: filesystems */
	/* description: Unix Fast File system [v2] (little-endian) */
	UNIX_FAST_FILE_SYSTEM_V2_LITTLE_ENDIAN = 1742,

	/* category: filesystems */
	/* description: Unix Fast File system [v1] (big-endian), */
	UNIX_FAST_FILE_SYSTEM_V1_BIG_ENDIAN = 1743,

	/* category: filesystems */
	/* description: Unix Fast File system [v2] (big-endian) */
	UNIX_FAST_FILE_SYSTEM_V2_BIG_ENDIAN = 1744,

	/* category: filesystems */
	/* description: HAMMER filesystem (little-endian), */
	HAMMER_FILESYSTEM_LITTLE_ENDIAN = 1745,

	/* category: linux */
	/* description: Linux */
	LINUX = 1746,

	/* category: filesystems */
	/* description: Linux rev %d */
	LINUX_REV_DD = 1747,

	/* category: filesystems */
	/* description: Linux ext2 filesystem data */
	LINUX_EXT2_FILESYSTEM_DATA = 1748,

	/* category: filesystems */
	/* description: Linux ext2 filesystem data (mounted or unclean) */
	LINUX_EXT2_FILESYSTEM_DATA_MOUNTED_OR_UNCLEAN = 1749,

	/* category: filesystems */
	/* description: Linux ext3 filesystem data */
	LINUX_EXT3_FILESYSTEM_DATA = 1750,

	/* category: filesystems */
	/* description: Linux ext4 filesystem data */
	LINUX_EXT4_FILESYSTEM_DATA = 1751,

	/* category: filesystems */
	/* description: F2FS filesystem */
	F2FS_FILESYSTEM = 1752,

	/* category: filesystems */
	/* description: Minix filesystem, V1, 14 char names, %d zones */
	MINIX_FILESYSTEM_V1_14_CHAR_NAMES_DD_ZONES = 1753,

	/* category: filesystems */
	/* description: Minix filesystem, V1 (big endian), %d zones */
	MINIX_FILESYSTEM_V1_BIG_ENDIAN_DD_ZONES = 1754,

	/* category: filesystems */
	/* description: Minix filesystem, V1, 30 char names, %d zones */
	MINIX_FILESYSTEM_V1_30_CHAR_NAMES_DD_ZONES = 1755,

	/* category: filesystems */
	/* description: Minix filesystem, V1, 30 char names (big endian), %d zones */
	MINIX_FILESYSTEM_V1_30_CHAR_NAMES_BIG_ENDIAN_DD_ZONES = 1756,

	/* category: filesystems */
	/* description: SGI disk label (volume header) */
	SGI_DISK_LABEL_VOLUME_HEADER = 1757,

	/* category: filesystems */
	/* description: SGI XFS filesystem data */
	SGI_XFS_FILESYSTEM_DATA = 1758,

	/* category: filesystems */
	/* description: SGI XFS filesystem data (blksz %d, */
	SGI_XFS_FILESYSTEM_DATA_BLKSZ_DD = 1759,

	/* category: filesystems */
	/* description: SGI XFS filesystem data inosz %d, */
	SGI_XFS_FILESYSTEM_DATA_INOSZ_DD = 1760,

	/* category: filesystems */
	/* description: SGI XFS filesystem data v1 dirs) */
	SGI_XFS_FILESYSTEM_DATA_V1_DIRS = 1761,

	/* category: filesystems */
	/* description: SGI XFS filesystem data v2 dirs) */
	SGI_XFS_FILESYSTEM_DATA_V2_DIRS = 1762,

	/* category: filesystems */
	/* description: Atari-ST Minix kernel image */
	ATARI_ST_MINIX_KERNEL_IMAGE = 1763,

	/* category: filesystems */
	/* description: Atari-ST Minix kernel image, 720k floppy */
	ATARI_ST_MINIX_KERNEL_IMAGE_720K_FLOPPY = 1764,

	/* category: filesystems */
	/* description: Atari-ST Minix kernel image, 360k floppy */
	ATARI_ST_MINIX_KERNEL_IMAGE_360K_FLOPPY = 1765,

	/* category: filesystems */
	/* description: DOS floppy 360k */
	DOS_FLOPPY_360K = 1766,

	/* category: filesystems */
	/* description: DOS floppy 360k, DOS/MBR hard disk boot sector */
	DOS_FLOPPY_360K_DOS_MBR_HARD_DISK_BOOT_SECTOR = 1767,

	/* category: filesystems */
	/* description: DOS floppy 720k */
	DOS_FLOPPY_720K = 1768,

	/* category: filesystems */
	/* description: DOS floppy 720k, DOS/MBR hard disk boot sector */
	DOS_FLOPPY_720K_DOS_MBR_HARD_DISK_BOOT_SECTOR = 1769,

	/* category: filesystems */
	/* description: DOS floppy 1440k */
	DOS_FLOPPY_1440K = 1770,

	/* category: filesystems */
	/* description: DOS floppy 1440k, DOS/MBR hard disk boot sector */
	DOS_FLOPPY_1440K_DOS_MBR_HARD_DISK_BOOT_SECTOR = 1771,

	/* category: filesystems */
	/* description: DOS floppy 720k, IBM */
	DOS_FLOPPY_720K_IBM = 1772,

	/* category: filesystems */
	/* description: DOS floppy 720k, IBM, DOS/MBR hard disk boot sector */
	DOS_FLOPPY_720K_IBM_DOS_MBR_HARD_DISK_BOOT_SECTOR = 1773,

	/* category: filesystems */
	/* description: DOS floppy 1440k, mkdosfs */
	DOS_FLOPPY_1440K_MKDOSFS = 1774,

	/* category: filesystems */
	/* description: DOS floppy 1440k, mkdosfs, DOS/MBR hard disk boot sector */
	DOS_FLOPPY_1440K_MKDOSFS_DOS_MBR_HARD_DISK_BOOT_SECTOR = 1775,

	/* category: filesystems */
	/* description: Atari-ST floppy 360k */
	ATARI_ST_FLOPPY_360K = 1776,

	/* category: filesystems */
	/* description: Atari-ST floppy 720k */
	ATARI_ST_FLOPPY_720K = 1777,

	/* category: filesystems */
	/* description: ISO 9660 CD-ROM filesystem data (raw 2352 byte sectors) */
	ISO_9660_CD_ROM_FILESYSTEM_DATA_RAW_2352_BYTE_SECTORS = 1778,

	/* category: filesystems */
	/* description: High Sierra CD-ROM filesystem data */
	HIGH_SIERRA_CD_ROM_FILESYSTEM_DATA = 1779,

	/* category: filesystems */
	/* description: CD image */
	CD_IMAGE = 1780,

	/* category: filesystems */
	/* description: Nero CD image at 0x4B000 */
	NERO_CD_IMAGE_AT_0X4B000 = 1781,

	/* category: filesystems */
	/* description: Compressed ISO CD image */
	COMPRESSED_ISO_CD_IMAGE = 1782,

	/* category: filesystems */
	/* description: Linux Compressed ROM File System data, little endian */
	LINUX_COMPRESSED_ROM_FILE_SYSTEM_DATA_LITTLE_ENDIAN = 1783,

	/* category: filesystems */
	/* description: Linux Compressed ROM File System data, big endian */
	LINUX_COMPRESSED_ROM_FILE_SYSTEM_DATA_BIG_ENDIAN = 1784,

	/* category: filesystems */
	/* description: ReiserFS V3.5 */
	REISERFS_V3_5 = 1785,

	/* category: filesystems */
	/* description: ReiserFS V3.6 */
	REISERFS_V3_6 = 1786,

	/* category: filesystems */
	/* description: ReiserFS V3.6.19 */
	REISERFS_V3_6_19 = 1787,

	/* category: filesystems */
	/* description: Linux Journalled Flash File system, little endian */
	LINUX_JOURNALLED_FLASH_FILE_SYSTEM_LITTLE_ENDIAN = 1788,

	/* category: filesystems */
	/* description: Linux Journalled Flash File system, big endian */
	LINUX_JOURNALLED_FLASH_FILE_SYSTEM_BIG_ENDIAN = 1789,

	/* category: filesystems */
	/* description: EST flat binary */
	EST_FLAT_BINARY = 1790,

	/* category: filesystems */
	/* description: Aculab VoIP firmware */
	ACULAB_VOIP_FIRMWARE = 1791,

	/* category: filesystems */
	/* description: u-boot legacy uImage, */
	U_BOOT_LEGACY_UIMAGE = 1792,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Invalid os/ */
	U_BOOT_LEGACY_UIMAGE_INVALID_OS = 1793,

	/* category: filesystems */
	/* description: u-boot legacy uImage, OpenBSD/ */
	U_BOOT_LEGACY_UIMAGE_OPENBSD = 1794,

	/* category: filesystems */
	/* description: u-boot legacy uImage, NetBSD/ */
	U_BOOT_LEGACY_UIMAGE_NETBSD = 1795,

	/* category: filesystems */
	/* description: u-boot legacy uImage, FreeBSD/ */
	U_BOOT_LEGACY_UIMAGE_FREEBSD = 1796,

	/* category: filesystems */
	/* description: u-boot legacy uImage, 4.4BSD/ */
	U_BOOT_LEGACY_UIMAGE_4_4BSD = 1797,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Linux/ */
	U_BOOT_LEGACY_UIMAGE_LINUX = 1798,

	/* category: filesystems */
	/* description: u-boot legacy uImage, SVR4/ */
	U_BOOT_LEGACY_UIMAGE_SVR4 = 1799,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Esix/ */
	U_BOOT_LEGACY_UIMAGE_ESIX = 1800,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Solaris/ */
	U_BOOT_LEGACY_UIMAGE_SOLARIS = 1801,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Irix/ */
	U_BOOT_LEGACY_UIMAGE_IRIX = 1802,

	/* category: filesystems */
	/* description: u-boot legacy uImage, SCO/ */
	U_BOOT_LEGACY_UIMAGE_SCO = 1803,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Dell/ */
	U_BOOT_LEGACY_UIMAGE_DELL = 1804,

	/* category: filesystems */
	/* description: u-boot legacy uImage, NCR/ */
	U_BOOT_LEGACY_UIMAGE_NCR = 1805,

	/* category: filesystems */
	/* description: u-boot legacy uImage, LynxOS/ */
	U_BOOT_LEGACY_UIMAGE_LYNXOS = 1806,

	/* category: filesystems */
	/* description: u-boot legacy uImage, VxWorks/ */
	U_BOOT_LEGACY_UIMAGE_VXWORKS = 1807,

	/* category: filesystems */
	/* description: u-boot legacy uImage, pSOS/ */
	U_BOOT_LEGACY_UIMAGE_PSOS = 1808,

	/* category: filesystems */
	/* description: u-boot legacy uImage, QNX/ */
	U_BOOT_LEGACY_UIMAGE_QNX = 1809,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Firmware/ */
	U_BOOT_LEGACY_UIMAGE_FIRMWARE = 1810,

	/* category: filesystems */
	/* description: u-boot legacy uImage, RTEMS/ */
	U_BOOT_LEGACY_UIMAGE_RTEMS = 1811,

	/* category: filesystems */
	/* description: u-boot legacy uImage, ARTOS/ */
	U_BOOT_LEGACY_UIMAGE_ARTOS = 1812,

	/* category: filesystems */
	/* description: u-boot legacy uImage, Unity OS/ */
	U_BOOT_LEGACY_UIMAGE_UNITY_OS = 1813,

	/* category: filesystems */
	/* description: u-boot legacy uImage, INTEGRITY/ */
	U_BOOT_LEGACY_UIMAGE_INTEGRITY = 1814,

	/* category: filesystems */
	/* description: Linux old jffs2 filesystem data little endian */
	LINUX_OLD_JFFS2_FILESYSTEM_DATA_LITTLE_ENDIAN = 1815,

	/* category: filesystems */
	/* description: Linux jffs2 filesystem data little endian */
	LINUX_JFFS2_FILESYSTEM_DATA_LITTLE_ENDIAN = 1816,

	/* category: filesystems */
	/* description: Squashfs filesystem, big endian, */
	SQUASHFS_FILESYSTEM_BIG_ENDIAN = 1817,

	/* category: filesystems */
	/* description: Squashfs filesystem, little endian, */
	SQUASHFS_FILESYSTEM_LITTLE_ENDIAN = 1818,

	/* category: filesystems */
	/* description: AFS Dump */
	AFS_DUMP = 1819,

	/* category: filesystems */
	/* description: Delta ISO data, */
	DELTA_ISO_DATA = 1820,

	/* category: filesystems */
	/* description: OpenVMS backup saveset data */
	OPENVMS_BACKUP_SAVESET_DATA = 1821,

	/* category: filesystems */
	/* description: Oracle Clustered Filesystem, */
	ORACLE_CLUSTERED_FILESYSTEM = 1822,

	/* category: filesystems */
	/* description: Oracle ASM Volume, */
	ORACLE_ASM_VOLUME = 1823,

	/* category: filesystems */
	/* description: Oracle ASM Volume (cleared), */
	ORACLE_ASM_VOLUME_CLEARED = 1824,

	/* category: filesystems */
	/* description: Compaq/HP RILOE floppy image */
	COMPAQ_HP_RILOE_FLOPPY_IMAGE = 1825,

	/* category: filesystems */
	/* description: Files-11 On-Disk Structure */
	FILES_11_ON_DISK_STRUCTURE = 1826,

	/* category: filesystems */
	/* description: Files-11 On-Disk Structure (ODS-%d); */
	FILES_11_ON_DISK_STRUCTURE_ODS_DD = 1827,

	/* category: filesystems */
	/* description: Files-11 On-Disk Structure RSX-11, VAX/VMS or OpenVMS VAX file system; */
	FILES_11_ON_DISK_STRUCTURE_RSX_11_VAX_VMS_OR_OPENVMS_VAX_FILE_SYSTEM = 1828,

	/* category: filesystems */
	/* description: Files-11 On-Disk Structure VAX/VMS or OpenVMS file system; */
	FILES_11_ON_DISK_STRUCTURE_VAX_VMS_OR_OPENVMS_FILE_SYSTEM = 1829,

	/* category: filesystems */
	/* description: Files-11 On-Disk Structure OpenVMS Alpha or Itanium file system; */
	FILES_11_ON_DISK_STRUCTURE_OPENVMS_ALPHA_OR_ITANIUM_FILE_SYSTEM = 1830,

	/* category: filesystems */
	/* description: PowerISO Direct-Access-Archive */
	POWERISO_DIRECT_ACCESS_ARCHIVE = 1831,

	/* category: filesystems */
	/* description: Marvell Libertas firmware */
	MARVELL_LIBERTAS_FIRMWARE = 1832,

	/* category: filesystems */
	/* description: GFS1 Filesystem */
	GFS1_FILESYSTEM = 1833,

	/* category: filesystems */
	/* description: GFS2 Filesystem */
	GFS2_FILESYSTEM = 1834,

	/* category: filesystems */
	/* description: BTRFS Filesystem */
	BTRFS_FILESYSTEM = 1835,

	/* category: filesystems */
	/* description: dvdisaster error correction file */
	DVDISASTER_ERROR_CORRECTION_FILE = 1836,

	/* category: filesystems */
	/* description: XFS filesystem metadump image */
	XFS_FILESYSTEM_METADUMP_IMAGE = 1837,

	/* category: filesystems */
	/* description: CROMFS */
	CROMFS = 1838,

	/* category: filesystems */
	/* description: JFS2 filesystem image */
	JFS2_FILESYSTEM_IMAGE = 1839,

	/* category: filesystems */
	/* description: LFS filesystem image */
	LFS_FILESYSTEM_IMAGE = 1840,

	/* category: filesystems */
	/* description: LFS filesystem image version 1, */
	LFS_FILESYSTEM_IMAGE_VERSION_1 = 1841,

	/* category: filesystems */
	/* description: LFS filesystem image version 2, */
	LFS_FILESYSTEM_IMAGE_VERSION_2 = 1842,

	/* category: filesystems */
	/* description: floppy image data (TeleDisk, compressed) */
	FLOPPY_IMAGE_DATA_TELEDISK_COMPRESSED = 1843,

	/* category: filesystems */
	/* description: floppy image data (TeleDisk) */
	FLOPPY_IMAGE_DATA_TELEDISK = 1844,

	/* category: filesystems */
	/* description: floppy image data (CopyQM, */
	FLOPPY_IMAGE_DATA_COPYQM = 1845,

	/* category: filesystems */
	/* description: floppy image data (ApriDisk) */
	FLOPPY_IMAGE_DATA_APRIDISK = 1846,

	/* category: filesystems */
	/* description: floppy image data (IBM SaveDskF, old) */
	FLOPPY_IMAGE_DATA_IBM_SAVEDSKF_OLD = 1847,

	/* category: filesystems */
	/* description: floppy image data (IBM SaveDskF) */
	FLOPPY_IMAGE_DATA_IBM_SAVEDSKF = 1848,

	/* category: filesystems */
	/* description: floppy image data (IBM SaveDskF, compressed) */
	FLOPPY_IMAGE_DATA_IBM_SAVEDSKF_COMPRESSED = 1849,

	/* category: filesystems */
	/* description: disk image data (YAZE) */
	DISK_IMAGE_DATA_YAZE = 1850,

	/* category: filesystems */
	/* description: ReFS filesystem image */
	REFS_FILESYSTEM_IMAGE = 1851,

	/* category: filesystems */
	/* description: EWF/Expert Witness/EnCase image file format */
	EWF_EXPERT_WITNESS_ENCASE_IMAGE_FILE_FORMAT = 1852,

	/* category: filesystems */
	/* description: UBIfs image */
	UBIFS_IMAGE = 1853,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s */
	NEC_PC_88_DISK_IMAGE_NAME_SS = 1854,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s, media=2D */
	NEC_PC_88_DISK_IMAGE_NAME_SS_MEDIA_2D = 1855,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s, media=2DD */
	NEC_PC_88_DISK_IMAGE_NAME_SS_MEDIA_2DD = 1856,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s, media=2HD */
	NEC_PC_88_DISK_IMAGE_NAME_SS_MEDIA_2HD = 1857,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s, media=1D */
	NEC_PC_88_DISK_IMAGE_NAME_SS_MEDIA_1D = 1858,

	/* category: pc88 */
	/* description: NEC PC-88 disk image, name=%s, media=1DD */
	NEC_PC_88_DISK_IMAGE_NAME_SS_MEDIA_1DD = 1859,

	/* category: filesystems */
	/* description: HDD Raw Copy Tool */
	HDD_RAW_COPY_TOOL = 1860,

	/* category: finger */
	/* description: libfprint fingerprint data V1 */
	LIBFPRINT_FINGERPRINT_DATA_V1 = 1861,

	/* category: finger */
	/* description: libfprint fingerprint data V2 */
	LIBFPRINT_FINGERPRINT_DATA_V2 = 1862,

	/* category: flash */
	/* description: Macromedia Flash data */
	MACROMEDIA_FLASH_DATA = 1863,

	/* category: flash */
	/* description: Macromedia Flash data (compressed) */
	MACROMEDIA_FLASH_DATA_COMPRESSED = 1864,

	/* category: flash */
	/* description: Macromedia Flash data (lzma compressed) */
	MACROMEDIA_FLASH_DATA_LZMA_COMPRESSED = 1865,

	/* category: flash */
	/* description: Macromedia Flash Video */
	MACROMEDIA_FLASH_VIDEO = 1866,

	/* category: flash */
	/* description: Macromedia Freehand 7 Document */
	MACROMEDIA_FREEHAND_7_DOCUMENT = 1867,

	/* category: flash */
	/* description: Macromedia Freehand 8 Document */
	MACROMEDIA_FREEHAND_8_DOCUMENT = 1868,

	/* category: flash */
	/* description: Macromedia Freehand 9 Document */
	MACROMEDIA_FREEHAND_9_DOCUMENT = 1869,

	/* category: flif */
	/* description: FLIF */
	FLIF = 1870,

	/* category: flif */
	/* description: FLIF image data */
	FLIF_IMAGE_DATA = 1871,

	/* category: flif */
	/* description: FLIF image data, 8-bit/color, */
	FLIF_IMAGE_DATA_8_BIT_COLOR = 1872,

	/* category: flif */
	/* description: FLIF image data, 16-bit/color, */
	FLIF_IMAGE_DATA_16_BIT_COLOR = 1873,

	/* category: flif */
	/* description: FLIF, animation data */
	FLIF_ANIMATION_DATA = 1874,

	/* category: fonts */
	/* description: ASCII vfont text */
	ASCII_VFONT_TEXT = 1875,

	/* category: fonts */
	/* description: Berkeley vfont data */
	BERKELEY_VFONT_DATA = 1876,

	/* category: fonts */
	/* description: byte-swapped Berkeley vfont data */
	BYTE_SWAPPED_BERKELEY_VFONT_DATA = 1877,

	/* category: fonts */
	/* description: PostScript Type 1 font text */
	POSTSCRIPT_TYPE_1_FONT_TEXT = 1878,

	/* category: fonts */
	/* description: PostScript Type 1 font program data */
	POSTSCRIPT_TYPE_1_FONT_PROGRAM_DATA = 1879,

	/* category: fonts */
	/* description: Printer Font Metrics */
	PRINTER_FONT_METRICS = 1880,

	/* category: fonts */
	/* description: X11 SNF font data, MSB first */
	X11_SNF_FONT_DATA_MSB_FIRST = 1881,

	/* category: fonts */
	/* description: X11 SNF font data, LSB first */
	X11_SNF_FONT_DATA_LSB_FIRST = 1882,

	/* category: fonts */
	/* description: X11 BDF font text */
	X11_BDF_FONT_TEXT = 1883,

	/* category: fonts */
	/* description: GRUB2 font */
	GRUB2_FONT = 1884,

	/* category: fonts */
	/* description: X11 Portable Compiled Font data, */
	X11_PORTABLE_COMPILED_FONT_DATA = 1885,

	/* category: fonts */
	/* description: X11 Portable Compiled Font data, bit: LSB, */
	X11_PORTABLE_COMPILED_FONT_DATA_BIT_LSB = 1886,

	/* category: fonts */
	/* description: X11 Portable Compiled Font data, bit: MSB, */
	X11_PORTABLE_COMPILED_FONT_DATA_BIT_MSB = 1887,

	/* category: fonts */
	/* description: X11 Speedo font data */
	X11_SPEEDO_FONT_DATA = 1888,

	/* category: fonts */
	/* description: FIGlet font */
	FIGLET_FONT = 1889,

	/* category: fonts */
	/* description: FIGlet controlfile */
	FIGLET_CONTROLFILE = 1890,

	/* category: fonts */
	/* description: libGrx font data, */
	LIBGRX_FONT_DATA = 1891,

	/* category: fonts */
	/* description: DOS code page font data collection */
	DOS_CODE_PAGE_FONT_DATA_COLLECTION = 1892,

	/* category: fonts */
	/* description: DOS code page font data */
	DOS_CODE_PAGE_FONT_DATA = 1893,

	/* category: fonts */
	/* description: DOS code page font data (from Linux?) */
	DOS_CODE_PAGE_FONT_DATA_FROM_LINUX = 1894,

	/* category: fonts */
	/* description: DOSFONT2 encrypted font data */
	DOSFONT2_ENCRYPTED_FONT_DATA = 1895,

	/* category: fonts */
	/* description: Portable Font Resource font data (new) */
	PORTABLE_FONT_RESOURCE_FONT_DATA_NEW = 1896,

	/* category: fonts */
	/* description: Portable Font Resource font data (old) */
	PORTABLE_FONT_RESOURCE_FONT_DATA_OLD = 1897,

	/* category: fonts */
	/* description: TrueType Font data */
	TRUETYPE_FONT_DATA = 1898,

	/* category: fonts */
	/* description: OpenType font data */
	OPENTYPE_FONT_DATA = 1899,

	/* category: fonts */
	/* description: Adobe Multiple Master font */
	ADOBE_MULTIPLE_MASTER_FONT = 1900,

	/* category: fonts */
	/* description: TrueType font collection data */
	TRUETYPE_FONT_COLLECTION_DATA = 1901,

	/* category: fonts */
	/* description: OpenType font collection data */
	OPENTYPE_FONT_COLLECTION_DATA = 1902,

	/* category: fonts */
	/* description: Spline Font Database */
	SPLINE_FONT_DATABASE = 1903,

	/* category: fonts */
	/* description: Embedded OpenType (EOT) */
	EMBEDDED_OPENTYPE_EOT = 1904,

	/* category: fonts */
	/* description: Web Open Font Format */
	WEB_OPEN_FONT_FORMAT = 1905,

	/* category: fonts */
	/* description: Web Open Font Format (Version 2) */
	WEB_OPEN_FONT_FORMAT_VERSION_2 = 1906,

	/* category: fortran */
	/* description: FORTRAN program text */
	FORTRAN_PROGRAM_TEXT = 1907,

	/* category: frame */
	/* description: FrameMaker document */
	FRAMEMAKER_DOCUMENT = 1908,

	/* category: frame */
	/* description: FrameMaker document (5.5 */
	FRAMEMAKER_DOCUMENT_5_5 = 1909,

	/* category: frame */
	/* description: FrameMaker document (5.0 */
	FRAMEMAKER_DOCUMENT_5_0 = 1910,

	/* category: frame */
	/* description: FrameMaker document (4.0 */
	FRAMEMAKER_DOCUMENT_4_0 = 1911,

	/* category: frame */
	/* description: FrameMaker document (3.0 */
	FRAMEMAKER_DOCUMENT_3_0 = 1912,

	/* category: frame */
	/* description: FrameMaker document (2.0 */
	FRAMEMAKER_DOCUMENT_2_0 = 1913,

	/* category: frame */
	/* description: FrameMaker document (1.0 */
	FRAMEMAKER_DOCUMENT_1_0 = 1914,

	/* category: frame */
	/* description: FrameMaker MIF (ASCII) file */
	FRAMEMAKER_MIF_ASCII_FILE = 1915,

	/* category: frame */
	/* description: FrameMaker MIF (ASCII) file (4.0) */
	FRAMEMAKER_MIF_ASCII_FILE_4_0 = 1916,

	/* category: frame */
	/* description: FrameMaker MIF (ASCII) file (3.0) */
	FRAMEMAKER_MIF_ASCII_FILE_3_0 = 1917,

	/* category: frame */
	/* description: FrameMaker MIF (ASCII) file (2.0) */
	FRAMEMAKER_MIF_ASCII_FILE_2_0 = 1918,

	/* category: frame */
	/* description: FrameMaker MIF (ASCII) file (1.x) */
	FRAMEMAKER_MIF_ASCII_FILE_1_X = 1919,

	/* category: frame */
	/* description: FrameMaker Dictionary text */
	FRAMEMAKER_DICTIONARY_TEXT = 1920,

	/* category: frame */
	/* description: FrameMaker Dictionary text (3.0) */
	FRAMEMAKER_DICTIONARY_TEXT_3_0 = 1921,

	/* category: frame */
	/* description: FrameMaker Dictionary text (2.0) */
	FRAMEMAKER_DICTIONARY_TEXT_2_0 = 1922,

	/* category: frame */
	/* description: FrameMaker Dictionary text (1.x) */
	FRAMEMAKER_DICTIONARY_TEXT_1_X = 1923,

	/* category: frame */
	/* description: FrameMaker Font file */
	FRAMEMAKER_FONT_FILE = 1924,

	/* category: frame */
	/* description: FrameMaker Font file (1.01) */
	FRAMEMAKER_FONT_FILE_1_01 = 1925,

	/* category: frame */
	/* description: FrameMaker MML file */
	FRAMEMAKER_MML_FILE = 1926,

	/* category: frame */
	/* description: FrameMaker Book file */
	FRAMEMAKER_BOOK_FILE = 1927,

	/* category: frame */
	/* description: FrameMaker Book file (3.0 */
	FRAMEMAKER_BOOK_FILE_3_0 = 1928,

	/* category: frame */
	/* description: FrameMaker Book file (2.0 */
	FRAMEMAKER_BOOK_FILE_2_0 = 1929,

	/* category: frame */
	/* description: FrameMaker Book file (1.0 */
	FRAMEMAKER_BOOK_FILE_1_0 = 1930,

	/* category: frame */
	/* description: FrameMaker IPL file */
	FRAMEMAKER_IPL_FILE = 1931,

	/* category: freebsd */
	/* description: FreeBSD/i386 */
	FREEBSD_I386 = 1932,

	/* category: freebsd */
	/* description: FreeBSD/i386 shared library */
	FREEBSD_I386_SHARED_LIBRARY = 1933,

	/* category: freebsd */
	/* description: FreeBSD/i386 PIC object */
	FREEBSD_I386_PIC_OBJECT = 1934,

	/* category: freebsd */
	/* description: FreeBSD/i386 object */
	FREEBSD_I386_OBJECT = 1935,

	/* category: freebsd */
	/* description: FreeBSD/i386 dynamically linked executable */
	FREEBSD_I386_DYNAMICALLY_LINKED_EXECUTABLE = 1936,

	/* category: freebsd */
	/* description: FreeBSD/i386 executable */
	FREEBSD_I386_EXECUTABLE = 1937,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure */
	FREEBSD_I386_PURE = 1938,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure shared library */
	FREEBSD_I386_PURE_SHARED_LIBRARY = 1939,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure PIC object */
	FREEBSD_I386_PURE_PIC_OBJECT = 1940,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure object */
	FREEBSD_I386_PURE_OBJECT = 1941,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure dynamically linked executable */
	FREEBSD_I386_PURE_DYNAMICALLY_LINKED_EXECUTABLE = 1942,

	/* category: freebsd */
	/* description: FreeBSD/i386 pure executable */
	FREEBSD_I386_PURE_EXECUTABLE = 1943,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged */
	FREEBSD_I386_DEMAND_PAGED = 1944,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged shared library */
	FREEBSD_I386_DEMAND_PAGED_SHARED_LIBRARY = 1945,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged PIC object */
	FREEBSD_I386_DEMAND_PAGED_PIC_OBJECT = 1946,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged object */
	FREEBSD_I386_DEMAND_PAGED_OBJECT = 1947,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged dynamically linked executable */
	FREEBSD_I386_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 1948,

	/* category: freebsd */
	/* description: FreeBSD/i386 demand paged executable */
	FREEBSD_I386_DEMAND_PAGED_EXECUTABLE = 1949,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged */
	FREEBSD_I386_COMPACT_DEMAND_PAGED = 1950,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged shared library */
	FREEBSD_I386_COMPACT_DEMAND_PAGED_SHARED_LIBRARY = 1951,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged PIC object */
	FREEBSD_I386_COMPACT_DEMAND_PAGED_PIC_OBJECT = 1952,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged object */
	FREEBSD_I386_COMPACT_DEMAND_PAGED_OBJECT = 1953,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged dynamically linked executable */
	FREEBSD_I386_COMPACT_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 1954,

	/* category: freebsd */
	/* description: FreeBSD/i386 compact demand paged executable */
	FREEBSD_I386_COMPACT_DEMAND_PAGED_EXECUTABLE = 1955,

	/* category: freebsd */
	/* description: FreeBSD/i386 a.out core file */
	FREEBSD_I386_A_OUT_CORE_FILE = 1956,

	/* category: freebsd */
	/* description: ld.so hints file (Little Endian */
	LD_SO_HINTS_FILE_LITTLE_ENDIAN = 1957,

	/* category: freebsd */
	/* description: ld.so hints file (Big Endian) */
	LD_SO_HINTS_FILE_BIG_ENDIAN = 1958,

	/* category: freebsd */
	/* description: scrshot(1) screenshot, */
	SCRSHOT_1_SCREENSHOT = 1959,

	/* category: fsav */
	/* description: fsav macro virus signatures */
	FSAV_MACRO_VIRUS_SIGNATURES = 1960,

	/* category: fsav */
	/* description: Clam AntiVirus */
	CLAM_ANTIVIRUS = 1961,

	/* category: fsav */
	/* description: Clam AntiVirus database */
	CLAM_ANTIVIRUS_DATABASE = 1962,

	/* category: fsav */
	/* description: Clam AntiVirus database (unsigned) */
	CLAM_ANTIVIRUS_DATABASE_UNSIGNED = 1963,

	/* category: fsav */
	/* description: Clam AntiVirus database (with buildtime) */
	CLAM_ANTIVIRUS_DATABASE_WITH_BUILDTIME = 1964,

	/* category: fsav */
	/* description: Clam AntiVirus file */
	CLAM_ANTIVIRUS_FILE = 1965,

	/* category: fsav */
	/* description: AVG 7 Antivirus vault file data */
	AVG_7_ANTIVIRUS_VAULT_FILE_DATA = 1966,

	/* category: fsav */
	/* description: EICAR virus test files */
	EICAR_VIRUS_TEST_FILES = 1967,

	/* category: fsav */
	/* description: Avira AntiVir quarantined */
	AVIRA_ANTIVIR_QUARANTINED = 1968,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data */
	FUSECOMPRESS_ED_DATA = 1969,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (none format) */
	FUSECOMPRESS_ED_DATA_NONE_FORMAT = 1970,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (bz2 format) */
	FUSECOMPRESS_ED_DATA_BZ2_FORMAT = 1971,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (gz format) */
	FUSECOMPRESS_ED_DATA_GZ_FORMAT = 1972,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (lzo format) */
	FUSECOMPRESS_ED_DATA_LZO_FORMAT = 1973,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (xor format) */
	FUSECOMPRESS_ED_DATA_XOR_FORMAT = 1974,

	/* category: fusecompress */
	/* description: FuseCompress(ed) data (unknown format) */
	FUSECOMPRESS_ED_DATA_UNKNOWN_FORMAT = 1975,

	/* category: games */
	/* description: Quake II 3D Model file, */
	QUAKE_II_3D_MODEL_FILE = 1976,

	/* category: games */
	/* description: Quake */
	QUAKE = 1977,

	/* category: games */
	/* description: Quake II Map file (BSP) */
	QUAKE_II_MAP_FILE_BSP = 1978,

	/* category: games */
	/* description: Quake III Map file (BSP) */
	QUAKE_III_MAP_FILE_BSP = 1979,

	/* category: games */
	/* description: Quake II SP2 sprite file */
	QUAKE_II_SP2_SPRITE_FILE = 1980,

	/* category: games */
	/* description: Boom or linuxdoom demo */
	BOOM_OR_LINUXDOOM_DEMO = 1981,

	/* category: games */
	/* description: Linuxdoom save */
	LINUXDOOM_SAVE = 1982,

	/* category: games */
	/* description: Quake I or II world or extension */
	QUAKE_I_OR_II_WORLD_OR_EXTENSION = 1983,

	/* category: games */
	/* description: Quake I save: start Introduction */
	QUAKE_I_SAVE_START_INTRODUCTION = 1984,

	/* category: games */
	/* description: Quake I save: e1m1 The slipgate complex */
	QUAKE_I_SAVE_E1M1_THE_SLIPGATE_COMPLEX = 1985,

	/* category: games */
	/* description: Quake I save: e1m2 Castle of the damned */
	QUAKE_I_SAVE_E1M2_CASTLE_OF_THE_DAMNED = 1986,

	/* category: games */
	/* description: Quake I save: e1m3 The necropolis */
	QUAKE_I_SAVE_E1M3_THE_NECROPOLIS = 1987,

	/* category: games */
	/* description: Quake I save: e1m4 The grisly grotto */
	QUAKE_I_SAVE_E1M4_THE_GRISLY_GROTTO = 1988,

	/* category: games */
	/* description: Quake I save: e1m8 Ziggurat vertigo (secret) */
	QUAKE_I_SAVE_E1M8_ZIGGURAT_VERTIGO_SECRET = 1989,

	/* category: games */
	/* description: Quake I save: e1m5 Gloom keep */
	QUAKE_I_SAVE_E1M5_GLOOM_KEEP = 1990,

	/* category: games */
	/* description: Quake I save: e1m6 The door to Chthon */
	QUAKE_I_SAVE_E1M6_THE_DOOR_TO_CHTHON = 1991,

	/* category: games */
	/* description: Quake I save: e1m7 The house of Chthon */
	QUAKE_I_SAVE_E1M7_THE_HOUSE_OF_CHTHON = 1992,

	/* category: games */
	/* description: Quake I save: e2m1 The installation */
	QUAKE_I_SAVE_E2M1_THE_INSTALLATION = 1993,

	/* category: games */
	/* description: Quake I save: e2m2 The ogre citadel */
	QUAKE_I_SAVE_E2M2_THE_OGRE_CITADEL = 1994,

	/* category: games */
	/* description: Quake I save: e2m3 The crypt of decay (dopefish lives!) */
	QUAKE_I_SAVE_E2M3_THE_CRYPT_OF_DECAY_DOPEFISH_LIVES = 1995,

	/* category: games */
	/* description: Quake I save: e2m7 Underearth (secret) */
	QUAKE_I_SAVE_E2M7_UNDEREARTH_SECRET = 1996,

	/* category: games */
	/* description: Quake I save: e2m4 The ebon fortress */
	QUAKE_I_SAVE_E2M4_THE_EBON_FORTRESS = 1997,

	/* category: games */
	/* description: Quake I save: e2m5 The wizard's manse */
	QUAKE_I_SAVE_E2M5_THE_WIZARD_S_MANSE = 1998,

	/* category: games */
	/* description: Quake I save: e2m6 The dismal oubliette */
	QUAKE_I_SAVE_E2M6_THE_DISMAL_OUBLIETTE = 1999,

	/* category: games */
	/* description: Quake I save: e3m1 Termination central */
	QUAKE_I_SAVE_E3M1_TERMINATION_CENTRAL = 2000,

	/* category: games */
	/* description: Quake I save: e3m2 Vaults of Zin */
	QUAKE_I_SAVE_E3M2_VAULTS_OF_ZIN = 2001,

	/* category: games */
	/* description: Quake I save: e3m3 The tomb of terror */
	QUAKE_I_SAVE_E3M3_THE_TOMB_OF_TERROR = 2002,

	/* category: games */
	/* description: Quake I save: e3m4 Satan's dark delight */
	QUAKE_I_SAVE_E3M4_SATAN_S_DARK_DELIGHT = 2003,

	/* category: games */
	/* description: Quake I save: e3m7 The haunted halls (secret) */
	QUAKE_I_SAVE_E3M7_THE_HAUNTED_HALLS_SECRET = 2004,

	/* category: games */
	/* description: Quake I save: e3m5 Wind tunnels */
	QUAKE_I_SAVE_E3M5_WIND_TUNNELS = 2005,

	/* category: games */
	/* description: Quake I save: e3m6 Chambers of torment */
	QUAKE_I_SAVE_E3M6_CHAMBERS_OF_TORMENT = 2006,

	/* category: games */
	/* description: Quake I save: e4m1 The sewage system */
	QUAKE_I_SAVE_E4M1_THE_SEWAGE_SYSTEM = 2007,

	/* category: games */
	/* description: Quake I save: e4m2 The tower of despair */
	QUAKE_I_SAVE_E4M2_THE_TOWER_OF_DESPAIR = 2008,

	/* category: games */
	/* description: Quake I save: e4m3 The elder god shrine */
	QUAKE_I_SAVE_E4M3_THE_ELDER_GOD_SHRINE = 2009,

	/* category: games */
	/* description: Quake I save: e4m4 The palace of hate */
	QUAKE_I_SAVE_E4M4_THE_PALACE_OF_HATE = 2010,

	/* category: games */
	/* description: Quake I save: e4m5 Hell's atrium */
	QUAKE_I_SAVE_E4M5_HELL_S_ATRIUM = 2011,

	/* category: games */
	/* description: Quake I save: e4m8 The nameless city (secret) */
	QUAKE_I_SAVE_E4M8_THE_NAMELESS_CITY_SECRET = 2012,

	/* category: games */
	/* description: Quake I save: e4m6 The pain maze */
	QUAKE_I_SAVE_E4M6_THE_PAIN_MAZE = 2013,

	/* category: games */
	/* description: Quake I save: e4m7 Azure agony */
	QUAKE_I_SAVE_E4M7_AZURE_AGONY = 2014,

	/* category: games */
	/* description: Quake I save: end Shub-Niggurath's pit */
	QUAKE_I_SAVE_END_SHUB_NIGGURATH_S_PIT = 2015,

	/* category: games */
	/* description: Quake I save: dm1 Place of two deaths */
	QUAKE_I_SAVE_DM1_PLACE_OF_TWO_DEATHS = 2016,

	/* category: games */
	/* description: Quake I save: dm2 Claustrophobopolis */
	QUAKE_I_SAVE_DM2_CLAUSTROPHOBOPOLIS = 2017,

	/* category: games */
	/* description: Quake I save: dm3 The abandoned base */
	QUAKE_I_SAVE_DM3_THE_ABANDONED_BASE = 2018,

	/* category: games */
	/* description: Quake I save: dm4 The bad place */
	QUAKE_I_SAVE_DM4_THE_BAD_PLACE = 2019,

	/* category: games */
	/* description: Quake I save: dm5 The cistern */
	QUAKE_I_SAVE_DM5_THE_CISTERN = 2020,

	/* category: games */
	/* description: Quake I save: dm6 The dark zone */
	QUAKE_I_SAVE_DM6_THE_DARK_ZONE = 2021,

	/* category: games */
	/* description: Quake I save: start Command HQ */
	QUAKE_I_SAVE_START_COMMAND_HQ = 2022,

	/* category: games */
	/* description: Quake I save: hip1m1 The pumping station */
	QUAKE_I_SAVE_HIP1M1_THE_PUMPING_STATION = 2023,

	/* category: games */
	/* description: Quake I save: hip1m2 Storage facility */
	QUAKE_I_SAVE_HIP1M2_STORAGE_FACILITY = 2024,

	/* category: games */
	/* description: Quake I save: hip1m5 Military complex (secret) */
	QUAKE_I_SAVE_HIP1M5_MILITARY_COMPLEX_SECRET = 2025,

	/* category: games */
	/* description: Quake I save: hip1m3 The lost mine */
	QUAKE_I_SAVE_HIP1M3_THE_LOST_MINE = 2026,

	/* category: games */
	/* description: Quake I save: hip1m4 Research facility */
	QUAKE_I_SAVE_HIP1M4_RESEARCH_FACILITY = 2027,

	/* category: games */
	/* description: Quake I save: hip2m1 Ancient realms */
	QUAKE_I_SAVE_HIP2M1_ANCIENT_REALMS = 2028,

	/* category: games */
	/* description: Quake I save: hip2m6 The gremlin's domain (secret) */
	QUAKE_I_SAVE_HIP2M6_THE_GREMLIN_S_DOMAIN_SECRET = 2029,

	/* category: games */
	/* description: Quake I save: hip2m2 The black cathedral */
	QUAKE_I_SAVE_HIP2M2_THE_BLACK_CATHEDRAL = 2030,

	/* category: games */
	/* description: Quake I save: hip2m3 The catacombs */
	QUAKE_I_SAVE_HIP2M3_THE_CATACOMBS = 2031,

	/* category: games */
	/* description: Quake I save: hip2m4 The crypt */
	QUAKE_I_SAVE_HIP2M4_THE_CRYPT = 2032,

	/* category: games */
	/* description: Quake I save: hip2m5 Mortum's keep */
	QUAKE_I_SAVE_HIP2M5_MORTUM_S_KEEP = 2033,

	/* category: games */
	/* description: Quake I save: hip3m1 Tur torment */
	QUAKE_I_SAVE_HIP3M1_TUR_TORMENT = 2034,

	/* category: games */
	/* description: Quake I save: hip3m2 Pandemonium */
	QUAKE_I_SAVE_HIP3M2_PANDEMONIUM = 2035,

	/* category: games */
	/* description: Quake I save: hip3m3 Limbo */
	QUAKE_I_SAVE_HIP3M3_LIMBO = 2036,

	/* category: games */
	/* description: Quake I save: hipdm1 The edge of oblivion (secret) */
	QUAKE_I_SAVE_HIPDM1_THE_EDGE_OF_OBLIVION_SECRET = 2037,

	/* category: games */
	/* description: Quake I save: hip3m4 The gauntlet */
	QUAKE_I_SAVE_HIP3M4_THE_GAUNTLET = 2038,

	/* category: games */
	/* description: Quake I save: hipend Armagon's lair */
	QUAKE_I_SAVE_HIPEND_ARMAGON_S_LAIR = 2039,

	/* category: games */
	/* description: Quake I save: start The academy */
	QUAKE_I_SAVE_START_THE_ACADEMY = 2040,

	/* category: games */
	/* description: Quake I save: d1 The lab */
	QUAKE_I_SAVE_D1_THE_LAB = 2041,

	/* category: games */
	/* description: Quake I save: d1b Area 33 */
	QUAKE_I_SAVE_D1B_AREA_33 = 2042,

	/* category: games */
	/* description: Quake I save: d3b Secret missions */
	QUAKE_I_SAVE_D3B_SECRET_MISSIONS = 2043,

	/* category: games */
	/* description: Quake I save: d10 The hospital (secret) */
	QUAKE_I_SAVE_D10_THE_HOSPITAL_SECRET = 2044,

	/* category: games */
	/* description: Quake I save: d11 The genetics lab (secret) */
	QUAKE_I_SAVE_D11_THE_GENETICS_LAB_SECRET = 2045,

	/* category: games */
	/* description: Quake I save: d4b Back to Malice */
	QUAKE_I_SAVE_D4B_BACK_TO_MALICE = 2046,

	/* category: games */
	/* description: Quake I save: d1c Area 44 */
	QUAKE_I_SAVE_D1C_AREA_44 = 2047,

	/* category: games */
	/* description: Quake I save: d2 Takahiro towers */
	QUAKE_I_SAVE_D2_TAKAHIRO_TOWERS = 2048,

	/* category: games */
	/* description: Quake I save: d3 A rat's life */
	QUAKE_I_SAVE_D3_A_RAT_S_LIFE = 2049,

	/* category: games */
	/* description: Quake I save: d4 Into the flood */
	QUAKE_I_SAVE_D4_INTO_THE_FLOOD = 2050,

	/* category: games */
	/* description: Quake I save: d5 The flood */
	QUAKE_I_SAVE_D5_THE_FLOOD = 2051,

	/* category: games */
	/* description: Quake I save: d6 Nuclear plant */
	QUAKE_I_SAVE_D6_NUCLEAR_PLANT = 2052,

	/* category: games */
	/* description: Quake I save: d7 The incinerator plant */
	QUAKE_I_SAVE_D7_THE_INCINERATOR_PLANT = 2053,

	/* category: games */
	/* description: Quake I save: d7b The foundry */
	QUAKE_I_SAVE_D7B_THE_FOUNDRY = 2054,

	/* category: games */
	/* description: Quake I save: d8 The underwater base */
	QUAKE_I_SAVE_D8_THE_UNDERWATER_BASE = 2055,

	/* category: games */
	/* description: Quake I save: d9 Takahiro base */
	QUAKE_I_SAVE_D9_TAKAHIRO_BASE = 2056,

	/* category: games */
	/* description: Quake I save: d12 Takahiro laboratories */
	QUAKE_I_SAVE_D12_TAKAHIRO_LABORATORIES = 2057,

	/* category: games */
	/* description: Quake I save: d13 Stayin' alive */
	QUAKE_I_SAVE_D13_STAYIN_ALIVE = 2058,

	/* category: games */
	/* description: Quake I save: d14 B.O.S.S. HQ */
	QUAKE_I_SAVE_D14_B_O_S_S_HQ = 2059,

	/* category: games */
	/* description: Quake I save: d15 Showdown! */
	QUAKE_I_SAVE_D15_SHOWDOWN = 2060,

	/* category: games */
	/* description: Quake I save: ddm1 The seventh precinct */
	QUAKE_I_SAVE_DDM1_THE_SEVENTH_PRECINCT = 2061,

	/* category: games */
	/* description: Quake I save: ddm2 Sub station */
	QUAKE_I_SAVE_DDM2_SUB_STATION = 2062,

	/* category: games */
	/* description: Quake I save: ddm3 Crazy eights! */
	QUAKE_I_SAVE_DDM3_CRAZY_EIGHTS = 2063,

	/* category: games */
	/* description: Quake I save: ddm4 East side invertationa */
	QUAKE_I_SAVE_DDM4_EAST_SIDE_INVERTATIONA = 2064,

	/* category: games */
	/* description: Quake I save: ddm5 Slaughterhouse */
	QUAKE_I_SAVE_DDM5_SLAUGHTERHOUSE = 2065,

	/* category: games */
	/* description: Quake I save: ddm6 Domino */
	QUAKE_I_SAVE_DDM6_DOMINO = 2066,

	/* category: games */
	/* description: Quake I save: ddm7 Sandra's ladder */
	QUAKE_I_SAVE_DDM7_SANDRA_S_LADDER = 2067,

	/* category: games */
	/* description: MAME CHD compressed hard disk image, */
	MAME_CHD_COMPRESSED_HARD_DISK_IMAGE = 2068,

	/* category: games */
	/* description: doom main IWAD data */
	DOOM_MAIN_IWAD_DATA = 2069,

	/* category: games */
	/* description: doom patch PWAD data */
	DOOM_PATCH_PWAD_DATA = 2070,

	/* category: games */
	/* description: Build engine group file */
	BUILD_ENGINE_GROUP_FILE = 2071,

	/* category: games */
	/* description: Warcraft III recorded game */
	WARCRAFT_III_RECORDED_GAME = 2072,

	/* category: games */
	/* description: Warcraft III map file */
	WARCRAFT_III_MAP_FILE = 2073,

	/* category: games */
	/* description: Smart Game Format */
	SMART_GAME_FORMAT = 2074,

	/* category: games */
	/* description: Smart Game Format (Go) */
	SMART_GAME_FORMAT_GO = 2075,

	/* category: games */
	/* description: Smart Game Format (Othello) */
	SMART_GAME_FORMAT_OTHELLO = 2076,

	/* category: games */
	/* description: Smart Game Format (chess) */
	SMART_GAME_FORMAT_CHESS = 2077,

	/* category: games */
	/* description: Smart Game Format (Gomoku+Renju) */
	SMART_GAME_FORMAT_GOMOKUPRENJU = 2078,

	/* category: games */
	/* description: Smart Game Format (Nine Men's Morris) */
	SMART_GAME_FORMAT_NINE_MEN_S_MORRIS = 2079,

	/* category: games */
	/* description: Smart Game Format (Backgammon) */
	SMART_GAME_FORMAT_BACKGAMMON = 2080,

	/* category: games */
	/* description: Smart Game Format (Chinese chess) */
	SMART_GAME_FORMAT_CHINESE_CHESS = 2081,

	/* category: games */
	/* description: Smart Game Format (Shogi) */
	SMART_GAME_FORMAT_SHOGI = 2082,

	/* category: games */
	/* description: Smart Game Format (Lines of Action) */
	SMART_GAME_FORMAT_LINES_OF_ACTION = 2083,

	/* category: games */
	/* description: Smart Game Format (Ataxx) */
	SMART_GAME_FORMAT_ATAXX = 2084,

	/* category: games */
	/* description: Smart Game Format (Hex) */
	SMART_GAME_FORMAT_HEX = 2085,

	/* category: games */
	/* description: Smart Game Format (Jungle) */
	SMART_GAME_FORMAT_JUNGLE = 2086,

	/* category: games */
	/* description: Smart Game Format (Neutron) */
	SMART_GAME_FORMAT_NEUTRON = 2087,

	/* category: games */
	/* description: Smart Game Format (Philosopher's Football) */
	SMART_GAME_FORMAT_PHILOSOPHER_S_FOOTBALL = 2088,

	/* category: games */
	/* description: Smart Game Format (Quadrature) */
	SMART_GAME_FORMAT_QUADRATURE = 2089,

	/* category: games */
	/* description: Smart Game Format (Trax) */
	SMART_GAME_FORMAT_TRAX = 2090,

	/* category: games */
	/* description: Smart Game Format (Tantrix) */
	SMART_GAME_FORMAT_TANTRIX = 2091,

	/* category: games */
	/* description: Smart Game Format (Amazons) */
	SMART_GAME_FORMAT_AMAZONS = 2092,

	/* category: games */
	/* description: Smart Game Format (Octi) */
	SMART_GAME_FORMAT_OCTI = 2093,

	/* category: games */
	/* description: Smart Game Format (Gess) */
	SMART_GAME_FORMAT_GESS = 2094,

	/* category: games */
	/* description: Smart Game Format (Twixt) */
	SMART_GAME_FORMAT_TWIXT = 2095,

	/* category: games */
	/* description: Smart Game Format (Zertz) */
	SMART_GAME_FORMAT_ZERTZ = 2096,

	/* category: games */
	/* description: Smart Game Format (Plateau) */
	SMART_GAME_FORMAT_PLATEAU = 2097,

	/* category: games */
	/* description: Smart Game Format (Yinsh) */
	SMART_GAME_FORMAT_YINSH = 2098,

	/* category: games */
	/* description: Smart Game Format (Punct) */
	SMART_GAME_FORMAT_PUNCT = 2099,

	/* category: games */
	/* description: Smart Game Format (Gobblet) */
	SMART_GAME_FORMAT_GOBBLET = 2100,

	/* category: games */
	/* description: Smart Game Format (hive) */
	SMART_GAME_FORMAT_HIVE = 2101,

	/* category: games */
	/* description: Smart Game Format (Exxit) */
	SMART_GAME_FORMAT_EXXIT = 2102,

	/* category: games */
	/* description: Smart Game Format (Hnefatal) */
	SMART_GAME_FORMAT_HNEFATAL = 2103,

	/* category: games */
	/* description: Smart Game Format (Kuba) */
	SMART_GAME_FORMAT_KUBA = 2104,

	/* category: games */
	/* description: Smart Game Format (Tripples) */
	SMART_GAME_FORMAT_TRIPPLES = 2105,

	/* category: games */
	/* description: Smart Game Format (Chase) */
	SMART_GAME_FORMAT_CHASE = 2106,

	/* category: games */
	/* description: Smart Game Format (Tumbling Down) */
	SMART_GAME_FORMAT_TUMBLING_DOWN = 2107,

	/* category: games */
	/* description: Smart Game Format (Sahara) */
	SMART_GAME_FORMAT_SAHARA = 2108,

	/* category: games */
	/* description: Smart Game Format (Byte) */
	SMART_GAME_FORMAT_BYTE = 2109,

	/* category: games */
	/* description: Smart Game Format (Focus) */
	SMART_GAME_FORMAT_FOCUS = 2110,

	/* category: games */
	/* description: Smart Game Format (Dvonn) */
	SMART_GAME_FORMAT_DVONN = 2111,

	/* category: games */
	/* description: Smart Game Format (Tamsk) */
	SMART_GAME_FORMAT_TAMSK = 2112,

	/* category: games */
	/* description: Smart Game Format (Gipf) */
	SMART_GAME_FORMAT_GIPF = 2113,

	/* category: games */
	/* description: Smart Game Format (Kropki) */
	SMART_GAME_FORMAT_KROPKI = 2114,

	/* category: games */
	/* description: Gamebryo game engine file */
	GAMEBRYO_GAME_ENGINE_FILE = 2115,

	/* category: games */
	/* description: Gamebryo game engine animation File */
	GAMEBRYO_GAME_ENGINE_ANIMATION_FILE = 2116,

	/* category: games */
	/* description: NetImmerse game engine file */
	NETIMMERSE_GAME_ENGINE_FILE = 2117,

	/* category: games */
	/* description: Smart Game Format - Go Game */
	SMART_GAME_FORMAT_GO_GAME = 2118,

	/* category: games */
	/* description: Smart Game Format - BackGammon Game */
	SMART_GAME_FORMAT_BACKGAMMON_GAME = 2119,

	/* category: games */
	/* description: Smart Game Format - Hex Game */
	SMART_GAME_FORMAT_HEX_GAME = 2120,

	/* category: games */
	/* description: Smart Game Format - Amazons Game */
	SMART_GAME_FORMAT_AMAZONS_GAME = 2121,

	/* category: games */
	/* description: Smart Game Format - Octi Game */
	SMART_GAME_FORMAT_OCTI_GAME = 2122,

	/* category: games */
	/* description: Smart Game Format - Gess Game */
	SMART_GAME_FORMAT_GESS_GAME = 2123,

	/* category: games */
	/* description: Smart Game Format - twix Game */
	SMART_GAME_FORMAT_TWIX_GAME = 2124,

	/* category: games */
	/* description: Unreal Engine Package, */
	UNREAL_ENGINE_PACKAGE = 2125,

	/* category: gcc */
	/* description: GCC precompiled header */
	GCC_PRECOMPILED_HEADER = 2126,

	/* category: gcc */
	/* description: GCC precompiled header for C */
	GCC_PRECOMPILED_HEADER_FOR_C = 2127,

	/* category: gcc */
	/* description: GCC precompiled header for Objective-C */
	GCC_PRECOMPILED_HEADER_FOR_OBJECTIVE_C = 2128,

	/* category: gcc */
	/* description: GCC precompiled header for C++ */
	GCC_PRECOMPILED_HEADER_FOR_CPP = 2129,

	/* category: gcc */
	/* description: GCC precompiled header for Objective-C++ */
	GCC_PRECOMPILED_HEADER_FOR_OBJECTIVE_CPP = 2130,

	/* category: gconv */
	/* description: gconv module configuration cache data */
	GCONV_MODULE_CONFIGURATION_CACHE_DATA = 2131,

	/* category: geo */
	/* description: RDI Acoustic Doppler Current Profiler (ADCP) */
	RDI_ACOUSTIC_DOPPLER_CURRENT_PROFILER_ADCP = 2132,

	/* category: geo */
	/* description: FGDC ASCII metadata */
	FGDC_ASCII_METADATA = 2133,

	/* category: geo */
	/* description: Knudsen seismic KEL binary (KEB) - */
	KNUDSEN_SEISMIC_KEL_BINARY_KEB = 2134,

	/* category: geo */
	/* description: Knudsen seismic KEL binary (KEB) - Software: %s */
	KNUDSEN_SEISMIC_KEL_BINARY_KEB_SOFTWARE_SS = 2135,

	/* category: geo */
	/* description: LADS Caris Ascii Format (CAF) bathymetric lidar */
	LADS_CARIS_ASCII_FORMAT_CAF_BATHYMETRIC_LIDAR = 2136,

	/* category: geo */
	/* description: LADS Caris Binary Format (CBF) bathymetric lidar waveform data */
	LADS_CARIS_BINARY_FORMAT_CBF_BATHYMETRIC_LIDAR_WAVEFORM_DATA = 2137,

	/* category: geo */
	/* description: GeoSwath RDF */
	GEOSWATH_RDF = 2138,

	/* category: geo */
	/* description: GeoSwatch auf text file */
	GEOSWATCH_AUF_TEXT_FILE = 2139,

	/* category: geo */
	/* description: SeaBeam 2100 multibeam sonar */
	SEABEAM_2100_MULTIBEAM_SONAR = 2140,

	/* category: geo */
	/* description: SeaBeam 2100 DR multibeam sonar */
	SEABEAM_2100_DR_MULTIBEAM_SONAR = 2141,

	/* category: geo */
	/* description: SeaBeam 2100 PR multibeam sonar */
	SEABEAM_2100_PR_MULTIBEAM_SONAR = 2142,

	/* category: geo */
	/* description: XSE multibeam */
	XSE_MULTIBEAM = 2143,

	/* category: geo */
	/* description: SAIC generic sensor format (GSF) sonar data, */
	SAIC_GENERIC_SENSOR_FORMAT_GSF_SONAR_DATA = 2144,

	/* category: geo */
	/* description: MGD77 Header, Marine Geophysical Data Exchange Format */
	MGD77_HEADER_MARINE_GEOPHYSICAL_DATA_EXCHANGE_FORMAT = 2145,

	/* category: geo */
	/* description: mbsystem info cache */
	MBSYSTEM_INFO_CACHE = 2146,

	/* category: geo */
	/* description: Caris multibeam sonar related data */
	CARIS_MULTIBEAM_SONAR_RELATED_DATA = 2147,

	/* category: geo */
	/* description: Caris ASCII project summary */
	CARIS_ASCII_PROJECT_SUMMARY = 2148,

	/* category: geo */
	/* description: IVS Fledermaus TDR file */
	IVS_FLEDERMAUS_TDR_FILE = 2149,

	/* category: geo */
	/* description: ECMA-363, Universal 3D */
	ECMA_363_UNIVERSAL_3D = 2150,

	/* category: geo */
	/* description: elog journal entry */
	ELOG_JOURNAL_ENTRY = 2151,

	/* category: geo */
	/* description: Surfer 6 binary grid file */
	SURFER_6_BINARY_GRID_FILE = 2152,

	/* category: geo */
	/* description: LIDAR point data records */
	LIDAR_POINT_DATA_RECORDS = 2153,

	/* category: geo */
	/* description: Point Cloud Data */
	POINT_CLOUD_DATA = 2154,

	/* category: geos */
	/* description: GEOS */
	GEOS = 2155,

	/* category: geos */
	/* description: GEOS executable */
	GEOS_EXECUTABLE = 2156,

	/* category: geos */
	/* description: GEOS VMFile */
	GEOS_VMFILE = 2157,

	/* category: geos */
	/* description: GEOS binary */
	GEOS_BINARY = 2158,

	/* category: geos */
	/* description: GEOS directory label */
	GEOS_DIRECTORY_LABEL = 2159,

	/* category: geos */
	/* description: GEOS unknown */
	GEOS_UNKNOWN = 2160,

	/* category: gimp */
	/* description: GIMP gradient data */
	GIMP_GRADIENT_DATA = 2161,

	/* category: gimp */
	/* description: GIMP palette data */
	GIMP_PALETTE_DATA = 2162,

	/* category: gimp */
	/* description: GIMP XCF image data, */
	GIMP_XCF_IMAGE_DATA = 2163,

	/* category: gimp */
	/* description: GIMP XCF image data, version 0, */
	GIMP_XCF_IMAGE_DATA_VERSION_0 = 2164,

	/* category: gimp */
	/* description: GIMP XCF image data, version */
	GIMP_XCF_IMAGE_DATA_VERSION = 2165,

	/* category: gimp */
	/* description: GIMP pattern data, */
	GIMP_PATTERN_DATA = 2166,

	/* category: gimp */
	/* description: GIMP brush data */
	GIMP_BRUSH_DATA = 2167,

	/* category: gimp */
	/* description: GIMP curve file */
	GIMP_CURVE_FILE = 2168,

	/* category: glibc */
	/* description: glibc locale file LC_CTYPE */
	GLIBC_LOCALE_FILE_LC_CTYPE = 2169,

	/* category: glibc */
	/* description: glibc locale file LC_NUMERIC */
	GLIBC_LOCALE_FILE_LC_NUMERIC = 2170,

	/* category: glibc */
	/* description: glibc locale file LC_TIME */
	GLIBC_LOCALE_FILE_LC_TIME = 2171,

	/* category: glibc */
	/* description: glibc locale file LC_COLLATE */
	GLIBC_LOCALE_FILE_LC_COLLATE = 2172,

	/* category: glibc */
	/* description: glibc locale file LC_MONETARY */
	GLIBC_LOCALE_FILE_LC_MONETARY = 2173,

	/* category: glibc */
	/* description: glibc locale file LC_MESSAGES */
	GLIBC_LOCALE_FILE_LC_MESSAGES = 2174,

	/* category: glibc */
	/* description: glibc locale file LC_ALL */
	GLIBC_LOCALE_FILE_LC_ALL = 2175,

	/* category: glibc */
	/* description: glibc locale file LC_PAPER */
	GLIBC_LOCALE_FILE_LC_PAPER = 2176,

	/* category: glibc */
	/* description: glibc locale file LC_NAME */
	GLIBC_LOCALE_FILE_LC_NAME = 2177,

	/* category: glibc */
	/* description: glibc locale file LC_ADDRESS */
	GLIBC_LOCALE_FILE_LC_ADDRESS = 2178,

	/* category: glibc */
	/* description: glibc locale file LC_TELEPHONE */
	GLIBC_LOCALE_FILE_LC_TELEPHONE = 2179,

	/* category: glibc */
	/* description: glibc locale file LC_MEASUREMENT */
	GLIBC_LOCALE_FILE_LC_MEASUREMENT = 2180,

	/* category: glibc */
	/* description: glibc locale file LC_IDENTIFICATION */
	GLIBC_LOCALE_FILE_LC_IDENTIFICATION = 2181,

	/* category: gnome */
	/* description: GNOME keyring */
	GNOME_KEYRING = 2182,

	/* category: gnome */
	/* description: GNOME keyring, major version 0 */
	GNOME_KEYRING_MAJOR_VERSION_0 = 2183,

	/* category: gnome */
	/* description: GNOME Catalogue (gtktalog) */
	GNOME_CATALOGUE_GTKTALOG = 2184,

	/* category: gnome */
	/* description: GStreamer binary registry */
	GSTREAMER_BINARY_REGISTRY = 2185,

	/* category: gnome */
	/* description: GVariant Database file, */
	GVARIANT_DATABASE_FILE = 2186,

	/* category: gnome */
	/* description: G-IR binary database */
	G_IR_BINARY_DATABASE = 2187,

	/* category: gnu */
	/* description: GNU message catalog (little endian), */
	GNU_MESSAGE_CATALOG_LITTLE_ENDIAN = 2188,

	/* category: gnu */
	/* description: GNU message catalog (little endian), revision */
	GNU_MESSAGE_CATALOG_LITTLE_ENDIAN_REVISION = 2189,

	/* category: gnu */
	/* description: GNU message catalog (big endian), */
	GNU_MESSAGE_CATALOG_BIG_ENDIAN = 2190,

	/* category: gnu */
	/* description: GNU message catalog (big endian), revision %d. */
	GNU_MESSAGE_CATALOG_BIG_ENDIAN_REVISION_DD = 2191,

	/* category: gnu */
	/* description: GPG key trust database */
	GPG_KEY_TRUST_DATABASE = 2192,

	/* category: gnu */
	/* description: GPG encrypted data */
	GPG_ENCRYPTED_DATA = 2193,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (3DES cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_3DES_CIPHER = 2194,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (CAST5 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_CAST5_CIPHER = 2195,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (BLOWFISH cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_BLOWFISH_CIPHER = 2196,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (AES cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_AES_CIPHER = 2197,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (AES192 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_AES192_CIPHER = 2198,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (AES256 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_AES256_CIPHER = 2199,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (TWOFISH cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_TWOFISH_CIPHER = 2200,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (CAMELLIA128 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_CAMELLIA128_CIPHER = 2201,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (CAMELLIA192 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_CAMELLIA192_CIPHER = 2202,

	/* category: gnu */
	/* description: GPG symmetrically encrypted data (CAMELLIA256 cipher) */
	GPG_SYMMETRICALLY_ENCRYPTED_DATA_CAMELLIA256_CIPHER = 2203,

	/* category: gnu */
	/* description: GPG keybox database */
	GPG_KEYBOX_DATABASE = 2204,

	/* category: gnumeric */
	/* description: Gnumeric spreadsheet */
	GNUMERIC_SPREADSHEET = 2205,

	/* category: gnu */
	/* description: GNU findutils locate database data */
	GNU_FINDUTILS_LOCATE_DATABASE_DATA = 2206,

	/* category: gnu */
	/* description: GNU findutils locate database data (frcode) */
	GNU_FINDUTILS_LOCATE_DATABASE_DATA_FRCODE = 2207,

	/* category: gnu */
	/* description: GNU gettext message catalogue text */
	GNU_GETTEXT_MESSAGE_CATALOGUE_TEXT = 2208,

	/* category: gpt */
	/* description: GPT partition table */
	GPT_PARTITION_TABLE = 2209,

	/* category: gpt */
	/* description: GPT data structure (nonstandard: at LBA 0) */
	GPT_DATA_STRUCTURE_NONSTANDARD_AT_LBA_0 = 2210,

	/* category: gpu */
	/* description: Khronos SPIR-V binary, big-endian */
	KHRONOS_SPIR_V_BINARY_BIG_ENDIAN = 2211,

	/* category: gpu */
	/* description: Khronos SPIR-V binary, little-endian */
	KHRONOS_SPIR_V_BINARY_LITTLE_ENDIAN = 2212,

	/* category: gpu */
	/* description: Vulkan trace file, little-endian */
	VULKAN_TRACE_FILE_LITTLE_ENDIAN = 2213,

	/* category: gpu */
	/* description: Vulkan trace file, big-endian */
	VULKAN_TRACE_FILE_BIG_ENDIAN = 2214,

	/* category: grace */
	/* description: old ACE/gr binary file */
	OLD_ACE_GR_BINARY_FILE = 2215,

	/* category: grace */
	/* description: ACE/gr ascii file */
	ACE_GR_ASCII_FILE = 2216,

	/* category: grace */
	/* description: Grace project file */
	GRACE_PROJECT_FILE = 2217,

	/* category: grace */
	/* description: Grace project file (version */
	GRACE_PROJECT_FILE_VERSION = 2218,

	/* category: grace */
	/* description: ACE/gr fit description file */
	ACE_GR_FIT_DESCRIPTION_FILE = 2219,

	/* category: gringotts */
	/* description: Gringotts data file */
	GRINGOTTS_DATA_FILE = 2220,

	/* category: gringotts */
	/* description: Gringotts data file v.1, MCRYPT S2K, SERPENT crypt, SHA-256 hash, ZLib lvl.9 */
	GRINGOTTS_DATA_FILE_V_1_MCRYPT_S2K_SERPENT_CRYPT_SHA_256_HASH_ZLIB_LVL_9 = 2221,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K = 2222,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, RIJNDAEL-128 crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_RIJNDAEL_128_CRYPT = 2223,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, SERPENT crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_SERPENT_CRYPT = 2224,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, TWOFISH crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_TWOFISH_CRYPT = 2225,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, CAST-256 crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_CAST_256_CRYPT = 2226,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, SAFER+ crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_SAFERP_CRYPT = 2227,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, LOKI97 crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_LOKI97_CRYPT = 2228,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, 3DES crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_3DES_CRYPT = 2229,

	/* category: gringotts */
	/* description: Gringotts data file v.2, MCRYPT S2K, RIJNDAEL-256 crypt, */
	GRINGOTTS_DATA_FILE_V_2_MCRYPT_S2K_RIJNDAEL_256_CRYPT = 2230,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K = 2231,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, RIJNDAEL-128 crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_RIJNDAEL_128_CRYPT = 2232,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, SERPENT crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_SERPENT_CRYPT = 2233,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, TWOFISH crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_TWOFISH_CRYPT = 2234,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, CAST-256 crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_CAST_256_CRYPT = 2235,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, SAFER+ crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_SAFERP_CRYPT = 2236,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, LOKI97 crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_LOKI97_CRYPT = 2237,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, 3DES crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_3DES_CRYPT = 2238,

	/* category: gringotts */
	/* description: Gringotts data file v.3, OpenPGP S2K, RIJNDAEL-256 crypt, */
	GRINGOTTS_DATA_FILE_V_3_OPENPGP_S2K_RIJNDAEL_256_CRYPT = 2239,

	/* category: gringotts */
	/* description: Gringotts data file v.%.1s (unknown details) */
	GRINGOTTS_DATA_FILE_V_SS_UNKNOWN_DETAILS = 2240,

	/* category: guile */
	/* description: Guile Object */
	GUILE_OBJECT = 2241,

	/* category: guile */
	/* description: Guile Object, little endian */
	GUILE_OBJECT_LITTLE_ENDIAN = 2242,

	/* category: guile */
	/* description: Guile Object, big endian */
	GUILE_OBJECT_BIG_ENDIAN = 2243,

	/* category: hardware */
	/* description: EDID data, version %u. */
	EDID_DATA_VERSION_UU = 2244,

	/* category: coff */
	/* description: Intel 80386 COFF */
	INTEL_80386_COFF = 2245,

	/* category: coff */
	/* description: Hitachi SH big-endian COFF */
	HITACHI_SH_BIG_ENDIAN_COFF = 2246,

	/* category: coff */
	/* description: Hitachi SH little-endian COFF */
	HITACHI_SH_LITTLE_ENDIAN_COFF = 2247,

	/* category: coff */
	/* description: Intel ia64 COFF */
	INTEL_IA64_COFF = 2248,

	/* category: coff */
	/* description: Intel amd64 COFF */
	INTEL_AMD64_COFF = 2249,

	/* category: coff */
	/* description: COFF */
	COFF = 2250,

	/* category: hp */
	/* description: Apollo m68k COFF executable */
	APOLLO_M68K_COFF_EXECUTABLE = 2251,

	/* category: hp */
	/* description: apollo a88k COFF executable */
	APOLLO_A88K_COFF_EXECUTABLE = 2252,

	/* category: hp */
	/* description: TML 0123 byte-order format */
	TML_0123_BYTE_ORDER_FORMAT = 2253,

	/* category: hp */
	/* description: TML 1032 byte-order format */
	TML_1032_BYTE_ORDER_FORMAT = 2254,

	/* category: hp */
	/* description: TML 2301 byte-order format */
	TML_2301_BYTE_ORDER_FORMAT = 2255,

	/* category: hp */
	/* description: TML 3210 byte-order format */
	TML_3210_BYTE_ORDER_FORMAT = 2256,

	/* category: hp */
	/* description: PA-RISC1.1 relocatable object */
	PA_RISC1_1_RELOCATABLE_OBJECT = 2257,

	/* category: hp */
	/* description: PA-RISC1.1 executable */
	PA_RISC1_1_EXECUTABLE = 2258,

	/* category: hp */
	/* description: PA-RISC1.1 shared executable */
	PA_RISC1_1_SHARED_EXECUTABLE = 2259,

	/* category: hp */
	/* description: PA-RISC1.1 demand-load executable */
	PA_RISC1_1_DEMAND_LOAD_EXECUTABLE = 2260,

	/* category: hp */
	/* description: PA-RISC1.1 shared library */
	PA_RISC1_1_SHARED_LIBRARY = 2261,

	/* category: hp */
	/* description: PA-RISC1.1 shared library - not stripped */
	PA_RISC1_1_SHARED_LIBRARY_NOT_STRIPPED = 2262,

	/* category: hp */
	/* description: PA-RISC1.1 dynamic load library */
	PA_RISC1_1_DYNAMIC_LOAD_LIBRARY = 2263,

	/* category: hp */
	/* description: PA-RISC1.1 dynamic load library - not stripped */
	PA_RISC1_1_DYNAMIC_LOAD_LIBRARY_NOT_STRIPPED = 2264,

	/* category: hp */
	/* description: PA-RISC2.0 relocatable object */
	PA_RISC2_0_RELOCATABLE_OBJECT = 2265,

	/* category: hp */
	/* description: PA-RISC2.0 executable */
	PA_RISC2_0_EXECUTABLE = 2266,

	/* category: hp */
	/* description: PA-RISC2.0 shared executable */
	PA_RISC2_0_SHARED_EXECUTABLE = 2267,

	/* category: hp */
	/* description: PA-RISC2.0 demand-load executable */
	PA_RISC2_0_DEMAND_LOAD_EXECUTABLE = 2268,

	/* category: hp */
	/* description: PA-RISC2.0 shared library */
	PA_RISC2_0_SHARED_LIBRARY = 2269,

	/* category: hp */
	/* description: PA-RISC2.0 shared library - not stripped */
	PA_RISC2_0_SHARED_LIBRARY_NOT_STRIPPED = 2270,

	/* category: hp */
	/* description: PA-RISC2.0 dynamic load library */
	PA_RISC2_0_DYNAMIC_LOAD_LIBRARY = 2271,

	/* category: hp */
	/* description: PA-RISC2.0 dynamic load library - not stripped */
	PA_RISC2_0_DYNAMIC_LOAD_LIBRARY_NOT_STRIPPED = 2272,

	/* category: hp */
	/* description: PA-RISC1.0 relocatable object */
	PA_RISC1_0_RELOCATABLE_OBJECT = 2273,

	/* category: hp */
	/* description: PA-RISC1.0 executable */
	PA_RISC1_0_EXECUTABLE = 2274,

	/* category: hp */
	/* description: PA-RISC1.0 shared executable */
	PA_RISC1_0_SHARED_EXECUTABLE = 2275,

	/* category: hp */
	/* description: PA-RISC1.0 demand-load executable */
	PA_RISC1_0_DEMAND_LOAD_EXECUTABLE = 2276,

	/* category: hp */
	/* description: PA-RISC1.0 shared library */
	PA_RISC1_0_SHARED_LIBRARY = 2277,

	/* category: hp */
	/* description: PA-RISC1.0 shared library - not stripped */
	PA_RISC1_0_SHARED_LIBRARY_NOT_STRIPPED = 2278,

	/* category: hp */
	/* description: PA-RISC1.0 dynamic load library */
	PA_RISC1_0_DYNAMIC_LOAD_LIBRARY = 2279,

	/* category: hp */
	/* description: PA-RISC1.0 dynamic load library - not stripped */
	PA_RISC1_0_DYNAMIC_LOAD_LIBRARY_NOT_STRIPPED = 2280,

	/* category: hp */
	/* description: HP s500 relocatable executable */
	HP_S500_RELOCATABLE_EXECUTABLE = 2281,

	/* category: hp */
	/* description: HP s500 executable */
	HP_S500_EXECUTABLE = 2282,

	/* category: hp */
	/* description: HP s500 pure executable */
	HP_S500_PURE_EXECUTABLE = 2283,

	/* category: hp */
	/* description: HP s200 pure executable */
	HP_S200_PURE_EXECUTABLE = 2284,

	/* category: hp */
	/* description: HP s200 executable */
	HP_S200_EXECUTABLE = 2285,

	/* category: hp */
	/* description: HP s200 demand-load executable */
	HP_S200_DEMAND_LOAD_EXECUTABLE = 2286,

	/* category: hp */
	/* description: HP s200 relocatable executable */
	HP_S200_RELOCATABLE_EXECUTABLE = 2287,

	/* category: hp */
	/* description: HP s200 (2.x release) pure executable */
	HP_S200_2_X_RELEASE_PURE_EXECUTABLE = 2288,

	/* category: hp */
	/* description: HP s200 (2.x release) executable */
	HP_S200_2_X_RELEASE_EXECUTABLE = 2289,

	/* category: hp */
	/* description: HP s200 shared library */
	HP_S200_SHARED_LIBRARY = 2290,

	/* category: hp */
	/* description: HP s200 dynamic load library */
	HP_S200_DYNAMIC_LOAD_LIBRARY = 2291,

	/* category: hp */
	/* description: HP old archive */
	HP_OLD_ARCHIVE = 2292,

	/* category: hp */
	/* description: HP s200 old archive */
	HP_S200_OLD_ARCHIVE = 2293,

	/* category: hp */
	/* description: HP s500 old archive */
	HP_S500_OLD_ARCHIVE = 2294,

	/* category: hp */
	/* description: HP core file */
	HP_CORE_FILE = 2295,

	/* category: hp */
	/* description: HP-WINDOWS font */
	HP_WINDOWS_FONT = 2296,

	/* category: hp */
	/* description: HP Bitmapfile */
	HP_BITMAPFILE = 2297,

	/* category: hp */
	/* description: CIS 	compimg HP Bitmapfile */
	CIS_COMPIMG_HP_BITMAPFILE = 2298,

	/* category: hp */
	/* description: compiled Lisp */
	COMPILED_LISP = 2299,

	/* category: hp */
	/* description: HP NLS message catalog, */
	HP_NLS_MESSAGE_CATALOG = 2300,

	/* category: hp */
	/* description: HP NLS message catalog, %d messages */
	HP_NLS_MESSAGE_CATALOG_DD_MESSAGES = 2301,

	/* category: hp */
	/* description: HP */
	HP = 2302,

	/* category: hp */
	/* description: HP 48 binary */
	HP_48_BINARY = 2303,

	/* category: hp */
	/* description: HP 49 binary */
	HP_49_BINARY = 2304,

	/* category: hp */
	/* description: HP text */
	HP_TEXT = 2305,

	/* category: hp */
	/* description: HP text - T(0) */
	HP_TEXT_T_0 = 2306,

	/* category: hp */
	/* description: HP text - T(1) */
	HP_TEXT_T_1 = 2307,

	/* category: hp */
	/* description: HP text - T(2) */
	HP_TEXT_T_2 = 2308,

	/* category: hp */
	/* description: HP text - T(3) */
	HP_TEXT_T_3 = 2309,

	/* category: hp */
	/* description: HP 38 */
	HP_38 = 2310,

	/* category: hp */
	/* description: HP 38 binary */
	HP_38_BINARY = 2311,

	/* category: hp */
	/* description: HP 38 ASCII */
	HP_38_ASCII = 2312,

	/* category: hp */
	/* description: HP 39 */
	HP_39 = 2313,

	/* category: hp */
	/* description: HP 39 binary */
	HP_39_BINARY = 2314,

	/* category: hp */
	/* description: HP 39 ASCII */
	HP_39_ASCII = 2315,

	/* category: hp */
	/* description: hp200 (68010) BSD */
	HP200_68010_BSD = 2316,

	/* category: hp */
	/* description: hp200 (68010) BSD impure binary */
	HP200_68010_BSD_IMPURE_BINARY = 2317,

	/* category: hp */
	/* description: hp200 (68010) BSD read-only binary */
	HP200_68010_BSD_READ_ONLY_BINARY = 2318,

	/* category: hp */
	/* description: hp200 (68010) BSD demand paged binary */
	HP200_68010_BSD_DEMAND_PAGED_BINARY = 2319,

	/* category: hp */
	/* description: hp300 (68020+68881) BSD */
	HP300_68020P68881_BSD = 2320,

	/* category: hp */
	/* description: hp300 (68020+68881) BSD impure binary */
	HP300_68020P68881_BSD_IMPURE_BINARY = 2321,

	/* category: hp */
	/* description: hp300 (68020+68881) BSD read-only binary */
	HP300_68020P68881_BSD_READ_ONLY_BINARY = 2322,

	/* category: hp */
	/* description: hp300 (68020+68881) BSD demand paged binary */
	HP300_68020P68881_BSD_DEMAND_PAGED_BINARY = 2323,

	/* category: ibm370 */
	/* description: 370 XA sysV executable */
	A_370_XA_SYSV_EXECUTABLE = 2324,

	/* category: ibm370 */
	/* description: 370 XA sysV pure executable */
	A_370_XA_SYSV_PURE_EXECUTABLE = 2325,

	/* category: ibm370 */
	/* description: 370 sysV pure executable */
	A_370_SYSV_PURE_EXECUTABLE = 2326,

	/* category: ibm370 */
	/* description: 370 sysV pure executable not stripped */
	A_370_SYSV_PURE_EXECUTABLE_NOT_STRIPPED = 2327,

	/* category: ibm370 */
	/* description: 370 XA sysV pure executable not stripped */
	A_370_XA_SYSV_PURE_EXECUTABLE_NOT_STRIPPED = 2328,

	/* category: ibm370 */
	/* description: 370 sysV executable */
	A_370_SYSV_EXECUTABLE = 2329,

	/* category: ibm370 */
	/* description: 370 sysV executable not stripped */
	A_370_SYSV_EXECUTABLE_NOT_STRIPPED = 2330,

	/* category: ibm370 */
	/* description: 370 XA sysV executable not stripped */
	A_370_XA_SYSV_EXECUTABLE_NOT_STRIPPED = 2331,

	/* category: ibm370 */
	/* description: SVR2 executable (Amdahl-UTS) */
	SVR2_EXECUTABLE_AMDAHL_UTS = 2332,

	/* category: ibm370 */
	/* description: SVR2 pure executable (Amdahl-UTS) */
	SVR2_PURE_EXECUTABLE_AMDAHL_UTS = 2333,

	/* category: ibm370 */
	/* description: SVR2 pure executable (USS/370) */
	SVR2_PURE_EXECUTABLE_USS_370 = 2334,

	/* category: ibm370 */
	/* description: SVR2 executable (USS/370) */
	SVR2_EXECUTABLE_USS_370 = 2335,

	/* category: ibm6000 */
	/* description: executable (RISC System/6000 V3.1) or obj module */
	EXECUTABLE_RISC_SYSTEM_6000_V3_1_OR_OBJ_MODULE = 2336,

	/* category: ibm6000 */
	/* description: executable (RISC System/6000 V3.1) or obj module not stripped */
	EXECUTABLE_RISC_SYSTEM_6000_V3_1_OR_OBJ_MODULE_NOT_STRIPPED = 2337,

	/* category: ibm6000 */
	/* description: shared library */
	SHARED_LIBRARY = 2338,

	/* category: ibm6000 */
	/* description: ctab data */
	CTAB_DATA = 2339,

	/* category: ibm6000 */
	/* description: structured file */
	STRUCTURED_FILE = 2340,

	/* category: ibm6000 */
	/* description: AIX message catalog */
	AIX_MESSAGE_CATALOG = 2341,

	/* category: ibm6000 */
	/* description: AIX compiled message catalog */
	AIX_COMPILED_MESSAGE_CATALOG = 2342,

	/* category: ibm6000 */
	/* description: archive */
	ARCHIVE = 2343,

	/* category: ibm6000 */
	/* description: archive (big format) */
	ARCHIVE_BIG_FORMAT = 2344,

	/* category: ibm6000 */
	/* description: 64-bit XCOFF executable or object module */
	A_64_BIT_XCOFF_EXECUTABLE_OR_OBJECT_MODULE = 2345,

	/* category: ibm6000 */
	/* description: 64-bit XCOFF executable or object module not stripped */
	A_64_BIT_XCOFF_EXECUTABLE_OR_OBJECT_MODULE_NOT_STRIPPED = 2346,

	/* category: ibm6000 */
	/* description: AIX core file */
	AIX_CORE_FILE = 2347,

	/* category: icc */
	/* description: ColorSync color profi */
	COLORSYNC_COLOR_PROFI = 2348,

	/* category: icc */
	/* description: Microsoft color profi */
	MICROSOFT_COLOR_PROFI = 2349,

	/* category: icc */
	/* description: SGI color profi */
	SGI_COLOR_PROFI = 2350,

	/* category: icc */
	/* description: Sun KCMS color profi */
	SUN_KCMS_COLOR_PROFI = 2351,

	/* category: icc */
	/* description: Taligent color profi */
	TALIGENT_COLOR_PROFI = 2352,

	/* category: icc */
	/* description: le */
	LE = 2353,

	/* category: iff */
	/* description: IFF data */
	IFF_DATA = 2354,

	/* category: iff */
	/* description: IFF data, AIFF audio */
	IFF_DATA_AIFF_AUDIO = 2355,

	/* category: iff */
	/* description: IFF data, AIFF-C compressed audio */
	IFF_DATA_AIFF_C_COMPRESSED_AUDIO = 2356,

	/* category: iff */
	/* description: IFF data, 8SVX 8-bit sampled sound voice */
	IFF_DATA_8SVX_8_BIT_SAMPLED_SOUND_VOICE = 2357,

	/* category: iff */
	/* description: IFF data, 16SV 16-bit sampled sound voice */
	IFF_DATA_16SV_16_BIT_SAMPLED_SOUND_VOICE = 2358,

	/* category: iff */
	/* description: IFF data, SAMP sampled audio */
	IFF_DATA_SAMP_SAMPLED_AUDIO = 2359,

	/* category: iff */
	/* description: IFF data, MAUD MacroSystem audio */
	IFF_DATA_MAUD_MACROSYSTEM_AUDIO = 2360,

	/* category: iff */
	/* description: IFF data, SMUS simple music */
	IFF_DATA_SMUS_SIMPLE_MUSIC = 2361,

	/* category: iff */
	/* description: IFF data, CMUS complex music */
	IFF_DATA_CMUS_COMPLEX_MUSIC = 2362,

	/* category: iff */
	/* description: IFF data, ILBM interleaved image */
	IFF_DATA_ILBM_INTERLEAVED_IMAGE = 2363,

	/* category: iff */
	/* description: IFF data, RGBN 12-bit RGB image */
	IFF_DATA_RGBN_12_BIT_RGB_IMAGE = 2364,

	/* category: iff */
	/* description: IFF data, RGB8 24-bit RGB image */
	IFF_DATA_RGB8_24_BIT_RGB_IMAGE = 2365,

	/* category: iff */
	/* description: IFF data, DEEP TVPaint/XiPaint image */
	IFF_DATA_DEEP_TVPAINT_XIPAINT_IMAGE = 2366,

	/* category: iff */
	/* description: IFF data, DR2D 2-D object */
	IFF_DATA_DR2D_2_D_OBJECT = 2367,

	/* category: iff */
	/* description: IFF data, TDDD 3-D rendering */
	IFF_DATA_TDDD_3_D_RENDERING = 2368,

	/* category: iff */
	/* description: IFF data, LWOB 3-D object */
	IFF_DATA_LWOB_3_D_OBJECT = 2369,

	/* category: iff */
	/* description: IFF data, LWO2 3-D object, v2 */
	IFF_DATA_LWO2_3_D_OBJECT_V2 = 2370,

	/* category: iff */
	/* description: IFF data, LWLO 3-D layered object */
	IFF_DATA_LWLO_3_D_LAYERED_OBJECT = 2371,

	/* category: iff */
	/* description: IFF data, REAL Real3D rendering */
	IFF_DATA_REAL_REAL3D_RENDERING = 2372,

	/* category: iff */
	/* description: IFF data, MC4D MaxonCinema4D rendering */
	IFF_DATA_MC4D_MAXONCINEMA4D_RENDERING = 2373,

	/* category: iff */
	/* description: IFF data, ANIM animation */
	IFF_DATA_ANIM_ANIMATION = 2374,

	/* category: iff */
	/* description: IFF data, YAFA animation */
	IFF_DATA_YAFA_ANIMATION = 2375,

	/* category: iff */
	/* description: IFF data, SSA super smooth animation */
	IFF_DATA_SSA_SUPER_SMOOTH_ANIMATION = 2376,

	/* category: iff */
	/* description: IFF data, ACBM continuous image */
	IFF_DATA_ACBM_CONTINUOUS_IMAGE = 2377,

	/* category: iff */
	/* description: IFF data, FAXX fax image */
	IFF_DATA_FAXX_FAX_IMAGE = 2378,

	/* category: iff */
	/* description: IFF data, FTXT formatted text */
	IFF_DATA_FTXT_FORMATTED_TEXT = 2379,

	/* category: iff */
	/* description: IFF data, CTLG message catalog */
	IFF_DATA_CTLG_MESSAGE_CATALOG = 2380,

	/* category: iff */
	/* description: IFF data, PREF preferences */
	IFF_DATA_PREF_PREFERENCES = 2381,

	/* category: iff */
	/* description: IFF data, DTYP datatype description */
	IFF_DATA_DTYP_DATATYPE_DESCRIPTION = 2382,

	/* category: iff */
	/* description: IFF data, PTCH binary patch */
	IFF_DATA_PTCH_BINARY_PATCH = 2383,

	/* category: iff */
	/* description: IFF data, AMFF AmigaMetaFile format */
	IFF_DATA_AMFF_AMIGAMETAFILE_FORMAT = 2384,

	/* category: iff */
	/* description: IFF data, WZRD StormWIZARD resource */
	IFF_DATA_WZRD_STORMWIZARD_RESOURCE = 2385,

	/* category: iff */
	/* description: IFF data, DOC desktop publishing document */
	IFF_DATA_DOC_DESKTOP_PUBLISHING_DOCUMENT = 2386,

	/* category: iff */
	/* description: IFF data, Westwood Studios VQA Multimedia, */
	IFF_DATA_WESTWOOD_STUDIOS_VQA_MULTIMEDIA = 2387,

	/* category: iff */
	/* description: IFF data, Wing Commander III Video */
	IFF_DATA_WING_COMMANDER_III_VIDEO = 2388,

	/* category: iff */
	/* description: IFF data, Wing Commander III Video, PC version */
	IFF_DATA_WING_COMMANDER_III_VIDEO_PC_VERSION = 2389,

	/* category: iff */
	/* description: IFF data, Wing Commander III Video, 3DO version */
	IFF_DATA_WING_COMMANDER_III_VIDEO_3DO_VERSION = 2390,

	/* category: iff */
	/* description: IFF data, Blorb Interactive Fiction */
	IFF_DATA_BLORB_INTERACTIVE_FICTION = 2391,

	/* category: iff */
	/* description: IFF data, Blorb Interactive Fiction with executable chunk */
	IFF_DATA_BLORB_INTERACTIVE_FICTION_WITH_EXECUTABLE_CHUNK = 2392,

	/* category: iff */
	/* description: IFF data, Z-machine or Glulx saved game file (Quetzal) */
	IFF_DATA_Z_MACHINE_OR_GLULX_SAVED_GAME_FILE_QUETZAL = 2393,

	/* category: images */
	/* description: Targa image data */
	TARGA_IMAGE_DATA = 2394,

	/* category: images */
	/* description: Targa image data - Map */
	TARGA_IMAGE_DATA_MAP = 2395,

	/* category: images */
	/* description: Targa image data - RGB */
	TARGA_IMAGE_DATA_RGB = 2396,

	/* category: images */
	/* description: Targa image data - RGBA */
	TARGA_IMAGE_DATA_RGBA = 2397,

	/* category: images */
	/* description: Targa image data - Mono */
	TARGA_IMAGE_DATA_MONO = 2398,

	/* category: images */
	/* description: Targa image data - Color */
	TARGA_IMAGE_DATA_COLOR = 2399,

	/* category: images */
	/* description: Netpbm image data */
	NETPBM_IMAGE_DATA = 2400,

	/* category: images */
	/* description: Netpbm PAM image file */
	NETPBM_PAM_IMAGE_FILE = 2401,

	/* category: images */
	/* description: Solitaire Image Recorder format */
	SOLITAIRE_IMAGE_RECORDER_FORMAT = 2402,

	/* category: images */
	/* description: Solitaire Image Recorder format MGI Type 11 */
	SOLITAIRE_IMAGE_RECORDER_FORMAT_MGI_TYPE_11 = 2403,

	/* category: images */
	/* description: Solitaire Image Recorder format MGI Type 17 */
	SOLITAIRE_IMAGE_RECORDER_FORMAT_MGI_TYPE_17 = 2404,

	/* category: images */
	/* description: MicroDesign data */
	MICRODESIGN_DATA = 2405,

	/* category: images */
	/* description: MicroDesign data version 2 */
	MICRODESIGN_DATA_VERSION_2 = 2406,

	/* category: images */
	/* description: MicroDesign data version 3 */
	MICRODESIGN_DATA_VERSION_3 = 2407,

	/* category: images */
	/* description: MicroDesign page data */
	MICRODESIGN_PAGE_DATA = 2408,

	/* category: images */
	/* description: MicroDesign page data version 2 */
	MICRODESIGN_PAGE_DATA_VERSION_2 = 2409,

	/* category: images */
	/* description: MicroDesign page data version 3 */
	MICRODESIGN_PAGE_DATA_VERSION_3 = 2410,

	/* category: images */
	/* description: NIFF image data */
	NIFF_IMAGE_DATA = 2411,

	/* category: images */
	/* description: Canon CIFF raw image data */
	CANON_CIFF_RAW_IMAGE_DATA = 2412,

	/* category: images */
	/* description: Canon CR2 raw image data */
	CANON_CR2_RAW_IMAGE_DATA = 2413,

	/* category: images */
	/* description: TIFF image data, big-endian */
	TIFF_IMAGE_DATA_BIG_ENDIAN = 2414,

	/* category: images */
	/* description: TIFF image data, little-endian */
	TIFF_IMAGE_DATA_LITTLE_ENDIAN = 2415,

	/* category: images */
	/* description: Big TIFF image data, big-endian */
	BIG_TIFF_IMAGE_DATA_BIG_ENDIAN = 2416,

	/* category: images */
	/* description: Big TIFF image data, little-endian */
	BIG_TIFF_IMAGE_DATA_LITTLE_ENDIAN = 2417,

	/* category: images */
	/* description: PNG image data */
	PNG_IMAGE_DATA = 2418,

	/* category: images */
	/* description: PNG image data (CgBI) */
	PNG_IMAGE_DATA_CGBI = 2419,

	/* category: images */
	/* description: ZIF image (GIF+deflate alpha) */
	ZIF_IMAGE_GIFPDEFLATE_ALPHA = 2420,

	/* category: images */
	/* description: FGF image (GIF+deflate beta) */
	FGF_IMAGE_GIFPDEFLATE_BETA = 2421,

	/* category: images */
	/* description: PBF image (deflate compression) */
	PBF_IMAGE_DEFLATE_COMPRESSION = 2422,

	/* category: images */
	/* description: GIF image data */
	GIF_IMAGE_DATA = 2423,

	/* category: images */
	/* description: GIF image data, version 87a, */
	GIF_IMAGE_DATA_VERSION_87A = 2424,

	/* category: images */
	/* description: GIF image data, version 89a, */
	GIF_IMAGE_DATA_VERSION_89A = 2425,

	/* category: images */
	/* description: CMU window manager raster image data */
	CMU_WINDOW_MANAGER_RASTER_IMAGE_DATA = 2426,

	/* category: images */
	/* description: MIFF image data */
	MIFF_IMAGE_DATA = 2427,

	/* category: images */
	/* description: Artisan image data */
	ARTISAN_IMAGE_DATA = 2428,

	/* category: images */
	/* description: Artisan image data, rectangular 24-bit */
	ARTISAN_IMAGE_DATA_RECTANGULAR_24_BIT = 2429,

	/* category: images */
	/* description: Artisan image data, rectangular 8-bit with colormap */
	ARTISAN_IMAGE_DATA_RECTANGULAR_8_BIT_WITH_COLORMAP = 2430,

	/* category: images */
	/* description: Artisan image data, rectangular 32-bit (24-bit with matte) */
	ARTISAN_IMAGE_DATA_RECTANGULAR_32_BIT_24_BIT_WITH_MATTE = 2431,

	/* category: images */
	/* description: FIG image text */
	FIG_IMAGE_TEXT = 2432,

	/* category: images */
	/* description: PHIGS clear text archive */
	PHIGS_CLEAR_TEXT_ARCHIVE = 2433,

	/* category: images */
	/* description: SunPHIGS */
	SUNPHIGS = 2434,

	/* category: images */
	/* description: GKS Metafile */
	GKS_METAFILE = 2435,

	/* category: images */
	/* description: GKS Metafile, SunGKS */
	GKS_METAFILE_SUNGKS = 2436,

	/* category: images */
	/* description: clear text Computer Graphics Metafile */
	CLEAR_TEXT_COMPUTER_GRAPHICS_METAFILE = 2437,

	/* category: images */
	/* description: MGR bitmap, modern format, 8-bit aligned */
	MGR_BITMAP_MODERN_FORMAT_8_BIT_ALIGNED = 2438,

	/* category: images */
	/* description: MGR bitmap, old format, 1-bit deep, 16-bit aligned */
	MGR_BITMAP_OLD_FORMAT_1_BIT_DEEP_16_BIT_ALIGNED = 2439,

	/* category: images */
	/* description: MGR bitmap, old format, 1-bit deep, 32-bit aligned */
	MGR_BITMAP_OLD_FORMAT_1_BIT_DEEP_32_BIT_ALIGNED = 2440,

	/* category: images */
	/* description: MGR bitmap, modern format, squeezed */
	MGR_BITMAP_MODERN_FORMAT_SQUEEZED = 2441,

	/* category: images */
	/* description: FBM image data */
	FBM_IMAGE_DATA = 2442,

	/* category: images */
	/* description: FBM image data, mono */
	FBM_IMAGE_DATA_MONO = 2443,

	/* category: images */
	/* description: FBM image data, color */
	FBM_IMAGE_DATA_COLOR = 2444,

	/* category: images */
	/* description: group 3 fax data */
	GROUP_3_FAX_DATA = 2445,

	/* category: images */
	/* description: group 3 fax data, normal resolution (204x98 DPI) */
	GROUP_3_FAX_DATA_NORMAL_RESOLUTION_204X98_DPI = 2446,

	/* category: images */
	/* description: group 3 fax data, fine resolution (204x196 DPI) */
	GROUP_3_FAX_DATA_FINE_RESOLUTION_204X196_DPI = 2447,

	/* category: images */
	/* description: structured fax file */
	STRUCTURED_FAX_FILE = 2448,

	/* category: images */
	/* description: Award BIOS Logo, 136 x 84 */
	AWARD_BIOS_LOGO_136_X_84 = 2449,

	/* category: images */
	/* description: Award BIOS Logo, 136 x 126 */
	AWARD_BIOS_LOGO_136_X_126 = 2450,

	/* category: images */
	/* description: Award BIOS bitmap, */
	AWARD_BIOS_BITMAP = 2451,

	/* category: images */
	/* description: PC bitmap, OS/2 1.x format */
	PC_BITMAP_OS_2_1_X_FORMAT = 2452,

	/* category: images */
	/* description: PC bitmap, OS/2 2.x format */
	PC_BITMAP_OS_2_2_X_FORMAT = 2453,

	/* category: images */
	/* description: PC bitmap, Windows 3.x format */
	PC_BITMAP_WINDOWS_3_X_FORMAT = 2454,

	/* category: images */
	/* description: PC bitmap, Windows 98/2000 and newer format */
	PC_BITMAP_WINDOWS_98_2000_AND_NEWER_FORMAT = 2455,

	/* category: images */
	/* description: PC bitmap, Windows 95/NT4 and newer format */
	PC_BITMAP_WINDOWS_95_NT4_AND_NEWER_FORMAT = 2456,

	/* category: images */
	/* description: PC bitmap, Windows NT/2000 format */
	PC_BITMAP_WINDOWS_NT_2000_FORMAT = 2457,

	/* category: images */
	/* description: X pixmap image text */
	X_PIXMAP_IMAGE_TEXT = 2458,

	/* category: images */
	/* description: RLE image data, */
	RLE_IMAGE_DATA = 2459,

	/* category: images */
	/* description: iff image data */
	IFF_IMAGE_DATA = 2460,

	/* category: images */
	/* description: Sun raster image data */
	SUN_RASTER_IMAGE_DATA = 2461,

	/* category: images */
	/* description: SGI image data */
	SGI_IMAGE_DATA = 2462,

	/* category: images */
	/* description: FIT image data */
	FIT_IMAGE_DATA = 2463,

	/* category: images */
	/* description: Kodak Photo CD image pack file */
	KODAK_PHOTO_CD_IMAGE_PACK_FILE = 2464,

	/* category: images */
	/* description: Kodak Photo CD image pack file , landscape mode */
	KODAK_PHOTO_CD_IMAGE_PACK_FILE_LANDSCAPE_MODE = 2465,

	/* category: images */
	/* description: Kodak Photo CD image pack file , portrait mode */
	KODAK_PHOTO_CD_IMAGE_PACK_FILE_PORTRAIT_MODE = 2466,

	/* category: images */
	/* description: Kodak Photo CD overview pack file */
	KODAK_PHOTO_CD_OVERVIEW_PACK_FILE = 2467,

	/* category: images */
	/* description: FITS image data */
	FITS_IMAGE_DATA = 2468,

	/* category: images */
	/* description: Lisp Machine bit-array-file */
	LISP_MACHINE_BIT_ARRAY_FILE = 2469,

	/* category: images */
	/* description: PEX Binary Archive */
	PEX_BINARY_ARCHIVE = 2470,

	/* category: images */
	/* description: DICOM medical imaging data */
	DICOM_MEDICAL_IMAGING_DATA = 2471,

	/* category: images */
	/* description: XWD X Window Dump image data */
	XWD_X_WINDOW_DUMP_IMAGE_DATA = 2472,

	/* category: images */
	/* description: PDS (JPL) image data */
	PDS_JPL_IMAGE_DATA = 2473,

	/* category: images */
	/* description: PDS (CCSD) image data */
	PDS_CCSD_IMAGE_DATA = 2474,

	/* category: images */
	/* description: PDS image data */
	PDS_IMAGE_DATA = 2475,

	/* category: images */
	/* description: PDS (VICAR) image data */
	PDS_VICAR_IMAGE_DATA = 2476,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (hor) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_HOR = 2477,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (hor) (white background) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_HOR_WHITE_BACKGROUND = 2478,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (hor) (black background) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_HOR_BLACK_BACKGROUND = 2479,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (vert) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_VERT = 2480,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (vert) (white background) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_VERT_WHITE_BACKGROUND = 2481,

	/* category: images */
	/* description: Atari ST STAD bitmap image data (vert) (black background) */
	ATARI_ST_STAD_BITMAP_IMAGE_DATA_VERT_BLACK_BACKGROUND = 2482,

	/* category: images */
	/* description: Atari ATR image */
	ATARI_ATR_IMAGE = 2483,

	/* category: images */
	/* description: PCX */
	PCX = 2484,

	/* category: images */
	/* description: PCX ver. 2.5 image data bounding box [%d, */
	PCX_VER_2_5_IMAGE_DATA_BOUNDING_BOX_DD = 2485,

	/* category: images */
	/* description: PCX ver. 2.8 image data, with palette bounding box [%d, */
	PCX_VER_2_8_IMAGE_DATA_WITH_PALETTE_BOUNDING_BOX_DD = 2486,

	/* category: images */
	/* description: PCX ver. 2.8 image data, without palette bounding box [%d, */
	PCX_VER_2_8_IMAGE_DATA_WITHOUT_PALETTE_BOUNDING_BOX_DD = 2487,

	/* category: images */
	/* description: PCX for Windows image data bounding box [%d, */
	PCX_FOR_WINDOWS_IMAGE_DATA_BOUNDING_BOX_DD = 2488,

	/* category: images */
	/* description: PCX ver. 3.0 image data bounding box [%d, */
	PCX_VER_3_0_IMAGE_DATA_BOUNDING_BOX_DD = 2489,

	/* category: images */
	/* description: Adobe Photoshop Image */
	ADOBE_PHOTOSHOP_IMAGE = 2490,

	/* category: images */
	/* description: XV thumbnail image data */
	XV_THUMBNAIL_IMAGE_DATA = 2491,

	/* category: images */
	/* description: National Imagery Transmission Format */
	NATIONAL_IMAGERY_TRANSMISSION_FORMAT = 2492,

	/* category: images */
	/* description: GEM */
	GEM = 2493,

	/* category: images */
	/* description: GEM STTT */
	GEM_STTT = 2494,

	/* category: images */
	/* description: GEM TIMG */
	GEM_TIMG = 2495,

	/* category: images */
	/* description: GEM NOSIG */
	GEM_NOSIG = 2496,

	/* category: images */
	/* description: GEM HYPERPAINT */
	GEM_HYPERPAINT = 2497,

	/* category: images */
	/* description: GEM (Ventura) */
	GEM_VENTURA = 2498,

	/* category: images */
	/* description: GEM Metafile data */
	GEM_METAFILE_DATA = 2499,

	/* category: images */
	/* description: SMJPEG, */
	SMJPEG = 2500,

	/* category: images */
	/* description: SMJPEG %d.x data */
	SMJPEG_DD_X_DATA = 2501,

	/* category: images */
	/* description: Paint Shop Pro Image File */
	PAINT_SHOP_PRO_IMAGE_FILE = 2502,

	/* category: images */
	/* description: XV "thumbnail file" (icon) data */
	XV_THUMBNAIL_FILE_ICON_DATA = 2503,

	/* category: images */
	/* description: KISS/GS */
	KISS_GS = 2504,

	/* category: images */
	/* description: KISS/GS color */
	KISS_GS_COLOR = 2505,

	/* category: images */
	/* description: KISS/GS cell */
	KISS_GS_CELL = 2506,

	/* category: images */
	/* description: Webshots Desktop .wbz file */
	WEBSHOTS_DESKTOP_WBZ_FILE = 2507,

	/* category: images */
	/* description: Hercules CKD DASD image file */
	HERCULES_CKD_DASD_IMAGE_FILE = 2508,

	/* category: images */
	/* description: Hercules compressed CKD DASD image file */
	HERCULES_COMPRESSED_CKD_DASD_IMAGE_FILE = 2509,

	/* category: images */
	/* description: Hercules CKD DASD shadow file */
	HERCULES_CKD_DASD_SHADOW_FILE = 2510,

	/* category: images */
	/* description: Squeak image data */
	SQUEAK_IMAGE_DATA = 2511,

	/* category: images */
	/* description: Squeak program text */
	SQUEAK_PROGRAM_TEXT = 2512,

	/* category: images */
	/* description: PartImage */
	PARTIMAGE = 2513,

	/* category: images */
	/* description: PartImage file version 0.6.1 */
	PARTIMAGE_FILE_VERSION_0_6_1 = 2514,

	/* category: images */
	/* description: DCX multi-page PCX image data */
	DCX_MULTI_PAGE_PCX_IMAGE_DATA = 2515,

	/* category: images */
	/* description: Cineon image data */
	CINEON_IMAGE_DATA = 2516,

	/* category: images */
	/* description: Bio-Rad .PIC Image File */
	BIO_RAD_PIC_IMAGE_FILE = 2517,

	/* category: images */
	/* description: Minolta Dimage camera raw image data */
	MINOLTA_DIMAGE_CAMERA_RAW_IMAGE_DATA = 2518,

	/* category: images */
	/* description: DjVu multiple page document */
	DJVU_MULTIPLE_PAGE_DOCUMENT = 2519,

	/* category: images */
	/* description: DjVu image or single page document */
	DJVU_IMAGE_OR_SINGLE_PAGE_DOCUMENT = 2520,

	/* category: images */
	/* description: DjVu shared document */
	DJVU_SHARED_DOCUMENT = 2521,

	/* category: images */
	/* description: DjVu page thumbnails */
	DJVU_PAGE_THUMBNAILS = 2522,

	/* category: images */
	/* description: OpenEXR image data, */
	OPENEXR_IMAGE_DATA = 2523,

	/* category: images */
	/* description: OpenEXR image data, storage: scanline */
	OPENEXR_IMAGE_DATA_STORAGE_SCANLINE = 2524,

	/* category: images */
	/* description: OpenEXR image data, storage: tiled */
	OPENEXR_IMAGE_DATA_STORAGE_TILED = 2525,

	/* category: images */
	/* description: DPX image data, big-endian, */
	DPX_IMAGE_DATA_BIG_ENDIAN = 2526,

	/* category: images */
	/* description: DPX image data, little-endian, */
	DPX_IMAGE_DATA_LITTLE_ENDIAN = 2527,

	/* category: images */
	/* description: NetCDF Data Format data */
	NETCDF_DATA_FORMAT_DATA = 2528,

	/* category: images */
	/* description: Hierarchical Data Format (version 4) data */
	HIERARCHICAL_DATA_FORMAT_VERSION_4_DATA = 2529,

	/* category: images */
	/* description: Hierarchical Data Format (version 5) data */
	HIERARCHICAL_DATA_FORMAT_VERSION_5_DATA = 2530,

	/* category: images */
	/* description: Hierarchical Data Format (version 5) with 512 bytes user block */
	HIERARCHICAL_DATA_FORMAT_VERSION_5_WITH_512_BYTES_USER_BLOCK = 2531,

	/* category: images */
	/* description: Hierarchical Data Format (version 5) with 1k user block */
	HIERARCHICAL_DATA_FORMAT_VERSION_5_WITH_1K_USER_BLOCK = 2532,

	/* category: images */
	/* description: Hierarchical Data Format (version 5) with 2k user block */
	HIERARCHICAL_DATA_FORMAT_VERSION_5_WITH_2K_USER_BLOCK = 2533,

	/* category: images */
	/* description: Hierarchical Data Format (version 5) with 4k user block */
	HIERARCHICAL_DATA_FORMAT_VERSION_5_WITH_4K_USER_BLOCK = 2534,

	/* category: images */
	/* description: Xara graphics file */
	XARA_GRAPHICS_FILE = 2535,

	/* category: images */
	/* description: Cartesian Perceptual Compression image */
	CARTESIAN_PERCEPTUAL_COMPRESSION_IMAGE = 2536,

	/* category: images */
	/* description: OLPC firmware icon image data */
	OLPC_FIRMWARE_ICON_IMAGE_DATA = 2537,

	/* category: images */
	/* description: Cytovision Metaphases file */
	CYTOVISION_METAPHASES_FILE = 2538,

	/* category: images */
	/* description: Cytovision Karyotype file */
	CYTOVISION_KARYOTYPE_FILE = 2539,

	/* category: images */
	/* description: Cytovision FISH Probe file */
	CYTOVISION_FISH_PROBE_FILE = 2540,

	/* category: images */
	/* description: Cytovision FLEX file */
	CYTOVISION_FLEX_FILE = 2541,

	/* category: images */
	/* description: Cytovision RATS file */
	CYTOVISION_RATS_FILE = 2542,

	/* category: images */
	/* description: Wavelet Scalar Quantization image data */
	WAVELET_SCALAR_QUANTIZATION_IMAGE_DATA = 2543,

	/* category: images */
	/* description: PCO B16 image data */
	PCO_B16_IMAGE_DATA = 2544,

	/* category: images */
	/* description: PCO B16 image data, short header */
	PCO_B16_IMAGE_DATA_SHORT_HEADER = 2545,

	/* category: images */
	/* description: PCO B16 image data, extended header */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER = 2546,

	/* category: images */
	/* description: PCO B16 image data, extended header, grayscale */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_GRAYSCALE = 2547,

	/* category: images */
	/* description: PCO B16 image data, extended header, grayscale linear LUT */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_GRAYSCALE_LINEAR_LUT = 2548,

	/* category: images */
	/* description: PCO B16 image data, extended header, grayscale logarithmic LUT */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_GRAYSCALE_LOGARITHMIC_LUT = 2549,

	/* category: images */
	/* description: PCO B16 image data, extended header, color */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_COLOR = 2550,

	/* category: images */
	/* description: PCO B16 image data, extended header, color linear LUT */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_COLOR_LINEAR_LUT = 2551,

	/* category: images */
	/* description: PCO B16 image data, extended header, color logarithmic LUT */
	PCO_B16_IMAGE_DATA_EXTENDED_HEADER_COLOR_LOGARITHMIC_LUT = 2552,

	/* category: images */
	/* description: Polar Monitor Bitmap text */
	POLAR_MONITOR_BITMAP_TEXT = 2553,

	/* category: images */
	/* description: Garmin Bitmap file */
	GARMIN_BITMAP_FILE = 2554,

	/* category: images */
	/* description: Ulead Photo Explorer5 */
	ULEAD_PHOTO_EXPLORER5 = 2555,

	/* category: images */
	/* description: X11 cursor */
	X11_CURSOR = 2556,

	/* category: images */
	/* description: Olympus ORF raw image data, big-endian */
	OLYMPUS_ORF_RAW_IMAGE_DATA_BIG_ENDIAN = 2557,

	/* category: images */
	/* description: Olympus ORF raw image data, little-endian */
	OLYMPUS_ORF_RAW_IMAGE_DATA_LITTLE_ENDIAN = 2558,

	/* category: images */
	/* description: AVCHD Clip Information */
	AVCHD_CLIP_INFORMATION = 2559,

	/* category: images */
	/* description: Radiance HDR image data */
	RADIANCE_HDR_IMAGE_DATA = 2560,

	/* category: images */
	/* description: PFS HDR image data */
	PFS_HDR_IMAGE_DATA = 2561,

	/* category: images */
	/* description: Foveon X3F raw image data */
	FOVEON_X3F_RAW_IMAGE_DATA = 2562,

	/* category: images */
	/* description: Paint.NET image data */
	PAINT_NET_IMAGE_DATA = 2563,

	/* category: images */
	/* description: ISO/IEC 19794-2 Format Minutiae Record (FMR) */
	ISO_IEC_19794_2_FORMAT_MINUTIAE_RECORD_FMR = 2564,

	/* category: images */
	/* description: JPEG-XR Image */
	JPEG_XR_IMAGE = 2565,

	/* category: images */
	/* description: BPG (Better Portable Graphics) */
	BPG_BETTER_PORTABLE_GRAPHICS = 2566,

	/* category: images */
	/* description: Mac OS X icon */
	MAC_OS_X_ICON = 2567,

	/* category: images */
	/* description: TIM image, */
	TIM_IMAGE = 2568,

	/* category: images */
	/* description: TIM image, 4-Bit, */
	TIM_IMAGE_4_BIT = 2569,

	/* category: images */
	/* description: TIM image, 8-Bit, */
	TIM_IMAGE_8_BIT = 2570,

	/* category: images */
	/* description: TIM image, 15-Bit, */
	TIM_IMAGE_15_BIT = 2571,

	/* category: images */
	/* description: TIM image, 24-Bit, */
	TIM_IMAGE_24_BIT = 2572,

	/* category: images */
	/* description: MDEC video stream, */
	MDEC_VIDEO_STREAM = 2573,

	/* category: images */
	/* description: BS image, */
	BS_IMAGE = 2574,

	/* category: images */
	/* description: farbfeld image data, */
	FARBFELD_IMAGE_DATA = 2575,

	/* category: images */
	/* description: Microsoft DirectDraw Surface (DDS): */
	MICROSOFT_DIRECTDRAW_SURFACE_DDS = 2576,

	/* category: images */
	/* description: Sega PVR (Xbox) image: */
	SEGA_PVR_XBOX_IMAGE = 2577,

	/* category: images */
	/* description: Sega GVR image: */
	SEGA_GVR_IMAGE = 2578,

	/* category: images */
	/* description: Lytro Light Field Picture */
	LYTRO_LIGHT_FIELD_PICTURE = 2579,

	/* category: images */
	/* description: Vision Research CINE Video, */
	VISION_RESEARCH_CINE_VIDEO = 2580,

	/* category: images */
	/* description: Vision Research CINE Video, Grayscale, */
	VISION_RESEARCH_CINE_VIDEO_GRAYSCALE = 2581,

	/* category: images */
	/* description: Vision Research CINE Video, JPEG Compressed, */
	VISION_RESEARCH_CINE_VIDEO_JPEG_COMPRESSED = 2582,

	/* category: images */
	/* description: Vision Research CINE Video, RAW, */
	VISION_RESEARCH_CINE_VIDEO_RAW = 2583,

	/* category: images */
	/* description: ARRI ARI image data, */
	ARRI_ARI_IMAGE_DATA = 2584,

	/* category: images */
	/* description: ARRI ARI image data, little-endian, */
	ARRI_ARI_IMAGE_DATA_LITTLE_ENDIAN = 2585,

	/* category: images */
	/* description: ARRI ARI image data, big-endian, */
	ARRI_ARI_IMAGE_DATA_BIG_ENDIAN = 2586,

	/* category: images */
	/* description: Khronos KTX texture */
	KHRONOS_KTX_TEXTURE = 2587,

	/* category: images */
	/* description: Valve Texture Format */
	VALVE_TEXTURE_FORMAT = 2588,

	/* category: images */
	/* description: Valve Texture Format (PS3) */
	VALVE_TEXTURE_FORMAT_PS3 = 2589,

	/* category: images */
	/* description: Valve Texture Format (PS3) x %u */
	VALVE_TEXTURE_FORMAT_PS3_X_UU = 2590,

	/* category: images */
	/* description: Valve Texture Format (PS3), DXT1 */
	VALVE_TEXTURE_FORMAT_PS3_DXT1 = 2591,

	/* category: images */
	/* description: Valve Texture Format (PS3), DXT5 */
	VALVE_TEXTURE_FORMAT_PS3_DXT5 = 2592,

	/* category: images */
	/* description: ASTC */
	ASTC = 2593,

	/* category: images */
	/* description: Zebra Metafile graphic */
	ZEBRA_METAFILE_GRAPHIC = 2594,

	/* category: images */
	/* description: Zebra Metafile graphic (version 1.x) */
	ZEBRA_METAFILE_GRAPHIC_VERSION_1_X = 2595,

	/* category: images */
	/* description: Zebra Metafile graphic (version 1.1x or 1.2x) */
	ZEBRA_METAFILE_GRAPHIC_VERSION_1_1X_OR_1_2X = 2596,

	/* category: images */
	/* description: Zebra Metafile graphic (version 1.49) */
	ZEBRA_METAFILE_GRAPHIC_VERSION_1_49 = 2597,

	/* category: images */
	/* description: Zebra Metafile graphic (version 1.50) */
	ZEBRA_METAFILE_GRAPHIC_VERSION_1_50 = 2598,

	/* category: images */
	/* description: icrosoft Paint image data (version 1.x) */
	ICROSOFT_PAINT_IMAGE_DATA_VERSION_1_X = 2599,

	/* category: images */
	/* description: Microsoft Paint image data (version 2.0) */
	MICROSOFT_PAINT_IMAGE_DATA_VERSION_2_0 = 2600,

	/* category: images */
	/* description: reMarkable tablet notebook lines, 1404 x 1872, %x page(s) */
	REMARKABLE_TABLET_NOTEBOOK_LINES_1404_X_1872_XX_PAGE_S = 2601,

	/* category: images */
	/* description: reMarkable tablet page (v%c), 1404 x 1872, */
	REMARKABLE_TABLET_PAGE_VCC_1404_X_1872 = 2602,

	/* category: inform */
	/* description: Inform source text */
	INFORM_SOURCE_TEXT = 2603,

	/* category: intel */
	/* description: basic-16 executable */
	BASIC_16_EXECUTABLE = 2604,

	/* category: intel */
	/* description: basic-16 executable not stripped */
	BASIC_16_EXECUTABLE_NOT_STRIPPED = 2605,

	/* category: intel */
	/* description: basic-16 executable (TV) */
	BASIC_16_EXECUTABLE_TV = 2606,

	/* category: intel */
	/* description: basic-16 executable (TV) not stripped */
	BASIC_16_EXECUTABLE_TV_NOT_STRIPPED = 2607,

	/* category: intel */
	/* description: x86 executable */
	X86_EXECUTABLE = 2608,

	/* category: intel */
	/* description: x86 executable not stripped */
	X86_EXECUTABLE_NOT_STRIPPED = 2609,

	/* category: intel */
	/* description: x86 executable (TV) */
	X86_EXECUTABLE_TV = 2610,

	/* category: intel */
	/* description: x86 executable (TV) not stripped */
	X86_EXECUTABLE_TV_NOT_STRIPPED = 2611,

	/* category: intel */
	/* description: iAPX 286 executable small model (COFF) */
	IAPX_286_EXECUTABLE_SMALL_MODEL_COFF = 2612,

	/* category: intel */
	/* description: iAPX 286 executable small model (COFF) not stripped */
	IAPX_286_EXECUTABLE_SMALL_MODEL_COFF_NOT_STRIPPED = 2613,

	/* category: intel */
	/* description: iAPX 286 executable large model (COFF) */
	IAPX_286_EXECUTABLE_LARGE_MODEL_COFF = 2614,

	/* category: intel */
	/* description: iAPX 286 executable large model (COFF) not stripped */
	IAPX_286_EXECUTABLE_LARGE_MODEL_COFF_NOT_STRIPPED = 2615,

	/* category: intel */
	/* description: BIOS (ia32) ROM Ext. */
	BIOS_IA32_ROM_EXT = 2616,

	/* category: intel */
	/* description: Intel serial flash for ICH/PCH ROM <= 5 or 3400 series A-step */
	INTEL_SERIAL_FLASH_FOR_ICH_PCH_ROM_5_OR_3400_SERIES_A_STEP = 2617,

	/* category: intel */
	/* description: Intel serial flash for PCH ROM */
	INTEL_SERIAL_FLASH_FOR_PCH_ROM = 2618,

	/* category: interleaf */
	/* description: Interleaf saved data */
	INTERLEAF_SAVED_DATA = 2619,

	/* category: interleaf */
	/* description: Interleaf document text */
	INTERLEAF_DOCUMENT_TEXT = 2620,

	/* category: interleaf */
	/* description: Interleaf document text, version */
	INTERLEAF_DOCUMENT_TEXT_VERSION = 2621,

	/* category: island */
	/* description: IslandWrite document */
	ISLANDWRITE_DOCUMENT = 2622,

	/* category: island */
	/* description: IslandDraw document */
	ISLANDDRAW_DOCUMENT = 2623,

	/* category: ispell */
	/* description: little endian ispell */
	LITTLE_ENDIAN_ISPELL = 2624,

	/* category: ispell */
	/* description: little endian ispell hash file (?), */
	LITTLE_ENDIAN_ISPELL_HASH_FILE = 2625,

	/* category: ispell */
	/* description: little endian ispell 3.0 hash file, */
	LITTLE_ENDIAN_ISPELL_3_0_HASH_FILE = 2626,

	/* category: ispell */
	/* description: little endian ispell 3.1 hash file, */
	LITTLE_ENDIAN_ISPELL_3_1_HASH_FILE = 2627,

	/* category: ispell */
	/* description: big endian ispell */
	BIG_ENDIAN_ISPELL = 2628,

	/* category: ispell */
	/* description: big endian ispell hash file (?), */
	BIG_ENDIAN_ISPELL_HASH_FILE = 2629,

	/* category: ispell */
	/* description: big endian ispell 3.0 hash file, */
	BIG_ENDIAN_ISPELL_3_0_HASH_FILE = 2630,

	/* category: ispell */
	/* description: big endian ispell 3.1 hash file, */
	BIG_ENDIAN_ISPELL_3_1_HASH_FILE = 2631,

	/* category: ispell */
	/* description: ispell */
	ISPELL = 2632,

	/* category: isz */
	/* description: ISO Zipped file */
	ISO_ZIPPED_FILE = 2633,

	/* category: java */
	/* description: Java serialization data */
	JAVA_SERIALIZATION_DATA = 2634,

	/* category: java */
	/* description: Java KeyStore */
	JAVA_KEYSTORE = 2635,

	/* category: java */
	/* description: Java JCE KeyStore */
	JAVA_JCE_KEYSTORE = 2636,

	/* category: java */
	/* description: Java source */
	JAVA_SOURCE = 2637,

	/* category: java */
	/* description: Java HPROF dump, */
	JAVA_HPROF_DUMP = 2638,

	/* category: javascript */
	/* description: Node.js script text executable */
	NODE_JS_SCRIPT_TEXT_EXECUTABLE = 2639,

	/* category: jpeg */
	/* description: JPEG image data */
	JPEG_IMAGE_DATA = 2640,

	/* category: jpeg */
	/* description: JPEG image data, JFIF standard */
	JPEG_IMAGE_DATA_JFIF_STANDARD = 2641,

	/* category: jpeg */
	/* description: JPEG image data, JFIF standard, aspect ratio */
	JPEG_IMAGE_DATA_JFIF_STANDARD_ASPECT_RATIO = 2642,

	/* category: jpeg */
	/* description: JPEG image data, JFIF standard, resolution (DPI) */
	JPEG_IMAGE_DATA_JFIF_STANDARD_RESOLUTION_DPI = 2643,

	/* category: jpeg */
	/* description: JPEG image data, JFIF standard, resolution (DPCM) */
	JPEG_IMAGE_DATA_JFIF_STANDARD_RESOLUTION_DPCM = 2644,

	/* category: jpeg */
	/* description: JPEG image data, Exif standard: [ */
	JPEG_IMAGE_DATA_EXIF_STANDARD = 2645,

	/* category: jpeg */
	/* description: JPEG image data, HSI proprietary */
	JPEG_IMAGE_DATA_HSI_PROPRIETARY = 2646,

	/* category: jpeg */
	/* description: JPEG 2000 */
	JPEG_2000 = 2647,

	/* category: jpeg */
	/* description: JPEG 2000 Part 1 (JP2) */
	JPEG_2000_PART_1_JP2 = 2648,

	/* category: jpeg */
	/* description: JPEG 2000 Part 2 (JPX) */
	JPEG_2000_PART_2_JPX = 2649,

	/* category: jpeg */
	/* description: JPEG 2000 Part 6 (JPM) */
	JPEG_2000_PART_6_JPM = 2650,

	/* category: jpeg */
	/* description: JPEG 2000 Part 3 (MJ2) */
	JPEG_2000_PART_3_MJ2 = 2651,

	/* category: jpeg */
	/* description: JPEG 2000 codestream */
	JPEG_2000_CODESTREAM = 2652,

	/* category: jpeg */
	/* description: JPEG-XR */
	JPEG_XR = 2653,

	/* category: karma */
	/* description: Karma Data Structure Version */
	KARMA_DATA_STRUCTURE_VERSION = 2654,

	/* category: kde */
	/* description: KDE desktop entry */
	KDE_DESKTOP_ENTRY = 2655,

	/* category: kde */
	/* description: KDE config file */
	KDE_CONFIG_FILE = 2656,

	/* category: kde */
	/* description: xmcd database file for kscd */
	XMCD_DATABASE_FILE_FOR_KSCD = 2657,

	/* category: keepass */
	/* description: Keepass password database */
	KEEPASS_PASSWORD_DATABASE = 2658,

	/* category: keepass */
	/* description: Keepass password database 1.x KDB */
	KEEPASS_PASSWORD_DATABASE_1_X_KDB = 2659,

	/* category: keepass */
	/* description: Keepass password database 2.x KDBX */
	KEEPASS_PASSWORD_DATABASE_2_X_KDBX = 2660,

	/* category: kerberos */
	/* description: Kerberos Keytab file */
	KERBEROS_KEYTAB_FILE = 2661,

	/* category: kicad */
	/* description: KiCad Schematic Document */
	KICAD_SCHEMATIC_DOCUMENT = 2662,

	/* category: kicad */
	/* description: KiCad Symbol Library */
	KICAD_SYMBOL_LIBRARY = 2663,

	/* category: kicad */
	/* description: KiCad Symbol Library Documentation */
	KICAD_SYMBOL_LIBRARY_DOCUMENTATION = 2664,

	/* category: kicad */
	/* description: KiCad Board Layout */
	KICAD_BOARD_LAYOUT = 2665,

	/* category: kicad */
	/* description: KiCad Footprint */
	KICAD_FOOTPRINT = 2666,

	/* category: kicad */
	/* description: KiCad Footprint (Legacy) */
	KICAD_FOOTPRINT_LEGACY = 2667,

	/* category: kicad */
	/* description: KiCad Netlist */
	KICAD_NETLIST = 2668,

	/* category: kicad */
	/* description: KiCad Symbol Library Table */
	KICAD_SYMBOL_LIBRARY_TABLE = 2669,

	/* category: kicad */
	/* description: KiCad Footprint Library Table */
	KICAD_FOOTPRINT_LIBRARY_TABLE = 2670,

	/* category: kml */
	/* description: Google KML document */
	GOOGLE_KML_DOCUMENT = 2671,

	/* category: kml */
	/* description: Google KML document, version 2.0 */
	GOOGLE_KML_DOCUMENT_VERSION_2_0 = 2672,

	/* category: kml */
	/* description: Google KML document, version 2.1 */
	GOOGLE_KML_DOCUMENT_VERSION_2_1 = 2673,

	/* category: kml */
	/* description: Google KML document, version 2.2 */
	GOOGLE_KML_DOCUMENT_VERSION_2_2 = 2674,

	/* category: kml */
	/* description: OpenGIS KML document */
	OPENGIS_KML_DOCUMENT = 2675,

	/* category: kml */
	/* description: OpenGIS KML document, version 2.2 */
	OPENGIS_KML_DOCUMENT_VERSION_2_2 = 2676,

	/* category: kml */
	/* description: Compressed Google KML Document, including resources. */
	COMPRESSED_GOOGLE_KML_DOCUMENT_INCLUDING_RESOURCES = 2677,

	/* category: lecter */
	/* description: DEC SRC Virtual Paper Lectern file */
	DEC_SRC_VIRTUAL_PAPER_LECTERN_FILE = 2678,

	/* category: lex */
	/* description: C program text (from lex) */
	C_PROGRAM_TEXT_FROM_LEX = 2679,

	/* category: lex */
	/* description: C program text (from flex) */
	C_PROGRAM_TEXT_FROM_FLEX = 2680,

	/* category: lex */
	/* description: lex description text */
	LEX_DESCRIPTION_TEXT = 2681,

	/* category: lif */
	/* description: lif file */
	LIF_FILE = 2682,

	/* category: linux */
	/* description: Linux/i386 impure executable (OMAGIC) */
	LINUX_I386_IMPURE_EXECUTABLE_OMAGIC = 2683,

	/* category: linux */
	/* description: Linux/i386 impure executable (OMAGIC), stripped */
	LINUX_I386_IMPURE_EXECUTABLE_OMAGIC_STRIPPED = 2684,

	/* category: linux */
	/* description: Linux/i386 pure executable (NMAGIC) */
	LINUX_I386_PURE_EXECUTABLE_NMAGIC = 2685,

	/* category: linux */
	/* description: Linux/i386 pure executable (NMAGIC), stripped */
	LINUX_I386_PURE_EXECUTABLE_NMAGIC_STRIPPED = 2686,

	/* category: linux */
	/* description: Linux/i386 demand-paged executable (ZMAGIC) */
	LINUX_I386_DEMAND_PAGED_EXECUTABLE_ZMAGIC = 2687,

	/* category: linux */
	/* description: Linux/i386 demand-paged executable (ZMAGIC), stripped */
	LINUX_I386_DEMAND_PAGED_EXECUTABLE_ZMAGIC_STRIPPED = 2688,

	/* category: linux */
	/* description: Linux/i386 demand-paged executable (QMAGIC) */
	LINUX_I386_DEMAND_PAGED_EXECUTABLE_QMAGIC = 2689,

	/* category: linux */
	/* description: Linux/i386 demand-paged executable (QMAGIC), stripped */
	LINUX_I386_DEMAND_PAGED_EXECUTABLE_QMAGIC_STRIPPED = 2690,

	/* category: linux */
	/* description: Linux/i386 object file */
	LINUX_I386_OBJECT_FILE = 2691,

	/* category: linux */
	/* description: Linux/i386 object file, DLL library */
	LINUX_I386_OBJECT_FILE_DLL_LIBRARY = 2692,

	/* category: linux */
	/* description: Linux-8086 impure executable */
	LINUX_8086_IMPURE_EXECUTABLE = 2693,

	/* category: linux */
	/* description: Linux-8086 impure executable not stripped */
	LINUX_8086_IMPURE_EXECUTABLE_NOT_STRIPPED = 2694,

	/* category: linux */
	/* description: Linux-8086 executable */
	LINUX_8086_EXECUTABLE = 2695,

	/* category: linux */
	/* description: Linux-8086 executable not stripped */
	LINUX_8086_EXECUTABLE_NOT_STRIPPED = 2696,

	/* category: linux */
	/* description: Linux-8086 object file */
	LINUX_8086_OBJECT_FILE = 2697,

	/* category: linux */
	/* description: Minix-386 impure executable */
	MINIX_386_IMPURE_EXECUTABLE = 2698,

	/* category: linux */
	/* description: Minix-386 impure executable not stripped */
	MINIX_386_IMPURE_EXECUTABLE_NOT_STRIPPED = 2699,

	/* category: linux */
	/* description: Minix-386 executable */
	MINIX_386_EXECUTABLE = 2700,

	/* category: linux */
	/* description: Minix-386 executable not stripped */
	MINIX_386_EXECUTABLE_NOT_STRIPPED = 2701,

	/* category: linux */
	/* description: Minix-386 NSYM/GNU executable */
	MINIX_386_NSYM_GNU_EXECUTABLE = 2702,

	/* category: linux */
	/* description: Minix-386 NSYM/GNU executable not stripped */
	MINIX_386_NSYM_GNU_EXECUTABLE_NOT_STRIPPED = 2703,

	/* category: linux */
	/* description: Linux/i386 core file */
	LINUX_I386_CORE_FILE = 2704,

	/* category: linux */
	/* description: Linux/i386 LILO boot/chain loader */
	LINUX_I386_LILO_BOOT_CHAIN_LOADER = 2705,

	/* category: linux */
	/* description: Linux make config build file (old) */
	LINUX_MAKE_CONFIG_BUILD_FILE_OLD = 2706,

	/* category: linux */
	/* description: Linux make config build file */
	LINUX_MAKE_CONFIG_BUILD_FILE = 2707,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v1 data, */
	LINUX_I386_PC_SCREEN_FONT_V1_DATA = 2708,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v1 data, 256 characters, */
	LINUX_I386_PC_SCREEN_FONT_V1_DATA_256_CHARACTERS = 2709,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v1 data, 512 characters, */
	LINUX_I386_PC_SCREEN_FONT_V1_DATA_512_CHARACTERS = 2710,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v2 data, */
	LINUX_I386_PC_SCREEN_FONT_V2_DATA = 2711,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v2 data, %d characters, */
	LINUX_I386_PC_SCREEN_FONT_V2_DATA_DD_CHARACTERS = 2712,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v2 data, no directory, */
	LINUX_I386_PC_SCREEN_FONT_V2_DATA_NO_DIRECTORY = 2713,

	/* category: linux */
	/* description: Linux/i386 PC Screen Font v2 data, Unicode directory, */
	LINUX_I386_PC_SCREEN_FONT_V2_DATA_UNICODE_DIRECTORY = 2714,

	/* category: linux */
	/* description: Linux/i386 swap file */
	LINUX_I386_SWAP_FILE = 2715,

	/* category: linux */
	/* description: Linux/i386 swap file (new style) with SWSUSP1 image */
	LINUX_I386_SWAP_FILE_NEW_STYLE_WITH_SWSUSP1_IMAGE = 2716,

	/* category: linux */
	/* description: Linux/i386 swap file (new style) (compressed hibernate) */
	LINUX_I386_SWAP_FILE_NEW_STYLE_COMPRESSED_HIBERNATE = 2717,

	/* category: linux */
	/* description: Linux/i386 swap file (new style), */
	LINUX_I386_SWAP_FILE_NEW_STYLE = 2718,

	/* category: linux */
	/* description: Linux/i386 swap file (new style), no label, */
	LINUX_I386_SWAP_FILE_NEW_STYLE_NO_LABEL = 2719,

	/* category: linux */
	/* description: Linux/ppc swap file */
	LINUX_PPC_SWAP_FILE = 2720,

	/* category: linux */
	/* description: Linux/ppc swap file no label, */
	LINUX_PPC_SWAP_FILE_NO_LABEL = 2721,

	/* category: linux */
	/* description: Linux/ia64 swap file */
	LINUX_IA64_SWAP_FILE = 2722,

	/* category: linux */
	/* description: Linux kernel */
	LINUX_KERNEL = 2723,

	/* category: linux */
	/* description: Linux kernel x86 boot executable */
	LINUX_KERNEL_X86_BOOT_EXECUTABLE = 2724,

	/* category: linux */
	/* description: Linux kernel symbol map text */
	LINUX_KERNEL_SYMBOL_MAP_TEXT = 2725,

	/* category: linux */
	/* description: Linux Software Map entry text */
	LINUX_SOFTWARE_MAP_ENTRY_TEXT = 2726,

	/* category: linux */
	/* description: Linux Software Map entry text (new format) */
	LINUX_SOFTWARE_MAP_ENTRY_TEXT_NEW_FORMAT = 2727,

	/* category: linux */
	/* description: User-mode Linux COW file */
	USER_MODE_LINUX_COW_FILE = 2728,

	/* category: linux */
	/* description: Linux x86 boot sector */
	LINUX_X86_BOOT_SECTOR = 2729,

	/* category: linux */
	/* description: Linux x86 boot sector of a kernel from the dawn of time! */
	LINUX_X86_BOOT_SECTOR_OF_A_KERNEL_FROM_THE_DAWN_OF_TIME = 2730,

	/* category: linux */
	/* description: Linux x86 boot sector version 0.99-1.1.42 */
	LINUX_X86_BOOT_SECTOR_VERSION_0_99_1_1_42 = 2731,

	/* category: linux */
	/* description: Linux x86 boot sector for memtest86 */
	LINUX_X86_BOOT_SECTOR_FOR_MEMTEST86 = 2732,

	/* category: linux */
	/* description: Linux x86 kernel */
	LINUX_X86_KERNEL = 2733,

	/* category: linux */
	/* description: Linux ELKS Kernel */
	LINUX_ELKS_KERNEL = 2734,

	/* category: linux */
	/* description: Linux style boot sector */
	LINUX_STYLE_BOOT_SECTOR = 2735,

	/* category: linux */
	/* description: Linux S390 */
	LINUX_S390 = 2736,

	/* category: linux */
	/* description: Linux S390 Z10 64bit kernel */
	LINUX_S390_Z10_64BIT_KERNEL = 2737,

	/* category: linux */
	/* description: Linux S390 Z9-109 64bit kernel */
	LINUX_S390_Z9_109_64BIT_KERNEL = 2738,

	/* category: linux */
	/* description: Linux S390 Z990 64bit kernel */
	LINUX_S390_Z990_64BIT_KERNEL = 2739,

	/* category: linux */
	/* description: Linux S390 Z900 64bit kernel */
	LINUX_S390_Z900_64BIT_KERNEL = 2740,

	/* category: linux */
	/* description: Linux S390 Z10 32bit kernel */
	LINUX_S390_Z10_32BIT_KERNEL = 2741,

	/* category: linux */
	/* description: Linux kernel ARM boot executable zImage (little-endian) */
	LINUX_KERNEL_ARM_BOOT_EXECUTABLE_ZIMAGE_LITTLE_ENDIAN = 2742,

	/* category: linux */
	/* description: Linux kernel ARM boot executable zImage (big-endian) */
	LINUX_KERNEL_ARM_BOOT_EXECUTABLE_ZIMAGE_BIG_ENDIAN = 2743,

	/* category: linux */
	/* description: Linux-Dev86 executable, headerless */
	LINUX_DEV86_EXECUTABLE_HEADERLESS = 2744,

	/* category: linux */
	/* description: Linux-8086 executable, unmapped zero page */
	LINUX_8086_EXECUTABLE_UNMAPPED_ZERO_PAGE = 2745,

	/* category: linux */
	/* description: Linux-8086 executable, impure */
	LINUX_8086_EXECUTABLE_IMPURE = 2746,

	/* category: linux */
	/* description: SYSLINUX' LSS16 image data */
	SYSLINUX_LSS16_IMAGE_DATA = 2747,

	/* category: linux */
	/* description: User-Mode-Linux's Copy-On-Write disk image */
	USER_MODE_LINUX_S_COPY_ON_WRITE_DISK_IMAGE = 2748,

	/* category: linux */
	/* description: LVM1 (Linux Logical Volume Manager), version 1 */
	LVM1_LINUX_LOGICAL_VOLUME_MANAGER_VERSION_1 = 2749,

	/* category: linux */
	/* description: LVM1 (Linux Logical Volume Manager), version 2 */
	LVM1_LINUX_LOGICAL_VOLUME_MANAGER_VERSION_2 = 2750,

	/* category: linux */
	/* description: LVM2 PV (Linux Logical Volume Manager) */
	LVM2_PV_LINUX_LOGICAL_VOLUME_MANAGER = 2751,

	/* category: linux */
	/* description: LVM Snapshot (CopyOnWrite store) */
	LVM_SNAPSHOT_COPYONWRITE_STORE = 2752,

	/* category: linux */
	/* description: LVM Snapshot (CopyOnWrite store) - valid, */
	LVM_SNAPSHOT_COPYONWRITE_STORE_VALID = 2753,

	/* category: linux */
	/* description: LVM Snapshot (CopyOnWrite store) - invalid, */
	LVM_SNAPSHOT_COPYONWRITE_STORE_INVALID = 2754,

	/* category: luks */
	/* description: LUKS encrypted file, */
	LUKS_ENCRYPTED_FILE = 2755,

	/* category: linux */
	/* description: Xen saved domain */
	XEN_SAVED_DOMAIN = 2756,

	/* category: linux */
	/* description: Xen saved domain (name */
	XEN_SAVED_DOMAIN_NAME = 2757,

	/* category: linux */
	/* description: Journal file */
	JOURNAL_FILE = 2758,

	/* category: linux */
	/* description: BCache */
	BCACHE = 2759,

	/* category: linux */
	/* description: BCache cache device */
	BCACHE_CACHE_DEVICE = 2760,

	/* category: linux */
	/* description: BCache backing device */
	BCACHE_BACKING_DEVICE = 2761,

	/* category: linux */
	/* description: Device Tree Blob version %d */
	DEVICE_TREE_BLOB_VERSION_DD = 2762,

	/* category: linux */
	/* description: locale archive */
	LOCALE_ARCHIVE = 2763,

	/* category: linux */
	/* description: Linux Software RAID */
	LINUX_SOFTWARE_RAID = 2764,

	/* category: linux */
	/* description: mlocate database */
	MLOCATE_DATABASE = 2765,

	/* category: linux */
	/* description: iproute2 routes dump */
	IPROUTE2_ROUTES_DUMP = 2766,

	/* category: linux */
	/* description: iproute2 addresses dump */
	IPROUTE2_ADDRESSES_DUMP = 2767,

	/* category: linux */
	/* description: CRIU image file v1.1 */
	CRIU_IMAGE_FILE_V1_1 = 2768,

	/* category: linux */
	/* description: CRIU service file */
	CRIU_SERVICE_FILE = 2769,

	/* category: linux */
	/* description: CRIU inventory */
	CRIU_INVENTORY = 2770,

	/* category: linux */
	/* description: Kdump compressed dump */
	KDUMP_COMPRESSED_DUMP = 2771,

	/* category: lisp */
	/* description: Lisp/Scheme program text */
	LISP_SCHEME_PROGRAM_TEXT = 2772,

	/* category: lisp */
	/* description: Emacs v18 byte-compiled Lisp data */
	EMACS_V18_BYTE_COMPILED_LISP_DATA = 2773,

	/* category: lisp */
	/* description: Emacs/XEmacs v%d byte-compiled Lisp data */
	EMACS_XEMACS_VDD_BYTE_COMPILED_LISP_DATA = 2774,

	/* category: lisp */
	/* description: CLISP byte-compiled Lisp program (pre 2004-03-27) */
	CLISP_BYTE_COMPILED_LISP_PROGRAM_PRE_2004_03_27 = 2775,

	/* category: lisp */
	/* description: CLISP byte-compiled Lisp program text */
	CLISP_BYTE_COMPILED_LISP_PROGRAM_TEXT = 2776,

	/* category: lisp */
	/* description: CLISP memory image data */
	CLISP_MEMORY_IMAGE_DATA = 2777,

	/* category: lisp */
	/* description: CLISP memory image data, other endian */
	CLISP_MEMORY_IMAGE_DATA_OTHER_ENDIAN = 2778,

	/* category: lisp */
	/* description: MIT scheme (library?) */
	MIT_SCHEME_LIBRARY = 2779,

	/* category: lisp */
	/* description: TeXmacs document text */
	TEXMACS_DOCUMENT_TEXT = 2780,

	/* category: llvm */
	/* description: LLVM byte-codes, uncompressed */
	LLVM_BYTE_CODES_UNCOMPRESSED = 2781,

	/* category: llvm */
	/* description: LLVM byte-codes, null compression */
	LLVM_BYTE_CODES_NULL_COMPRESSION = 2782,

	/* category: llvm */
	/* description: LLVM byte-codes, gzip compression */
	LLVM_BYTE_CODES_GZIP_COMPRESSION = 2783,

	/* category: llvm */
	/* description: LLVM byte-codes, bzip2 compression */
	LLVM_BYTE_CODES_BZIP2_COMPRESSION = 2784,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper */
	LLVM_BITCODE_WRAPPER = 2785,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper x86_64 */
	LLVM_BITCODE_WRAPPER_X86_64 = 2786,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper i386 */
	LLVM_BITCODE_WRAPPER_I386 = 2787,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper ppc */
	LLVM_BITCODE_WRAPPER_PPC = 2788,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper ppc64 */
	LLVM_BITCODE_WRAPPER_PPC64 = 2789,

	/* category: llvm */
	/* description: LLVM bitcode, wrapper arm */
	LLVM_BITCODE_WRAPPER_ARM = 2790,

	/* category: llvm */
	/* description: LLVM IR bitcode */
	LLVM_IR_BITCODE = 2791,

	/* category: lua */
	/* description: Lua script text executable */
	LUA_SCRIPT_TEXT_EXECUTABLE = 2792,

	/* category: lua */
	/* description: Lua bytecode, */
	LUA_BYTECODE = 2793,

	/* category: lua */
	/* description: Lua bytecode, version 5.0 */
	LUA_BYTECODE_VERSION_5_0 = 2794,

	/* category: lua */
	/* description: Lua bytecode, version 5.1 */
	LUA_BYTECODE_VERSION_5_1 = 2795,

	/* category: lua */
	/* description: Lua bytecode, version 5.2 */
	LUA_BYTECODE_VERSION_5_2 = 2796,

	/* category: m4 */
	/* description: M4 macro processor script text */
	M4_MACRO_PROCESSOR_SCRIPT_TEXT = 2797,

	/* category: mach */
	/* description: Mach-O */
	MACH_O = 2798,

	/* category: uuencode */
	/* description: BinHex binary text */
	BINHEX_BINARY_TEXT = 2799,

	/* category: macintosh */
	/* description: StuffIt Archive (data) */
	STUFFIT_ARCHIVE_DATA = 2800,

	/* category: macintosh */
	/* description: StuffIt Deluxe (data) */
	STUFFIT_DELUXE_DATA = 2801,

	/* category: macintosh */
	/* description: StuffIt Deluxe Segment (data) */
	STUFFIT_DELUXE_SEGMENT_DATA = 2802,

	/* category: macintosh */
	/* description: StuffIt Archive */
	STUFFIT_ARCHIVE = 2803,

	/* category: macintosh */
	/* description: MacBinary */
	MACBINARY = 2804,

	/* category: macintosh */
	/* description: MacBinary II */
	MACBINARY_II = 2805,

	/* category: macintosh */
	/* description: MacBinary III */
	MACBINARY_III = 2806,

	/* category: macintosh */
	/* description: MacBinary III with surprising version */
	MACBINARY_III_WITH_SURPRISING_VERSION = 2807,

	/* category: macintosh */
	/* description: SAS */
	SAS = 2808,

	/* category: macintosh */
	/* description: SAS data file */
	SAS_DATA_FILE = 2809,

	/* category: macintosh */
	/* description: SAS catalog */
	SAS_CATALOG = 2810,

	/* category: macintosh */
	/* description: SAS data file index */
	SAS_DATA_FILE_INDEX = 2811,

	/* category: macintosh */
	/* description: SAS data view */
	SAS_DATA_VIEW = 2812,

	/* category: macintosh */
	/* description: SAS 7+ */
	SAS_7P = 2813,

	/* category: macintosh */
	/* description: SAS 7+ data file */
	SAS_7P_DATA_FILE = 2814,

	/* category: macintosh */
	/* description: SAS 7+ catalog */
	SAS_7P_CATALOG = 2815,

	/* category: macintosh */
	/* description: SAS 7+ data file index */
	SAS_7P_DATA_FILE_INDEX = 2816,

	/* category: macintosh */
	/* description: SAS 7+ data view */
	SAS_7P_DATA_VIEW = 2817,

	/* category: macintosh */
	/* description: SPSS Portable File */
	SPSS_PORTABLE_FILE = 2818,

	/* category: macintosh */
	/* description: SPSS System File */
	SPSS_SYSTEM_FILE = 2819,

	/* category: macintosh */
	/* description: Macintosh MFS data */
	MACINTOSH_MFS_DATA = 2820,

	/* category: macintosh */
	/* description: Macintosh HFS data */
	MACINTOSH_HFS_DATA = 2821,

	/* category: macintosh */
	/* description: Macintosh HFS Extended */
	MACINTOSH_HFS_EXTENDED = 2822,

	/* category: macintosh */
	/* description: Mac OS X bill of materials (BOM) file */
	MAC_OS_X_BILL_OF_MATERIALS_BOM_FILE = 2823,

	/* category: macintosh */
	/* description: Mac OSX datafork font, TrueType */
	MAC_OSX_DATAFORK_FONT_TRUETYPE = 2824,

	/* category: macintosh */
	/* description: Mac OSX datafork font, 'FONT' */
	MAC_OSX_DATAFORK_FONT_FONT = 2825,

	/* category: macintosh */
	/* description: Mac OSX datafork font, 'NFNT' */
	MAC_OSX_DATAFORK_FONT_NFNT = 2826,

	/* category: macintosh */
	/* description: Mac OSX datafork font, PostScript */
	MAC_OSX_DATAFORK_FONT_POSTSCRIPT = 2827,

	/* category: macos */
	/* description: MacOS Alias file */
	MACOS_ALIAS_FILE = 2828,

	/* category: magic */
	/* description: magic text file for file(1) cmd */
	MAGIC_TEXT_FILE_FOR_FILE_1_CMD = 2829,

	/* category: magic */
	/* description: magic binary file for file(1) cmd */
	MAGIC_BINARY_FILE_FOR_FILE_1_CMD = 2830,

	/* category: mail.news */
	/* description: old news text */
	OLD_NEWS_TEXT = 2831,

	/* category: mail.news */
	/* description: batched news text */
	BATCHED_NEWS_TEXT = 2832,

	/* category: mail.news */
	/* description: mailed, batched news text */
	MAILED_BATCHED_NEWS_TEXT = 2833,

	/* category: mail.news */
	/* description: mail forwarding text */
	MAIL_FORWARDING_TEXT = 2834,

	/* category: mail.news */
	/* description: mail piping text */
	MAIL_PIPING_TEXT = 2835,

	/* category: mail.news */
	/* description: SMTP mail text */
	SMTP_MAIL_TEXT = 2836,

	/* category: mail.news */
	/* description: news text */
	NEWS_TEXT = 2837,

	/* category: mail.news */
	/* description: news or mail text */
	NEWS_OR_MAIL_TEXT = 2838,

	/* category: mail.news */
	/* description: saved news text */
	SAVED_NEWS_TEXT = 2839,

	/* category: mail.news */
	/* description: Emacs RMAIL text */
	EMACS_RMAIL_TEXT = 2840,

	/* category: mail.news */
	/* description: RFC 822 mail text */
	RFC_822_MAIL_TEXT = 2841,

	/* category: mail.news */
	/* description: MIME entity text */
	MIME_ENTITY_TEXT = 2842,

	/* category: mail.news */
	/* description: Transport Neutral Encapsulation Format */
	TRANSPORT_NEUTRAL_ENCAPSULATION_FORMAT = 2843,

	/* category: mail.news */
	/* description: MBX mail folder */
	MBX_MAIL_FOLDER = 2844,

	/* category: mail.news */
	/* description: Cyrus skiplist DB */
	CYRUS_SKIPLIST_DB = 2845,

	/* category: mail.news */
	/* description: Cyrus twoskip DB */
	CYRUS_TWOSKIP_DB = 2846,

	/* category: mail.news */
	/* description: JAM message area header file */
	JAM_MESSAGE_AREA_HEADER_FILE = 2847,

	/* category: mail.news */
	/* description: JAM message area header file (%d messages) */
	JAM_MESSAGE_AREA_HEADER_FILE_DD_MESSAGES = 2848,

	/* category: mail.news */
	/* description: Cyrus sieve bytecode data, */
	CYRUS_SIEVE_BYTECODE_DATA = 2849,

	/* category: make */
	/* description: makefile script text */
	MAKEFILE_SCRIPT_TEXT = 2850,

	/* category: make */
	/* description: BSD makefile script text */
	BSD_MAKEFILE_SCRIPT_TEXT = 2851,

	/* category: make */
	/* description: automake makefile script text */
	AUTOMAKE_MAKEFILE_SCRIPT_TEXT = 2852,

	/* category: map */
	/* description: FIT Map data */
	FIT_MAP_DATA = 2853,

	/* category: map */
	/* description: Garmin */
	GARMIN = 2854,

	/* category: map */
	/* description: TomTom activity file, v7 */
	TOMTOM_ACTIVITY_FILE_V7 = 2855,

	/* category: maple */
	/* description: MapleVr4 library */
	MAPLEVR4_LIBRARY = 2856,

	/* category: maple */
	/* description: Maple help database */
	MAPLE_HELP_DATABASE = 2857,

	/* category: maple */
	/* description: Maple help file */
	MAPLE_HELP_FILE = 2858,

	/* category: maple */
	/* description: Maple help file with extra carriage return at start (yuck) */
	MAPLE_HELP_FILE_WITH_EXTRA_CARRIAGE_RETURN_AT_START_YUCK = 2859,

	/* category: maple */
	/* description: Maple help file, old style */
	MAPLE_HELP_FILE_OLD_STYLE = 2860,

	/* category: maple */
	/* description: Maple worksheet */
	MAPLE_WORKSHEET = 2861,

	/* category: maple */
	/* description: Maple worksheet, but weird */
	MAPLE_WORKSHEET_BUT_WEIRD = 2862,

	/* category: maple */
	/* description: Maple something */
	MAPLE_SOMETHING = 2863,

	/* category: maple */
	/* description: Maple something An old revision */
	MAPLE_SOMETHING_AN_OLD_REVISION = 2864,

	/* category: maple */
	/* description: Maple something The latest save */
	MAPLE_SOMETHING_THE_LATEST_SAVE = 2865,

	/* category: maple */
	/* description: Maple something anomalous. */
	MAPLE_SOMETHING_ANOMALOUS = 2866,

	/* category: marc21 */
	/* description: MARC21 Bibliographic */
	MARC21_BIBLIOGRAPHIC = 2867,

	/* category: marc21 */
	/* description: MARC21 Authority */
	MARC21_AUTHORITY = 2868,

	/* category: marc21 */
	/* description: MARC21 Holdings */
	MARC21_HOLDINGS = 2869,

	/* category: marc21 */
	/* description: MARC21 Classification */
	MARC21_CLASSIFICATION = 2870,

	/* category: marc21 */
	/* description: MARC21 Community */
	MARC21_COMMUNITY = 2871,

	/* category: mathcad */
	/* description: Mathcad document */
	MATHCAD_DOCUMENT = 2872,

	/* category: mathematica */
	/* description: Mathematica version 2 notebook */
	MATHEMATICA_VERSION_2_NOTEBOOK = 2873,

	/* category: mathematica */
	/* description: Mathematica notebook */
	MATHEMATICA_NOTEBOOK = 2874,

	/* category: mathematica */
	/* description: Mathematica notebook version 2.x */
	MATHEMATICA_NOTEBOOK_VERSION_2_X = 2875,

	/* category: mathematica */
	/* description: Mathematica binary file */
	MATHEMATICA_BINARY_FILE = 2876,

	/* category: mathematica */
	/* description: Mathematica PBF (fonts I think) */
	MATHEMATICA_PBF_FONTS_I_THINK = 2877,

	/* category: mathematica */
	/* description: MAthematica .ml file */
	MATHEMATICA_ML_FILE = 2878,

	/* category: mathematica */
	/* description: Mathematica 3.0 notebook */
	MATHEMATICA_3_0_NOTEBOOK = 2879,

	/* category: mathematica */
	/* description: Matlab v5 mat-file */
	MATLAB_V5_MAT_FILE = 2880,

	/* category: mathematica */
	/* description: Matlab v5 mat-file (big endian) */
	MATLAB_V5_MAT_FILE_BIG_ENDIAN = 2881,

	/* category: mathematica */
	/* description: Matlab v5 mat-file (little endian) */
	MATLAB_V5_MAT_FILE_LITTLE_ENDIAN = 2882,

	/* category: matroska */
	/* description: WebM */
	WEBM = 2883,

	/* category: matroska */
	/* description: Matroska data */
	MATROSKA_DATA = 2884,

	/* category: mcrypt */
	/* description: mcrypt 2.5 encrypted data, */
	MCRYPT_2_5_ENCRYPTED_DATA = 2885,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, */
	MCRYPT_2_2_ENCRYPTED_DATA = 2886,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: blowfish-448, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_BLOWFISH_448 = 2887,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: DES, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_DES = 2888,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: 3DES, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_3DES = 2889,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: 3-WAY, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_3_WAY = 2890,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: GOST, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_GOST = 2891,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: SAFER-SK64, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_SAFER_SK64 = 2892,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: SAFER-SK128, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_SAFER_SK128 = 2893,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: CAST-128, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_CAST_128 = 2894,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: xTEA, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_XTEA = 2895,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: TWOFISH-128, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_TWOFISH_128 = 2896,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: RC2, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_RC2 = 2897,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: TWOFISH-192, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_TWOFISH_192 = 2898,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: TWOFISH-256, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_TWOFISH_256 = 2899,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: blowfish-128, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_BLOWFISH_128 = 2900,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: blowfish-192, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_BLOWFISH_192 = 2901,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: blowfish-256, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_BLOWFISH_256 = 2902,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: RC6, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_RC6 = 2903,

	/* category: mcrypt */
	/* description: mcrypt 2.2 encrypted data, algorithm: IDEA, */
	MCRYPT_2_2_ENCRYPTED_DATA_ALGORITHM_IDEA = 2904,

	/* category: measure */
	/* description: DIY-Thermocam raw data */
	DIY_THERMOCAM_RAW_DATA = 2905,

	/* category: measure */
	/* description: (Lepton 3.x), */
	LEPTON_3_X = 2906,

	/* category: measure */
	/* description: (Lepton 2.x), */
	LEPTON_2_X = 2907,

	/* category: mercurial */
	/* description: Mercurial changeset bundle */
	MERCURIAL_CHANGESET_BUNDLE = 2908,

	/* category: mercurial */
	/* description: Mercurial changeset bundle (uncompressed) */
	MERCURIAL_CHANGESET_BUNDLE_UNCOMPRESSED = 2909,

	/* category: mercurial */
	/* description: Mercurial changeset bundle (gzip compressed) */
	MERCURIAL_CHANGESET_BUNDLE_GZIP_COMPRESSED = 2910,

	/* category: mercurial */
	/* description: Mercurial changeset bundle (bzip2 compressed) */
	MERCURIAL_CHANGESET_BUNDLE_BZIP2_COMPRESSED = 2911,

	/* category: metastore */
	/* description: Metastore data file, */
	METASTORE_DATA_FILE = 2912,

	/* category: rinex */
	/* description: RINEX Data, GEO SBAS Broadcast */
	RINEX_DATA_GEO_SBAS_BROADCAST = 2913,

	/* category: rinex */
	/* description: RINEX Data, Observation (Hatanaka comp) */
	RINEX_DATA_OBSERVATION_HATANAKA_COMP = 2914,

	/* category: rinex */
	/* description: RINEX Data, Clock */
	RINEX_DATA_CLOCK = 2915,

	/* category: rinex */
	/* description: RINEX Data, GEO SBAS Navigation */
	RINEX_DATA_GEO_SBAS_NAVIGATION = 2916,

	/* category: rinex */
	/* description: RINEX Data, GLONASS Navigation */
	RINEX_DATA_GLONASS_NAVIGATION = 2917,

	/* category: rinex */
	/* description: RINEX Data, Galileo Navigation */
	RINEX_DATA_GALILEO_NAVIGATION = 2918,

	/* category: rinex */
	/* description: RINEX Data, Meteorological */
	RINEX_DATA_METEOROLOGICAL = 2919,

	/* category: rinex */
	/* description: RINEX Data, Navigation */
	RINEX_DATA_NAVIGATION = 2920,

	/* category: rinex */
	/* description: RINEX Data, Observation */
	RINEX_DATA_OBSERVATION = 2921,

	/* category: meteorological */
	/* description: Gridded binary (GRIB) version 1 */
	GRIDDED_BINARY_GRIB_VERSION_1 = 2922,

	/* category: meteorological */
	/* description: Gridded binary (GRIB) version 2 */
	GRIDDED_BINARY_GRIB_VERSION_2 = 2923,

	/* category: microfocus */
	/* description: Micro Focus File with Header (DAT) */
	MICRO_FOCUS_FILE_WITH_HEADER_DAT = 2924,

	/* category: microfocus */
	/* description: Micro Focus Index File (IDX) */
	MICRO_FOCUS_INDEX_FILE_IDX = 2925,

	/* category: mime */
	/* description: MIME encoded files */
	MIME_ENCODED_FILES = 2926,

	/* category: mips */
	/* description: MIPSEB ECOFF executable */
	MIPSEB_ECOFF_EXECUTABLE = 2927,

	/* category: mips */
	/* description: MIPSEB ECOFF executable (impure) */
	MIPSEB_ECOFF_EXECUTABLE_IMPURE = 2928,

	/* category: mips */
	/* description: MIPSEB ECOFF executable (swapped) */
	MIPSEB_ECOFF_EXECUTABLE_SWAPPED = 2929,

	/* category: mips */
	/* description: MIPSEB ECOFF executable (paged) */
	MIPSEB_ECOFF_EXECUTABLE_PAGED = 2930,

	/* category: mips */
	/* description: MIPSEL-BE ECOFF executable */
	MIPSEL_BE_ECOFF_EXECUTABLE = 2931,

	/* category: mips */
	/* description: MIPSEL-BE ECOFF executable (impure) */
	MIPSEL_BE_ECOFF_EXECUTABLE_IMPURE = 2932,

	/* category: mips */
	/* description: MIPSEL-BE ECOFF executable (swapped) */
	MIPSEL_BE_ECOFF_EXECUTABLE_SWAPPED = 2933,

	/* category: mips */
	/* description: MIPSEL-BE ECOFF executable (paged) */
	MIPSEL_BE_ECOFF_EXECUTABLE_PAGED = 2934,

	/* category: mips */
	/* description: MIPSEB-LE ECOFF executable */
	MIPSEB_LE_ECOFF_EXECUTABLE = 2935,

	/* category: mips */
	/* description: MIPSEB-LE ECOFF executable (impure) */
	MIPSEB_LE_ECOFF_EXECUTABLE_IMPURE = 2936,

	/* category: mips */
	/* description: MIPSEB-LE ECOFF executable (swapped) */
	MIPSEB_LE_ECOFF_EXECUTABLE_SWAPPED = 2937,

	/* category: mips */
	/* description: MIPSEB-LE ECOFF executable (paged) */
	MIPSEB_LE_ECOFF_EXECUTABLE_PAGED = 2938,

	/* category: mips */
	/* description: MIPSEL ECOFF executable */
	MIPSEL_ECOFF_EXECUTABLE = 2939,

	/* category: mips */
	/* description: MIPSEL ECOFF executable (impure) */
	MIPSEL_ECOFF_EXECUTABLE_IMPURE = 2940,

	/* category: mips */
	/* description: MIPSEL ECOFF executable (swapped) */
	MIPSEL_ECOFF_EXECUTABLE_SWAPPED = 2941,

	/* category: mips */
	/* description: MIPSEL ECOFF executable (paged) */
	MIPSEL_ECOFF_EXECUTABLE_PAGED = 2942,

	/* category: mips */
	/* description: MIPSEB MIPS-II ECOFF executable */
	MIPSEB_MIPS_II_ECOFF_EXECUTABLE = 2943,

	/* category: mips */
	/* description: MIPSEB MIPS-II ECOFF executable (impure) */
	MIPSEB_MIPS_II_ECOFF_EXECUTABLE_IMPURE = 2944,

	/* category: mips */
	/* description: MIPSEB MIPS-II ECOFF executable (swapped) */
	MIPSEB_MIPS_II_ECOFF_EXECUTABLE_SWAPPED = 2945,

	/* category: mips */
	/* description: MIPSEB MIPS-II ECOFF executable (paged) */
	MIPSEB_MIPS_II_ECOFF_EXECUTABLE_PAGED = 2946,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-II ECOFF executable */
	MIPSEL_BE_MIPS_II_ECOFF_EXECUTABLE = 2947,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-II ECOFF executable (impure) */
	MIPSEL_BE_MIPS_II_ECOFF_EXECUTABLE_IMPURE = 2948,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-II ECOFF executable (swapped) */
	MIPSEL_BE_MIPS_II_ECOFF_EXECUTABLE_SWAPPED = 2949,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-II ECOFF executable (paged) */
	MIPSEL_BE_MIPS_II_ECOFF_EXECUTABLE_PAGED = 2950,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-II ECOFF executable */
	MIPSEB_LE_MIPS_II_ECOFF_EXECUTABLE = 2951,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-II ECOFF executable (impure) */
	MIPSEB_LE_MIPS_II_ECOFF_EXECUTABLE_IMPURE = 2952,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-II ECOFF executable (swapped) */
	MIPSEB_LE_MIPS_II_ECOFF_EXECUTABLE_SWAPPED = 2953,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-II ECOFF executable (paged) */
	MIPSEB_LE_MIPS_II_ECOFF_EXECUTABLE_PAGED = 2954,

	/* category: mips */
	/* description: MIPSEL MIPS-II ECOFF executable */
	MIPSEL_MIPS_II_ECOFF_EXECUTABLE = 2955,

	/* category: mips */
	/* description: MIPSEL MIPS-II ECOFF executable (impure) */
	MIPSEL_MIPS_II_ECOFF_EXECUTABLE_IMPURE = 2956,

	/* category: mips */
	/* description: MIPSEL MIPS-II ECOFF executable (swapped) */
	MIPSEL_MIPS_II_ECOFF_EXECUTABLE_SWAPPED = 2957,

	/* category: mips */
	/* description: MIPSEL MIPS-II ECOFF executable (paged) */
	MIPSEL_MIPS_II_ECOFF_EXECUTABLE_PAGED = 2958,

	/* category: mips */
	/* description: MIPSEB MIPS-III ECOFF executable */
	MIPSEB_MIPS_III_ECOFF_EXECUTABLE = 2959,

	/* category: mips */
	/* description: MIPSEB MIPS-III ECOFF executable (impure) */
	MIPSEB_MIPS_III_ECOFF_EXECUTABLE_IMPURE = 2960,

	/* category: mips */
	/* description: MIPSEB MIPS-III ECOFF executable (swapped) */
	MIPSEB_MIPS_III_ECOFF_EXECUTABLE_SWAPPED = 2961,

	/* category: mips */
	/* description: MIPSEB MIPS-III ECOFF executable (paged) */
	MIPSEB_MIPS_III_ECOFF_EXECUTABLE_PAGED = 2962,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-III ECOFF executable */
	MIPSEL_BE_MIPS_III_ECOFF_EXECUTABLE = 2963,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-III ECOFF executable (impure) */
	MIPSEL_BE_MIPS_III_ECOFF_EXECUTABLE_IMPURE = 2964,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-III ECOFF executable (swapped) */
	MIPSEL_BE_MIPS_III_ECOFF_EXECUTABLE_SWAPPED = 2965,

	/* category: mips */
	/* description: MIPSEL-BE MIPS-III ECOFF executable (paged) */
	MIPSEL_BE_MIPS_III_ECOFF_EXECUTABLE_PAGED = 2966,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-III ECOFF executable */
	MIPSEB_LE_MIPS_III_ECOFF_EXECUTABLE = 2967,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-III ECOFF executable (impure) */
	MIPSEB_LE_MIPS_III_ECOFF_EXECUTABLE_IMPURE = 2968,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-III ECOFF executable (swapped) */
	MIPSEB_LE_MIPS_III_ECOFF_EXECUTABLE_SWAPPED = 2969,

	/* category: mips */
	/* description: MIPSEB-LE MIPS-III ECOFF executable (paged) */
	MIPSEB_LE_MIPS_III_ECOFF_EXECUTABLE_PAGED = 2970,

	/* category: mips */
	/* description: MIPSEL MIPS-III ECOFF executable */
	MIPSEL_MIPS_III_ECOFF_EXECUTABLE = 2971,

	/* category: mips */
	/* description: MIPSEL MIPS-III ECOFF executable (impure) */
	MIPSEL_MIPS_III_ECOFF_EXECUTABLE_IMPURE = 2972,

	/* category: mips */
	/* description: MIPSEL MIPS-III ECOFF executable (swapped) */
	MIPSEL_MIPS_III_ECOFF_EXECUTABLE_SWAPPED = 2973,

	/* category: mips */
	/* description: MIPSEL MIPS-III ECOFF executable (paged) */
	MIPSEL_MIPS_III_ECOFF_EXECUTABLE_PAGED = 2974,

	/* category: mips */
	/* description: MIPSEB Ucode */
	MIPSEB_UCODE = 2975,

	/* category: mips */
	/* description: MIPSEL-BE Ucode */
	MIPSEL_BE_UCODE = 2976,

	/* category: mirage */
	/* description: Mirage Assembler m.out executable */
	MIRAGE_ASSEMBLER_M_OUT_EXECUTABLE = 2977,

	/* category: misctools */
	/* description: X-Post-It-Note text */
	X_POST_IT_NOTE_TEXT = 2978,

	/* category: misctools */
	/* description: vCalendar calendar file */
	VCALENDAR_CALENDAR_FILE = 2979,

	/* category: misctools */
	/* description: vCard visiting card */
	VCARD_VISITING_CARD = 2980,

	/* category: misctools */
	/* description: libtool library file */
	LIBTOOL_LIBRARY_FILE = 2981,

	/* category: misctools */
	/* description: libtool object file */
	LIBTOOL_OBJECT_FILE = 2982,

	/* category: misctools */
	/* description: Mini DuMP crash report */
	MINI_DUMP_CRASH_REPORT = 2983,

	/* category: misctools */
	/* description: abook address book */
	ABOOK_ADDRESS_BOOK = 2984,

	/* category: mkid */
	/* description: ID tags data */
	ID_TAGS_DATA = 2985,

	/* category: mlssa */
	/* description: MLSSA datafile, */
	MLSSA_DATAFILE = 2986,

	/* category: mmdf */
	/* description: MMDF mailbox */
	MMDF_MAILBOX = 2987,

	/* category: modem */
	/* description: Digifax-G3-File */
	DIGIFAX_G3_FILE = 2988,

	/* category: modem */
	/* description: Digifax-G3-File, fine resolution */
	DIGIFAX_G3_FILE_FINE_RESOLUTION = 2989,

	/* category: modem */
	/* description: Digifax-G3-File, normal resolution */
	DIGIFAX_G3_FILE_NORMAL_RESOLUTION = 2990,

	/* category: modem */
	/* description: raw G3 (Group 3) FAX, byte-padded */
	RAW_G3_GROUP_3_FAX_BYTE_PADDED = 2991,

	/* category: modem */
	/* description: raw G3 (Group 3) FAX */
	RAW_G3_GROUP_3_FAX = 2992,

	/* category: modem */
	/* description: raw modem data */
	RAW_MODEM_DATA = 2993,

	/* category: modem */
	/* description: portable voice format */
	PORTABLE_VOICE_FORMAT = 2994,

	/* category: modem */
	/* description: portable voice format (binary %s) */
	PORTABLE_VOICE_FORMAT_BINARY_SS = 2995,

	/* category: modem */
	/* description: portable voice format (ascii %s) */
	PORTABLE_VOICE_FORMAT_ASCII_SS = 2996,

	/* category: modem */
	/* description: Brooktrout 301 fax image, */
	BROOKTROUT_301_FAX_IMAGE = 2997,

	/* category: modem */
	/* description: Brooktrout 301 fax image,, fine resolution */
	BROOKTROUT_301_FAX_IMAGE_FINE_RESOLUTION = 2998,

	/* category: modem */
	/* description: Brooktrout 301 fax image,, normal resolution */
	BROOKTROUT_301_FAX_IMAGE_NORMAL_RESOLUTION = 2999,

	/* category: motorola */
	/* description: mc68k COFF */
	MC68K_COFF = 3000,

	/* category: motorola */
	/* description: mc68k COFF object */
	MC68K_COFF_OBJECT = 3001,

	/* category: motorola */
	/* description: mc68k COFF executable */
	MC68K_COFF_EXECUTABLE = 3002,

	/* category: motorola */
	/* description: mc68k executable (shared) */
	MC68K_EXECUTABLE_SHARED = 3003,

	/* category: motorola */
	/* description: mc68k executable (shared) not stripped */
	MC68K_EXECUTABLE_SHARED_NOT_STRIPPED = 3004,

	/* category: motorola */
	/* description: mc68k executable (shared demand paged) */
	MC68K_EXECUTABLE_SHARED_DEMAND_PAGED = 3005,

	/* category: motorola */
	/* description: mc68k executable (shared demand paged) not stripped */
	MC68K_EXECUTABLE_SHARED_DEMAND_PAGED_NOT_STRIPPED = 3006,

	/* category: motorola */
	/* description: 68K BCS executable */
	A_68K_BCS_EXECUTABLE = 3007,

	/* category: motorola */
	/* description: 88K BCS executable */
	A_88K_BCS_EXECUTABLE = 3008,

	/* category: motorola */
	/* description: Motorola S-Record; binary data in text format */
	MOTOROLA_S_RECORD_BINARY_DATA_IN_TEXT_FORMAT = 3009,

	/* category: motorola */
	/* description: Atari ST M68K contiguous executable */
	ATARI_ST_M68K_CONTIGUOUS_EXECUTABLE = 3010,

	/* category: motorola */
	/* description: Atari ST M68K non-contig executable */
	ATARI_ST_M68K_NON_CONTIG_EXECUTABLE = 3011,

	/* category: motorola */
	/* description: Atari 68xxx executable, */
	ATARI_68XXX_EXECUTABLE = 3012,

	/* category: motorola */
	/* description: Atari 68xxx CPX file */
	ATARI_68XXX_CPX_FILE = 3013,

	/* category: mozilla */
	/* description: Mozilla XUL fastload data */
	MOZILLA_XUL_FASTLOAD_DATA = 3014,

	/* category: mozilla */
	/* description: Mozilla lz4 compressed bookmark data */
	MOZILLA_LZ4_COMPRESSED_BOOKMARK_DATA = 3015,

	/* category: mozilla */
	/* description: Mozilla lz4 compressed data */
	MOZILLA_LZ4_COMPRESSED_DATA = 3016,

	/* category: mozilla */
	/* description: Mozilla archive omni.ja */
	MOZILLA_ARCHIVE_OMNI_JA = 3017,

	/* category: msdos */
	/* description: DOS batch file text */
	DOS_BATCH_FILE_TEXT = 3018,

	/* category: msdos */
	/* description: OS/2 REXX batch file text */
	OS_2_REXX_BATCH_FILE_TEXT = 3019,

	/* category: msdos */
	/* description: MS Windows COFF MIPS R4000 object file */
	MS_WINDOWS_COFF_MIPS_R4000_OBJECT_FILE = 3020,

	/* category: msdos */
	/* description: MS Windows COFF Alpha object file */
	MS_WINDOWS_COFF_ALPHA_OBJECT_FILE = 3021,

	/* category: msdos */
	/* description: MS Windows COFF Motorola 68000 object file */
	MS_WINDOWS_COFF_MOTOROLA_68000_OBJECT_FILE = 3022,

	/* category: msdos */
	/* description: MS Windows COFF PowerPC object file */
	MS_WINDOWS_COFF_POWERPC_OBJECT_FILE = 3023,

	/* category: msdos */
	/* description: MS Windows COFF PA-RISC object file */
	MS_WINDOWS_COFF_PA_RISC_OBJECT_FILE = 3024,

	/* category: msdos */
	/* description: MS-DOS executable */
	MS_DOS_EXECUTABLE = 3025,

	/* category: msdos */
	/* description: PE */
	PE = 3026,

	/* category: msdos */
	/* description: PE32 executable */
	PE32_EXECUTABLE = 3027,

	/* category: msdos */
	/* description: PE32+ executable */
	PE32P_EXECUTABLE = 3028,

	/* category: msdos */
	/* description: PE ROM image */
	PE_ROM_IMAGE = 3029,

	/* category: msdos */
	/* description: PE Unknown PE signature */
	PE_UNKNOWN_PE_SIGNATURE = 3030,

	/* category: msdos */
	/* description: FreeDOS KEYBoard Layout collection */
	FREEDOS_KEYBOARD_LAYOUT_COLLECTION = 3031,

	/* category: msdos */
	/* description: FreeDOS KEYBoard Layout file */
	FREEDOS_KEYBOARD_LAYOUT_FILE = 3032,

	/* category: msdos */
	/* description: MS-DOS KEYBoard Layout file */
	MS_DOS_KEYBOARD_LAYOUT_FILE = 3033,

	/* category: msdos */
	/* description: DOS executable ( */
	DOS_EXECUTABLE = 3034,

	/* category: msdos */
	/* description: DOS executable (COM, 0x8C-variant) */
	DOS_EXECUTABLE_COM_0X8C_VARIANT = 3035,

	/* category: msdos */
	/* description: DR-DOS executable (COM) */
	DR_DOS_EXECUTABLE_COM = 3036,

	/* category: msdos */
	/* description: DOS executable (COM) */
	DOS_EXECUTABLE_COM = 3037,

	/* category: msdos */
	/* description: COM executable (32-bit COMBOOT */
	COM_EXECUTABLE_32_BIT_COMBOOT = 3038,

	/* category: msdos */
	/* description: COM executable for DOS */
	COM_EXECUTABLE_FOR_DOS = 3039,

	/* category: msdos */
	/* description: FREE-DOS executable (COM), UPX compressed */
	FREE_DOS_EXECUTABLE_COM_UPX_COMPRESSED = 3040,

	/* category: msdos */
	/* description: COM executable for MS-DOS */
	COM_EXECUTABLE_FOR_MS_DOS = 3041,

	/* category: msdos */
	/* description: COM executable for DOS, aPack compressed */
	COM_EXECUTABLE_FOR_DOS_APACK_COMPRESSED = 3042,

	/* category: msdos */
	/* description: COM executable for MS-DOS, Compack compressed */
	COM_EXECUTABLE_FOR_MS_DOS_COMPACK_COMPRESSED = 3043,

	/* category: msdos */
	/* description: MS-DOS executable (built-in) */
	MS_DOS_EXECUTABLE_BUILT_IN = 3044,

	/* category: msdos */
	/* description: AAF legacy file using MS Structured Storage */
	AAF_LEGACY_FILE_USING_MS_STRUCTURED_STORAGE = 3045,

	/* category: msdos */
	/* description: AAF legacy file using MS Structured Storage (512B sectors) */
	AAF_LEGACY_FILE_USING_MS_STRUCTURED_STORAGE_512B_SECTORS = 3046,

	/* category: msdos */
	/* description: AAF legacy file using MS Structured Storage (4kB sectors) */
	AAF_LEGACY_FILE_USING_MS_STRUCTURED_STORAGE_4KB_SECTORS = 3047,

	/* category: msdos */
	/* description: AAF file using MS Structured Storage */
	AAF_FILE_USING_MS_STRUCTURED_STORAGE = 3048,

	/* category: msdos */
	/* description: AAF file using MS Structured Storage (512B sectors) */
	AAF_FILE_USING_MS_STRUCTURED_STORAGE_512B_SECTORS = 3049,

	/* category: msdos */
	/* description: AAF file using MS Structured Storage (4kB sectors) */
	AAF_FILE_USING_MS_STRUCTURED_STORAGE_4KB_SECTORS = 3050,

	/* category: msdos */
	/* description: Microsoft Word 6.0 Document */
	MICROSOFT_WORD_6_0_DOCUMENT = 3051,

	/* category: msdos */
	/* description: Spanish Microsoft Word 6 document data */
	SPANISH_MICROSOFT_WORD_6_DOCUMENT_DATA = 3052,

	/* category: msdos */
	/* description: Microsoft Word document data */
	MICROSOFT_WORD_DOCUMENT_DATA = 3053,

	/* category: msdos */
	/* description: Microsoft Word Document */
	MICROSOFT_WORD_DOCUMENT = 3054,

	/* category: msdos */
	/* description: Microsoft Word for Macintosh 1.0 */
	MICROSOFT_WORD_FOR_MACINTOSH_1_0 = 3055,

	/* category: msdos */
	/* description: Microsoft Word for Macintosh 3.0 */
	MICROSOFT_WORD_FOR_MACINTOSH_3_0 = 3056,

	/* category: msdos */
	/* description: Microsoft Word for Macintosh 4.0 */
	MICROSOFT_WORD_FOR_MACINTOSH_4_0 = 3057,

	/* category: msdos */
	/* description: Microsoft Word for Macintosh 5.0 */
	MICROSOFT_WORD_FOR_MACINTOSH_5_0 = 3058,

	/* category: msdos */
	/* description: Microsoft Word 2.0 Document */
	MICROSOFT_WORD_2_0_DOCUMENT = 3059,

	/* category: msdos */
	/* description: Microsoft WinWord 2.0 Document */
	MICROSOFT_WINWORD_2_0_DOCUMENT = 3060,

	/* category: msdos */
	/* description: Microsoft Excel 5.0 Worksheet */
	MICROSOFT_EXCEL_5_0_WORKSHEET = 3061,

	/* category: msdos */
	/* description: Foglio di lavoro Microsoft Exce */
	FOGLIO_DI_LAVORO_MICROSOFT_EXCE = 3062,

	/* category: msdos */
	/* description: Microsoft Excel Worksheet */
	MICROSOFT_EXCEL_WORKSHEET = 3063,

	/* category: msdos */
	/* description: Lotus 1-2-3 */
	LOTUS_1_2_3 = 3064,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKsheet, version 3 */
	LOTUS_1_2_3_WORKSHEET_VERSION_3 = 3065,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKsheet, version 4 */
	LOTUS_1_2_3_WORKSHEET_VERSION_4 = 3066,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKsheet, version 97 */
	LOTUS_1_2_3_WORKSHEET_VERSION_97 = 3067,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKsheet, version 9.8 Millennium */
	LOTUS_1_2_3_WORKSHEET_VERSION_9_8_MILLENNIUM = 3068,

	/* category: msdos */
	/* description: Lotus 1-2-3 FoRMatting data */
	LOTUS_1_2_3_FORMATTING_DATA = 3069,

	/* category: msdos */
	/* description: Lotus 1-2-3 ForMatting data, version 3 */
	LOTUS_1_2_3_FORMATTING_DATA_VERSION_3 = 3070,

	/* category: msdos */
	/* description: Lotus 1-2-3 unknown */
	LOTUS_1_2_3_UNKNOWN = 3071,

	/* category: msdos */
	/* description: Lotus 1-2-3 unknown worksheet */
	LOTUS_1_2_3_UNKNOWN_WORKSHEET = 3072,

	/* category: msdos */
	/* description: Lotus 1-2-3 unknown formatting data */
	LOTUS_1_2_3_UNKNOWN_FORMATTING_DATA = 3073,

	/* category: msdos */
	/* description: Lotus */
	LOTUS = 3074,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 2.x (PGRAPH.CNF) */
	LOTUS_1_2_3_CONFIGURATION_VERSION_2_X_PGRAPH_CNF = 3075,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 2.4J */
	LOTUS_1_2_3_CONFIGURATION_VERSION_2_4J = 3076,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 1-2.1 */
	LOTUS_1_2_3_CONFIGURATION_VERSION_1_2_1 = 3077,

	/* category: msdos */
	/* description: Lotus Symphony CoNFiguration */
	LOTUS_SYMPHONY_CONFIGURATION = 3078,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 2.2 */
	LOTUS_1_2_3_CONFIGURATION_VERSION_2_2 = 3079,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 2.3-2.4 */
	LOTUS_1_2_3_CONFIGURATION_VERSION_2_3_2_4 = 3080,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 3.x */
	LOTUS_1_2_3_CONFIGURATION_VERSION_3_X = 3081,

	/* category: msdos */
	/* description: Lotus 1-2-3 CoNFiguration, version 4.x */
	LOTUS_1_2_3_CONFIGURATION_VERSION_4_X = 3082,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKSheet, version 1 */
	LOTUS_1_2_3_WORKSHEET_VERSION_1 = 3083,

	/* category: msdos */
	/* description: Lotus Symphony WoRksheet, version 1.0 */
	LOTUS_SYMPHONY_WORKSHEET_VERSION_1_0 = 3084,

	/* category: msdos */
	/* description: Lotus 1-2-3/Symphony worksheet, version 2 */
	LOTUS_1_2_3_SYMPHONY_WORKSHEET_VERSION_2 = 3085,

	/* category: msdos */
	/* description: Lotus 1-2-3 WorKsheet, version 1.xJ */
	LOTUS_1_2_3_WORKSHEET_VERSION_1_XJ = 3086,

	/* category: msdos */
	/* description: Lotus 1-2-3 worksheet, version 2.4J */
	LOTUS_1_2_3_WORKSHEET_VERSION_2_4J = 3087,

	/* category: msdos */
	/* description: Lotus 1-2-3 ForMaTting data, version 2.x */
	LOTUS_1_2_3_FORMATTING_DATA_VERSION_2_X = 3088,

	/* category: msdos */
	/* description: Lotus 1-2-3 FoRMatting data, version 2.0 */
	LOTUS_1_2_3_FORMATTING_DATA_VERSION_2_0 = 3089,

	/* category: msdos */
	/* description: Lotus unknown worksheet or configuration */
	LOTUS_UNKNOWN_WORKSHEET_OR_CONFIGURATION = 3090,

	/* category: msdos */
	/* description: Lotus WordPro */
	LOTUS_WORDPRO = 3091,

	/* category: msdos */
	/* description: InstallShield Uninstall Script */
	INSTALLSHIELD_UNINSTALL_SCRIPT = 3092,

	/* category: msdos */
	/* description: Winamp plug in */
	WINAMP_PLUG_IN = 3093,

	/* category: msdos */
	/* description: Windows metafile */
	WINDOWS_METAFILE = 3094,

	/* category: msdos */
	/* description: tz3 ms-works file */
	TZ3_MS_WORKS_FILE = 3095,

	/* category: msdos */
	/* description: PGP sig */
	PGP_SIG = 3096,

	/* category: msdos */
	/* description: MS Windows special zipped file */
	MS_WINDOWS_SPECIAL_ZIPPED_FILE = 3097,

	/* category: msdos */
	/* description: Icon for MS Windows */
	ICON_FOR_MS_WINDOWS = 3098,

	/* category: msdos */
	/* description: MS Windows */
	MS_WINDOWS = 3099,

	/* category: msdos */
	/* description: MS Windows icon resource */
	MS_WINDOWS_ICON_RESOURCE = 3100,

	/* category: msdos */
	/* description: MS Windows cursor resource */
	MS_WINDOWS_CURSOR_RESOURCE = 3101,

	/* category: msdos */
	/* description: Borland font */
	BORLAND_FONT = 3102,

	/* category: msdos */
	/* description: Borland device */
	BORLAND_DEVICE = 3103,

	/* category: msdos */
	/* description: Windows Recycle Bin INFO2 file (Win98 or below) */
	WINDOWS_RECYCLE_BIN_INFO2_FILE_WIN98_OR_BELOW = 3104,

	/* category: msdos */
	/* description: Windows Recycle Bin INFO2 file (Win2k - WinXP) */
	WINDOWS_RECYCLE_BIN_INFO2_FILE_WIN2K_WINXP = 3105,

	/* category: msdos */
	/* description: First Choice document */
	FIRST_CHOICE_DOCUMENT = 3106,

	/* category: msdos */
	/* description: First Choice database */
	FIRST_CHOICE_DATABASE = 3107,

	/* category: msdos */
	/* description: First Choice device file */
	FIRST_CHOICE_DEVICE_FILE = 3108,

	/* category: msdos */
	/* description: RabbitGraph file */
	RABBITGRAPH_FILE = 3109,

	/* category: msdos */
	/* description: Borland Delphi .DCU file */
	BORLAND_DELPHI_DCU_FILE = 3110,

	/* category: msdos */
	/* description: MKS Spell hash list (old format) */
	MKS_SPELL_HASH_LIST_OLD_FORMAT = 3111,

	/* category: msdos */
	/* description: MKS Spell hash list */
	MKS_SPELL_HASH_LIST = 3112,

	/* category: msdos */
	/* description: TurboC BGI file */
	TURBOC_BGI_FILE = 3113,

	/* category: msdos */
	/* description: TurboC Font file */
	TURBOC_FONT_FILE = 3114,

	/* category: msdos */
	/* description: Delphi compiled form '%s' */
	DELPHI_COMPILED_FORM_SS = 3115,

	/* category: msdos */
	/* description: Windows 3.x .GRP file */
	WINDOWS_3_X_GRP_FILE = 3116,

	/* category: msdos */
	/* description: MegaDots */
	MEGADOTS = 3117,

	/* category: msdos */
	/* description: Windows shortcut file */
	WINDOWS_SHORTCUT_FILE = 3118,

	/* category: msdos */
	/* description: Windows Program Information File */
	WINDOWS_PROGRAM_INFORMATION_FILE = 3119,

	/* category: printer */
	/* description: DOS EPS Binary File */
	DOS_EPS_BINARY_FILE = 3120,

	/* category: printer */
	/* description: DOS EPS Binary File Postscript starts at byte %d */
	DOS_EPS_BINARY_FILE_POSTSCRIPT_STARTS_AT_BYTE_DD = 3121,

	/* category: msdos */
	/* description: TNEF */
	TNEF = 3122,

	/* category: msdos */
	/* description: Norton Guide */
	NORTON_GUIDE = 3123,

	/* category: msdos */
	/* description: 4DOS help file */
	A_4DOS_HELP_FILE = 3124,

	/* category: msdos */
	/* description: MS Advisor help file */
	MS_ADVISOR_HELP_FILE = 3125,

	/* category: msdos */
	/* description: MS Windows HtmlHelp Data */
	MS_WINDOWS_HTMLHELP_DATA = 3126,

	/* category: msdos */
	/* description: GFA-BASIC 3 data */
	GFA_BASIC_3_DATA = 3127,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data */
	MICROSOFT_CABINET_ARCHIVE_DATA = 3128,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, Diagnostic */
	MICROSOFT_CABINET_ARCHIVE_DATA_DIAGNOSTIC = 3129,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, Publisher Packed and Go */
	MICROSOFT_CABINET_ARCHIVE_DATA_PUBLISHER_PACKED_AND_GO = 3130,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, PowerPoint Viewer Packed and Go */
	MICROSOFT_CABINET_ARCHIVE_DATA_POWERPOINT_VIEWER_PACKED_AND_GO = 3131,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL = 3132,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail ecard */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL_ECARD = 3133,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail skin */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL_SKIN = 3134,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail animation */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL_ANIMATION = 3135,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail ecard, image, notifier or skin */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL_ECARD_IMAGE_NOTIFIER_OR_SKIN = 3136,

	/* category: msdos */
	/* description: Microsoft Cabinet archive data, IncrediMail emoticons or sound */
	MICROSOFT_CABINET_ARCHIVE_DATA_INCREDIMAIL_EMOTICONS_OR_SOUND = 3137,

	/* category: msdos */
	/* description: InstallShield Cabinet archive data */
	INSTALLSHIELD_CABINET_ARCHIVE_DATA = 3138,

	/* category: msdos */
	/* description: InstallShield Cabinet archive data version 6, */
	INSTALLSHIELD_CABINET_ARCHIVE_DATA_VERSION_6 = 3139,

	/* category: msdos */
	/* description: InstallShield Cabinet archive data version 4/5, */
	INSTALLSHIELD_CABINET_ARCHIVE_DATA_VERSION_4_5 = 3140,

	/* category: msdos */
	/* description: Microsoft WinCE install header */
	MICROSOFT_WINCE_INSTALL_HEADER = 3141,

	/* category: msdos */
	/* description: Microsoft WinCE install header, architecture-independent */
	MICROSOFT_WINCE_INSTALL_HEADER_ARCHITECTURE_INDEPENDENT = 3142,

	/* category: msdos */
	/* description: Microsoft WinCE install header, Hitachi SH3 */
	MICROSOFT_WINCE_INSTALL_HEADER_HITACHI_SH3 = 3143,

	/* category: msdos */
	/* description: Microsoft WinCE install header, Hitachi SH4 */
	MICROSOFT_WINCE_INSTALL_HEADER_HITACHI_SH4 = 3144,

	/* category: msdos */
	/* description: Microsoft WinCE install header, StrongARM */
	MICROSOFT_WINCE_INSTALL_HEADER_STRONGARM = 3145,

	/* category: msdos */
	/* description: Microsoft WinCE install header, MIPS R4000 */
	MICROSOFT_WINCE_INSTALL_HEADER_MIPS_R4000 = 3146,

	/* category: msdos */
	/* description: Microsoft WinCE install header, Hitachi SH3E */
	MICROSOFT_WINCE_INSTALL_HEADER_HITACHI_SH3E = 3147,

	/* category: msdos */
	/* description: Microsoft WinCE install header, ARM 7TDMI */
	MICROSOFT_WINCE_INSTALL_HEADER_ARM_7TDMI = 3148,

	/* category: msdos */
	/* description: Windows Enhanced Metafile (EMF) image data */
	WINDOWS_ENHANCED_METAFILE_EMF_IMAGE_DATA = 3149,

	/* category: msdos */
	/* description: Dell system BIOS */
	DELL_SYSTEM_BIOS = 3150,

	/* category: msdos */
	/* description: Microsoft Reader eBook Data */
	MICROSOFT_READER_EBOOK_DATA = 3151,

	/* category: msdos */
	/* description: Windows Embedded CE binary image */
	WINDOWS_EMBEDDED_CE_BINARY_IMAGE = 3152,

	/* category: msdos */
	/* description: Windows imaging (WIM) image */
	WINDOWS_IMAGING_WIM_IMAGE = 3153,

	/* category: msdos */
	/* description: Windows imaging (WIM) image, wimlib pipable format */
	WINDOWS_IMAGING_WIM_IMAGE_WIMLIB_PIPABLE_FORMAT = 3154,

	/* category: msdos */
	/* description: Mallard BASIC program data (v1.11) */
	MALLARD_BASIC_PROGRAM_DATA_V1_11 = 3155,

	/* category: msdos */
	/* description: Mallard BASIC program data (v1.29+) */
	MALLARD_BASIC_PROGRAM_DATA_V1_29P = 3156,

	/* category: msdos */
	/* description: Mallard BASIC protected program data (v1.11) */
	MALLARD_BASIC_PROTECTED_PROGRAM_DATA_V1_11 = 3157,

	/* category: msdos */
	/* description: Mallard BASIC protected program data (v1.29+) */
	MALLARD_BASIC_PROTECTED_PROGRAM_DATA_V1_29P = 3158,

	/* category: msdos */
	/* description: Mallard BASIC Jetsam data */
	MALLARD_BASIC_JETSAM_DATA = 3159,

	/* category: msdos */
	/* description: Mallard BASIC Jetsam index data */
	MALLARD_BASIC_JETSAM_INDEX_DATA = 3160,

	/* category: msdos */
	/* description: DOS 2.0 backup id file, sequence %d */
	DOS_2_0_BACKUP_ID_FILE_SEQUENCE_DD = 3161,

	/* category: msdos */
	/* description: DOS 2.0-3.2 backed up */
	DOS_2_0_3_2_BACKED_UP = 3162,

	/* category: msdos */
	/* description: DOS 3.3 backup control file, sequence %d */
	DOS_3_3_BACKUP_CONTROL_FILE_SEQUENCE_DD = 3163,

	/* category: msooxml */
	/* description: Microsoft Word 2007+ */
	MICROSOFT_WORD_2007P = 3164,

	/* category: msooxml */
	/* description: Microsoft PowerPoint 2007+ */
	MICROSOFT_POWERPOINT_2007P = 3165,

	/* category: msooxml */
	/* description: Microsoft Excel 2007+ */
	MICROSOFT_EXCEL_2007P = 3166,

	/* category: msooxml */
	/* description: Microsoft OOXML */
	MICROSOFT_OOXML = 3167,

	/* category: msvc */
	/* description: Microsoft Visual C .APS file */
	MICROSOFT_VISUAL_C_APS_FILE = 3168,

	/* category: msvc */
	/* description: MSVC .ide */
	MSVC_IDE = 3169,

	/* category: msvc */
	/* description: MSVC .res */
	MSVC_RES = 3170,

	/* category: msvc */
	/* description: Microsoft Visual C library */
	MICROSOFT_VISUAL_C_LIBRARY = 3171,

	/* category: msvc */
	/* description: Microsoft Visual C .pch */
	MICROSOFT_VISUAL_C_PCH = 3172,

	/* category: msvc */
	/* description: MSVC program database */
	MSVC_PROGRAM_DATABASE = 3173,

	/* category: msvc */
	/* description: Microsoft Roslyn C# debugging symbols version 1.0 */
	MICROSOFT_ROSLYN_C_DEBUGGING_SYMBOLS_VERSION_1_0 = 3174,

	/* category: msvc */
	/* description: MSVC .sbr */
	MSVC_SBR = 3175,

	/* category: msvc */
	/* description: MSVC .bsc */
	MSVC_BSC = 3176,

	/* category: msvc */
	/* description: MSVC .wsp version 1.0000.0000 */
	MSVC_WSP_VERSION_1_0000_0000 = 3177,

	/* category: msx */
	/* description: MSX Gigamix MGSDRV3 music file, */
	MSX_GIGAMIX_MGSDRV3_MUSIC_FILE = 3178,

	/* category: msx */
	/* description: MSX Gigamix MGSDRV2 music file */
	MSX_GIGAMIX_MGSDRV2_MUSIC_FILE = 3179,

	/* category: msx */
	/* description: KSS music file v1.03 */
	KSS_MUSIC_FILE_V1_03 = 3180,

	/* category: msx */
	/* description: KSS music file v1.03, soundchips: AY-3-8910, SCC(+) */
	KSS_MUSIC_FILE_V1_03_SOUNDCHIPS_AY_3_8910_SCC_P = 3181,

	/* category: msx */
	/* description: KSS music file v1.03, soundchip(s): SN76489 */
	KSS_MUSIC_FILE_V1_03_SOUNDCHIP_S_SN76489 = 3182,

	/* category: msx */
	/* description: KSS music file v1.03, soundchip(s): SN76489 stereo */
	KSS_MUSIC_FILE_V1_03_SOUNDCHIP_S_SN76489_STEREO = 3183,

	/* category: msx */
	/* description: KSS music file v1.03, YM2413 */
	KSS_MUSIC_FILE_V1_03_YM2413 = 3184,

	/* category: msx */
	/* description: KSS music file v1.03, Y8950 */
	KSS_MUSIC_FILE_V1_03_Y8950 = 3185,

	/* category: msx */
	/* description: KSS music file v1.20, */
	KSS_MUSIC_FILE_V1_20 = 3186,

	/* category: msx */
	/* description: KSS music file v1.20, 60Hz */
	KSS_MUSIC_FILE_V1_20_60HZ = 3187,

	/* category: msx */
	/* description: KSS music file v1.20, 50Hz */
	KSS_MUSIC_FILE_V1_20_50HZ = 3188,

	/* category: msx */
	/* description: KSS music file v1.20, soundchips: AY-3-8910, SCC(+) */
	KSS_MUSIC_FILE_V1_20_SOUNDCHIPS_AY_3_8910_SCC_P = 3189,

	/* category: msx */
	/* description: KSS music file v1.20, soundchips: SN76489 */
	KSS_MUSIC_FILE_V1_20_SOUNDCHIPS_SN76489 = 3190,

	/* category: msx */
	/* description: KSS music file v1.20, soundchips: SN76489 stereo */
	KSS_MUSIC_FILE_V1_20_SOUNDCHIPS_SN76489_STEREO = 3191,

	/* category: msx */
	/* description: KSS music file v1.20,YM2413 */
	KSS_MUSIC_FILE_V1_20_YM2413 = 3192,

	/* category: msx */
	/* description: KSS music file v1.20,YM2413, Y8950 */
	KSS_MUSIC_FILE_V1_20_YM2413_Y8950 = 3193,

	/* category: msx */
	/* description: KSS music file v1.20,YM2413+Y8950 pseudostereo */
	KSS_MUSIC_FILE_V1_20_YM2413PY8950_PSEUDOSTEREO = 3194,

	/* category: msx */
	/* description: KSS music file v1.20, Majyutsushi DAC */
	KSS_MUSIC_FILE_V1_20_MAJYUTSUSHI_DAC = 3195,

	/* category: msx */
	/* description: MSX Moonblaster for MoonSound music */
	MSX_MOONBLASTER_FOR_MOONSOUND_MUSIC = 3196,

	/* category: msx */
	/* description: MSX Music Player K-kaz song */
	MSX_MUSIC_PLAYER_K_KAZ_SONG = 3197,

	/* category: msx */
	/* description: MSX OPX Music file */
	MSX_OPX_MUSIC_FILE = 3198,

	/* category: msx */
	/* description: MSX OPX Music file v1.5 */
	MSX_OPX_MUSIC_FILE_V1_5 = 3199,

	/* category: msx */
	/* description: MSX OPX Music file v2.4 */
	MSX_OPX_MUSIC_FILE_V2_4 = 3200,

	/* category: msx */
	/* description: MSX SCMD Music file */
	MSX_SCMD_MUSIC_FILE = 3201,

	/* category: msx */
	/* description: MSX SCMD source MML file */
	MSX_SCMD_SOURCE_MML_FILE = 3202,

	/* category: msx */
	/* description: MSX SC2/GRP raw image */
	MSX_SC2_GRP_RAW_IMAGE = 3203,

	/* category: msx */
	/* description: MSX Graph Saurus SR5 raw image */
	MSX_GRAPH_SAURUS_SR5_RAW_IMAGE = 3204,

	/* category: msx */
	/* description: MSX GE5/GE6 raw image */
	MSX_GE5_GE6_RAW_IMAGE = 3205,

	/* category: msx */
	/* description: MSX GE5/GE6 raw image, with sprite patterns */
	MSX_GE5_GE6_RAW_IMAGE_WITH_SPRITE_PATTERNS = 3206,

	/* category: msx */
	/* description: MSX screen 7-12 raw image */
	MSX_SCREEN_7_12_RAW_IMAGE = 3207,

	/* category: msx */
	/* description: MSX Graph Saurus SR7/SR8/SRS raw image */
	MSX_GRAPH_SAURUS_SR7_SR8_SRS_RAW_IMAGE = 3208,

	/* category: msx */
	/* description: MSX Graph Saurus compressed image */
	MSX_GRAPH_SAURUS_COMPRESSED_IMAGE = 3209,

	/* category: msx */
	/* description: MSX G9B image, depth=%d */
	MSX_G9B_IMAGE_DEPTH_DD = 3210,

	/* category: msx */
	/* description: MSX BIOS+BASIC */
	MSX_BIOSPBASIC = 3211,

	/* category: msx */
	/* description: MSX2/2+/TR SubROM */
	MSX2_2P_TR_SUBROM = 3212,

	/* category: msx */
	/* description: MSX Kanji Font */
	MSX_KANJI_FONT = 3213,

	/* category: msx */
	/* description: MSX ROM */
	MSX_ROM = 3214,

	/* category: msx */
	/* description: MSX-BASIC extension ROM */
	MSX_BASIC_EXTENSION_ROM = 3215,

	/* category: msx */
	/* description: MSX device BIOS */
	MSX_DEVICE_BIOS = 3216,

	/* category: msx */
	/* description: MSX ROM Konami Game Master 2 MSX ROM */
	MSX_ROM_KONAMI_GAME_MASTER_2_MSX_ROM = 3217,

	/* category: msx */
	/* description: MSX ROM, Konami RC- */
	MSX_ROM_KONAMI_RC = 3218,

	/* category: msx */
	/* description: MSX BASIC program in ROM, bas=0x%04x */
	MSX_BASIC_PROGRAM_IN_ROM_BAS_0XXX = 3219,

	/* category: msx */
	/* description: MSX ROM with nonstandard page order */
	MSX_ROM_WITH_NONSTANDARD_PAGE_ORDER = 3220,

	/* category: msx */
	/* description: MSX MegaROM with nonstandard page order */
	MSX_MEGAROM_WITH_NONSTANDARD_PAGE_ORDER = 3221,

	/* category: msx */
	/* description: MSX-BASIC program */
	MSX_BASIC_PROGRAM = 3222,

	/* category: msx */
	/* description: MSX cassette archive */
	MSX_CASSETTE_ARCHIVE = 3223,

	/* category: msx */
	/* description: MSX Mega-Assembler source */
	MSX_MEGA_ASSEMBLER_SOURCE = 3224,

	/* category: msx */
	/* description: MSX ExecROM patchfile */
	MSX_EXECROM_PATCHFILE = 3225,

	/* category: msx */
	/* description: Konami King's Valley-2 custom stage, title: "%-8.8s" */
	KONAMI_KING_S_VALLEY_2_CUSTOM_STAGE_TITLE_SS = 3226,

	/* category: mup */
	/* description: Mup music publication program input text */
	MUP_MUSIC_PUBLICATION_PROGRAM_INPUT_TEXT = 3227,

	/* category: mup */
	/* description: Mup music publication program input text (Arkkra) */
	MUP_MUSIC_PUBLICATION_PROGRAM_INPUT_TEXT_ARKKRA = 3228,

	/* category: music */
	/* description: Bagpipe */
	BAGPIPE = 3229,

	/* category: music */
	/* description: Bagpipe Reader */
	BAGPIPE_READER = 3230,

	/* category: music */
	/* description: Bagpipe Music Writer */
	BAGPIPE_MUSIC_WRITER = 3231,

	/* category: nasa */
	/* description: NASA SPICE file (binary format) */
	NASA_SPICE_FILE_BINARY_FORMAT = 3232,

	/* category: nasa */
	/* description: NASA SPICE file (transfer format) */
	NASA_SPICE_FILE_TRANSFER_FORMAT = 3233,

	/* category: natinst */
	/* description: National Instruments, */
	NATIONAL_INSTRUMENTS = 3234,

	/* category: natinst */
	/* description: National Instruments, LabVIEW File, */
	NATIONAL_INSTRUMENTS_LABVIEW_FILE = 3235,

	/* category: natinst */
	/* description: National Instruments, LabVIEW File, Code Resource File, data */
	NATIONAL_INSTRUMENTS_LABVIEW_FILE_CODE_RESOURCE_FILE_DATA = 3236,

	/* category: natinst */
	/* description: National Instruments, LabVIEW File, Virtual Instrument Program, data */
	NATIONAL_INSTRUMENTS_LABVIEW_FILE_VIRTUAL_INSTRUMENT_PROGRAM_DATA = 3237,

	/* category: natinst */
	/* description: National Instruments, LabVIEW File, VI Library, data */
	NATIONAL_INSTRUMENTS_LABVIEW_FILE_VI_LIBRARY_DATA = 3238,

	/* category: natinst */
	/* description: National Instruments, Portable File Names, data */
	NATIONAL_INSTRUMENTS_PORTABLE_FILE_NAMES_DATA = 3239,

	/* category: natinst */
	/* description: National Instruments, Resources File, data */
	NATIONAL_INSTRUMENTS_RESOURCES_FILE_DATA = 3240,

	/* category: natinst */
	/* description: National Instruments, VXI File, data */
	NATIONAL_INSTRUMENTS_VXI_FILE_DATA = 3241,

	/* category: ncr */
	/* description: Tower/XP rel 2 object */
	TOWER_XP_REL_2_OBJECT = 3242,

	/* category: ncr */
	/* description: Tower/XP rel 3 object */
	TOWER_XP_REL_3_OBJECT = 3243,

	/* category: ncr */
	/* description: Tower32/600/400 68020 object */
	TOWER32_600_400_68020_OBJECT = 3244,

	/* category: ncr */
	/* description: Tower32/800 68020 */
	TOWER32_800_68020 = 3245,

	/* category: ncr */
	/* description: Tower32/800 68010 */
	TOWER32_800_68010 = 3246,

	/* category: neko */
	/* description: NekoVM bytecode */
	NEKOVM_BYTECODE = 3247,

	/* category: netbsd */
	/* description: a.out NetBSD/i386 demand paged */
	A_OUT_NETBSD_I386_DEMAND_PAGED = 3248,

	/* category: netbsd */
	/* description: a.out NetBSD/i386 pure */
	A_OUT_NETBSD_I386_PURE = 3249,

	/* category: netbsd */
	/* description: a.out NetBSD/i386 */
	A_OUT_NETBSD_I386 = 3250,

	/* category: netbsd */
	/* description: a.out NetBSD/i386 core */
	A_OUT_NETBSD_I386_CORE = 3251,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k demand paged */
	A_OUT_NETBSD_M68K_DEMAND_PAGED = 3252,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k pure */
	A_OUT_NETBSD_M68K_PURE = 3253,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k */
	A_OUT_NETBSD_M68K = 3254,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k core */
	A_OUT_NETBSD_M68K_CORE = 3255,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k4k demand paged */
	A_OUT_NETBSD_M68K4K_DEMAND_PAGED = 3256,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k4k pure */
	A_OUT_NETBSD_M68K4K_PURE = 3257,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k4k */
	A_OUT_NETBSD_M68K4K = 3258,

	/* category: netbsd */
	/* description: a.out NetBSD/m68k4k core */
	A_OUT_NETBSD_M68K4K_CORE = 3259,

	/* category: netbsd */
	/* description: a.out NetBSD/ns32532 demand paged */
	A_OUT_NETBSD_NS32532_DEMAND_PAGED = 3260,

	/* category: netbsd */
	/* description: a.out NetBSD/ns32532 pure */
	A_OUT_NETBSD_NS32532_PURE = 3261,

	/* category: netbsd */
	/* description: a.out NetBSD/ns32532 */
	A_OUT_NETBSD_NS32532 = 3262,

	/* category: netbsd */
	/* description: a.out NetBSD/ns32532 core */
	A_OUT_NETBSD_NS32532_CORE = 3263,

	/* category: netbsd */
	/* description: a.out NetBSD/powerpc core */
	A_OUT_NETBSD_POWERPC_CORE = 3264,

	/* category: netbsd */
	/* description: a.out NetBSD/SPARC demand paged */
	A_OUT_NETBSD_SPARC_DEMAND_PAGED = 3265,

	/* category: netbsd */
	/* description: a.out NetBSD/SPARC pure */
	A_OUT_NETBSD_SPARC_PURE = 3266,

	/* category: netbsd */
	/* description: a.out NetBSD/SPARC */
	A_OUT_NETBSD_SPARC = 3267,

	/* category: netbsd */
	/* description: a.out NetBSD/SPARC core */
	A_OUT_NETBSD_SPARC_CORE = 3268,

	/* category: netbsd */
	/* description: a.out NetBSD/pmax demand paged */
	A_OUT_NETBSD_PMAX_DEMAND_PAGED = 3269,

	/* category: netbsd */
	/* description: a.out NetBSD/pmax pure */
	A_OUT_NETBSD_PMAX_PURE = 3270,

	/* category: netbsd */
	/* description: a.out NetBSD/pmax */
	A_OUT_NETBSD_PMAX = 3271,

	/* category: netbsd */
	/* description: a.out NetBSD/pmax core */
	A_OUT_NETBSD_PMAX_CORE = 3272,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 1k demand paged */
	A_OUT_NETBSD_VAX_1K_DEMAND_PAGED = 3273,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 1k pure */
	A_OUT_NETBSD_VAX_1K_PURE = 3274,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 1k */
	A_OUT_NETBSD_VAX_1K = 3275,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 1k core */
	A_OUT_NETBSD_VAX_1K_CORE = 3276,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 4k demand paged */
	A_OUT_NETBSD_VAX_4K_DEMAND_PAGED = 3277,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 4k pure */
	A_OUT_NETBSD_VAX_4K_PURE = 3278,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 4k */
	A_OUT_NETBSD_VAX_4K = 3279,

	/* category: netbsd */
	/* description: a.out NetBSD/vax 4k core */
	A_OUT_NETBSD_VAX_4K_CORE = 3280,

	/* category: netbsd */
	/* description: ECOFF NetBSD/alpha binary */
	ECOFF_NETBSD_ALPHA_BINARY = 3281,

	/* category: netbsd */
	/* description: ECOFF NetBSD/alpha binary not stripped */
	ECOFF_NETBSD_ALPHA_BINARY_NOT_STRIPPED = 3282,

	/* category: netbsd */
	/* description: ECOFF NetBSD/alpha binary stripped */
	ECOFF_NETBSD_ALPHA_BINARY_STRIPPED = 3283,

	/* category: netbsd */
	/* description: a.out NetBSD/alpha core */
	A_OUT_NETBSD_ALPHA_CORE = 3284,

	/* category: netbsd */
	/* description: a.out NetBSD/mips demand paged */
	A_OUT_NETBSD_MIPS_DEMAND_PAGED = 3285,

	/* category: netbsd */
	/* description: a.out NetBSD/mips pure */
	A_OUT_NETBSD_MIPS_PURE = 3286,

	/* category: netbsd */
	/* description: a.out NetBSD/mips */
	A_OUT_NETBSD_MIPS = 3287,

	/* category: netbsd */
	/* description: a.out NetBSD/mips core */
	A_OUT_NETBSD_MIPS_CORE = 3288,

	/* category: netbsd */
	/* description: a.out NetBSD/arm32 demand paged */
	A_OUT_NETBSD_ARM32_DEMAND_PAGED = 3289,

	/* category: netbsd */
	/* description: a.out NetBSD/arm32 pure */
	A_OUT_NETBSD_ARM32_PURE = 3290,

	/* category: netbsd */
	/* description: a.out NetBSD/arm32 */
	A_OUT_NETBSD_ARM32 = 3291,

	/* category: netbsd */
	/* description: a.out NetBSD/arm core */
	A_OUT_NETBSD_ARM_CORE = 3292,

	/* category: netbsd */
	/* description: NetBSD kernel core file */
	NETBSD_KERNEL_CORE_FILE = 3293,

	/* category: netbsd */
	/* description: NetBSD kernel core file, Unknown */
	NETBSD_KERNEL_CORE_FILE_UNKNOWN = 3294,

	/* category: netbsd */
	/* description: NetBSD kernel core file, sun 68010/68020 */
	NETBSD_KERNEL_CORE_FILE_SUN_68010_68020 = 3295,

	/* category: netbsd */
	/* description: NetBSD kernel core file, sun 68020 */
	NETBSD_KERNEL_CORE_FILE_SUN_68020 = 3296,

	/* category: netbsd */
	/* description: NetBSD kernel core file, 386 PC */
	NETBSD_KERNEL_CORE_FILE_386_PC = 3297,

	/* category: netbsd */
	/* description: NetBSD kernel core file, i386 BSD */
	NETBSD_KERNEL_CORE_FILE_I386_BSD = 3298,

	/* category: netbsd */
	/* description: NetBSD kernel core file, m68k BSD (8K pages) */
	NETBSD_KERNEL_CORE_FILE_M68K_BSD_8K_PAGES = 3299,

	/* category: netbsd */
	/* description: NetBSD kernel core file, m68k BSD (4K pages) */
	NETBSD_KERNEL_CORE_FILE_M68K_BSD_4K_PAGES = 3300,

	/* category: netbsd */
	/* description: NetBSD kernel core file, ns32532 BSD */
	NETBSD_KERNEL_CORE_FILE_NS32532_BSD = 3301,

	/* category: netbsd */
	/* description: NetBSD kernel core file, SPARC/32 BSD */
	NETBSD_KERNEL_CORE_FILE_SPARC_32_BSD = 3302,

	/* category: netbsd */
	/* description: NetBSD kernel core file, pmax BSD */
	NETBSD_KERNEL_CORE_FILE_PMAX_BSD = 3303,

	/* category: netbsd */
	/* description: NetBSD kernel core file, vax BSD (1K pages) */
	NETBSD_KERNEL_CORE_FILE_VAX_BSD_1K_PAGES = 3304,

	/* category: netbsd */
	/* description: NetBSD kernel core file, alpha BSD */
	NETBSD_KERNEL_CORE_FILE_ALPHA_BSD = 3305,

	/* category: netbsd */
	/* description: NetBSD kernel core file, mips BSD (Big Endian) */
	NETBSD_KERNEL_CORE_FILE_MIPS_BSD_BIG_ENDIAN = 3306,

	/* category: netbsd */
	/* description: NetBSD kernel core file, arm6 BSD */
	NETBSD_KERNEL_CORE_FILE_ARM6_BSD = 3307,

	/* category: netbsd */
	/* description: NetBSD kernel core file, m68k BSD (2K pages) */
	NETBSD_KERNEL_CORE_FILE_M68K_BSD_2K_PAGES = 3308,

	/* category: netbsd */
	/* description: NetBSD kernel core file, sh3 BSD */
	NETBSD_KERNEL_CORE_FILE_SH3_BSD = 3309,

	/* category: netbsd */
	/* description: NetBSD kernel core file, ppc BSD (Big Endian) */
	NETBSD_KERNEL_CORE_FILE_PPC_BSD_BIG_ENDIAN = 3310,

	/* category: netbsd */
	/* description: NetBSD kernel core file, vax BSD (4K pages) */
	NETBSD_KERNEL_CORE_FILE_VAX_BSD_4K_PAGES = 3311,

	/* category: netbsd */
	/* description: NetBSD kernel core file, mips1 BSD */
	NETBSD_KERNEL_CORE_FILE_MIPS1_BSD = 3312,

	/* category: netbsd */
	/* description: NetBSD kernel core file, mips2 BSD */
	NETBSD_KERNEL_CORE_FILE_MIPS2_BSD = 3313,

	/* category: netbsd */
	/* description: NetBSD kernel core file, m88k BSD */
	NETBSD_KERNEL_CORE_FILE_M88K_BSD = 3314,

	/* category: netbsd */
	/* description: NetBSD kernel core file, parisc BSD */
	NETBSD_KERNEL_CORE_FILE_PARISC_BSD = 3315,

	/* category: netbsd */
	/* description: NetBSD kernel core file, sh5/64 BSD */
	NETBSD_KERNEL_CORE_FILE_SH5_64_BSD = 3316,

	/* category: netbsd */
	/* description: NetBSD kernel core file, SPARC/64 BSD */
	NETBSD_KERNEL_CORE_FILE_SPARC_64_BSD = 3317,

	/* category: netbsd */
	/* description: NetBSD kernel core file, amd64 BSD */
	NETBSD_KERNEL_CORE_FILE_AMD64_BSD = 3318,

	/* category: netbsd */
	/* description: NetBSD kernel core file, sh5/32 BSD */
	NETBSD_KERNEL_CORE_FILE_SH5_32_BSD = 3319,

	/* category: netbsd */
	/* description: NetBSD kernel core file, ia64 BSD */
	NETBSD_KERNEL_CORE_FILE_IA64_BSD = 3320,

	/* category: netbsd */
	/* description: NetBSD kernel core file, aarch64 BSD */
	NETBSD_KERNEL_CORE_FILE_AARCH64_BSD = 3321,

	/* category: netbsd */
	/* description: NetBSD kernel core file, or1k BSD */
	NETBSD_KERNEL_CORE_FILE_OR1K_BSD = 3322,

	/* category: netbsd */
	/* description: NetBSD kernel core file, Risk-V BSD */
	NETBSD_KERNEL_CORE_FILE_RISK_V_BSD = 3323,

	/* category: netbsd */
	/* description: NetBSD kernel core file, hp200 BSD */
	NETBSD_KERNEL_CORE_FILE_HP200_BSD = 3324,

	/* category: netbsd */
	/* description: NetBSD kernel core file, hp300 BSD */
	NETBSD_KERNEL_CORE_FILE_HP300_BSD = 3325,

	/* category: netbsd */
	/* description: NetBSD kernel core file, hp800 HP-UX */
	NETBSD_KERNEL_CORE_FILE_HP800_HP_UX = 3326,

	/* category: netbsd */
	/* description: NetBSD kernel core file, hp200/hp300 HP-UX */
	NETBSD_KERNEL_CORE_FILE_HP200_HP300_HP_UX = 3327,

	/* category: netbsd */
	/* description: NetBSD kernel core file, CPU */
	NETBSD_KERNEL_CORE_FILE_CPU = 3328,

	/* category: netbsd */
	/* description: NetBSD kernel core file, DATA */
	NETBSD_KERNEL_CORE_FILE_DATA = 3329,

	/* category: netbsd */
	/* description: NetBSD kernel core file, STACK */
	NETBSD_KERNEL_CORE_FILE_STACK = 3330,

	/* category: netbsd */
	/* description: NetBSD ktrace file version %d */
	NETBSD_KTRACE_FILE_VERSION_DD = 3331,

	/* category: netscape */
	/* description: Netscape Address book */
	NETSCAPE_ADDRESS_BOOK = 3332,

	/* category: netscape */
	/* description: Netscape Communicator address book */
	NETSCAPE_COMMUNICATOR_ADDRESS_BOOK = 3333,

	/* category: netscape */
	/* description: Netscape folder cache */
	NETSCAPE_FOLDER_CACHE = 3334,

	/* category: netscape */
	/* description: Net2phone */
	NET2PHONE = 3335,

	/* category: netscape */
	/* description: AOL ART image */
	AOL_ART_IMAGE = 3336,

	/* category: netware */
	/* description: NetWare Loadable Module */
	NETWARE_LOADABLE_MODULE = 3337,

	/* category: news */
	/* description: ASCII font metrics */
	ASCII_FONT_METRICS = 3338,

	/* category: news */
	/* description: ASCII font bits */
	ASCII_FONT_BITS = 3339,

	/* category: news */
	/* description: NeWS bitmap font */
	NEWS_BITMAP_FONT = 3340,

	/* category: news */
	/* description: NeWS font family */
	NEWS_FONT_FAMILY = 3341,

	/* category: news */
	/* description: scalable OpenFont binary */
	SCALABLE_OPENFONT_BINARY = 3342,

	/* category: news */
	/* description: encrypted scalable OpenFont binary */
	ENCRYPTED_SCALABLE_OPENFONT_BINARY = 3343,

	/* category: news */
	/* description: X11/NeWS bitmap font */
	X11_NEWS_BITMAP_FONT = 3344,

	/* category: news */
	/* description: X11/NeWS font family */
	X11_NEWS_FONT_FAMILY = 3345,

	/* category: nitpicker */
	/* description: NItpicker Flow File */
	NITPICKER_FLOW_FILE = 3346,

	/* category: oasis */
	/* description: OASIS Stream file */
	OASIS_STREAM_FILE = 3347,

	/* category: ocaml */
	/* description: OCaml */
	OCAML = 3348,

	/* category: ocaml */
	/* description: OCaml exec file */
	OCAML_EXEC_FILE = 3349,

	/* category: ocaml */
	/* description: OCaml interface file (.cmi) */
	OCAML_INTERFACE_FILE_CMI = 3350,

	/* category: ocaml */
	/* description: OCaml object file (.cmo) */
	OCAML_OBJECT_FILE_CMO = 3351,

	/* category: ocaml */
	/* description: OCaml library file (.cma) */
	OCAML_LIBRARY_FILE_CMA = 3352,

	/* category: ocaml */
	/* description: OCaml native object file (.cmx) */
	OCAML_NATIVE_OBJECT_FILE_CMX = 3353,

	/* category: ocaml */
	/* description: OCaml native library file (.cmxa) */
	OCAML_NATIVE_LIBRARY_FILE_CMXA = 3354,

	/* category: ocaml */
	/* description: OCaml abstract syntax tree implementation file */
	OCAML_ABSTRACT_SYNTAX_TREE_IMPLEMENTATION_FILE = 3355,

	/* category: ocaml */
	/* description: OCaml abstract syntax tree interface file */
	OCAML_ABSTRACT_SYNTAX_TREE_INTERFACE_FILE = 3356,

	/* category: octave */
	/* description: Octave binary data (little endian) */
	OCTAVE_BINARY_DATA_LITTLE_ENDIAN = 3357,

	/* category: octave */
	/* description: Octave binary data (big endian) */
	OCTAVE_BINARY_DATA_BIG_ENDIAN = 3358,

	/* category: ole2compounddocs */
	/* description: OLE 2 Compound Document */
	OLE_2_COMPOUND_DOCUMENT = 3359,

	/* category: ole2compounddocs */
	/* description: OLE 2 Compound Document : Microstation V8 DGN */
	OLE_2_COMPOUND_DOCUMENT_MICROSTATION_V8_DGN = 3360,

	/* category: ole2compounddocs */
	/* description: OLE 2 Compound Document : Visio Document */
	OLE_2_COMPOUND_DOCUMENT_VISIO_DOCUMENT = 3361,

	/* category: olf */
	/* description: OLF */
	OLF = 3362,

	/* category: olf */
	/* description: OLF invalid class */
	OLF_INVALID_CLASS = 3363,

	/* category: olf */
	/* description: OLF 32-bit */
	OLF_32_BIT = 3364,

	/* category: olf */
	/* description: OLF 64-bit */
	OLF_64_BIT = 3365,

	/* category: os2 */
	/* description: MS Windows 95 Internet shortcut text */
	MS_WINDOWS_95_INTERNET_SHORTCUT_TEXT = 3366,

	/* category: os2 */
	/* description: MS Windows 95 Internet shortcut text (URL=< */
	MS_WINDOWS_95_INTERNET_SHORTCUT_TEXT_URL = 3367,

	/* category: os2 */
	/* description: OS/2 INF */
	OS_2_INF = 3368,

	/* category: os2 */
	/* description: OS/2 HLP */
	OS_2_HLP = 3369,

	/* category: os2 */
	/* description: OS/2 INI */
	OS_2_INI = 3370,

	/* category: os400 */
	/* description: IBM OS/400 save file data */
	IBM_OS_400_SAVE_FILE_DATA = 3371,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVOBJ */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVOBJ = 3372,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVLIB */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVLIB = 3373,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVCFG */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVCFG = 3374,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVSECDTA */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVSECDTA = 3375,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVDLO */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVDLO = 3376,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVLICPGM */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVLICPGM = 3377,

	/* category: os400 */
	/* description: IBM OS/400 save file data, created with SAVCHGOBJ */
	IBM_OS_400_SAVE_FILE_DATA_CREATED_WITH_SAVCHGOBJ = 3378,

	/* category: os9 */
	/* description: OS9/6809 module: */
	OS9_6809_MODULE = 3379,

	/* category: os9 */
	/* description: OS9/6809 module: non-executable */
	OS9_6809_MODULE_NON_EXECUTABLE = 3380,

	/* category: os9 */
	/* description: OS9/6809 module: machine language */
	OS9_6809_MODULE_MACHINE_LANGUAGE = 3381,

	/* category: os9 */
	/* description: OS9/6809 module: BASIC I-code */
	OS9_6809_MODULE_BASIC_I_CODE = 3382,

	/* category: os9 */
	/* description: OS9/6809 module: Pascal P-code */
	OS9_6809_MODULE_PASCAL_P_CODE = 3383,

	/* category: os9 */
	/* description: OS9/6809 module: C I-code */
	OS9_6809_MODULE_C_I_CODE = 3384,

	/* category: os9 */
	/* description: OS9/6809 module: COBOL I-code */
	OS9_6809_MODULE_COBOL_I_CODE = 3385,

	/* category: os9 */
	/* description: OS9/6809 module: Fortran I-code */
	OS9_6809_MODULE_FORTRAN_I_CODE = 3386,

	/* category: os9 */
	/* description: OS9/6809 module: program executable */
	OS9_6809_MODULE_PROGRAM_EXECUTABLE = 3387,

	/* category: os9 */
	/* description: OS9/6809 module: subroutine */
	OS9_6809_MODULE_SUBROUTINE = 3388,

	/* category: os9 */
	/* description: OS9/6809 module: multi-module */
	OS9_6809_MODULE_MULTI_MODULE = 3389,

	/* category: os9 */
	/* description: OS9/6809 module: data module */
	OS9_6809_MODULE_DATA_MODULE = 3390,

	/* category: os9 */
	/* description: OS9/6809 module: system module */
	OS9_6809_MODULE_SYSTEM_MODULE = 3391,

	/* category: os9 */
	/* description: OS9/6809 module: file manager */
	OS9_6809_MODULE_FILE_MANAGER = 3392,

	/* category: os9 */
	/* description: OS9/6809 module: device driver */
	OS9_6809_MODULE_DEVICE_DRIVER = 3393,

	/* category: os9 */
	/* description: OS9/6809 module: device descriptor */
	OS9_6809_MODULE_DEVICE_DESCRIPTOR = 3394,

	/* category: os9 */
	/* description: OS9/68K module: */
	OS9_68K_MODULE = 3395,

	/* category: os9 */
	/* description: OS9/68K module: re-entrant */
	OS9_68K_MODULE_RE_ENTRANT = 3396,

	/* category: os9 */
	/* description: OS9/68K module: ghost */
	OS9_68K_MODULE_GHOST = 3397,

	/* category: os9 */
	/* description: OS9/68K module: system-state */
	OS9_68K_MODULE_SYSTEM_STATE = 3398,

	/* category: osf1 */
	/* description: OSF/Rose object */
	OSF_ROSE_OBJECT = 3399,

	/* category: osf1 */
	/* description: i386 COFF object */
	I386_COFF_OBJECT = 3400,

	/* category: palm */
	/* description: iSiloX E-book */
	ISILOX_E_BOOK = 3401,

	/* category: palm */
	/* description: Mobipocket E-book */
	MOBIPOCKET_E_BOOK = 3402,

	/* category: palm */
	/* description: AportisDoc/PalmDOC E-book */
	APORTISDOC_PALMDOC_E_BOOK = 3403,

	/* category: palm */
	/* description: BDicty PalmOS document */
	BDICTY_PALMOS_DOCUMENT = 3404,

	/* category: palm */
	/* description: DB PalmOS document */
	DB_PALMOS_DOCUMENT = 3405,

	/* category: palm */
	/* description: FireViewer/ImageViewer PalmOS document */
	FIREVIEWER_IMAGEVIEWER_PALMOS_DOCUMENT = 3406,

	/* category: palm */
	/* description: HanDBase PalmOS document */
	HANDBASE_PALMOS_DOCUMENT = 3407,

	/* category: palm */
	/* description: InfoView PalmOS document */
	INFOVIEW_PALMOS_DOCUMENT = 3408,

	/* category: palm */
	/* description: iSilo PalmOS document */
	ISILO_PALMOS_DOCUMENT = 3409,

	/* category: palm */
	/* description: JFile PalmOS document */
	JFILE_PALMOS_DOCUMENT = 3410,

	/* category: palm */
	/* description: JFile Pro PalmOS document */
	JFILE_PRO_PALMOS_DOCUMENT = 3411,

	/* category: palm */
	/* description: List PalmOS document */
	LIST_PALMOS_DOCUMENT = 3412,

	/* category: palm */
	/* description: MobileDB PalmOS document */
	MOBILEDB_PALMOS_DOCUMENT = 3413,

	/* category: palm */
	/* description: PeanutPress PalmOS document */
	PEANUTPRESS_PALMOS_DOCUMENT = 3414,

	/* category: palm */
	/* description: Plucker PalmOS document */
	PLUCKER_PALMOS_DOCUMENT = 3415,

	/* category: palm */
	/* description: QuickSheet PalmOS document */
	QUICKSHEET_PALMOS_DOCUMENT = 3416,

	/* category: palm */
	/* description: SuperMemo PalmOS document */
	SUPERMEMO_PALMOS_DOCUMENT = 3417,

	/* category: palm */
	/* description: TealDoc PalmOS document */
	TEALDOC_PALMOS_DOCUMENT = 3418,

	/* category: palm */
	/* description: TealInfo PalmOS document */
	TEALINFO_PALMOS_DOCUMENT = 3419,

	/* category: palm */
	/* description: TealMeal PalmOS document */
	TEALMEAL_PALMOS_DOCUMENT = 3420,

	/* category: palm */
	/* description: TealPaint PalmOS document */
	TEALPAINT_PALMOS_DOCUMENT = 3421,

	/* category: palm */
	/* description: ThinkDB PalmOS document */
	THINKDB_PALMOS_DOCUMENT = 3422,

	/* category: palm */
	/* description: Tides PalmOS document */
	TIDES_PALMOS_DOCUMENT = 3423,

	/* category: palm */
	/* description: TomeRaider PalmOS document */
	TOMERAIDER_PALMOS_DOCUMENT = 3424,

	/* category: palm */
	/* description: A GutenPalm zTXT e-book */
	A_GUTENPALM_ZTXT_E_BOOK = 3425,

	/* category: palm */
	/* description: Palm OS dynamic library data "%s" */
	PALM_OS_DYNAMIC_LIBRARY_DATA_SS = 3426,

	/* category: palm */
	/* description: Palm OS operating system patch data */
	PALM_OS_OPERATING_SYSTEM_PATCH_DATA = 3427,

	/* category: parix */
	/* description: PARIX */
	PARIX = 3428,

	/* category: parix */
	/* description: PARIX T800 */
	PARIX_T800 = 3429,

	/* category: parix */
	/* description: PARIX T9000 */
	PARIX_T9000 = 3430,

	/* category: parrot */
	/* description: Parrot bytecode */
	PARROT_BYTECODE = 3431,

	/* category: pascal */
	/* description: Pascal source text */
	PASCAL_SOURCE_TEXT = 3432,

	/* category: pbf */
	/* description: OpenStreetMap Protocolbuffer Binary Format */
	OPENSTREETMAP_PROTOCOLBUFFER_BINARY_FORMAT = 3433,

	/* category: pbm */
	/* description: "compact bitmap" format (Poskanzer) */
	COMPACT_BITMAP_FORMAT_POSKANZER = 3434,

	/* category: pc98 */
	/* description: Maki-chan v1. */
	MAKI_CHAN_V1 = 3435,

	/* category: pc98 */
	/* description: Maki-chan v2 image, */
	MAKI_CHAN_V2_IMAGE = 3436,

	/* category: pc98 */
	/* description: Maki-chan v2 image, system ID: %c */
	MAKI_CHAN_V2_IMAGE_SYSTEM_ID_CC = 3437,

	/* category: pc98 */
	/* description: XLD4(Q4) picture */
	XLD4_Q4_PICTURE = 3438,

	/* category: pc98 */
	/* description: Yanagisawa Pi 16 color picture, */
	YANAGISAWA_PI_16_COLOR_PICTURE = 3439,

	/* category: pdf */
	/* description: PDF document */
	PDF_DOCUMENT = 3440,

	/* category: pdf */
	/* description: FDF document */
	FDF_DOCUMENT = 3441,

	/* category: pdp */
	/* description: PDP-11 single precision APL workspace */
	PDP_11_SINGLE_PRECISION_APL_WORKSPACE = 3442,

	/* category: pdp */
	/* description: PDP-11 double precision APL workspace */
	PDP_11_DOUBLE_PRECISION_APL_WORKSPACE = 3443,

	/* category: pdp */
	/* description: PDP-11 executable */
	PDP_11_EXECUTABLE = 3444,

	/* category: pdp */
	/* description: PDP-11 UNIX/RT ldp */
	PDP_11_UNIX_RT_LDP = 3445,

	/* category: pdp */
	/* description: PDP-11 old overlay */
	PDP_11_OLD_OVERLAY = 3446,

	/* category: pdp */
	/* description: PDP-11 pure executable */
	PDP_11_PURE_EXECUTABLE = 3447,

	/* category: pdp */
	/* description: PDP-11 separate I&D executable */
	PDP_11_SEPARATE_I_D_EXECUTABLE = 3448,

	/* category: pdp */
	/* description: PDP-11 kernel overlay */
	PDP_11_KERNEL_OVERLAY = 3449,

	/* category: pdp */
	/* description: PDP-11 demand-paged pure executable */
	PDP_11_DEMAND_PAGED_PURE_EXECUTABLE = 3450,

	/* category: pdp */
	/* description: PDP-11 demand-paged pure executable not stripped */
	PDP_11_DEMAND_PAGED_PURE_EXECUTABLE_NOT_STRIPPED = 3451,

	/* category: pdp */
	/* description: PDP-11 overlaid pure executable */
	PDP_11_OVERLAID_PURE_EXECUTABLE = 3452,

	/* category: pdp */
	/* description: PDP-11 overlaid pure executable not stripped */
	PDP_11_OVERLAID_PURE_EXECUTABLE_NOT_STRIPPED = 3453,

	/* category: pdp */
	/* description: PDP-11 overlaid separate executable */
	PDP_11_OVERLAID_SEPARATE_EXECUTABLE = 3454,

	/* category: pdp */
	/* description: PDP-11 overlaid separate executable not stripped */
	PDP_11_OVERLAID_SEPARATE_EXECUTABLE_NOT_STRIPPED = 3455,

	/* category: perl */
	/* description: Perl script text */
	PERL_SCRIPT_TEXT = 3456,

	/* category: perl */
	/* description: Perl script text executable */
	PERL_SCRIPT_TEXT_EXECUTABLE = 3457,

	/* category: perl */
	/* description: Perl5 module source text */
	PERL5_MODULE_SOURCE_TEXT = 3458,

	/* category: perl */
	/* description: Perl POD document text */
	PERL_POD_DOCUMENT_TEXT = 3459,

	/* category: perl */
	/* description: perl Storable (v0.6) data */
	PERL_STORABLE_V0_6_DATA = 3460,

	/* category: perl */
	/* description: perl Storable (v0.6) data (net-order %d) */
	PERL_STORABLE_V0_6_DATA_NET_ORDER_DD = 3461,

	/* category: perl */
	/* description: perl Storable (v0.7) data */
	PERL_STORABLE_V0_7_DATA = 3462,

	/* category: perl */
	/* description: Hash::SharedMem master file, big-endian */
	HASH_SHAREDMEM_MASTER_FILE_BIG_ENDIAN = 3463,

	/* category: perl */
	/* description: Hash::SharedMem master file, little-endian */
	HASH_SHAREDMEM_MASTER_FILE_LITTLE_ENDIAN = 3464,

	/* category: perl */
	/* description: Hash::SharedMem data file, big-endian */
	HASH_SHAREDMEM_DATA_FILE_BIG_ENDIAN = 3465,

	/* category: perl */
	/* description: Hash::SharedMem data file, little-endian */
	HASH_SHAREDMEM_DATA_FILE_LITTLE_ENDIAN = 3466,

	/* category: pgf */
	/* description: Progressive Graphics image data, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA = 3467,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 2, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_2 = 3468,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 4, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_4 = 3469,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 5, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_5 = 3470,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6 = 3471,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, %d channels, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_DD_CHANNELS = 3472,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, bitmap, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_BITMAP = 3473,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, gray scale, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_GRAY_SCALE = 3474,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, indexed color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_INDEXED_COLOR = 3475,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, RGB color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_RGB_COLOR = 3476,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, CYMK color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_CYMK_COLOR = 3477,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, HSL color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_HSL_COLOR = 3478,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, HSB color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_HSB_COLOR = 3479,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, multi-channel, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_MULTI_CHANNEL = 3480,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, duo tone, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_DUO_TONE = 3481,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, LAB color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_LAB_COLOR = 3482,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, gray scale 16, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_GRAY_SCALE_16 = 3483,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, RGB color 48, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_RGB_COLOR_48 = 3484,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, LAB color 48, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_LAB_COLOR_48 = 3485,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, CYMK color 64, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_CYMK_COLOR_64 = 3486,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, deep multi-channel, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_DEEP_MULTI_CHANNEL = 3487,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, duo tone 16, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_DUO_TONE_16 = 3488,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, RGBA color, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_RGBA_COLOR = 3489,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, gray scale 32, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_GRAY_SCALE_32 = 3490,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, RGB color 12, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_RGB_COLOR_12 = 3491,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, RGB color 16, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_RGB_COLOR_16 = 3492,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, unknown format, */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_UNKNOWN_FORMAT = 3493,

	/* category: pgf */
	/* description: Progressive Graphics image data, version 6, format */
	PROGRESSIVE_GRAPHICS_IMAGE_DATA_VERSION_6_FORMAT = 3494,

	/* category: pgp */
	/* description: PGP key public ring (v%u) */
	PGP_KEY_PUBLIC_RING_VUU = 3495,

	/* category: pgp */
	/* description: PGP key security ring */
	PGP_KEY_SECURITY_RING = 3496,

	/* category: pgp */
	/* description: PGP encrypted data */
	PGP_ENCRYPTED_DATA = 3497,

	/* category: pgp */
	/* description: PGP public key block */
	PGP_PUBLIC_KEY_BLOCK = 3498,

	/* category: pgp */
	/* description: PGP message */
	PGP_MESSAGE = 3499,

	/* category: pgp */
	/* description: PGP signature */
	PGP_SIGNATURE = 3500,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - */
	PGP_RSA_ENCRYPTED_SESSION_KEY = 3501,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA (Encrypt or Sign) 1024b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_OR_SIGN_1024B = 3502,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA Encrypt-Only 1024b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_ONLY_1024B = 3503,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA (Encrypt or Sign) 2048b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_OR_SIGN_2048B = 3504,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA Encrypt-Only 2048b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_ONLY_2048B = 3505,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA (Encrypt or Sign) 3072b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_OR_SIGN_3072B = 3506,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA Encrypt-Only 3072b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_ONLY_3072B = 3507,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA (Encrypt or Sign) 4096b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_OR_SIGN_4096B = 3508,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA Encrypt-Only 4096b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_ONLY_4096B = 3509,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA (Encrypt or Sign) 8129b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_OR_SIGN_8129B = 3510,

	/* category: pgp */
	/* description: PGP RSA encrypted session key - RSA Encrypt-Only 8129b */
	PGP_RSA_ENCRYPTED_SESSION_KEY_RSA_ENCRYPT_ONLY_8129B = 3511,

	/* category: pgp */
	/* description: PGP symmetric key encrypted data - */
	PGP_SYMMETRIC_KEY_ENCRYPTED_DATA = 3512,

	/* category: pgp */
	/* description: PGP Secret Key - */
	PGP_SECRET_KEY = 3513,

	/* category: pgp */
	/* description: PGP Secret Sub-key */
	PGP_SECRET_SUB_KEY = 3514,

	/* category: pkgadd */
	/* description: pkg Datastream (SVR4) */
	PKG_DATASTREAM_SVR4 = 3515,

	/* category: plan9 */
	/* description: Plan 9 executable, Motorola 68k */
	PLAN_9_EXECUTABLE_MOTOROLA_68K = 3516,

	/* category: plan9 */
	/* description: Plan 9 executable, Intel 386 */
	PLAN_9_EXECUTABLE_INTEL_386 = 3517,

	/* category: plan9 */
	/* description: Plan 9 executable, Intel 960 */
	PLAN_9_EXECUTABLE_INTEL_960 = 3518,

	/* category: plan9 */
	/* description: Plan 9 executable, SPARC */
	PLAN_9_EXECUTABLE_SPARC = 3519,

	/* category: plan9 */
	/* description: Plan 9 executable, MIPS R3000 */
	PLAN_9_EXECUTABLE_MIPS_R3000 = 3520,

	/* category: plan9 */
	/* description: Plan 9 executable, AT&T DSP 3210 */
	PLAN_9_EXECUTABLE_AT_T_DSP_3210 = 3521,

	/* category: plan9 */
	/* description: Plan 9 executable, MIPS R4000 BE */
	PLAN_9_EXECUTABLE_MIPS_R4000_BE = 3522,

	/* category: plan9 */
	/* description: Plan 9 executable, AMD 29000 */
	PLAN_9_EXECUTABLE_AMD_29000 = 3523,

	/* category: plan9 */
	/* description: Plan 9 executable, ARM 7-something */
	PLAN_9_EXECUTABLE_ARM_7_SOMETHING = 3524,

	/* category: plan9 */
	/* description: Plan 9 executable, PowerPC */
	PLAN_9_EXECUTABLE_POWERPC = 3525,

	/* category: plan9 */
	/* description: Plan 9 executable, MIPS R4000 LE */
	PLAN_9_EXECUTABLE_MIPS_R4000_LE = 3526,

	/* category: plan9 */
	/* description: Plan 9 executable, DEC Alpha */
	PLAN_9_EXECUTABLE_DEC_ALPHA = 3527,

	/* category: plus5 */
	/* description: mumps avl global */
	MUMPS_AVL_GLOBAL = 3528,

	/* category: plus5 */
	/* description: mumps blt global */
	MUMPS_BLT_GLOBAL = 3529,

	/* category: polyml */
	/* description: Poly/ML saved state */
	POLY_ML_SAVED_STATE = 3530,

	/* category: polyml */
	/* description: Poly/ML saved module */
	POLY_ML_SAVED_MODULE = 3531,

	/* category: printer */
	/* description: PostScript document text */
	POSTSCRIPT_DOCUMENT_TEXT = 3532,

	/* category: printer */
	/* description: PostScript document text conforming */
	POSTSCRIPT_DOCUMENT_TEXT_CONFORMING = 3533,

	/* category: printer */
	/* description: PostScript document */
	POSTSCRIPT_DOCUMENT = 3534,

	/* category: printer */
	/* description: PPD file */
	PPD_FILE = 3535,

	/* category: printer */
	/* description: HP Printer Job Language data */
	HP_PRINTER_JOB_LANGUAGE_DATA = 3536,

	/* category: printer */
	/* description: PJL encapsulated PostScript document text */
	PJL_ENCAPSULATED_POSTSCRIPT_DOCUMENT_TEXT = 3537,

	/* category: printer */
	/* description: HP Printer Job Language data - HBPL */
	HP_PRINTER_JOB_LANGUAGE_DATA_HBPL = 3538,

	/* category: printer */
	/* description: HP Printer Job Language data - Oki Data HIPERC */
	HP_PRINTER_JOB_LANGUAGE_DATA_OKI_DATA_HIPERC = 3539,

	/* category: printer */
	/* description: HP Printer Job Language data - Konica Minolta LAVAFLOW */
	HP_PRINTER_JOB_LANGUAGE_DATA_KONICA_MINOLTA_LAVAFLOW = 3540,

	/* category: printer */
	/* description: HP Printer Job Language data - Samsung QPDL */
	HP_PRINTER_JOB_LANGUAGE_DATA_SAMSUNG_QPDL = 3541,

	/* category: printer */
	/* description: HP Printer Job Language data - HP ZJS */
	HP_PRINTER_JOB_LANGUAGE_DATA_HP_ZJS = 3542,

	/* category: printer */
	/* description: HP PCL printer data */
	HP_PCL_PRINTER_DATA = 3543,

	/* category: printer */
	/* description: HP PCL printer data - default page size */
	HP_PCL_PRINTER_DATA_DEFAULT_PAGE_SIZE = 3544,

	/* category: printer */
	/* description: HP PCL printer data - US executive page size */
	HP_PCL_PRINTER_DATA_US_EXECUTIVE_PAGE_SIZE = 3545,

	/* category: printer */
	/* description: HP PCL printer data - US letter page size */
	HP_PCL_PRINTER_DATA_US_LETTER_PAGE_SIZE = 3546,

	/* category: printer */
	/* description: HP PCL printer data - US legal page size */
	HP_PCL_PRINTER_DATA_US_LEGAL_PAGE_SIZE = 3547,

	/* category: printer */
	/* description: HP PCL printer data - A4 page size */
	HP_PCL_PRINTER_DATA_A4_PAGE_SIZE = 3548,

	/* category: printer */
	/* description: HP PCL printer data - Monarch envelope size */
	HP_PCL_PRINTER_DATA_MONARCH_ENVELOPE_SIZE = 3549,

	/* category: printer */
	/* description: HP PCL printer data - No. 10 envelope size */
	HP_PCL_PRINTER_DATA_NO_10_ENVELOPE_SIZE = 3550,

	/* category: printer */
	/* description: HP PCL printer data - Intl. DL envelope size */
	HP_PCL_PRINTER_DATA_INTL_DL_ENVELOPE_SIZE = 3551,

	/* category: printer */
	/* description: HP PCL printer data - Intl. C5 envelope size */
	HP_PCL_PRINTER_DATA_INTL_C5_ENVELOPE_SIZE = 3552,

	/* category: printer */
	/* description: HP PCL printer data - Intl. B5 envelope size */
	HP_PCL_PRINTER_DATA_INTL_B5_ENVELOPE_SIZE = 3553,

	/* category: printer */
	/* description: HP PCL printer data - No. 10 envelope size (landscape) */
	HP_PCL_PRINTER_DATA_NO_10_ENVELOPE_SIZE_LANDSCAPE = 3554,

	/* category: printer */
	/* description: HP PCL printer data - Intl. DL envelope size (landscape) */
	HP_PCL_PRINTER_DATA_INTL_DL_ENVELOPE_SIZE_LANDSCAPE = 3555,

	/* category: printer */
	/* description: Imagen printer */
	IMAGEN_PRINTER = 3556,

	/* category: printer */
	/* description: Imagen printer (imPRESS data) */
	IMAGEN_PRINTER_IMPRESS_DATA = 3557,

	/* category: printer */
	/* description: Imagen printer (daisywheel text) */
	IMAGEN_PRINTER_DAISYWHEEL_TEXT = 3558,

	/* category: printer */
	/* description: Imagen printer (line printer emulation) */
	IMAGEN_PRINTER_LINE_PRINTER_EMULATION = 3559,

	/* category: printer */
	/* description: Imagen printer (Tektronix 4014 emulation) */
	IMAGEN_PRINTER_TEKTRONIX_4014_EMULATION = 3560,

	/* category: printer */
	/* description: RST-format raster font data */
	RST_FORMAT_RASTER_FONT_DATA = 3561,

	/* category: printer */
	/* description: RST-format raster font data face %s */
	RST_FORMAT_RASTER_FONT_DATA_FACE_SS = 3562,

	/* category: printer */
	/* description: Canon Bubble Jet BJC formatted data */
	CANON_BUBBLE_JET_BJC_FORMATTED_DATA = 3563,

	/* category: printer */
	/* description: Epson Stylus Color 460 data */
	EPSON_STYLUS_COLOR_460_DATA = 3564,

	/* category: printer */
	/* description: Zenographics ZjStream printer data (big-endian) */
	ZENOGRAPHICS_ZJSTREAM_PRINTER_DATA_BIG_ENDIAN = 3565,

	/* category: printer */
	/* description: Zenographics ZjStream printer data (little-endian) */
	ZENOGRAPHICS_ZJSTREAM_PRINTER_DATA_LITTLE_ENDIAN = 3566,

	/* category: printer */
	/* description: Oak Technologies printer stream */
	OAK_TECHNOLOGIES_PRINTER_STREAM = 3567,

	/* category: printer */
	/* description: SunClock's Vector Map Format data */
	SUNCLOCK_S_VECTOR_MAP_FORMAT_DATA = 3568,

	/* category: printer */
	/* description: HP LaserJet 1000 series downloadable firmware */
	HP_LASERJET_1000_SERIES_DOWNLOADABLE_FIRMWARE = 3569,

	/* category: printer */
	/* description: Epson ESC/Page language printer data */
	EPSON_ESC_PAGE_LANGUAGE_PRINTER_DATA = 3570,

	/* category: project */
	/* description: project file for ftnchek */
	PROJECT_FILE_FOR_FTNCHEK = 3571,

	/* category: project */
	/* description: project file for ftnchek version 2.7 */
	PROJECT_FILE_FOR_FTNCHEK_VERSION_2_7 = 3572,

	/* category: project */
	/* description: project file for ftnchek version 2.8 to 2.10 */
	PROJECT_FILE_FOR_FTNCHEK_VERSION_2_8_TO_2_10 = 3573,

	/* category: project */
	/* description: project file for ftnchek version 2.11 or later */
	PROJECT_FILE_FOR_FTNCHEK_VERSION_2_11_OR_LATER = 3574,

	/* category: psdbms */
	/* description: ps database */
	PS_DATABASE = 3575,

	/* category: psl */
	/* description: Public Suffix List data */
	PUBLIC_SUFFIX_LIST_DATA = 3576,

	/* category: psl */
	/* description: Public Suffix List data (optimized) */
	PUBLIC_SUFFIX_LIST_DATA_OPTIMIZED = 3577,

	/* category: pulsar */
	/* description: Pulsar POP3 daemon mailbox cache file. */
	PULSAR_POP3_DAEMON_MAILBOX_CACHE_FILE = 3578,

	/* category: pwsafe */
	/* description: Password Safe V3 database */
	PASSWORD_SAFE_V3_DATABASE = 3579,

	/* category: pyramid */
	/* description: Pyramid 90x family executable */
	PYRAMID_90X_FAMILY_EXECUTABLE = 3580,

	/* category: pyramid */
	/* description: Pyramid 90x family pure executable */
	PYRAMID_90X_FAMILY_PURE_EXECUTABLE = 3581,

	/* category: pyramid */
	/* description: Pyramid 90x family pure executable not stripped */
	PYRAMID_90X_FAMILY_PURE_EXECUTABLE_NOT_STRIPPED = 3582,

	/* category: pyramid */
	/* description: Pyramid 90x family demand paged pure executable */
	PYRAMID_90X_FAMILY_DEMAND_PAGED_PURE_EXECUTABLE = 3583,

	/* category: pyramid */
	/* description: Pyramid 90x family demand paged pure executable not stripped */
	PYRAMID_90X_FAMILY_DEMAND_PAGED_PURE_EXECUTABLE_NOT_STRIPPED = 3584,

	/* category: python */
	/* description: Python script text executable */
	PYTHON_SCRIPT_TEXT_EXECUTABLE = 3585,

	/* category: python */
	/* description: python 1.5/1.6 byte-compiled */
	PYTHON_1_5_1_6_BYTE_COMPILED = 3586,

	/* category: python */
	/* description: python 2.0 byte-compiled */
	PYTHON_2_0_BYTE_COMPILED = 3587,

	/* category: python */
	/* description: python 2.1 byte-compiled */
	PYTHON_2_1_BYTE_COMPILED = 3588,

	/* category: python */
	/* description: python 2.2 byte-compiled */
	PYTHON_2_2_BYTE_COMPILED = 3589,

	/* category: python */
	/* description: python 2.3 byte-compiled */
	PYTHON_2_3_BYTE_COMPILED = 3590,

	/* category: python */
	/* description: python 2.4 byte-compiled */
	PYTHON_2_4_BYTE_COMPILED = 3591,

	/* category: python */
	/* description: python 2.5 byte-compiled */
	PYTHON_2_5_BYTE_COMPILED = 3592,

	/* category: python */
	/* description: python 2.6 byte-compiled */
	PYTHON_2_6_BYTE_COMPILED = 3593,

	/* category: python */
	/* description: python 2.7 byte-compiled */
	PYTHON_2_7_BYTE_COMPILED = 3594,

	/* category: python */
	/* description: python 3.0 byte-compiled */
	PYTHON_3_0_BYTE_COMPILED = 3595,

	/* category: python */
	/* description: python 3.1 byte-compiled */
	PYTHON_3_1_BYTE_COMPILED = 3596,

	/* category: python */
	/* description: python 3.2 byte-compiled */
	PYTHON_3_2_BYTE_COMPILED = 3597,

	/* category: python */
	/* description: python 3.3 byte-compiled */
	PYTHON_3_3_BYTE_COMPILED = 3598,

	/* category: python */
	/* description: python 3.4 byte-compiled */
	PYTHON_3_4_BYTE_COMPILED = 3599,

	/* category: python */
	/* description: python 3.5.1- byte-compiled */
	PYTHON_3_5_1_BYTE_COMPILED = 3600,

	/* category: python */
	/* description: python 3.5.2+ byte-compiled */
	PYTHON_3_5_2P_BYTE_COMPILED = 3601,

	/* category: python */
	/* description: python 3.6 byte-compiled */
	PYTHON_3_6_BYTE_COMPILED = 3602,

	/* category: python */
	/* description: python 3.7 byte-compiled */
	PYTHON_3_7_BYTE_COMPILED = 3603,

	/* category: qt */
	/* description: Qt Resource Collection file */
	QT_RESOURCE_COLLECTION_FILE = 3604,

	/* category: qt */
	/* description: Qt Binary Resource file */
	QT_BINARY_RESOURCE_FILE = 3605,

	/* category: qt */
	/* description: Qt C-code resource file */
	QT_C_CODE_RESOURCE_FILE = 3606,

	/* category: qt */
	/* description: Qt Translation file */
	QT_TRANSLATION_FILE = 3607,

	/* category: revision */
	/* description: cvs password text file */
	CVS_PASSWORD_TEXT_FILE = 3608,

	/* category: revision */
	/* description: Conary changeset data */
	CONARY_CHANGESET_DATA = 3609,

	/* category: revision */
	/* description: Git bundle */
	GIT_BUNDLE = 3610,

	/* category: revision */
	/* description: Git pack */
	GIT_PACK = 3611,

	/* category: revision */
	/* description: Git pack index */
	GIT_PACK_INDEX = 3612,

	/* category: revision */
	/* description: Git pack index, version 2 */
	GIT_PACK_INDEX_VERSION_2 = 3613,

	/* category: revision */
	/* description: Git index */
	GIT_INDEX = 3614,

	/* category: revision */
	/* description: Mercurial bundle, */
	MERCURIAL_BUNDLE = 3615,

	/* category: revision */
	/* description: Mercurial bundle, uncompressed */
	MERCURIAL_BUNDLE_UNCOMPRESSED = 3616,

	/* category: revision */
	/* description: Mercurial bundle, bzip2 compressed */
	MERCURIAL_BUNDLE_BZIP2_COMPRESSED = 3617,

	/* category: revision */
	/* description: Subversion dumpfile */
	SUBVERSION_DUMPFILE = 3618,

	/* category: revision */
	/* description: Bazaar Bundle */
	BAZAAR_BUNDLE = 3619,

	/* category: revision */
	/* description: Bazaar merge directive */
	BAZAAR_MERGE_DIRECTIVE = 3620,

	/* category: riff */
	/* description: RIFF (little-endian) data */
	RIFF_LITTLE_ENDIAN_DATA = 3621,

	/* category: riff */
	/* description: RIFF (little-endian) data, palette */
	RIFF_LITTLE_ENDIAN_DATA_PALETTE = 3622,

	/* category: riff */
	/* description: RIFF (little-endian) data, palette, extended */
	RIFF_LITTLE_ENDIAN_DATA_PALETTE_EXTENDED = 3623,

	/* category: riff */
	/* description: RIFF (little-endian) data, device-independent bitmap */
	RIFF_LITTLE_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP = 3624,

	/* category: riff */
	/* description: RIFF (little-endian) data, device-independent bitmap, OS/2 1.x format */
	RIFF_LITTLE_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_OS_2_1_X_FORMAT = 3625,

	/* category: riff */
	/* description: RIFF (little-endian) data, device-independent bitmap, OS/2 2.x format */
	RIFF_LITTLE_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_OS_2_2_X_FORMAT = 3626,

	/* category: riff */
	/* description: RIFF (little-endian) data, device-independent bitmap, Windows 3.x format */
	RIFF_LITTLE_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_WINDOWS_3_X_FORMAT = 3627,

	/* category: riff */
	/* description: RIFF (little-endian) data, MIDI */
	RIFF_LITTLE_ENDIAN_DATA_MIDI = 3628,

	/* category: riff */
	/* description: RIFF (little-endian) data, multimedia movie */
	RIFF_LITTLE_ENDIAN_DATA_MULTIMEDIA_MOVIE = 3629,

	/* category: riff */
	/* description: RIFF (little-endian) data, MPEG Layer 3 audio */
	RIFF_LITTLE_ENDIAN_DATA_MPEG_LAYER_3_AUDIO = 3630,

	/* category: riff */
	/* description: RIFF (little-endian) data, WAVE audio */
	RIFF_LITTLE_ENDIAN_DATA_WAVE_AUDIO = 3631,

	/* category: riff */
	/* description: RIFF (little-endian) data, Corel Draw Picture */
	RIFF_LITTLE_ENDIAN_DATA_COREL_DRAW_PICTURE = 3632,

	/* category: riff */
	/* description: RIFF (little-endian) data, Corel Draw Picture, version 6 */
	RIFF_LITTLE_ENDIAN_DATA_COREL_DRAW_PICTURE_VERSION_6 = 3633,

	/* category: riff */
	/* description: RIFF (little-endian) data, Steinberg CuBase */
	RIFF_LITTLE_ENDIAN_DATA_STEINBERG_CUBASE = 3634,

	/* category: riff */
	/* description: RIFF (little-endian) data, AVI */
	RIFF_LITTLE_ENDIAN_DATA_AVI = 3635,

	/* category: riff */
	/* description: RIFF (little-endian) data, animated cursor */
	RIFF_LITTLE_ENDIAN_DATA_ANIMATED_CURSOR = 3636,

	/* category: riff */
	/* description: RIFF (little-endian) data SoundFont/Bank */
	RIFF_LITTLE_ENDIAN_DATA_SOUNDFONT_BANK = 3637,

	/* category: riff */
	/* description: RIFF (little-endian) data, wrapped MPEG-1 (CDXA) */
	RIFF_LITTLE_ENDIAN_DATA_WRAPPED_MPEG_1_CDXA = 3638,

	/* category: riff */
	/* description: RIFF (little-endian) data, 4X Movie file */
	RIFF_LITTLE_ENDIAN_DATA_4X_MOVIE_FILE = 3639,

	/* category: riff */
	/* description: RIFF (little-endian) data, AMV */
	RIFF_LITTLE_ENDIAN_DATA_AMV = 3640,

	/* category: riff */
	/* description: RIFF (little-endian) data, Web/P image */
	RIFF_LITTLE_ENDIAN_DATA_WEB_P_IMAGE = 3641,

	/* category: riff */
	/* description: RIFF (big-endian) data */
	RIFF_BIG_ENDIAN_DATA = 3642,

	/* category: riff */
	/* description: RIFF (big-endian) data, palette */
	RIFF_BIG_ENDIAN_DATA_PALETTE = 3643,

	/* category: riff */
	/* description: RIFF (big-endian) data, device-independent bitmap */
	RIFF_BIG_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP = 3644,

	/* category: riff */
	/* description: RIFF (big-endian) data, device-independent bitmap, OS/2 1.x format */
	RIFF_BIG_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_OS_2_1_X_FORMAT = 3645,

	/* category: riff */
	/* description: RIFF (big-endian) data, device-independent bitmap, OS/2 2.x format */
	RIFF_BIG_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_OS_2_2_X_FORMAT = 3646,

	/* category: riff */
	/* description: RIFF (big-endian) data, device-independent bitmap, Windows 3.x format */
	RIFF_BIG_ENDIAN_DATA_DEVICE_INDEPENDENT_BITMAP_WINDOWS_3_X_FORMAT = 3647,

	/* category: riff */
	/* description: RIFF (big-endian) data, MIDI */
	RIFF_BIG_ENDIAN_DATA_MIDI = 3648,

	/* category: riff */
	/* description: RIFF (big-endian) data, multimedia movie */
	RIFF_BIG_ENDIAN_DATA_MULTIMEDIA_MOVIE = 3649,

	/* category: riff */
	/* description: RIFF (big-endian) data, WAVE audio */
	RIFF_BIG_ENDIAN_DATA_WAVE_AUDIO = 3650,

	/* category: riff */
	/* description: RIFF (big-endian) data, Corel Draw Picture */
	RIFF_BIG_ENDIAN_DATA_COREL_DRAW_PICTURE = 3651,

	/* category: riff */
	/* description: RIFF (big-endian) data, Corel Draw Picture, version 6 */
	RIFF_BIG_ENDIAN_DATA_COREL_DRAW_PICTURE_VERSION_6 = 3652,

	/* category: riff */
	/* description: RIFF (big-endian) data, AVI */
	RIFF_BIG_ENDIAN_DATA_AVI = 3653,

	/* category: riff */
	/* description: RIFF (big-endian) data, animated cursor */
	RIFF_BIG_ENDIAN_DATA_ANIMATED_CURSOR = 3654,

	/* category: riff */
	/* description: RIFF (big-endian) data, Notation Interchange File Format */
	RIFF_BIG_ENDIAN_DATA_NOTATION_INTERCHANGE_FILE_FORMAT = 3655,

	/* category: riff */
	/* description: RIFF (big-endian) data SoundFont/Bank */
	RIFF_BIG_ENDIAN_DATA_SOUNDFONT_BANK = 3656,

	/* category: riff */
	/* description: Sony Wave64 RIFF data */
	SONY_WAVE64_RIFF_DATA = 3657,

	/* category: riff */
	/* description: Sony Wave64 RIFF data, WAVE 64 audio */
	SONY_WAVE64_RIFF_DATA_WAVE_64_AUDIO = 3658,

	/* category: riff */
	/* description: Sony Wave64 RIFF data, WAVE 64 audio, mono */
	SONY_WAVE64_RIFF_DATA_WAVE_64_AUDIO_MONO = 3659,

	/* category: riff */
	/* description: Sony Wave64 RIFF data, WAVE 64 audio, stereo */
	SONY_WAVE64_RIFF_DATA_WAVE_64_AUDIO_STEREO = 3660,

	/* category: riff */
	/* description: MBWF/RF64 audio */
	MBWF_RF64_AUDIO = 3661,

	/* category: riff */
	/* description: MBWF/RF64 audio, mono */
	MBWF_RF64_AUDIO_MONO = 3662,

	/* category: riff */
	/* description: MBWF/RF64 audio, stereo */
	MBWF_RF64_AUDIO_STEREO = 3663,

	/* category: rpi */
	/* description: Raspberry PI kernel image */
	RASPBERRY_PI_KERNEL_IMAGE = 3664,

	/* category: rpm */
	/* description: RPM */
	RPM = 3665,

	/* category: rpm */
	/* description: RPM src */
	RPM_SRC = 3666,

	/* category: rpm */
	/* description: RPM bin */
	RPM_BIN = 3667,

	/* category: rpm */
	/* description: RPM bin i386/x86_64 */
	RPM_BIN_I386_X86_64 = 3668,

	/* category: rpm */
	/* description: RPM bin Alpha/Sparc64 */
	RPM_BIN_ALPHA_SPARC64 = 3669,

	/* category: rpm */
	/* description: RPM bin Sparc */
	RPM_BIN_SPARC = 3670,

	/* category: rpm */
	/* description: RPM bin MIPS */
	RPM_BIN_MIPS = 3671,

	/* category: rpm */
	/* description: RPM bin PowerPC */
	RPM_BIN_POWERPC = 3672,

	/* category: rpm */
	/* description: RPM bin 68000 */
	RPM_BIN_68000 = 3673,

	/* category: rpm */
	/* description: RPM bin SGI */
	RPM_BIN_SGI = 3674,

	/* category: rpm */
	/* description: RPM bin RS6000 */
	RPM_BIN_RS6000 = 3675,

	/* category: rpm */
	/* description: RPM bin IA64 */
	RPM_BIN_IA64 = 3676,

	/* category: rpm */
	/* description: RPM bin Sparc64 */
	RPM_BIN_SPARC64 = 3677,

	/* category: rpm */
	/* description: RPM bin MIPSel */
	RPM_BIN_MIPSEL = 3678,

	/* category: rpm */
	/* description: RPM bin ARM */
	RPM_BIN_ARM = 3679,

	/* category: rpm */
	/* description: RPM bin MiNT */
	RPM_BIN_MINT = 3680,

	/* category: rpm */
	/* description: RPM bin S/390 */
	RPM_BIN_S_390 = 3681,

	/* category: rpm */
	/* description: RPM bin S/390x */
	RPM_BIN_S_390X = 3682,

	/* category: rpm */
	/* description: RPM bin PowerPC64 */
	RPM_BIN_POWERPC64 = 3683,

	/* category: rpm */
	/* description: RPM bin SuperH */
	RPM_BIN_SUPERH = 3684,

	/* category: rpm */
	/* description: RPM bin Xtensa */
	RPM_BIN_XTENSA = 3685,

	/* category: rpm */
	/* description: RPM bin noarch */
	RPM_BIN_NOARCH = 3686,

	/* category: rpm */
	/* description: Delta RPM */
	DELTA_RPM = 3687,

	/* category: rtf */
	/* description: Rich Text Format data, */
	RICH_TEXT_FORMAT_DATA = 3688,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, */
	RICH_TEXT_FORMAT_DATA_VERSION_1 = 3689,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, ANSI */
	RICH_TEXT_FORMAT_DATA_VERSION_1_ANSI = 3690,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, Apple Macintosh */
	RICH_TEXT_FORMAT_DATA_VERSION_1_APPLE_MACINTOSH = 3691,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, IBM PC, code page 437 */
	RICH_TEXT_FORMAT_DATA_VERSION_1_IBM_PC_CODE_PAGE_437 = 3692,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, IBM PS/2, code page 850 */
	RICH_TEXT_FORMAT_DATA_VERSION_1_IBM_PS_2_CODE_PAGE_850 = 3693,

	/* category: rtf */
	/* description: Rich Text Format data, version 1, unknown character set */
	RICH_TEXT_FORMAT_DATA_VERSION_1_UNKNOWN_CHARACTER_SET = 3694,

	/* category: rtf */
	/* description: Rich Text Format data, unknown version */
	RICH_TEXT_FORMAT_DATA_UNKNOWN_VERSION = 3695,

	/* category: ruby */
	/* description: Ruby script text executable */
	RUBY_SCRIPT_TEXT_EXECUTABLE = 3696,

	/* category: ruby */
	/* description: Ruby script text */
	RUBY_SCRIPT_TEXT = 3697,

	/* category: sc */
	/* description: sc spreadsheet file */
	SC_SPREADSHEET_FILE = 3698,

	/* category: sccs */
	/* description: SCCS archive data */
	SCCS_ARCHIVE_DATA = 3699,

	/* category: scientific */
	/* description: MTZ reflection file */
	MTZ_REFLECTION_FILE = 3700,

	/* category: scientific */
	/* description: Plot84 plotting file */
	PLOT84_PLOTTING_FILE = 3701,

	/* category: scientific */
	/* description: NEWEZD Electron Density Map */
	NEWEZD_ELECTRON_DENSITY_MAP = 3702,

	/* category: scientific */
	/* description: Old EZD Electron Density Map */
	OLD_EZD_ELECTRON_DENSITY_MAP = 3703,

	/* category: scientific */
	/* description: BRIX Electron Density Map */
	BRIX_ELECTRON_DENSITY_MAP = 3704,

	/* category: scientific */
	/* description: XPLOR ASCII Electron Density Map */
	XPLOR_ASCII_ELECTRON_DENSITY_MAP = 3705,

	/* category: scientific */
	/* description: CNS ASCII electron density map */
	CNS_ASCII_ELECTRON_DENSITY_MAP = 3706,

	/* category: scientific */
	/* description: CCP4 Electron Density Map */
	CCP4_ELECTRON_DENSITY_MAP = 3707,

	/* category: scientific */
	/* description: CCP4 Electron Density Map, Big-endian */
	CCP4_ELECTRON_DENSITY_MAP_BIG_ENDIAN = 3708,

	/* category: scientific */
	/* description: CCP4 Electron Density Map, VAX format */
	CCP4_ELECTRON_DENSITY_MAP_VAX_FORMAT = 3709,

	/* category: scientific */
	/* description: CCP4 Electron Density Map, Little-endian */
	CCP4_ELECTRON_DENSITY_MAP_LITTLE_ENDIAN = 3710,

	/* category: scientific */
	/* description: CCP4 Electron Density Map, Convex native */
	CCP4_ELECTRON_DENSITY_MAP_CONVEX_NATIVE = 3711,

	/* category: scientific */
	/* description: R-Axis Area Detector Image: */
	R_AXIS_AREA_DETECTOR_IMAGE = 3712,

	/* category: scientific */
	/* description: R-Axis Area Detector Image, Win32: */
	R_AXIS_AREA_DETECTOR_IMAGE_WIN32 = 3713,

	/* category: scientific */
	/* description: MAR Area Detector Image, */
	MAR_AREA_DETECTOR_IMAGE = 3714,

	/* category: scientific */
	/* description: GEDCOM genealogy text */
	GEDCOM_GENEALOGY_TEXT = 3715,

	/* category: scientific */
	/* description: GEDCOM genealogy text version */
	GEDCOM_GENEALOGY_TEXT_VERSION = 3716,

	/* category: scientific */
	/* description: GEDCOM data */
	GEDCOM_DATA = 3717,

	/* category: scientific */
	/* description: Protein Data Bank data, ID Code %s */
	PROTEIN_DATA_BANK_DATA_ID_CODE_SS = 3718,

	/* category: scientific */
	/* description: GDSII Stream file */
	GDSII_STREAM_FILE = 3719,

	/* category: scientific */
	/* description: interLaced eXtensible Trace (LXT) file */
	INTERLACED_EXTENSIBLE_TRACE_LXT_FILE = 3720,

	/* category: securitycerts */
	/* description: RFC1421 Security Certificate text */
	RFC1421_SECURITY_CERTIFICATE_TEXT = 3721,

	/* category: securitycerts */
	/* description: RFC1421 Security Certificate Signing Request text */
	RFC1421_SECURITY_CERTIFICATE_SIGNING_REQUEST_TEXT = 3722,

	/* category: securitycerts */
	/* description: Sun 'jks' Java Keystore File data */
	SUN_JKS_JAVA_KEYSTORE_FILE_DATA = 3723,

	/* category: selinux */
	/* description: SE Linux modular policy */
	SE_LINUX_MODULAR_POLICY = 3724,

	/* category: selinux */
	/* description: SE Linux policy module source */
	SE_LINUX_POLICY_MODULE_SOURCE = 3725,

	/* category: selinux */
	/* description: SE Linux policy interface source */
	SE_LINUX_POLICY_INTERFACE_SOURCE = 3726,

	/* category: sendmail */
	/* description: Sendmail frozen configuration */
	SENDMAIL_FROZEN_CONFIGURATION = 3727,

	/* category: sendmail */
	/* description: sendmail m4 text file */
	SENDMAIL_M4_TEXT_FILE = 3728,

	/* category: sequent */
	/* description: BALANCE NS32000 .o */
	BALANCE_NS32000_O = 3729,

	/* category: sequent */
	/* description: BALANCE NS32000 executable (0 @ 0) */
	BALANCE_NS32000_EXECUTABLE_0_0 = 3730,

	/* category: sequent */
	/* description: BALANCE NS32000 executable (invalid @ 0) */
	BALANCE_NS32000_EXECUTABLE_INVALID_0 = 3731,

	/* category: sequent */
	/* description: BALANCE NS32000 standalone executable */
	BALANCE_NS32000_STANDALONE_EXECUTABLE = 3732,

	/* category: sequent */
	/* description: SYMMETRY i386 .o */
	SYMMETRY_I386_O = 3733,

	/* category: sequent */
	/* description: SYMMETRY i386 executable (0 @ 0) */
	SYMMETRY_I386_EXECUTABLE_0_0 = 3734,

	/* category: sequent */
	/* description: SYMMETRY i386 executable (invalid @ 0) */
	SYMMETRY_I386_EXECUTABLE_INVALID_0 = 3735,

	/* category: sequent */
	/* description: SYMMETRY i386 standalone executable */
	SYMMETRY_I386_STANDALONE_EXECUTABLE = 3736,

	/* category: sereal */
	/* description: Sereal data packet */
	SEREAL_DATA_PACKET = 3737,

	/* category: sereal */
	/* description: Sereal data packet, UTF-8 encoded */
	SEREAL_DATA_PACKET_UTF_8_ENCODED = 3738,

	/* category: sgi */
	/* description: kbd map file */
	KBD_MAP_FILE = 3739,

	/* category: sgi */
	/* description: disk quotas file */
	DISK_QUOTAS_FILE = 3740,

	/* category: sgi */
	/* description: IRIS Showcase file */
	IRIS_SHOWCASE_FILE = 3741,

	/* category: sgi */
	/* description: IRIS Showcase template */
	IRIS_SHOWCASE_TEMPLATE = 3742,

	/* category: sgi */
	/* description: IRIX Parallel Arena */
	IRIX_PARALLEL_ARENA = 3743,

	/* category: sgi */
	/* description: IRIX core dump */
	IRIX_CORE_DUMP = 3744,

	/* category: sgi */
	/* description: IRIX 64-bit core dump */
	IRIX_64_BIT_CORE_DUMP = 3745,

	/* category: sgi */
	/* description: IRIX N32 core dump */
	IRIX_N32_CORE_DUMP = 3746,

	/* category: sgi */
	/* description: IRIX vmcore dump of */
	IRIX_VMCORE_DUMP_OF = 3747,

	/* category: sgi */
	/* description: SGI Audit file */
	SGI_AUDIT_FILE = 3748,

	/* category: sgi */
	/* description: Wingz compiled script */
	WINGZ_COMPILED_SCRIPT = 3749,

	/* category: sgi */
	/* description: Wingz spreadsheet */
	WINGZ_SPREADSHEET = 3750,

	/* category: sgi */
	/* description: Wingz help file */
	WINGZ_HELP_FILE = 3751,

	/* category: sgi */
	/* description: IRIS Inventor 1.0 file */
	IRIS_INVENTOR_1_0_FILE = 3752,

	/* category: sgi */
	/* description: Open Inventor 2.0 file */
	OPEN_INVENTOR_2_0_FILE = 3753,

	/* category: sgi */
	/* description: GLF_TEXT */
	GLF_TEXT = 3754,

	/* category: sgi */
	/* description: GLF_BINARY_LSB_FIRST */
	GLF_BINARY_LSB_FIRST = 3755,

	/* category: sgi */
	/* description: GLF_BINARY_MSB_FIRST */
	GLF_BINARY_MSB_FIRST = 3756,

	/* category: sgi */
	/* description: GLS_TEXT */
	GLS_TEXT = 3757,

	/* category: sgi */
	/* description: GLS_BINARY_LSB_FIRST */
	GLS_BINARY_LSB_FIRST = 3758,

	/* category: sgi */
	/* description: GLS_BINARY_MSB_FIRST */
	GLS_BINARY_MSB_FIRST = 3759,

	/* category: sgi */
	/* description: PCP compiled namespace (V.0) */
	PCP_COMPILED_NAMESPACE_V_0 = 3760,

	/* category: sgi */
	/* description: PCP compiled namespace */
	PCP_COMPILED_NAMESPACE = 3761,

	/* category: sgi */
	/* description: PCP archive */
	PCP_ARCHIVE = 3762,

	/* category: sgi */
	/* description: PCP archive temporal index */
	PCP_ARCHIVE_TEMPORAL_INDEX = 3763,

	/* category: sgi */
	/* description: PCP archive metadata */
	PCP_ARCHIVE_METADATA = 3764,

	/* category: sgi */
	/* description: PCP archive log volume #0 */
	PCP_ARCHIVE_LOG_VOLUME_0 = 3765,

	/* category: sgi */
	/* description: PCP archive log volume #%d */
	PCP_ARCHIVE_LOG_VOLUME_DD = 3766,

	/* category: sgi */
	/* description: PCP */
	PCP = 3767,

	/* category: sgi */
	/* description: PCP pmchart view */
	PCP_PMCHART_VIEW = 3768,

	/* category: sgi */
	/* description: PCP kmchart view */
	PCP_KMCHART_VIEW = 3769,

	/* category: sgi */
	/* description: PCP pmview config */
	PCP_PMVIEW_CONFIG = 3770,

	/* category: sgi */
	/* description: PCP pmlogger config */
	PCP_PMLOGGER_CONFIG = 3771,

	/* category: sgi */
	/* description: PCP pmdahotproc config */
	PCP_PMDAHOTPROC_CONFIG = 3772,

	/* category: sgi */
	/* description: PCP Help */
	PCP_HELP = 3773,

	/* category: sgi */
	/* description: PCP Help Index */
	PCP_HELP_INDEX = 3774,

	/* category: sgi */
	/* description: PCP Help Text */
	PCP_HELP_TEXT = 3775,

	/* category: sgi */
	/* description: PCP pmieconf rules */
	PCP_PMIECONF_RULES = 3776,

	/* category: sgi */
	/* description: PCP pmie config */
	PCP_PMIE_CONFIG = 3777,

	/* category: sgi */
	/* description: PCP memory mapped values */
	PCP_MEMORY_MAPPED_VALUES = 3778,

	/* category: sgi */
	/* description: SpeedShop data file */
	SPEEDSHOP_DATA_FILE = 3779,

	/* category: sgi */
	/* description: mdbm file, version 0 (obsolete) */
	MDBM_FILE_VERSION_0_OBSOLETE = 3780,

	/* category: sgi */
	/* description: mdbm file, */
	MDBM_FILE = 3781,

	/* category: sgi */
	/* description: Alias Maya Ascii File, */
	ALIAS_MAYA_ASCII_FILE = 3782,

	/* category: sgi */
	/* description: Alias Maya Binary File, */
	ALIAS_MAYA_BINARY_FILE = 3783,

	/* category: sgi */
	/* description: Alias Maya Image File */
	ALIAS_MAYA_IMAGE_FILE = 3784,

	/* category: sgml */
	/* description: SVG Scalable Vector Graphics image */
	SVG_SCALABLE_VECTOR_GRAPHICS_IMAGE = 3785,

	/* category: sgml */
	/* description: GnuCash file */
	GNUCASH_FILE = 3786,

	/* category: sgml */
	/* description: XML Sitemap document text */
	XML_SITEMAP_DOCUMENT_TEXT = 3787,

	/* category: sgml */
	/* description: OpenStreetMap XML data */
	OPENSTREETMAP_XML_DATA = 3788,

	/* category: sgml */
	/* description: XHTML document text */
	XHTML_DOCUMENT_TEXT = 3789,

	/* category: sgml */
	/* description: broken XHTML document text */
	BROKEN_XHTML_DOCUMENT_TEXT = 3790,

	/* category: sgml */
	/* description: HTML document text */
	HTML_DOCUMENT_TEXT = 3791,

	/* category: sgml */
	/* description: SVG XML document */
	SVG_XML_DOCUMENT = 3792,

	/* category: sgml */
	/* description: XML document text */
	XML_DOCUMENT_TEXT = 3793,

	/* category: sgml */
	/* description: XML */
	XML = 3794,

	/* category: sgml */
	/* description: XML %.3s document text */
	XML_SS_DOCUMENT_TEXT = 3795,

	/* category: sgml */
	/* description: broken XML document text */
	BROKEN_XML_DOCUMENT_TEXT = 3796,

	/* category: sgml */
	/* description: exported SGML document text */
	EXPORTED_SGML_DOCUMENT_TEXT = 3797,

	/* category: sgml */
	/* description: exported SGML subdocument text */
	EXPORTED_SGML_SUBDOCUMENT_TEXT = 3798,

	/* category: sgml */
	/* description: Web browser cookie text */
	WEB_BROWSER_COOKIE_TEXT = 3799,

	/* category: sgml */
	/* description: Netscape cookie text */
	NETSCAPE_COOKIE_TEXT = 3800,

	/* category: sgml */
	/* description: Konqueror cookie text */
	KONQUEROR_COOKIE_TEXT = 3801,

	/* category: sgml */
	/* description: Portable Embosser Format */
	PORTABLE_EMBOSSER_FORMAT = 3802,

	/* category: sharc */
	/* description: SHARC architecture file */
	SHARC_ARCHITECTURE_FILE = 3803,

	/* category: sharc */
	/* description: SHARC COFF binary */
	SHARC_COFF_BINARY = 3804,

	/* category: sinclair */
	/* description: QL disk dump data, */
	QL_DISK_DUMP_DATA = 3805,

	/* category: sinclair */
	/* description: QL disk dump data, 720 KB, */
	QL_DISK_DUMP_DATA_720_KB = 3806,

	/* category: sinclair */
	/* description: QL disk dump data, 1.44 MB, */
	QL_DISK_DUMP_DATA_1_44_MB = 3807,

	/* category: sinclair */
	/* description: QL disk dump data, 3.2 MB, */
	QL_DISK_DUMP_DATA_3_2_MB = 3808,

	/* category: sinclair */
	/* description: QL OS dump data, */
	QL_OS_DUMP_DATA = 3809,

	/* category: sinclair */
	/* description: QL firmware executable (BCPL) */
	QL_FIRMWARE_EXECUTABLE_BCPL = 3810,

	/* category: sinclair */
	/* description: QDOS object */
	QDOS_OBJECT = 3811,

	/* category: sinclair */
	/* description: QDOS executable */
	QDOS_EXECUTABLE = 3812,

	/* category: sinclair */
	/* description: QL plugin-ROM data, */
	QL_PLUGIN_ROM_DATA = 3813,

	/* category: sinclair */
	/* description: QL plugin-ROM data, un-named */
	QL_PLUGIN_ROM_DATA_UN_NAMED = 3814,

	/* category: sisu */
	/* description: SiSU text insert */
	SISU_TEXT_INSERT = 3815,

	/* category: sisu */
	/* description: SiSU text master */
	SISU_TEXT_MASTER = 3816,

	/* category: sisu */
	/* description: SiSU text */
	SISU_TEXT = 3817,

	/* category: sketch */
	/* description: Sketch document text */
	SKETCH_DOCUMENT_TEXT = 3818,

	/* category: smalltalk */
	/* description: GNU SmallTalk */
	GNU_SMALLTALK = 3819,

	/* category: smalltalk */
	/* description: GNU SmallTalk LE image version */
	GNU_SMALLTALK_LE_IMAGE_VERSION = 3820,

	/* category: smalltalk */
	/* description: GNU SmallTalk BE image version */
	GNU_SMALLTALK_BE_IMAGE_VERSION = 3821,

	/* category: smile */
	/* description: Smile binary data */
	SMILE_BINARY_DATA = 3822,

	/* category: smile */
	/* description: Smile binary data binary raw, */
	SMILE_BINARY_DATA_BINARY_RAW = 3823,

	/* category: smile */
	/* description: Smile binary data binary encoded, */
	SMILE_BINARY_DATA_BINARY_ENCODED = 3824,

	/* category: smile */
	/* description: Smile binary data shared String values enabled, */
	SMILE_BINARY_DATA_SHARED_STRING_VALUES_ENABLED = 3825,

	/* category: sniffer */
	/* description: NetMon capture file */
	NETMON_CAPTURE_FILE = 3826,

	/* category: sniffer */
	/* description: NetMon capture file (Unknown) */
	NETMON_CAPTURE_FILE_UNKNOWN = 3827,

	/* category: sniffer */
	/* description: NetMon capture file (Ethernet) */
	NETMON_CAPTURE_FILE_ETHERNET = 3828,

	/* category: sniffer */
	/* description: NetMon capture file (Token Ring) */
	NETMON_CAPTURE_FILE_TOKEN_RING = 3829,

	/* category: sniffer */
	/* description: NetMon capture file (FDDI) */
	NETMON_CAPTURE_FILE_FDDI = 3830,

	/* category: sniffer */
	/* description: NetMon capture file (ATM) */
	NETMON_CAPTURE_FILE_ATM = 3831,

	/* category: sniffer */
	/* description: NetMon capture file (type %d) */
	NETMON_CAPTURE_FILE_TYPE_DD = 3832,

	/* category: sniffer */
	/* description: NetMon capture file (IP-over-IEEE 1394) */
	NETMON_CAPTURE_FILE_IP_OVER_IEEE_1394 = 3833,

	/* category: sniffer */
	/* description: NetMon capture file (802.11) */
	NETMON_CAPTURE_FILE_802_11 = 3834,

	/* category: sniffer */
	/* description: NetMon capture file (Raw IP) */
	NETMON_CAPTURE_FILE_RAW_IP = 3835,

	/* category: sniffer */
	/* description: Sniffer capture file */
	SNIFFER_CAPTURE_FILE = 3836,

	/* category: sniffer */
	/* description: NetXRay capture file */
	NETXRAY_CAPTURE_FILE = 3837,

	/* category: sniffer */
	/* description: pcap capture file, microseconds ts (big-endian) */
	PCAP_CAPTURE_FILE_MICROSECONDS_TS_BIG_ENDIAN = 3838,

	/* category: sniffer */
	/* description: pcap capture file, microsecond ts (little-endian) */
	PCAP_CAPTURE_FILE_MICROSECOND_TS_LITTLE_ENDIAN = 3839,

	/* category: sniffer */
	/* description: pcap capture file, nanosecond ts (big-endian) */
	PCAP_CAPTURE_FILE_NANOSECOND_TS_BIG_ENDIAN = 3840,

	/* category: sniffer */
	/* description: pcap capture file, nanosecond ts (little-endian) */
	PCAP_CAPTURE_FILE_NANOSECOND_TS_LITTLE_ENDIAN = 3841,

	/* category: sniffer */
	/* description: pcap capture file, microsecond ts, extensions (big-endian) */
	PCAP_CAPTURE_FILE_MICROSECOND_TS_EXTENSIONS_BIG_ENDIAN = 3842,

	/* category: sniffer */
	/* description: pcap capture file, microsecond ts, extensions (little-endian) */
	PCAP_CAPTURE_FILE_MICROSECOND_TS_EXTENSIONS_LITTLE_ENDIAN = 3843,

	/* category: sniffer */
	/* description: pcapng capture file */
	PCAPNG_CAPTURE_FILE = 3844,

	/* category: sniffer */
	/* description: AIX iptrace capture file */
	AIX_IPTRACE_CAPTURE_FILE = 3845,

	/* category: sniffer */
	/* description: Novell LANalyzer capture file */
	NOVELL_LANALYZER_CAPTURE_FILE = 3846,

	/* category: sniffer */
	/* description: HP/UX nettl capture file */
	HP_UX_NETTL_CAPTURE_FILE = 3847,

	/* category: sniffer */
	/* description: RADCOM WAN/LAN Analyzer capture file */
	RADCOM_WAN_LAN_ANALYZER_CAPTURE_FILE = 3848,

	/* category: sniffer */
	/* description: NetStumbler log file */
	NETSTUMBLER_LOG_FILE = 3849,

	/* category: sniffer */
	/* description: EtherPeek/AiroPeek/OmniPeek capture file */
	ETHERPEEK_AIROPEEK_OMNIPEEK_CAPTURE_FILE = 3850,

	/* category: sniffer */
	/* description: Visual Networks traffic capture file */
	VISUAL_NETWORKS_TRAFFIC_CAPTURE_FILE = 3851,

	/* category: sniffer */
	/* description: Network Instruments Observer capture file */
	NETWORK_INSTRUMENTS_OBSERVER_CAPTURE_FILE = 3852,

	/* category: sniffer */
	/* description: 5View capture file */
	A_5VIEW_CAPTURE_FILE = 3853,

	/* category: softquad */
	/* description: Compiled SGML rules file */
	COMPILED_SGML_RULES_FILE = 3854,

	/* category: softquad */
	/* description: Compiled SGML rules file Type %s */
	COMPILED_SGML_RULES_FILE_TYPE_SS = 3855,

	/* category: softquad */
	/* description: A/E SGML Document binary */
	A_E_SGML_DOCUMENT_BINARY = 3856,

	/* category: softquad */
	/* description: A/E SGML Document binary Type %s */
	A_E_SGML_DOCUMENT_BINARY_TYPE_SS = 3857,

	/* category: softquad */
	/* description: A/E SGML binary styles file */
	A_E_SGML_BINARY_STYLES_FILE = 3858,

	/* category: softquad */
	/* description: A/E SGML binary styles file Type %s */
	A_E_SGML_BINARY_STYLES_FILE_TYPE_SS = 3859,

	/* category: softquad */
	/* description: Compiled PSI (v1) data */
	COMPILED_PSI_V1_DATA = 3860,

	/* category: softquad */
	/* description: Compiled PSI (v2) data */
	COMPILED_PSI_V2_DATA = 3861,

	/* category: softquad */
	/* description: SoftQuad DESC or font file binary */
	SOFTQUAD_DESC_OR_FONT_FILE_BINARY = 3862,

	/* category: softquad */
	/* description: SoftQuad Raster Format text */
	SOFTQUAD_RASTER_FORMAT_TEXT = 3863,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE = 3864,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate for AT&T 495 laser printer */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE_FOR_AT_T_495_LASER_PRINTER = 3865,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate for Hewlett-Packard LaserJet */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE_FOR_HEWLETT_PACKARD_LASERJET = 3866,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate for IMAGEN imPRESS */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE_FOR_IMAGEN_IMPRESS = 3867,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate for PostScript */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE_FOR_POSTSCRIPT = 3868,

	/* category: softquad */
	/* description: SoftQuad troff Context intermediate for HP LaserJet */
	SOFTQUAD_TROFF_CONTEXT_INTERMEDIATE_FOR_HP_LASERJET = 3869,

	/* category: spec */
	/* description: SPEC */
	SPEC = 3870,

	/* category: spec */
	/* description: SPEC CPU */
	SPEC_CPU = 3871,

	/* category: spec */
	/* description: SPECjbb */
	SPECJBB = 3872,

	/* category: spec */
	/* description: SPECweb */
	SPECWEB = 3873,

	/* category: spectrum */
	/* description: Spectrum +3 data */
	SPECTRUM_P3_DATA = 3874,

	/* category: spectrum */
	/* description: Spectrum +3 data - BASIC program */
	SPECTRUM_P3_DATA_BASIC_PROGRAM = 3875,

	/* category: spectrum */
	/* description: Spectrum +3 data - number array */
	SPECTRUM_P3_DATA_NUMBER_ARRAY = 3876,

	/* category: spectrum */
	/* description: Spectrum +3 data - character array */
	SPECTRUM_P3_DATA_CHARACTER_ARRAY = 3877,

	/* category: spectrum */
	/* description: Spectrum +3 data - memory block */
	SPECTRUM_P3_DATA_MEMORY_BLOCK = 3878,

	/* category: spectrum */
	/* description: Spectrum +3 data - memory block (screen) */
	SPECTRUM_P3_DATA_MEMORY_BLOCK_SCREEN = 3879,

	/* category: spectrum */
	/* description: Spectrum +3 data - Tasword document */
	SPECTRUM_P3_DATA_TASWORD_DOCUMENT = 3880,

	/* category: spectrum */
	/* description: Spectrum +3 data - ZXT tapefile */
	SPECTRUM_P3_DATA_ZXT_TAPEFILE = 3881,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" */
	SPECTRUM_TAP_DATA_SS = 3882,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" - BASIC program */
	SPECTRUM_TAP_DATA_SS_BASIC_PROGRAM = 3883,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" - number array */
	SPECTRUM_TAP_DATA_SS_NUMBER_ARRAY = 3884,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" - character array */
	SPECTRUM_TAP_DATA_SS_CHARACTER_ARRAY = 3885,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" - memory block */
	SPECTRUM_TAP_DATA_SS_MEMORY_BLOCK = 3886,

	/* category: spectrum */
	/* description: Spectrum .TAP data "%-10.10s" - memory block (screen) */
	SPECTRUM_TAP_DATA_SS_MEMORY_BLOCK_SCREEN = 3887,

	/* category: spectrum */
	/* description: Spectrum .TZX data */
	SPECTRUM_TZX_DATA = 3888,

	/* category: spectrum */
	/* description: Spectrum .RZX data */
	SPECTRUM_RZX_DATA = 3889,

	/* category: spectrum */
	/* description: Amstrad/Spectrum .DSK data */
	AMSTRAD_SPECTRUM_DSK_DATA = 3890,

	/* category: spectrum */
	/* description: Amstrad/Spectrum DU54 .DSK data */
	AMSTRAD_SPECTRUM_DU54_DSK_DATA = 3891,

	/* category: spectrum */
	/* description: Amstrad/Spectrum Extended .DSK data */
	AMSTRAD_SPECTRUM_EXTENDED_DSK_DATA = 3892,

	/* category: spectrum */
	/* description: Spectrum .SCL Betadisk image */
	SPECTRUM_SCL_BETADISK_IMAGE = 3893,

	/* category: spectrum */
	/* description: Spectrum .HDF hard disk image */
	SPECTRUM_HDF_HARD_DISK_IMAGE = 3894,

	/* category: spectrum */
	/* description: zx-state snapshot */
	ZX_STATE_SNAPSHOT = 3895,

	/* category: sql */
	/* description: MySQL table definition file */
	MYSQL_TABLE_DEFINITION_FILE = 3896,

	/* category: sql */
	/* description: MySQL table definition file, type UNKNOWN */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_UNKNOWN = 3897,

	/* category: sql */
	/* description: MySQL table definition file, type DIAM_ISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_DIAM_ISAM = 3898,

	/* category: sql */
	/* description: MySQL table definition file, type HASH */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_HASH = 3899,

	/* category: sql */
	/* description: MySQL table definition file, type MISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MISAM = 3900,

	/* category: sql */
	/* description: MySQL table definition file, type PISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_PISAM = 3901,

	/* category: sql */
	/* description: MySQL table definition file, type RMS_ISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_RMS_ISAM = 3902,

	/* category: sql */
	/* description: MySQL table definition file, type HEAP */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_HEAP = 3903,

	/* category: sql */
	/* description: MySQL table definition file, type ISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_ISAM = 3904,

	/* category: sql */
	/* description: MySQL table definition file, type MRG_ISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MRG_ISAM = 3905,

	/* category: sql */
	/* description: MySQL table definition file, type MYISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MYISAM = 3906,

	/* category: sql */
	/* description: MySQL table definition file, type MRG_MYISAM */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MRG_MYISAM = 3907,

	/* category: sql */
	/* description: MySQL table definition file, type BERKELEY_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_BERKELEY_DB = 3908,

	/* category: sql */
	/* description: MySQL table definition file, type INNODB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_INNODB = 3909,

	/* category: sql */
	/* description: MySQL table definition file, type GEMINI */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_GEMINI = 3910,

	/* category: sql */
	/* description: MySQL table definition file, type NDBCLUSTER */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_NDBCLUSTER = 3911,

	/* category: sql */
	/* description: MySQL table definition file, type EXAMPLE_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_EXAMPLE_DB = 3912,

	/* category: sql */
	/* description: MySQL table definition file, type CSV_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_CSV_DB = 3913,

	/* category: sql */
	/* description: MySQL table definition file, type FEDERATED_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_FEDERATED_DB = 3914,

	/* category: sql */
	/* description: MySQL table definition file, type BLACKHOLE_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_BLACKHOLE_DB = 3915,

	/* category: sql */
	/* description: MySQL table definition file, type PARTITION_DB */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_PARTITION_DB = 3916,

	/* category: sql */
	/* description: MySQL table definition file, type BINLOG */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_BINLOG = 3917,

	/* category: sql */
	/* description: MySQL table definition file, type SOLID */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_SOLID = 3918,

	/* category: sql */
	/* description: MySQL table definition file, type PBXT */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_PBXT = 3919,

	/* category: sql */
	/* description: MySQL table definition file, type TABLE_FUNCTION */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_TABLE_FUNCTION = 3920,

	/* category: sql */
	/* description: MySQL table definition file, type MEMCACHE */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MEMCACHE = 3921,

	/* category: sql */
	/* description: MySQL table definition file, type FALCON */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_FALCON = 3922,

	/* category: sql */
	/* description: MySQL table definition file, type MARIA */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_MARIA = 3923,

	/* category: sql */
	/* description: MySQL table definition file, type PERFORMANCE_SCHEMA */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_PERFORMANCE_SCHEMA = 3924,

	/* category: sql */
	/* description: MySQL table definition file, type DEFAULT */
	MYSQL_TABLE_DEFINITION_FILE_TYPE_DEFAULT = 3925,

	/* category: sql */
	/* description: MySQL ISAM index file */
	MYSQL_ISAM_INDEX_FILE = 3926,

	/* category: sql */
	/* description: MySQL ISAM compressed data file */
	MYSQL_ISAM_COMPRESSED_DATA_FILE = 3927,

	/* category: sql */
	/* description: MySQL MyISAM index file */
	MYSQL_MYISAM_INDEX_FILE = 3928,

	/* category: sql */
	/* description: MySQL MyISAM compressed data file */
	MYSQL_MYISAM_COMPRESSED_DATA_FILE = 3929,

	/* category: sql */
	/* description: MySQL Maria index file */
	MYSQL_MARIA_INDEX_FILE = 3930,

	/* category: sql */
	/* description: MySQL Maria compressed data file */
	MYSQL_MARIA_COMPRESSED_DATA_FILE = 3931,

	/* category: sql */
	/* description: MySQL Maria control file */
	MYSQL_MARIA_CONTROL_FILE = 3932,

	/* category: sql */
	/* description: MySQL replication log, */
	MYSQL_REPLICATION_LOG = 3933,

	/* category: sql */
	/* description: MySQL replication log, server id %d */
	MYSQL_REPLICATION_LOG_SERVER_ID_DD = 3934,

	/* category: sql */
	/* description: MySQL replication log,, MySQL V3.2.3 */
	MYSQL_REPLICATION_LOG_MYSQL_V3_2_3 = 3935,

	/* category: sql */
	/* description: MySQL replication log,, MySQL V4.0.2-V4.1 */
	MYSQL_REPLICATION_LOG_MYSQL_V4_0_2_V4_1 = 3936,

	/* category: sql */
	/* description: MySQL replication log, MySQL V5+, */
	MYSQL_REPLICATION_LOG_MYSQL_V5P = 3937,

	/* category: sql */
	/* description: iRiver Database file */
	IRIVER_DATABASE_FILE = 3938,

	/* category: sql */
	/* description: SQLite 2.x database */
	SQLITE_2_X_DATABASE = 3939,

	/* category: sql */
	/* description: SQLite 3.x database */
	SQLITE_3_X_DATABASE = 3940,

	/* category: sql */
	/* description: SQLite Write-Ahead Log, */
	SQLITE_WRITE_AHEAD_LOG = 3941,

	/* category: sql */
	/* description: SQLite Rollback Journal */
	SQLITE_ROLLBACK_JOURNAL = 3942,

	/* category: sql */
	/* description: Panasonic channel list DataBase */
	PANASONIC_CHANNEL_LIST_DATABASE = 3943,

	/* category: sql */
	/* description: H2 Database file */
	H2_DATABASE_FILE = 3944,

	/* category: ssh */
	/* description: OpenSSH RSA1 private key, */
	OPENSSH_RSA1_PRIVATE_KEY = 3945,

	/* category: ssh */
	/* description: OpenSSH private key */
	OPENSSH_PRIVATE_KEY = 3946,

	/* category: ssh */
	/* description: OpenSSH DSA public key */
	OPENSSH_DSA_PUBLIC_KEY = 3947,

	/* category: ssh */
	/* description: OpenSSH RSA public key */
	OPENSSH_RSA_PUBLIC_KEY = 3948,

	/* category: ssh */
	/* description: OpenSSH ECDSA public key */
	OPENSSH_ECDSA_PUBLIC_KEY = 3949,

	/* category: ssh */
	/* description: OpenSSH ED25519 public key */
	OPENSSH_ED25519_PUBLIC_KEY = 3950,

	/* category: ssl */
	/* description: PEM certificate */
	PEM_CERTIFICATE = 3951,

	/* category: ssl */
	/* description: PEM certificate request */
	PEM_CERTIFICATE_REQUEST = 3952,

	/* category: ssl */
	/* description: PEM RSA private key */
	PEM_RSA_PRIVATE_KEY = 3953,

	/* category: ssl */
	/* description: PEM DSA private key */
	PEM_DSA_PRIVATE_KEY = 3954,

	/* category: ssl */
	/* description: PEM EC private key */
	PEM_EC_PRIVATE_KEY = 3955,

	/* category: ssl */
	/* description: PEM ECDSA private key */
	PEM_ECDSA_PRIVATE_KEY = 3956,

	/* category: ssl */
	/* description: openssl enc'd data with salted password */
	OPENSSL_ENC_D_DATA_WITH_SALTED_PASSWORD = 3957,

	/* category: ssl */
	/* description: openssl enc'd data with salted password, base64 encoded */
	OPENSSL_ENC_D_DATA_WITH_SALTED_PASSWORD_BASE64_ENCODED = 3958,

	/* category: sun */
	/* description: a.out SunOS SPARC demand paged */
	A_OUT_SUNOS_SPARC_DEMAND_PAGED = 3959,

	/* category: sun */
	/* description: a.out SunOS SPARC demand paged shared library */
	A_OUT_SUNOS_SPARC_DEMAND_PAGED_SHARED_LIBRARY = 3960,

	/* category: sun */
	/* description: a.out SunOS SPARC demand paged dynamically linked executable */
	A_OUT_SUNOS_SPARC_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 3961,

	/* category: sun */
	/* description: a.out SunOS SPARC demand paged executable */
	A_OUT_SUNOS_SPARC_DEMAND_PAGED_EXECUTABLE = 3962,

	/* category: sun */
	/* description: a.out SunOS SPARC pure */
	A_OUT_SUNOS_SPARC_PURE = 3963,

	/* category: sun */
	/* description: a.out SunOS SPARC pure dynamically linked executable */
	A_OUT_SUNOS_SPARC_PURE_DYNAMICALLY_LINKED_EXECUTABLE = 3964,

	/* category: sun */
	/* description: a.out SunOS SPARC pure executable */
	A_OUT_SUNOS_SPARC_PURE_EXECUTABLE = 3965,

	/* category: sun */
	/* description: a.out SunOS SPARC */
	A_OUT_SUNOS_SPARC = 3966,

	/* category: sun */
	/* description: a.out SunOS SPARC dynamically linked executable */
	A_OUT_SUNOS_SPARC_DYNAMICALLY_LINKED_EXECUTABLE = 3967,

	/* category: sun */
	/* description: a.out SunOS SPARC executable */
	A_OUT_SUNOS_SPARC_EXECUTABLE = 3968,

	/* category: sun */
	/* description: a.out SunOS mc68020 demand paged */
	A_OUT_SUNOS_MC68020_DEMAND_PAGED = 3969,

	/* category: sun */
	/* description: a.out SunOS mc68020 demand paged shared library */
	A_OUT_SUNOS_MC68020_DEMAND_PAGED_SHARED_LIBRARY = 3970,

	/* category: sun */
	/* description: a.out SunOS mc68020 demand paged dynamically linked executable */
	A_OUT_SUNOS_MC68020_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 3971,

	/* category: sun */
	/* description: a.out SunOS mc68020 demand paged executable */
	A_OUT_SUNOS_MC68020_DEMAND_PAGED_EXECUTABLE = 3972,

	/* category: sun */
	/* description: a.out SunOS mc68020 pure */
	A_OUT_SUNOS_MC68020_PURE = 3973,

	/* category: sun */
	/* description: a.out SunOS mc68020 pure dynamically linked executable */
	A_OUT_SUNOS_MC68020_PURE_DYNAMICALLY_LINKED_EXECUTABLE = 3974,

	/* category: sun */
	/* description: a.out SunOS mc68020 pure executable */
	A_OUT_SUNOS_MC68020_PURE_EXECUTABLE = 3975,

	/* category: sun */
	/* description: a.out SunOS mc68020 */
	A_OUT_SUNOS_MC68020 = 3976,

	/* category: sun */
	/* description: a.out SunOS mc68020 dynamically linked executable */
	A_OUT_SUNOS_MC68020_DYNAMICALLY_LINKED_EXECUTABLE = 3977,

	/* category: sun */
	/* description: a.out SunOS mc68020 executable */
	A_OUT_SUNOS_MC68020_EXECUTABLE = 3978,

	/* category: sun */
	/* description: a.out SunOS mc68010 demand paged */
	A_OUT_SUNOS_MC68010_DEMAND_PAGED = 3979,

	/* category: sun */
	/* description: a.out SunOS mc68010 demand paged shared library */
	A_OUT_SUNOS_MC68010_DEMAND_PAGED_SHARED_LIBRARY = 3980,

	/* category: sun */
	/* description: a.out SunOS mc68010 demand paged dynamically linked executable */
	A_OUT_SUNOS_MC68010_DEMAND_PAGED_DYNAMICALLY_LINKED_EXECUTABLE = 3981,

	/* category: sun */
	/* description: a.out SunOS mc68010 demand paged executable */
	A_OUT_SUNOS_MC68010_DEMAND_PAGED_EXECUTABLE = 3982,

	/* category: sun */
	/* description: a.out SunOS mc68010 pure */
	A_OUT_SUNOS_MC68010_PURE = 3983,

	/* category: sun */
	/* description: a.out SunOS mc68010 pure dynamically linked executable */
	A_OUT_SUNOS_MC68010_PURE_DYNAMICALLY_LINKED_EXECUTABLE = 3984,

	/* category: sun */
	/* description: a.out SunOS mc68010 pure executable */
	A_OUT_SUNOS_MC68010_PURE_EXECUTABLE = 3985,

	/* category: sun */
	/* description: a.out SunOS mc68010 */
	A_OUT_SUNOS_MC68010 = 3986,

	/* category: sun */
	/* description: a.out SunOS mc68010 dynamically linked executable */
	A_OUT_SUNOS_MC68010_DYNAMICALLY_LINKED_EXECUTABLE = 3987,

	/* category: sun */
	/* description: a.out SunOS mc68010 executable */
	A_OUT_SUNOS_MC68010_EXECUTABLE = 3988,

	/* category: sun */
	/* description: SunOS core file */
	SUNOS_CORE_FILE = 3989,

	/* category: sun */
	/* description: SunOS core file (SPARC) */
	SUNOS_CORE_FILE_SPARC = 3990,

	/* category: sun */
	/* description: SunOS core file (68K) */
	SUNOS_CORE_FILE_68K = 3991,

	/* category: sun */
	/* description: SunOS core file (SPARC 4.x BCP) */
	SUNOS_CORE_FILE_SPARC_4_X_BCP = 3992,

	/* category: sun */
	/* description: SunPC 4.0 Hard Disk */
	SUNPC_4_0_HARD_DISK = 3993,

	/* category: sun */
	/* description: SunPC 4.0 Properties Values */
	SUNPC_4_0_PROPERTIES_VALUES = 3994,

	/* category: sun */
	/* description: Snoop capture file */
	SNOOP_CAPTURE_FILE = 3995,

	/* category: sun */
	/* description: Paged COBALT boot rom */
	PAGED_COBALT_BOOT_ROM = 3996,

	/* category: sun */
	/* description: COBALT boot rom data (Flat boot rom or file system) */
	COBALT_BOOT_ROM_DATA_FLAT_BOOT_ROM_OR_FILE_SYSTEM = 3997,

	/* category: symbos */
	/* description: SymbOS executable */
	SYMBOS_EXECUTABLE = 3998,

	/* category: symbos */
	/* description: SymbOS DOX document */
	SYMBOS_DOX_DOCUMENT = 3999,

	/* category: symbos */
	/* description: SymbOS driver */
	SYMBOS_DRIVER = 4000,

	/* category: symbos */
	/* description: SymbOS video */
	SYMBOS_VIDEO = 4001,

	/* category: symbos */
	/* description: Soundtrakker 128 ST2 music, */
	SOUNDTRAKKER_128_ST2_MUSIC = 4002,

	/* category: sysex */
	/* description: SysEx File - */
	SYSEX_FILE = 4003,

	/* category: sysex */
	/* description: SysEx File - Sequential */
	SYSEX_FILE_SEQUENTIAL = 4004,

	/* category: sysex */
	/* description: SysEx File - IDP */
	SYSEX_FILE_IDP = 4005,

	/* category: sysex */
	/* description: SysEx File - OctavePlateau */
	SYSEX_FILE_OCTAVEPLATEAU = 4006,

	/* category: sysex */
	/* description: SysEx File - Moog */
	SYSEX_FILE_MOOG = 4007,

	/* category: sysex */
	/* description: SysEx File - Passport */
	SYSEX_FILE_PASSPORT = 4008,

	/* category: sysex */
	/* description: SysEx File - Lexicon */
	SYSEX_FILE_LEXICON = 4009,

	/* category: sysex */
	/* description: SysEx File - Kurzweil/Future Retro */
	SYSEX_FILE_KURZWEIL_FUTURE_RETRO = 4010,

	/* category: sysex */
	/* description: SysEx File - Fender */
	SYSEX_FILE_FENDER = 4011,

	/* category: sysex */
	/* description: SysEx File - Gulbransen */
	SYSEX_FILE_GULBRANSEN = 4012,

	/* category: sysex */
	/* description: SysEx File - AKG */
	SYSEX_FILE_AKG = 4013,

	/* category: sysex */
	/* description: SysEx File - Voyce */
	SYSEX_FILE_VOYCE = 4014,

	/* category: sysex */
	/* description: SysEx File - Waveframe */
	SYSEX_FILE_WAVEFRAME = 4015,

	/* category: sysex */
	/* description: SysEx File - ADA */
	SYSEX_FILE_ADA = 4016,

	/* category: sysex */
	/* description: SysEx File - Garfield */
	SYSEX_FILE_GARFIELD = 4017,

	/* category: sysex */
	/* description: SysEx File - Ensoniq */
	SYSEX_FILE_ENSONIQ = 4018,

	/* category: sysex */
	/* description: SysEx File - Oberheim */
	SYSEX_FILE_OBERHEIM = 4019,

	/* category: sysex */
	/* description: SysEx File - Apple */
	SYSEX_FILE_APPLE = 4020,

	/* category: sysex */
	/* description: SysEx File - GreyMatter */
	SYSEX_FILE_GREYMATTER = 4021,

	/* category: sysex */
	/* description: SysEx File - PalmTree */
	SYSEX_FILE_PALMTREE = 4022,

	/* category: sysex */
	/* description: SysEx File - JLCooper */
	SYSEX_FILE_JLCOOPER = 4023,

	/* category: sysex */
	/* description: SysEx File - Lowrey */
	SYSEX_FILE_LOWREY = 4024,

	/* category: sysex */
	/* description: SysEx File - AdamsSmith */
	SYSEX_FILE_ADAMSSMITH = 4025,

	/* category: sysex */
	/* description: SysEx File - E-mu */
	SYSEX_FILE_E_MU = 4026,

	/* category: sysex */
	/* description: SysEx File - Harmony */
	SYSEX_FILE_HARMONY = 4027,

	/* category: sysex */
	/* description: SysEx File - ART */
	SYSEX_FILE_ART = 4028,

	/* category: sysex */
	/* description: SysEx File - Baldwin */
	SYSEX_FILE_BALDWIN = 4029,

	/* category: sysex */
	/* description: SysEx File - Eventide */
	SYSEX_FILE_EVENTIDE = 4030,

	/* category: sysex */
	/* description: SysEx File - Inventronics */
	SYSEX_FILE_INVENTRONICS = 4031,

	/* category: sysex */
	/* description: SysEx File - Clarity */
	SYSEX_FILE_CLARITY = 4032,

	/* category: sysex */
	/* description: SysEx File - SIEL */
	SYSEX_FILE_SIEL = 4033,

	/* category: sysex */
	/* description: SysEx File - Synthaxe */
	SYSEX_FILE_SYNTHAXE = 4034,

	/* category: sysex */
	/* description: SysEx File - Hohner */
	SYSEX_FILE_HOHNER = 4035,

	/* category: sysex */
	/* description: SysEx File - Twister */
	SYSEX_FILE_TWISTER = 4036,

	/* category: sysex */
	/* description: SysEx File - Solton */
	SYSEX_FILE_SOLTON = 4037,

	/* category: sysex */
	/* description: SysEx File - Jellinghaus */
	SYSEX_FILE_JELLINGHAUS = 4038,

	/* category: sysex */
	/* description: SysEx File - Southworth */
	SYSEX_FILE_SOUTHWORTH = 4039,

	/* category: sysex */
	/* description: SysEx File - PPG */
	SYSEX_FILE_PPG = 4040,

	/* category: sysex */
	/* description: SysEx File - JEN */
	SYSEX_FILE_JEN = 4041,

	/* category: sysex */
	/* description: SysEx File - SSL */
	SYSEX_FILE_SSL = 4042,

	/* category: sysex */
	/* description: SysEx File - AudioVertrieb */
	SYSEX_FILE_AUDIOVERTRIEB = 4043,

	/* category: sysex */
	/* description: SysEx File - ELKA */
	SYSEX_FILE_ELKA = 4044,

	/* category: sysex */
	/* description: SysEx File - ELKA EK-44 */
	SYSEX_FILE_ELKA_EK_44 = 4045,

	/* category: sysex */
	/* description: SysEx File - Dynacord */
	SYSEX_FILE_DYNACORD = 4046,

	/* category: sysex */
	/* description: SysEx File - Jomox */
	SYSEX_FILE_JOMOX = 4047,

	/* category: sysex */
	/* description: SysEx File - Clavia */
	SYSEX_FILE_CLAVIA = 4048,

	/* category: sysex */
	/* description: SysEx File - Soundcraft */
	SYSEX_FILE_SOUNDCRAFT = 4049,

	/* category: sysex */
	/* description: SysEx File - Waldorf */
	SYSEX_FILE_WALDORF = 4050,

	/* category: sysex */
	/* description: SysEx File - Waldorf microWave */
	SYSEX_FILE_WALDORF_MICROWAVE = 4051,

	/* category: sysex */
	/* description: SysEx File - Waldorf microwave2 / XT */
	SYSEX_FILE_WALDORF_MICROWAVE2_XT = 4052,

	/* category: sysex */
	/* description: SysEx File - Waldorf Q / Q+ */
	SYSEX_FILE_WALDORF_Q_QP = 4053,

	/* category: sysex */
	/* description: SysEx File - Kawai */
	SYSEX_FILE_KAWAI = 4054,

	/* category: sysex */
	/* description: SysEx File - Kawai K1 */
	SYSEX_FILE_KAWAI_K1 = 4055,

	/* category: sysex */
	/* description: SysEx File - Kawai K4 */
	SYSEX_FILE_KAWAI_K4 = 4056,

	/* category: sysex */
	/* description: SysEx File - Roland */
	SYSEX_FILE_ROLAND = 4057,

	/* category: sysex */
	/* description: SysEx File - Roland D-50 */
	SYSEX_FILE_ROLAND_D_50 = 4058,

	/* category: sysex */
	/* description: SysEx File - Roland U-220 */
	SYSEX_FILE_ROLAND_U_220 = 4059,

	/* category: sysex */
	/* description: SysEx File - Roland TR-707 */
	SYSEX_FILE_ROLAND_TR_707 = 4060,

	/* category: sysex */
	/* description: SysEx File - Korg */
	SYSEX_FILE_KORG = 4061,

	/* category: sysex */
	/* description: SysEx File - Korg M1 */
	SYSEX_FILE_KORG_M1 = 4062,

	/* category: sysex */
	/* description: SysEx File - Yamaha */
	SYSEX_FILE_YAMAHA = 4063,

	/* category: sysex */
	/* description: SysEx File - Casio */
	SYSEX_FILE_CASIO = 4064,

	/* category: sysex */
	/* description: SysEx File - Kamiya */
	SYSEX_FILE_KAMIYA = 4065,

	/* category: sysex */
	/* description: SysEx File - Akai */
	SYSEX_FILE_AKAI = 4066,

	/* category: sysex */
	/* description: SysEx File - Victor */
	SYSEX_FILE_VICTOR = 4067,

	/* category: sysex */
	/* description: SysEx File - Mesosha */
	SYSEX_FILE_MESOSHA = 4068,

	/* category: sysex */
	/* description: SysEx File - Fujitsu */
	SYSEX_FILE_FUJITSU = 4069,

	/* category: sysex */
	/* description: SysEx File - Sony */
	SYSEX_FILE_SONY = 4070,

	/* category: sysex */
	/* description: SysEx File - Teac */
	SYSEX_FILE_TEAC = 4071,

	/* category: sysex */
	/* description: SysEx File - Matsushita */
	SYSEX_FILE_MATSUSHITA = 4072,

	/* category: sysex */
	/* description: SysEx File - Fostex */
	SYSEX_FILE_FOSTEX = 4073,

	/* category: sysex */
	/* description: SysEx File - Zoom */
	SYSEX_FILE_ZOOM = 4074,

	/* category: sysex */
	/* description: SysEx File - Acoustic tech. lab. */
	SYSEX_FILE_ACOUSTIC_TECH_LAB = 4075,

	/* category: sysex */
	/* description: Roland TR-707 Data */
	ROLAND_TR_707_DATA = 4076,

	/* category: tcl */
	/* description: Tcl script text executable */
	TCL_SCRIPT_TEXT_EXECUTABLE = 4077,

	/* category: tcl */
	/* description: Tcl/Tk script text executable */
	TCL_TK_SCRIPT_TEXT_EXECUTABLE = 4078,

	/* category: tcl */
	/* description: Tcl script */
	TCL_SCRIPT = 4079,

	/* category: teapot */
	/* description: teapot work sheet (XDR format) */
	TEAPOT_WORK_SHEET_XDR_FORMAT = 4080,

	/* category: terminfo */
	/* description: Compiled terminfo entry "%-s" */
	COMPILED_TERMINFO_ENTRY_SS = 4081,

	/* category: terminfo */
	/* description: Compiled 32-bit terminfo entry "%-s" */
	COMPILED_32_BIT_TERMINFO_ENTRY_SS = 4082,

	/* category: terminfo */
	/* description: SVr2 curses screen image, big-endian */
	SVR2_CURSES_SCREEN_IMAGE_BIG_ENDIAN = 4083,

	/* category: terminfo */
	/* description: SVr3 curses screen image, big-endian */
	SVR3_CURSES_SCREEN_IMAGE_BIG_ENDIAN = 4084,

	/* category: terminfo */
	/* description: SVr4 curses screen image, big-endian */
	SVR4_CURSES_SCREEN_IMAGE_BIG_ENDIAN = 4085,

	/* category: terminfo */
	/* description: SVr2 curses screen image, little-endian */
	SVR2_CURSES_SCREEN_IMAGE_LITTLE_ENDIAN = 4086,

	/* category: terminfo */
	/* description: SVr3 curses screen image, little-endian */
	SVR3_CURSES_SCREEN_IMAGE_LITTLE_ENDIAN = 4087,

	/* category: terminfo */
	/* description: SVr4 curses screen image, little-endian */
	SVR4_CURSES_SCREEN_IMAGE_LITTLE_ENDIAN = 4088,

	/* category: terminfo */
	/* description: Solaris xcurses screen image */
	SOLARIS_XCURSES_SCREEN_IMAGE = 4089,

	/* category: terminfo */
	/* description: ncurses6 screen image */
	NCURSES6_SCREEN_IMAGE = 4090,

	/* category: terminfo */
	/* description: PDCurses screen image */
	PDCURSES_SCREEN_IMAGE = 4091,

	/* category: tex */
	/* description: TeX DVI file */
	TEX_DVI_FILE = 4092,

	/* category: tex */
	/* description: TeX generic font data */
	TEX_GENERIC_FONT_DATA = 4093,

	/* category: tex */
	/* description: TeX packed font data */
	TEX_PACKED_FONT_DATA = 4094,

	/* category: tex */
	/* description: TeX virtual font data */
	TEX_VIRTUAL_FONT_DATA = 4095,

	/* category: tex */
	/* description: TeX transcript text */
	TEX_TRANSCRIPT_TEXT = 4096,

	/* category: tex */
	/* description: METAFONT transcript text */
	METAFONT_TRANSCRIPT_TEXT = 4097,

	/* category: tex */
	/* description: TeX font metric data */
	TEX_FONT_METRIC_DATA = 4098,

	/* category: tex */
	/* description: Texinfo source text */
	TEXINFO_SOURCE_TEXT = 4099,

	/* category: tex */
	/* description: GNU Info text */
	GNU_INFO_TEXT = 4100,

	/* category: tex */
	/* description: TeX document text */
	TEX_DOCUMENT_TEXT = 4101,

	/* category: tex */
	/* description: LaTeX document text */
	LATEX_DOCUMENT_TEXT = 4102,

	/* category: tex */
	/* description: LaTeX 2e document text */
	LATEX_2E_DOCUMENT_TEXT = 4103,

	/* category: tex */
	/* description: LaTeX auxiliary file */
	LATEX_AUXILIARY_FILE = 4104,

	/* category: tex */
	/* description: LaTeX table of contents */
	LATEX_TABLE_OF_CONTENTS = 4105,

	/* category: tex */
	/* description: LaTeX raw index file */
	LATEX_RAW_INDEX_FILE = 4106,

	/* category: tex */
	/* description: LaTeX sorted index */
	LATEX_SORTED_INDEX = 4107,

	/* category: tex */
	/* description: LaTeX raw glossary */
	LATEX_RAW_GLOSSARY = 4108,

	/* category: tex */
	/* description: LaTeX sorted glossary */
	LATEX_SORTED_GLOSSARY = 4109,

	/* category: tex */
	/* description: Makeindex log file */
	MAKEINDEX_LOG_FILE = 4110,

	/* category: tex */
	/* description: BibTeX text file */
	BIBTEX_TEXT_FILE = 4111,

	/* category: tex */
	/* description: BibTeX-file{ BibTex text file (with full header) */
	BIBTEX_FILE_BIBTEX_TEXT_FILE_WITH_FULL_HEADER = 4112,

	/* category: tex */
	/* description: BibTeX style text file (with full header) */
	BIBTEX_STYLE_TEXT_FILE_WITH_FULL_HEADER = 4113,

	/* category: tex */
	/* description: BibTeX standard bibliography style text file */
	BIBTEX_STANDARD_BIBLIOGRAPHY_STYLE_TEXT_FILE = 4114,

	/* category: tex */
	/* description: BibTeX custom bibliography style text file */
	BIBTEX_CUSTOM_BIBLIOGRAPHY_STYLE_TEXT_FILE = 4115,

	/* category: tex */
	/* description: TeX font aliases text file */
	TEX_FONT_ALIASES_TEXT_FILE = 4116,

	/* category: tex */
	/* description: LyX document text */
	LYX_DOCUMENT_TEXT = 4117,

	/* category: tex */
	/* description: ConTeXt document text */
	CONTEXT_DOCUMENT_TEXT = 4118,

	/* category: tgif */
	/* description: Tgif file version */
	TGIF_FILE_VERSION = 4119,

	/* category: ti-8x */
	/* description: TI-80 Graphing Calculator File. */
	TI_80_GRAPHING_CALCULATOR_FILE = 4120,

	/* category: ti-8x */
	/* description: TI-81 Graphing Calculator File. */
	TI_81_GRAPHING_CALCULATOR_FILE = 4121,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator */
	TI_73_GRAPHING_CALCULATOR = 4122,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (real number) */
	TI_73_GRAPHING_CALCULATOR_REAL_NUMBER = 4123,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (list) */
	TI_73_GRAPHING_CALCULATOR_LIST = 4124,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (matrix) */
	TI_73_GRAPHING_CALCULATOR_MATRIX = 4125,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (equation) */
	TI_73_GRAPHING_CALCULATOR_EQUATION = 4126,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (string) */
	TI_73_GRAPHING_CALCULATOR_STRING = 4127,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (program) */
	TI_73_GRAPHING_CALCULATOR_PROGRAM = 4128,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (assembly program) */
	TI_73_GRAPHING_CALCULATOR_ASSEMBLY_PROGRAM = 4129,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (picture) */
	TI_73_GRAPHING_CALCULATOR_PICTURE = 4130,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (gdb) */
	TI_73_GRAPHING_CALCULATOR_GDB = 4131,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (complex number) */
	TI_73_GRAPHING_CALCULATOR_COMPLEX_NUMBER = 4132,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (window settings) */
	TI_73_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4133,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (zoom) */
	TI_73_GRAPHING_CALCULATOR_ZOOM = 4134,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (table setup) */
	TI_73_GRAPHING_CALCULATOR_TABLE_SETUP = 4135,

	/* category: ti-8x */
	/* description: TI-73 Graphing Calculator (backup) */
	TI_73_GRAPHING_CALCULATOR_BACKUP = 4136,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator */
	TI_82_GRAPHING_CALCULATOR = 4137,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (real) */
	TI_82_GRAPHING_CALCULATOR_REAL = 4138,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (list) */
	TI_82_GRAPHING_CALCULATOR_LIST = 4139,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (matrix) */
	TI_82_GRAPHING_CALCULATOR_MATRIX = 4140,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (Y-variable) */
	TI_82_GRAPHING_CALCULATOR_Y_VARIABLE = 4141,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (program) */
	TI_82_GRAPHING_CALCULATOR_PROGRAM = 4142,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (protected prgm) */
	TI_82_GRAPHING_CALCULATOR_PROTECTED_PRGM = 4143,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (picture) */
	TI_82_GRAPHING_CALCULATOR_PICTURE = 4144,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (gdb) */
	TI_82_GRAPHING_CALCULATOR_GDB = 4145,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (window settings) */
	TI_82_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4146,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (table setup) */
	TI_82_GRAPHING_CALCULATOR_TABLE_SETUP = 4147,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (screenshot) */
	TI_82_GRAPHING_CALCULATOR_SCREENSHOT = 4148,

	/* category: ti-8x */
	/* description: TI-82 Graphing Calculator (backup) */
	TI_82_GRAPHING_CALCULATOR_BACKUP = 4149,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator */
	TI_83_GRAPHING_CALCULATOR = 4150,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (real) */
	TI_83_GRAPHING_CALCULATOR_REAL = 4151,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (list) */
	TI_83_GRAPHING_CALCULATOR_LIST = 4152,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (matrix) */
	TI_83_GRAPHING_CALCULATOR_MATRIX = 4153,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (Y-variable) */
	TI_83_GRAPHING_CALCULATOR_Y_VARIABLE = 4154,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (string) */
	TI_83_GRAPHING_CALCULATOR_STRING = 4155,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (program) */
	TI_83_GRAPHING_CALCULATOR_PROGRAM = 4156,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (protected prgm) */
	TI_83_GRAPHING_CALCULATOR_PROTECTED_PRGM = 4157,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (picture) */
	TI_83_GRAPHING_CALCULATOR_PICTURE = 4158,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (gdb) */
	TI_83_GRAPHING_CALCULATOR_GDB = 4159,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (window settings) */
	TI_83_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4160,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (table setup) */
	TI_83_GRAPHING_CALCULATOR_TABLE_SETUP = 4161,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (screenshot) */
	TI_83_GRAPHING_CALCULATOR_SCREENSHOT = 4162,

	/* category: ti-8x */
	/* description: TI-83 Graphing Calculator (backup) */
	TI_83_GRAPHING_CALCULATOR_BACKUP = 4163,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator */
	TI_83P_GRAPHING_CALCULATOR = 4164,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (real number) */
	TI_83P_GRAPHING_CALCULATOR_REAL_NUMBER = 4165,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (list) */
	TI_83P_GRAPHING_CALCULATOR_LIST = 4166,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (matrix) */
	TI_83P_GRAPHING_CALCULATOR_MATRIX = 4167,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (equation) */
	TI_83P_GRAPHING_CALCULATOR_EQUATION = 4168,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (string) */
	TI_83P_GRAPHING_CALCULATOR_STRING = 4169,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (program) */
	TI_83P_GRAPHING_CALCULATOR_PROGRAM = 4170,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (assembly program) */
	TI_83P_GRAPHING_CALCULATOR_ASSEMBLY_PROGRAM = 4171,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (picture) */
	TI_83P_GRAPHING_CALCULATOR_PICTURE = 4172,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (gdb) */
	TI_83P_GRAPHING_CALCULATOR_GDB = 4173,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (complex number) */
	TI_83P_GRAPHING_CALCULATOR_COMPLEX_NUMBER = 4174,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (window settings) */
	TI_83P_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4175,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (zoom) */
	TI_83P_GRAPHING_CALCULATOR_ZOOM = 4176,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (table setup) */
	TI_83P_GRAPHING_CALCULATOR_TABLE_SETUP = 4177,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (backup) */
	TI_83P_GRAPHING_CALCULATOR_BACKUP = 4178,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (application variable) */
	TI_83P_GRAPHING_CALCULATOR_APPLICATION_VARIABLE = 4179,

	/* category: ti-8x */
	/* description: TI-83+ Graphing Calculator (group of variable) */
	TI_83P_GRAPHING_CALCULATOR_GROUP_OF_VARIABLE = 4180,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator */
	TI_85_GRAPHING_CALCULATOR = 4181,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (real number) */
	TI_85_GRAPHING_CALCULATOR_REAL_NUMBER = 4182,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (complex number) */
	TI_85_GRAPHING_CALCULATOR_COMPLEX_NUMBER = 4183,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (real vector) */
	TI_85_GRAPHING_CALCULATOR_REAL_VECTOR = 4184,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (complex vector) */
	TI_85_GRAPHING_CALCULATOR_COMPLEX_VECTOR = 4185,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (real list) */
	TI_85_GRAPHING_CALCULATOR_REAL_LIST = 4186,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (complex list) */
	TI_85_GRAPHING_CALCULATOR_COMPLEX_LIST = 4187,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (real matrix) */
	TI_85_GRAPHING_CALCULATOR_REAL_MATRIX = 4188,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (complex matrix) */
	TI_85_GRAPHING_CALCULATOR_COMPLEX_MATRIX = 4189,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (real constant) */
	TI_85_GRAPHING_CALCULATOR_REAL_CONSTANT = 4190,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (complex constant) */
	TI_85_GRAPHING_CALCULATOR_COMPLEX_CONSTANT = 4191,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (equation) */
	TI_85_GRAPHING_CALCULATOR_EQUATION = 4192,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (string) */
	TI_85_GRAPHING_CALCULATOR_STRING = 4193,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (function GDB) */
	TI_85_GRAPHING_CALCULATOR_FUNCTION_GDB = 4194,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (polar GDB) */
	TI_85_GRAPHING_CALCULATOR_POLAR_GDB = 4195,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (parametric GDB) */
	TI_85_GRAPHING_CALCULATOR_PARAMETRIC_GDB = 4196,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (diffeq GDB) */
	TI_85_GRAPHING_CALCULATOR_DIFFEQ_GDB = 4197,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (picture) */
	TI_85_GRAPHING_CALCULATOR_PICTURE = 4198,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (program) */
	TI_85_GRAPHING_CALCULATOR_PROGRAM = 4199,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (range) */
	TI_85_GRAPHING_CALCULATOR_RANGE = 4200,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (window settings) */
	TI_85_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4201,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (zoom) */
	TI_85_GRAPHING_CALCULATOR_ZOOM = 4202,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (backup) */
	TI_85_GRAPHING_CALCULATOR_BACKUP = 4203,

	/* category: ti-8x */
	/* description: TI-85 Graphing Calculator (unknown) */
	TI_85_GRAPHING_CALCULATOR_UNKNOWN = 4204,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator */
	TI_86_GRAPHING_CALCULATOR = 4205,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (real number) */
	TI_86_GRAPHING_CALCULATOR_REAL_NUMBER = 4206,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (complex number) */
	TI_86_GRAPHING_CALCULATOR_COMPLEX_NUMBER = 4207,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (real vector) */
	TI_86_GRAPHING_CALCULATOR_REAL_VECTOR = 4208,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (complex vector) */
	TI_86_GRAPHING_CALCULATOR_COMPLEX_VECTOR = 4209,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (real list) */
	TI_86_GRAPHING_CALCULATOR_REAL_LIST = 4210,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (complex list) */
	TI_86_GRAPHING_CALCULATOR_COMPLEX_LIST = 4211,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (real matrix) */
	TI_86_GRAPHING_CALCULATOR_REAL_MATRIX = 4212,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (complex matrix) */
	TI_86_GRAPHING_CALCULATOR_COMPLEX_MATRIX = 4213,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (real constant) */
	TI_86_GRAPHING_CALCULATOR_REAL_CONSTANT = 4214,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (complex constant) */
	TI_86_GRAPHING_CALCULATOR_COMPLEX_CONSTANT = 4215,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (equation) */
	TI_86_GRAPHING_CALCULATOR_EQUATION = 4216,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (string) */
	TI_86_GRAPHING_CALCULATOR_STRING = 4217,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (function GDB) */
	TI_86_GRAPHING_CALCULATOR_FUNCTION_GDB = 4218,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (polar GDB) */
	TI_86_GRAPHING_CALCULATOR_POLAR_GDB = 4219,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (parametric GDB) */
	TI_86_GRAPHING_CALCULATOR_PARAMETRIC_GDB = 4220,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (diffeq GDB) */
	TI_86_GRAPHING_CALCULATOR_DIFFEQ_GDB = 4221,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (picture) */
	TI_86_GRAPHING_CALCULATOR_PICTURE = 4222,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (program) */
	TI_86_GRAPHING_CALCULATOR_PROGRAM = 4223,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (range) */
	TI_86_GRAPHING_CALCULATOR_RANGE = 4224,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (window settings) */
	TI_86_GRAPHING_CALCULATOR_WINDOW_SETTINGS = 4225,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (zoom) */
	TI_86_GRAPHING_CALCULATOR_ZOOM = 4226,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (backup) */
	TI_86_GRAPHING_CALCULATOR_BACKUP = 4227,

	/* category: ti-8x */
	/* description: TI-86 Graphing Calculator (unknown) */
	TI_86_GRAPHING_CALCULATOR_UNKNOWN = 4228,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator */
	TI_89_GRAPHING_CALCULATOR = 4229,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (expression) */
	TI_89_GRAPHING_CALCULATOR_EXPRESSION = 4230,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (list) */
	TI_89_GRAPHING_CALCULATOR_LIST = 4231,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (matrix) */
	TI_89_GRAPHING_CALCULATOR_MATRIX = 4232,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (data) */
	TI_89_GRAPHING_CALCULATOR_DATA = 4233,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (text) */
	TI_89_GRAPHING_CALCULATOR_TEXT = 4234,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (string) */
	TI_89_GRAPHING_CALCULATOR_STRING = 4235,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (graphic data base) */
	TI_89_GRAPHING_CALCULATOR_GRAPHIC_DATA_BASE = 4236,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (figure) */
	TI_89_GRAPHING_CALCULATOR_FIGURE = 4237,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (picture) */
	TI_89_GRAPHING_CALCULATOR_PICTURE = 4238,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (program) */
	TI_89_GRAPHING_CALCULATOR_PROGRAM = 4239,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (function) */
	TI_89_GRAPHING_CALCULATOR_FUNCTION = 4240,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (macro) */
	TI_89_GRAPHING_CALCULATOR_MACRO = 4241,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (zipped) */
	TI_89_GRAPHING_CALCULATOR_ZIPPED = 4242,

	/* category: ti-8x */
	/* description: TI-89 Graphing Calculator (assembler) */
	TI_89_GRAPHING_CALCULATOR_ASSEMBLER = 4243,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator */
	TI_92_GRAPHING_CALCULATOR = 4244,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (expression) */
	TI_92_GRAPHING_CALCULATOR_EXPRESSION = 4245,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (list) */
	TI_92_GRAPHING_CALCULATOR_LIST = 4246,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (matrix) */
	TI_92_GRAPHING_CALCULATOR_MATRIX = 4247,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (data) */
	TI_92_GRAPHING_CALCULATOR_DATA = 4248,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (text) */
	TI_92_GRAPHING_CALCULATOR_TEXT = 4249,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (string) */
	TI_92_GRAPHING_CALCULATOR_STRING = 4250,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (graphic data base) */
	TI_92_GRAPHING_CALCULATOR_GRAPHIC_DATA_BASE = 4251,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (figure) */
	TI_92_GRAPHING_CALCULATOR_FIGURE = 4252,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (picture) */
	TI_92_GRAPHING_CALCULATOR_PICTURE = 4253,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (program) */
	TI_92_GRAPHING_CALCULATOR_PROGRAM = 4254,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (function) */
	TI_92_GRAPHING_CALCULATOR_FUNCTION = 4255,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (macro) */
	TI_92_GRAPHING_CALCULATOR_MACRO = 4256,

	/* category: ti-8x */
	/* description: TI-92 Graphing Calculator (backup) */
	TI_92_GRAPHING_CALCULATOR_BACKUP = 4257,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator */
	TI_92P_V200_GRAPHING_CALCULATOR = 4258,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (expression) */
	TI_92P_V200_GRAPHING_CALCULATOR_EXPRESSION = 4259,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (list) */
	TI_92P_V200_GRAPHING_CALCULATOR_LIST = 4260,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (matrix) */
	TI_92P_V200_GRAPHING_CALCULATOR_MATRIX = 4261,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (data) */
	TI_92P_V200_GRAPHING_CALCULATOR_DATA = 4262,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (text) */
	TI_92P_V200_GRAPHING_CALCULATOR_TEXT = 4263,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (string) */
	TI_92P_V200_GRAPHING_CALCULATOR_STRING = 4264,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (graphic data base) */
	TI_92P_V200_GRAPHING_CALCULATOR_GRAPHIC_DATA_BASE = 4265,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (figure) */
	TI_92P_V200_GRAPHING_CALCULATOR_FIGURE = 4266,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (picture) */
	TI_92P_V200_GRAPHING_CALCULATOR_PICTURE = 4267,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (program) */
	TI_92P_V200_GRAPHING_CALCULATOR_PROGRAM = 4268,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (function) */
	TI_92P_V200_GRAPHING_CALCULATOR_FUNCTION = 4269,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (macro) */
	TI_92P_V200_GRAPHING_CALCULATOR_MACRO = 4270,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (zipped) */
	TI_92P_V200_GRAPHING_CALCULATOR_ZIPPED = 4271,

	/* category: ti-8x */
	/* description: TI-92+/V200 Graphing Calculator (assembler) */
	TI_92P_V200_GRAPHING_CALCULATOR_ASSEMBLER = 4272,

	/* category: ti-8x */
	/* description: TI-XX Graphing Calculator (FLASH) */
	TI_XX_GRAPHING_CALCULATOR_FLASH = 4273,

	/* category: ti-8x */
	/* description: Virtual TI skin */
	VIRTUAL_TI_SKIN = 4274,

	/* category: ti-8x */
	/* description: Virtual TI skin - Version */
	VIRTUAL_TI_SKIN_VERSION = 4275,

	/* category: ti-8x */
	/* description: TiEmu skin */
	TIEMU_SKIN = 4276,

	/* category: ti-8x */
	/* description: TiEmu skin - Version */
	TIEMU_SKIN_VERSION = 4277,

	/* category: timezone */
	/* description: timezone data */
	TIMEZONE_DATA = 4278,

	/* category: timezone */
	/* description: timezone data, old version */
	TIMEZONE_DATA_OLD_VERSION = 4279,

	/* category: timezone */
	/* description: old timezone data */
	OLD_TIMEZONE_DATA = 4280,

	/* category: tplink */
	/* description: firmware */
	FIRMWARE = 4281,

	/* category: troff */
	/* description: troff or preprocessor input text */
	TROFF_OR_PREPROCESSOR_INPUT_TEXT = 4282,

	/* category: troff */
	/* description: ditroff output text */
	DITROFF_OUTPUT_TEXT = 4283,

	/* category: troff */
	/* description: ditroff output text for the C/A/T phototypesetter */
	DITROFF_OUTPUT_TEXT_FOR_THE_C_A_T_PHOTOTYPESETTER = 4284,

	/* category: troff */
	/* description: ditroff output text for PostScript */
	DITROFF_OUTPUT_TEXT_FOR_POSTSCRIPT = 4285,

	/* category: troff */
	/* description: ditroff output text for DVI */
	DITROFF_OUTPUT_TEXT_FOR_DVI = 4286,

	/* category: troff */
	/* description: ditroff output text for ASCII */
	DITROFF_OUTPUT_TEXT_FOR_ASCII = 4287,

	/* category: troff */
	/* description: ditroff output text for LaserJet 4 */
	DITROFF_OUTPUT_TEXT_FOR_LASERJET_4 = 4288,

	/* category: troff */
	/* description: ditroff output text for ISO 8859-1 (Latin 1) */
	DITROFF_OUTPUT_TEXT_FOR_ISO_8859_1_LATIN_1 = 4289,

	/* category: troff */
	/* description: ditroff output text for xditview at 75dpi */
	DITROFF_OUTPUT_TEXT_FOR_XDITVIEW_AT_75DPI = 4290,

	/* category: troff */
	/* description: ditroff output text for xditview at 75dpi (12pt) */
	DITROFF_OUTPUT_TEXT_FOR_XDITVIEW_AT_75DPI_12PT = 4291,

	/* category: troff */
	/* description: ditroff output text for xditview at 100dpi */
	DITROFF_OUTPUT_TEXT_FOR_XDITVIEW_AT_100DPI = 4292,

	/* category: troff */
	/* description: ditroff output text for xditview at 100dpi (12pt) */
	DITROFF_OUTPUT_TEXT_FOR_XDITVIEW_AT_100DPI_12PT = 4293,

	/* category: troff */
	/* description: very old (C/A/T) troff output data */
	VERY_OLD_C_A_T_TROFF_OUTPUT_DATA = 4294,

	/* category: tuxedo */
	/* description: BEA TUXEDO DES mask data */
	BEA_TUXEDO_DES_MASK_DATA = 4295,

	/* category: typeset */
	/* description: Xerox InterPress data */
	XEROX_INTERPRESS_DATA = 4296,

	/* category: typeset */
	/* description: Xerox InterPress data (version */
	XEROX_INTERPRESS_DATA_VERSION = 4297,

	/* category: unicode */
	/* description: Unicode text, UTF-7 */
	UNICODE_TEXT_UTF_7 = 4298,

	/* category: unicode */
	/* description: Unicode text, UTF-8-EBCDIC */
	UNICODE_TEXT_UTF_8_EBCDIC = 4299,

	/* category: unicode */
	/* description: Unicode text, UTF-32, big-endian */
	UNICODE_TEXT_UTF_32_BIG_ENDIAN = 4300,

	/* category: unicode */
	/* description: Unicode text, UTF-32, little-endian */
	UNICODE_TEXT_UTF_32_LITTLE_ENDIAN = 4301,

	/* category: unicode */
	/* description: Unicode text, SCSU (Standard Compression Scheme for Unicode) */
	UNICODE_TEXT_SCSU_STANDARD_COMPRESSION_SCHEME_FOR_UNICODE = 4302,

	/* category: unknown */
	/* description: unknown demand paged pure executable */
	UNKNOWN_DEMAND_PAGED_PURE_EXECUTABLE = 4303,

	/* category: unknown */
	/* description: unknown demand paged pure executable not stripped */
	UNKNOWN_DEMAND_PAGED_PURE_EXECUTABLE_NOT_STRIPPED = 4304,

	/* category: unknown */
	/* description: unknown readable demand paged pure executable */
	UNKNOWN_READABLE_DEMAND_PAGED_PURE_EXECUTABLE = 4305,

	/* category: uterus */
	/* description: uterus file */
	UTERUS_FILE = 4306,

	/* category: uuencode */
	/* description: uuencoded or xxencoded text */
	UUENCODED_OR_XXENCODED_TEXT = 4307,

	/* category: uuencode */
	/* description: btoa'd text */
	BTOA_D_TEXT = 4308,

	/* category: uuencode */
	/* description: ship'd binary text */
	SHIP_D_BINARY_TEXT = 4309,

	/* category: uuencode */
	/* description: bencoded News text */
	BENCODED_NEWS_TEXT = 4310,

	/* category: vacuum-cleaner */
	/* description: LG robot VR6[234]xx %dm^2 navigation */
	LG_ROBOT_VR6_234_XX_DDM_2_NAVIGATION = 4311,

	/* category: vacuum-cleaner */
	/* description: LG robot VR6[234]xx %dm^2 navigation reuse map data */
	LG_ROBOT_VR6_234_XX_DDM_2_NAVIGATION_REUSE_MAP_DATA = 4312,

	/* category: vacuum-cleaner */
	/* description: LG robot VR6[234]xx %dm^2 navigation map data */
	LG_ROBOT_VR6_234_XX_DDM_2_NAVIGATION_MAP_DATA = 4313,

	/* category: vacuum-cleaner */
	/* description: LG robot VR6[234]xx %dm^2 navigation spurious map data */
	LG_ROBOT_VR6_234_XX_DDM_2_NAVIGATION_SPURIOUS_MAP_DATA = 4314,

	/* category: varied.out */
	/* description: Perkin-Elmer executable */
	PERKIN_ELMER_EXECUTABLE = 4315,

	/* category: varied.out */
	/* description: amd 29k coff noprebar executable */
	AMD_29K_COFF_NOPREBAR_EXECUTABLE = 4316,

	/* category: varied.out */
	/* description: amd 29k coff prebar executable */
	AMD_29K_COFF_PREBAR_EXECUTABLE = 4317,

	/* category: varied.out */
	/* description: amd 29k coff archive */
	AMD_29K_COFF_ARCHIVE = 4318,

	/* category: varied.out */
	/* description: unicos (cray) executable */
	UNICOS_CRAY_EXECUTABLE = 4319,

	/* category: varied.out */
	/* description: Ultrix core file */
	ULTRIX_CORE_FILE = 4320,

	/* category: varied.out */
	/* description: header for PowerPC PEF executable */
	HEADER_FOR_POWERPC_PEF_EXECUTABLE = 4321,

	/* category: varied.out */
	/* description: AVR assembler object code */
	AVR_ASSEMBLER_OBJECT_CODE = 4322,

	/* category: varied.out */
	/* description: GNU prof performance data */
	GNU_PROF_PERFORMANCE_DATA = 4323,

	/* category: varied.out */
	/* description: Harbour HRB file */
	HARBOUR_HRB_FILE = 4324,

	/* category: varied.out */
	/* description: Harbour variable dump file */
	HARBOUR_VARIABLE_DUMP_FILE = 4325,

	/* category: varied.out */
	/* description: ST40 component image format */
	ST40_COMPONENT_IMAGE_FORMAT = 4326,

	/* category: varied.script */
	/* description: a %s script text executable */
	A_SS_SCRIPT_TEXT_EXECUTABLE = 4327,

	/* category: varied.script */
	/* description: a %s script executable (binary data) */
	A_SS_SCRIPT_EXECUTABLE_BINARY_DATA = 4328,

	/* category: varied.script */
	/* description: script text executable */
	SCRIPT_TEXT_EXECUTABLE = 4329,

	/* category: varied.script */
	/* description: script executable */
	SCRIPT_EXECUTABLE = 4330,

	/* category: varied.script */
	/* description: script executable for %s (binary data) */
	SCRIPT_EXECUTABLE_FOR_SS_BINARY_DATA = 4331,

	/* category: varied.script */
	/* description: XPConnect Typelib */
	XPCONNECT_TYPELIB = 4332,

	/* category: vax */
	/* description: VAX single precision APL workspace */
	VAX_SINGLE_PRECISION_APL_WORKSPACE = 4333,

	/* category: vax */
	/* description: VAX double precision APL workspace */
	VAX_DOUBLE_PRECISION_APL_WORKSPACE = 4334,

	/* category: vax */
	/* description: a.out VAX demand paged (first page unmapped) pure executable */
	A_OUT_VAX_DEMAND_PAGED_FIRST_PAGE_UNMAPPED_PURE_EXECUTABLE = 4335,

	/* category: vax */
	/* description: a.out VAX demand paged (first page unmapped) pure executable not stripped */
	A_OUT_VAX_DEMAND_PAGED_FIRST_PAGE_UNMAPPED_PURE_EXECUTABLE_NOT_STRIPPED = 4336,

	/* category: vax */
	/* description: VAX COFF executable */
	VAX_COFF_EXECUTABLE = 4337,

	/* category: vax */
	/* description: VAX COFF pure executable */
	VAX_COFF_PURE_EXECUTABLE = 4338,

	/* category: vicar */
	/* description: VICAR image data */
	VICAR_IMAGE_DATA = 4339,

	/* category: vicar */
	/* description: VICAR image data, 8 bits  = VAX byte */
	VICAR_IMAGE_DATA_8_BITS_VAX_BYTE = 4340,

	/* category: vicar */
	/* description: VICAR image data, 16 bits = VAX word     = Fortran INTEGER*2 */
	VICAR_IMAGE_DATA_16_BITS_VAX_WORD_FORTRAN_INTEGER_2 = 4341,

	/* category: vicar */
	/* description: VICAR image data, 32 bits = VAX longword = Fortran INTEGER*4 */
	VICAR_IMAGE_DATA_32_BITS_VAX_LONGWORD_FORTRAN_INTEGER_4 = 4342,

	/* category: vicar */
	/* description: VICAR image data, 32 bits = VAX longword = Fortran REAL*4 */
	VICAR_IMAGE_DATA_32_BITS_VAX_LONGWORD_FORTRAN_REAL_4 = 4343,

	/* category: vicar */
	/* description: VICAR image data, 64 bits = VAX quadword = Fortran REAL*8 */
	VICAR_IMAGE_DATA_64_BITS_VAX_QUADWORD_FORTRAN_REAL_8 = 4344,

	/* category: vicar */
	/* description: VICAR image data, 64 bits = VAX quadword = Fortran COMPLEX*8 */
	VICAR_IMAGE_DATA_64_BITS_VAX_QUADWORD_FORTRAN_COMPLEX_8 = 4345,

	/* category: vicar */
	/* description: VICAR label file */
	VICAR_LABEL_FILE = 4346,

	/* category: virtual */
	/* description: Microsoft Disk Image, Virtual Server or Virtual PC */
	MICROSOFT_DISK_IMAGE_VIRTUAL_SERVER_OR_VIRTUAL_PC = 4347,

	/* category: virtual */
	/* description: Microsoft Disk Image eXtended */
	MICROSOFT_DISK_IMAGE_EXTENDED = 4348,

	/* category: virtual */
	/* description: Libvirt QEMU Suspend Image */
	LIBVIRT_QEMU_SUSPEND_IMAGE = 4349,

	/* category: virtual */
	/* description: Libvirt QEMU partial Suspend Image */
	LIBVIRT_QEMU_PARTIAL_SUSPEND_IMAGE = 4350,

	/* category: virtual */
	/* description: VMWare3 */
	VMWARE3 = 4351,

	/* category: virtual */
	/* description: VMWare3 disk image */
	VMWARE3_DISK_IMAGE = 4352,

	/* category: virtual */
	/* description: VMWare3 undoable disk image */
	VMWARE3_UNDOABLE_DISK_IMAGE = 4353,

	/* category: virtual */
	/* description: VMware4 disk image */
	VMWARE4_DISK_IMAGE = 4354,

	/* category: virtual */
	/* description: QEMU QCOW2 Image */
	QEMU_QCOW2_IMAGE = 4355,

	/* category: virtual */
	/* description: QEMU QCOW2 Image (v1) */
	QEMU_QCOW2_IMAGE_V1 = 4356,

	/* category: virtual */
	/* description: QEMU QCOW2 Image (v2) */
	QEMU_QCOW2_IMAGE_V2 = 4357,

	/* category: virtual */
	/* description: QEMU QCOW2 Image (v3) */
	QEMU_QCOW2_IMAGE_V3 = 4358,

	/* category: virtual */
	/* description: QEMU QCOW2 Image (unknown version) */
	QEMU_QCOW2_IMAGE_UNKNOWN_VERSION = 4359,

	/* category: virtual */
	/* description: QEMU suspend to disk image */
	QEMU_SUSPEND_TO_DISK_IMAGE = 4360,

	/* category: virtual */
	/* description: QEMU QED Image */
	QEMU_QED_IMAGE = 4361,

	/* category: virtual */
	/* description: VirtualBox Disk Image */
	VIRTUALBOX_DISK_IMAGE = 4362,

	/* category: virtual */
	/* description: Bochs disk image, */
	BOCHS_DISK_IMAGE = 4363,

	/* category: virtual */
	/* description: Bochs Sparse disk image */
	BOCHS_SPARSE_DISK_IMAGE = 4364,

	/* category: virtutech */
	/* description: Virtutech CRAFF */
	VIRTUTECH_CRAFF = 4365,

	/* category: virtutech */
	/* description: Virtutech CRAFF uncompressed */
	VIRTUTECH_CRAFF_UNCOMPRESSED = 4366,

	/* category: virtutech */
	/* description: Virtutech CRAFF bzipp2ed */
	VIRTUTECH_CRAFF_BZIPP2ED = 4367,

	/* category: virtutech */
	/* description: Virtutech CRAFF gzipped */
	VIRTUTECH_CRAFF_GZIPPED = 4368,

	/* category: visx */
	/* description: VISX image file */
	VISX_IMAGE_FILE = 4369,

	/* category: visx */
	/* description: VISX image file (zero) */
	VISX_IMAGE_FILE_ZERO = 4370,

	/* category: visx */
	/* description: VISX image file (unsigned char) */
	VISX_IMAGE_FILE_UNSIGNED_CHAR = 4371,

	/* category: visx */
	/* description: VISX image file (short integer) */
	VISX_IMAGE_FILE_SHORT_INTEGER = 4372,

	/* category: visx */
	/* description: VISX image file (float 32) */
	VISX_IMAGE_FILE_FLOAT_32 = 4373,

	/* category: visx */
	/* description: VISX image file (float 64) */
	VISX_IMAGE_FILE_FLOAT_64 = 4374,

	/* category: visx */
	/* description: VISX image file (signed char) */
	VISX_IMAGE_FILE_SIGNED_CHAR = 4375,

	/* category: visx */
	/* description: VISX image file (bit-plane) */
	VISX_IMAGE_FILE_BIT_PLANE = 4376,

	/* category: visx */
	/* description: VISX image file (classes) */
	VISX_IMAGE_FILE_CLASSES = 4377,

	/* category: visx */
	/* description: VISX image file (statistics) */
	VISX_IMAGE_FILE_STATISTICS = 4378,

	/* category: visx */
	/* description: VISX image file (ascii text) */
	VISX_IMAGE_FILE_ASCII_TEXT = 4379,

	/* category: visx */
	/* description: VISX image file (image segments) */
	VISX_IMAGE_FILE_IMAGE_SEGMENTS = 4380,

	/* category: visx */
	/* description: VISX image file (image set) */
	VISX_IMAGE_FILE_IMAGE_SET = 4381,

	/* category: visx */
	/* description: VISX image file (unsigned char vector) */
	VISX_IMAGE_FILE_UNSIGNED_CHAR_VECTOR = 4382,

	/* category: visx */
	/* description: VISX image file (short integer vector) */
	VISX_IMAGE_FILE_SHORT_INTEGER_VECTOR = 4383,

	/* category: visx */
	/* description: VISX image file (float 32 vector) */
	VISX_IMAGE_FILE_FLOAT_32_VECTOR = 4384,

	/* category: visx */
	/* description: VISX image file (float 64 vector) */
	VISX_IMAGE_FILE_FLOAT_64_VECTOR = 4385,

	/* category: visx */
	/* description: VISX image file (signed char vector) */
	VISX_IMAGE_FILE_SIGNED_CHAR_VECTOR = 4386,

	/* category: visx */
	/* description: VISX image file (bit plane vector) */
	VISX_IMAGE_FILE_BIT_PLANE_VECTOR = 4387,

	/* category: visx */
	/* description: VISX image file (feature vector) */
	VISX_IMAGE_FILE_FEATURE_VECTOR = 4388,

	/* category: visx */
	/* description: VISX image file (feature vector library) */
	VISX_IMAGE_FILE_FEATURE_VECTOR_LIBRARY = 4389,

	/* category: visx */
	/* description: VISX image file (chain code) */
	VISX_IMAGE_FILE_CHAIN_CODE = 4390,

	/* category: visx */
	/* description: VISX image file (bit vector) */
	VISX_IMAGE_FILE_BIT_VECTOR = 4391,

	/* category: visx */
	/* description: VISX image file (graph) */
	VISX_IMAGE_FILE_GRAPH = 4392,

	/* category: visx */
	/* description: VISX image file (adjacency graph) */
	VISX_IMAGE_FILE_ADJACENCY_GRAPH = 4393,

	/* category: visx */
	/* description: VISX image file (adjacency graph library) */
	VISX_IMAGE_FILE_ADJACENCY_GRAPH_LIBRARY = 4394,

	/* category: vms */
	/* description: VMS VAX executable */
	VMS_VAX_EXECUTABLE = 4395,

	/* category: vms */
	/* description: VMS VAX executable, Info-ZIP SFX archive v5.12 w/decryption */
	VMS_VAX_EXECUTABLE_INFO_ZIP_SFX_ARCHIVE_V5_12_W_DECRYPTION = 4396,

	/* category: vms */
	/* description: VMS Alpha executable */
	VMS_ALPHA_EXECUTABLE = 4397,

	/* category: vms */
	/* description: VMS Alpha executable, Info-ZIP SFX archive v5.12 w/decryption */
	VMS_ALPHA_EXECUTABLE_INFO_ZIP_SFX_ARCHIVE_V5_12_W_DECRYPTION = 4398,

	/* category: vmware */
	/* description: VMware nvram */
	VMWARE_NVRAM = 4399,

	/* category: vorbis */
	/* description: Ogg data */
	OGG_DATA = 4400,

	/* category: vorbis */
	/* description: Ogg data UNKNOWN REVISION %u */
	OGG_DATA_UNKNOWN_REVISION_UU = 4401,

	/* category: vorbis */
	/* description: Ogg data, FLAC audio */
	OGG_DATA_FLAC_AUDIO = 4402,

	/* category: vorbis */
	/* description: Ogg data, Theora video */
	OGG_DATA_THEORA_VIDEO = 4403,

	/* category: vorbis */
	/* description: Ogg data, Kate (Karaoke and Text) */
	OGG_DATA_KATE_KARAOKE_AND_TEXT = 4404,

	/* category: vorbis */
	/* description: Ogg data, Kate (Karaoke and Text) utf8 encoding, */
	OGG_DATA_KATE_KARAOKE_AND_TEXT_UTF8_ENCODING = 4405,

	/* category: vorbis */
	/* description: Ogg data, Kate (Karaoke and Text) unknown character encoding, */
	OGG_DATA_KATE_KARAOKE_AND_TEXT_UNKNOWN_CHARACTER_ENCODING = 4406,

	/* category: vorbis */
	/* description: Ogg data, Skeleton */
	OGG_DATA_SKELETON = 4407,

	/* category: vorbis */
	/* description: Ogg data, Speex audio */
	OGG_DATA_SPEEX_AUDIO = 4408,

	/* category: vorbis */
	/* description: Ogg data, OGM video */
	OGG_DATA_OGM_VIDEO = 4409,

	/* category: vorbis */
	/* description: Ogg data, OGM video (DivX 3) */
	OGG_DATA_OGM_VIDEO_DIVX_3 = 4410,

	/* category: vorbis */
	/* description: Ogg data, OGM video (DivX 4) */
	OGG_DATA_OGM_VIDEO_DIVX_4 = 4411,

	/* category: vorbis */
	/* description: Ogg data, OGM video (DivX 5) */
	OGG_DATA_OGM_VIDEO_DIVX_5 = 4412,

	/* category: vorbis */
	/* description: Ogg data, OGM video (XviD) */
	OGG_DATA_OGM_VIDEO_XVID = 4413,

	/* category: vorbis */
	/* description: Ogg data, Vorbis audio, */
	OGG_DATA_VORBIS_AUDIO = 4414,

	/* category: vorbis */
	/* description: Ogg data, Vorbis audio, mono, */
	OGG_DATA_VORBIS_AUDIO_MONO = 4415,

	/* category: vorbis */
	/* description: Ogg data, Vorbis audio, stereo, */
	OGG_DATA_VORBIS_AUDIO_STEREO = 4416,

	/* category: vorbis */
	/* description: Ogg data, Vorbis audio, %u channels, */
	OGG_DATA_VORBIS_AUDIO_UU_CHANNELS = 4417,

	/* category: vorbis */
	/* description: Ogg data, Opus audio, */
	OGG_DATA_OPUS_AUDIO = 4418,

	/* category: vxl */
	/* description: VXL data file, */
	VXL_DATA_FILE = 4419,

	/* category: warc */
	/* description: WARC Archive */
	WARC_ARCHIVE = 4420,

	/* category: warc */
	/* description: Internet Archive File */
	INTERNET_ARCHIVE_FILE = 4421,

	/* category: webassembly */
	/* description: WebAssembly (wasm) binary module */
	WEBASSEMBLY_WASM_BINARY_MODULE = 4422,

	/* category: windows */
	/* description: MS Outlook Express DBX file */
	MS_OUTLOOK_EXPRESS_DBX_FILE = 4423,

	/* category: windows */
	/* description: MS Outlook Express DBX file, message database */
	MS_OUTLOOK_EXPRESS_DBX_FILE_MESSAGE_DATABASE = 4424,

	/* category: windows */
	/* description: MS Outlook Express DBX file, folder database */
	MS_OUTLOOK_EXPRESS_DBX_FILE_FOLDER_DATABASE = 4425,

	/* category: windows */
	/* description: MS Outlook Express DBX file, account information */
	MS_OUTLOOK_EXPRESS_DBX_FILE_ACCOUNT_INFORMATION = 4426,

	/* category: windows */
	/* description: MS Outlook Express DBX file, offline database */
	MS_OUTLOOK_EXPRESS_DBX_FILE_OFFLINE_DATABASE = 4427,

	/* category: windows */
	/* description: MS Windows 32bit crash dump */
	MS_WINDOWS_32BIT_CRASH_DUMP = 4428,

	/* category: windows */
	/* description: MS Windows 32bit crash dump, no PAE */
	MS_WINDOWS_32BIT_CRASH_DUMP_NO_PAE = 4429,

	/* category: windows */
	/* description: MS Windows 32bit crash dump, PAE */
	MS_WINDOWS_32BIT_CRASH_DUMP_PAE = 4430,

	/* category: windows */
	/* description: MS Windows 64bit crash dump */
	MS_WINDOWS_64BIT_CRASH_DUMP = 4431,

	/* category: windows */
	/* description: MS Windows 64bit crash dump, full dump */
	MS_WINDOWS_64BIT_CRASH_DUMP_FULL_DUMP = 4432,

	/* category: windows */
	/* description: MS Windows 64bit crash dump, kernel dump */
	MS_WINDOWS_64BIT_CRASH_DUMP_KERNEL_DUMP = 4433,

	/* category: windows */
	/* description: MS Windows 64bit crash dump, small dump */
	MS_WINDOWS_64BIT_CRASH_DUMP_SMALL_DUMP = 4434,

	/* category: windows */
	/* description: MS Windows Vista Event Log */
	MS_WINDOWS_VISTA_EVENT_LOG = 4435,

	/* category: windows */
	/* description: MS Windows Vista Event Log, empty */
	MS_WINDOWS_VISTA_EVENT_LOG_EMPTY = 4436,

	/* category: windows */
	/* description: Windows Error Report */
	WINDOWS_ERROR_REPORT = 4437,

	/* category: windows */
	/* description: MS Windows 3.1 group files */
	MS_WINDOWS_3_1_GROUP_FILES = 4438,

	/* category: windows */
	/* description: MS */
	MS = 4439,

	/* category: windows */
	/* description: MS Windows help annotation */
	MS_WINDOWS_HELP_ANNOTATION = 4440,

	/* category: windows */
	/* description: MS Windows help Global Index */
	MS_WINDOWS_HELP_GLOBAL_INDEX = 4441,

	/* category: windows */
	/* description: MS Windows help file Content, based "%s" */
	MS_WINDOWS_HELP_FILE_CONTENT_BASED_SS = 4442,

	/* category: windows */
	/* description: MS Windows help Full Text Search index */
	MS_WINDOWS_HELP_FULL_TEXT_SEARCH_INDEX = 4443,

	/* category: windows */
	/* description: MS Windows HyperTerminal profile */
	MS_WINDOWS_HYPERTERMINAL_PROFILE = 4444,

	/* category: windows */
	/* description: MS Windows shortcut */
	MS_WINDOWS_SHORTCUT = 4445,

	/* category: windows */
	/* description: MS Windows shortcut, Item id list present */
	MS_WINDOWS_SHORTCUT_ITEM_ID_LIST_PRESENT = 4446,

	/* category: windows */
	/* description: MS Windows shortcut, Points to a file or directory */
	MS_WINDOWS_SHORTCUT_POINTS_TO_A_FILE_OR_DIRECTORY = 4447,

	/* category: windows */
	/* description: MS Windows shortcut, Has Description string */
	MS_WINDOWS_SHORTCUT_HAS_DESCRIPTION_STRING = 4448,

	/* category: windows */
	/* description: MS Windows shortcut, Has Relative path */
	MS_WINDOWS_SHORTCUT_HAS_RELATIVE_PATH = 4449,

	/* category: windows */
	/* description: MS Windows shortcut, Has Working directory */
	MS_WINDOWS_SHORTCUT_HAS_WORKING_DIRECTORY = 4450,

	/* category: windows */
	/* description: MS Windows shortcut, Has command line arguments */
	MS_WINDOWS_SHORTCUT_HAS_COMMAND_LINE_ARGUMENTS = 4451,

	/* category: windows */
	/* description: MS Windows shortcut, Icon */
	MS_WINDOWS_SHORTCUT_ICON = 4452,

	/* category: windows */
	/* description: Microsoft Outlook email folder */
	MICROSOFT_OUTLOOK_EMAIL_FOLDER = 4453,

	/* category: windows */
	/* description: Microsoft Outlook email folder (<=2002) */
	MICROSOFT_OUTLOOK_EMAIL_FOLDER_2002 = 4454,

	/* category: windows */
	/* description: Microsoft Outlook email folder (>=2003) */
	MICROSOFT_OUTLOOK_EMAIL_FOLDER_2003 = 4455,

	/* category: windows */
	/* description: MS Windows help cache */
	MS_WINDOWS_HELP_CACHE = 4456,

	/* category: windows */
	/* description: Internet Explorer cache file */
	INTERNET_EXPLORER_CACHE_FILE = 4457,

	/* category: windows */
	/* description: MS Windows registry file, NT/2000 or above */
	MS_WINDOWS_REGISTRY_FILE_NT_2000_OR_ABOVE = 4458,

	/* category: windows */
	/* description: MS Windows 95/98/ME registry file */
	MS_WINDOWS_95_98_ME_REGISTRY_FILE = 4459,

	/* category: windows */
	/* description: MS Windows 3.1 registry file */
	MS_WINDOWS_3_1_REGISTRY_FILE = 4460,

	/* category: windows */
	/* description: Windows Registry text */
	WINDOWS_REGISTRY_TEXT = 4461,

	/* category: windows */
	/* description: Windows Registry text (Win95 or above) */
	WINDOWS_REGISTRY_TEXT_WIN95_OR_ABOVE = 4462,

	/* category: windows */
	/* description: Windows Registry text (Win2K or above) */
	WINDOWS_REGISTRY_TEXT_WIN2K_OR_ABOVE = 4463,

	/* category: windows */
	/* description: Windows Registry little-endian text (Win2K or above) */
	WINDOWS_REGISTRY_LITTLE_ENDIAN_TEXT_WIN2K_OR_ABOVE = 4464,

	/* category: windows */
	/* description: WINE registry text */
	WINE_REGISTRY_TEXT = 4465,

	/* category: windows */
	/* description: Total commander directory treeinfo.wc */
	TOTAL_COMMANDER_DIRECTORY_TREEINFO_WC = 4466,

	/* category: windows */
	/* description: Microsoft Windows Autorun file */
	MICROSOFT_WINDOWS_AUTORUN_FILE = 4467,

	/* category: windows */
	/* description: Windows setup INFormation */
	WINDOWS_SETUP_INFORMATION = 4468,

	/* category: windows */
	/* description: Windows desktop.ini */
	WINDOWS_DESKTOP_INI = 4469,

	/* category: windows */
	/* description: Windows CONTROL.INI */
	WINDOWS_CONTROL_INI = 4470,

	/* category: windows */
	/* description: Windows PROTOCOL.INI */
	WINDOWS_PROTOCOL_INI = 4471,

	/* category: windows */
	/* description: Windows WIN.INI */
	WINDOWS_WIN_INI = 4472,

	/* category: windows */
	/* description: Windows SYSTEM.INI */
	WINDOWS_SYSTEM_INI = 4473,

	/* category: windows */
	/* description: Windows IOS.INI */
	WINDOWS_IOS_INI = 4474,

	/* category: windows */
	/* description: Windows boot.ini */
	WINDOWS_BOOT_INI = 4475,

	/* category: windows */
	/* description: MS-DOS CONFIG.SYS */
	MS_DOS_CONFIG_SYS = 4476,

	/* category: windows */
	/* description: MS-DOS MSDOS.SYS */
	MS_DOS_MSDOS_SYS = 4477,

	/* category: windows */
	/* description: Microsoft HTML Help Project */
	MICROSOFT_HTML_HELP_PROJECT = 4478,

	/* category: windows */
	/* description: Generic INItialization configuration [%-.40s */
	GENERIC_INITIALIZATION_CONFIGURATION_SS = 4479,

	/* category: windows */
	/* description: Windows Precompiled iNF */
	WINDOWS_PRECOMPILED_INF = 4480,

	/* category: windows */
	/* description: Windows NTbackup archive */
	WINDOWS_NTBACKUP_ARCHIVE = 4481,

	/* category: windows */
	/* description: Windows NTbackup archive NetWare */
	WINDOWS_NTBACKUP_ARCHIVE_NETWARE = 4482,

	/* category: windows */
	/* description: Windows NTbackup archive NetWare SMS */
	WINDOWS_NTBACKUP_ARCHIVE_NETWARE_SMS = 4483,

	/* category: windows */
	/* description: Windows NTbackup archive NT */
	WINDOWS_NTBACKUP_ARCHIVE_NT = 4484,

	/* category: windows */
	/* description: Windows NTbackup archive 3 */
	WINDOWS_NTBACKUP_ARCHIVE_3 = 4485,

	/* category: windows */
	/* description: Windows NTbackup archive OS/2 */
	WINDOWS_NTBACKUP_ARCHIVE_OS_2 = 4486,

	/* category: windows */
	/* description: Windows NTbackup archive 95 */
	WINDOWS_NTBACKUP_ARCHIVE_95 = 4487,

	/* category: windows */
	/* description: Windows NTbackup archive Macintosh */
	WINDOWS_NTBACKUP_ARCHIVE_MACINTOSH = 4488,

	/* category: windows */
	/* description: Windows NTbackup archive UNIX */
	WINDOWS_NTBACKUP_ARCHIVE_UNIX = 4489,

	/* category: windows */
	/* description: PaintShop Pro color palette */
	PAINTSHOP_PRO_COLOR_PALETTE = 4490,

	/* category: windows */
	/* description: InnoSetup Log */
	INNOSETUP_LOG = 4491,

	/* category: wireless */
	/* description: CRDA wireless regulatory database file */
	CRDA_WIRELESS_REGULATORY_DATABASE_FILE = 4492,

	/* category: wireless */
	/* description: CRDA wireless regulatory database file (Version 1) */
	CRDA_WIRELESS_REGULATORY_DATABASE_FILE_VERSION_1 = 4493,

	/* category: wordprocessors */
	/* description: Smith Corona PWP */
	SMITH_CORONA_PWP = 4494,

	/* category: wordprocessors */
	/* description: Smith Corona PWP, single spaced */
	SMITH_CORONA_PWP_SINGLE_SPACED = 4495,

	/* category: wordprocessors */
	/* description: Smith Corona PWP, 1.5 spaced */
	SMITH_CORONA_PWP_1_5_SPACED = 4496,

	/* category: wordprocessors */
	/* description: Smith Corona PWP, double spaced */
	SMITH_CORONA_PWP_DOUBLE_SPACED = 4497,

	/* category: wordprocessors */
	/* description: WordPerfect macro */
	WORDPERFECT_MACRO = 4498,

	/* category: wordprocessors */
	/* description: WordPerfect help file */
	WORDPERFECT_HELP_FILE = 4499,

	/* category: wordprocessors */
	/* description: WordPerfect keyboard file */
	WORDPERFECT_KEYBOARD_FILE = 4500,

	/* category: wordprocessors */
	/* description: WordPerfect document */
	WORDPERFECT_DOCUMENT = 4501,

	/* category: wordprocessors */
	/* description: WordPerfect dictionary */
	WORDPERFECT_DICTIONARY = 4502,

	/* category: wordprocessors */
	/* description: WordPerfect thesaurus */
	WORDPERFECT_THESAURUS = 4503,

	/* category: wordprocessors */
	/* description: WordPerfect block */
	WORDPERFECT_BLOCK = 4504,

	/* category: wordprocessors */
	/* description: WordPerfect rectangular block */
	WORDPERFECT_RECTANGULAR_BLOCK = 4505,

	/* category: wordprocessors */
	/* description: WordPerfect column block */
	WORDPERFECT_COLUMN_BLOCK = 4506,

	/* category: wordprocessors */
	/* description: WordPerfect printer data */
	WORDPERFECT_PRINTER_DATA = 4507,

	/* category: wordprocessors */
	/* description: WordPerfect driver resource data */
	WORDPERFECT_DRIVER_RESOURCE_DATA = 4508,

	/* category: wordprocessors */
	/* description: WordPerfect graphic image */
	WORDPERFECT_GRAPHIC_IMAGE = 4509,

	/* category: wordprocessors */
	/* description: WordPerfect hyphenation code */
	WORDPERFECT_HYPHENATION_CODE = 4510,

	/* category: wordprocessors */
	/* description: WordPerfect hyphenation data */
	WORDPERFECT_HYPHENATION_DATA = 4511,

	/* category: wordprocessors */
	/* description: WordPerfect macro resource data */
	WORDPERFECT_MACRO_RESOURCE_DATA = 4512,

	/* category: wordprocessors */
	/* description: WordPerfect hyphenation lex */
	WORDPERFECT_HYPHENATION_LEX = 4513,

	/* category: wordprocessors */
	/* description: WordPerfect wordlist */
	WORDPERFECT_WORDLIST = 4514,

	/* category: wordprocessors */
	/* description: WordPerfect equation resource data */
	WORDPERFECT_EQUATION_RESOURCE_DATA = 4515,

	/* category: wordprocessors */
	/* description: WordPerfect spell rules */
	WORDPERFECT_SPELL_RULES = 4516,

	/* category: wordprocessors */
	/* description: WordPerfect dictionary rules */
	WORDPERFECT_DICTIONARY_RULES = 4517,

	/* category: wordprocessors */
	/* description: WordPerfect spell rules (Microlytics) */
	WORDPERFECT_SPELL_RULES_MICROLYTICS = 4518,

	/* category: wordprocessors */
	/* description: WordPerfect settings file */
	WORDPERFECT_SETTINGS_FILE = 4519,

	/* category: wordprocessors */
	/* description: WordPerfect 3.5 document */
	WORDPERFECT_3_5_DOCUMENT = 4520,

	/* category: wordprocessors */
	/* description: WordPerfect 4.2 document */
	WORDPERFECT_4_2_DOCUMENT = 4521,

	/* category: wordprocessors */
	/* description: WordPerfect dialog file */
	WORDPERFECT_DIALOG_FILE = 4522,

	/* category: wordprocessors */
	/* description: WordPerfect button bar */
	WORDPERFECT_BUTTON_BAR = 4523,

	/* category: wordprocessors */
	/* description: Corel WordPerfect: Unknown filetype %d */
	COREL_WORDPERFECT_UNKNOWN_FILETYPE_DD = 4524,

	/* category: wordprocessors */
	/* description: Corel shell macro */
	COREL_SHELL_MACRO = 4525,

	/* category: wordprocessors */
	/* description: Corel shell definition */
	COREL_SHELL_DEFINITION = 4526,

	/* category: wordprocessors */
	/* description: Corel Shell: Unknown filetype %d */
	COREL_SHELL_UNKNOWN_FILETYPE_DD = 4527,

	/* category: wordprocessors */
	/* description: Corel Notebook macro */
	COREL_NOTEBOOK_MACRO = 4528,

	/* category: wordprocessors */
	/* description: Corel Notebook help file */
	COREL_NOTEBOOK_HELP_FILE = 4529,

	/* category: wordprocessors */
	/* description: Corel Notebook keyboard file */
	COREL_NOTEBOOK_KEYBOARD_FILE = 4530,

	/* category: wordprocessors */
	/* description: Corel Notebook definition */
	COREL_NOTEBOOK_DEFINITION = 4531,

	/* category: wordprocessors */
	/* description: Corel Notebook: Unknown filetype %d */
	COREL_NOTEBOOK_UNKNOWN_FILETYPE_DD = 4532,

	/* category: wordprocessors */
	/* description: Corel Calculator help file */
	COREL_CALCULATOR_HELP_FILE = 4533,

	/* category: wordprocessors */
	/* description: Corel Calculator: Unknown filetype %d */
	COREL_CALCULATOR_UNKNOWN_FILETYPE_DD = 4534,

	/* category: wordprocessors */
	/* description: Corel File Manager: Unknown filetype %d */
	COREL_FILE_MANAGER_UNKNOWN_FILETYPE_DD = 4535,

	/* category: wordprocessors */
	/* description: Corel Calendar help file */
	COREL_CALENDAR_HELP_FILE = 4536,

	/* category: wordprocessors */
	/* description: Corel Calendar data file */
	COREL_CALENDAR_DATA_FILE = 4537,

	/* category: wordprocessors */
	/* description: Corel Calendar: Unknown filetype %d */
	COREL_CALENDAR_UNKNOWN_FILETYPE_DD = 4538,

	/* category: wordprocessors */
	/* description: Corel Editor macro */
	COREL_EDITOR_MACRO = 4539,

	/* category: wordprocessors */
	/* description: Corel Editor help file */
	COREL_EDITOR_HELP_FILE = 4540,

	/* category: wordprocessors */
	/* description: Corel Editor keyboard file */
	COREL_EDITOR_KEYBOARD_FILE = 4541,

	/* category: wordprocessors */
	/* description: Corel Editor macro resource file */
	COREL_EDITOR_MACRO_RESOURCE_FILE = 4542,

	/* category: wordprocessors */
	/* description: Corel Program Editor/Ed Editor: Unknown filetype %d */
	COREL_PROGRAM_EDITOR_ED_EDITOR_UNKNOWN_FILETYPE_DD = 4543,

	/* category: wordprocessors */
	/* description: Corel Macro editor macro */
	COREL_MACRO_EDITOR_MACRO = 4544,

	/* category: wordprocessors */
	/* description: Corel Macro editor help file */
	COREL_MACRO_EDITOR_HELP_FILE = 4545,

	/* category: wordprocessors */
	/* description: Corel Macro editor keyboard file */
	COREL_MACRO_EDITOR_KEYBOARD_FILE = 4546,

	/* category: wordprocessors */
	/* description: Corel Macro Editor: Unknown filetype %d */
	COREL_MACRO_EDITOR_UNKNOWN_FILETYPE_DD = 4547,

	/* category: wordprocessors */
	/* description: Corel Plan Perfect: Unknown filetype %d */
	COREL_PLAN_PERFECT_UNKNOWN_FILETYPE_DD = 4548,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect macro */
	COREL_PLANPERFECT_MACRO = 4549,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect help file */
	COREL_PLANPERFECT_HELP_FILE = 4550,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect keyboard file */
	COREL_PLANPERFECT_KEYBOARD_FILE = 4551,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect worksheet */
	COREL_PLANPERFECT_WORKSHEET = 4552,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect printer definition */
	COREL_PLANPERFECT_PRINTER_DEFINITION = 4553,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect graphic definition */
	COREL_PLANPERFECT_GRAPHIC_DEFINITION = 4554,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect data */
	COREL_PLANPERFECT_DATA = 4555,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect temporary printer */
	COREL_PLANPERFECT_TEMPORARY_PRINTER = 4556,

	/* category: wordprocessors */
	/* description: Corel PlanPerfect macro resource data */
	COREL_PLANPERFECT_MACRO_RESOURCE_DATA = 4557,

	/* category: wordprocessors */
	/* description: Corel DataPerfect: Unknown filetype %d */
	COREL_DATAPERFECT_UNKNOWN_FILETYPE_DD = 4558,

	/* category: wordprocessors */
	/* description: Corel Mail help file */
	COREL_MAIL_HELP_FILE = 4559,

	/* category: wordprocessors */
	/* description: Corel Mail distribution list */
	COREL_MAIL_DISTRIBUTION_LIST = 4560,

	/* category: wordprocessors */
	/* description: Corel Mail out box */
	COREL_MAIL_OUT_BOX = 4561,

	/* category: wordprocessors */
	/* description: Corel Mail in box */
	COREL_MAIL_IN_BOX = 4562,

	/* category: wordprocessors */
	/* description: Corel Mail users archived mailbox */
	COREL_MAIL_USERS_ARCHIVED_MAILBOX = 4563,

	/* category: wordprocessors */
	/* description: Corel Mail archived message database */
	COREL_MAIL_ARCHIVED_MESSAGE_DATABASE = 4564,

	/* category: wordprocessors */
	/* description: Corel Mail archived attachments */
	COREL_MAIL_ARCHIVED_ATTACHMENTS = 4565,

	/* category: wordprocessors */
	/* description: Corel Mail: Unknown filetype %d */
	COREL_MAIL_UNKNOWN_FILETYPE_DD = 4566,

	/* category: wordprocessors */
	/* description: Corel Printer temporary file */
	COREL_PRINTER_TEMPORARY_FILE = 4567,

	/* category: wordprocessors */
	/* description: Corel Printer: Unknown filetype %d */
	COREL_PRINTER_UNKNOWN_FILETYPE_DD = 4568,

	/* category: wordprocessors */
	/* description: Corel Scheduler help file */
	COREL_SCHEDULER_HELP_FILE = 4569,

	/* category: wordprocessors */
	/* description: Corel Scheduler in file */
	COREL_SCHEDULER_IN_FILE = 4570,

	/* category: wordprocessors */
	/* description: Corel Scheduler out file */
	COREL_SCHEDULER_OUT_FILE = 4571,

	/* category: wordprocessors */
	/* description: Corel Scheduler: Unknown filetype %d */
	COREL_SCHEDULER_UNKNOWN_FILETYPE_DD = 4572,

	/* category: wordprocessors */
	/* description: Corel GroupWise settings file */
	COREL_GROUPWISE_SETTINGS_FILE = 4573,

	/* category: wordprocessors */
	/* description: Corel GroupWise directory services */
	COREL_GROUPWISE_DIRECTORY_SERVICES = 4574,

	/* category: wordprocessors */
	/* description: Corel WordPerfect Office: Unknown filetype %d */
	COREL_WORDPERFECT_OFFICE_UNKNOWN_FILETYPE_DD = 4575,

	/* category: wordprocessors */
	/* description: Corel DrawPerfect: Unknown filetype %d */
	COREL_DRAWPERFECT_UNKNOWN_FILETYPE_DD = 4576,

	/* category: wordprocessors */
	/* description: Corel LetterPerfect: Unknown filetype %d */
	COREL_LETTERPERFECT_UNKNOWN_FILETYPE_DD = 4577,

	/* category: wordprocessors */
	/* description: Corel Terminal resource data */
	COREL_TERMINAL_RESOURCE_DATA = 4578,

	/* category: wordprocessors */
	/* description: Corel Terminal: Unknown filetype %d */
	COREL_TERMINAL_UNKNOWN_FILETYPE_DD = 4579,

	/* category: wordprocessors */
	/* description: Corel loadable file */
	COREL_LOADABLE_FILE = 4580,

	/* category: wordprocessors */
	/* description: Corel GUI loadable text */
	COREL_GUI_LOADABLE_TEXT = 4581,

	/* category: wordprocessors */
	/* description: Corel graphics resource data */
	COREL_GRAPHICS_RESOURCE_DATA = 4582,

	/* category: wordprocessors */
	/* description: Corel printer settings file */
	COREL_PRINTER_SETTINGS_FILE = 4583,

	/* category: wordprocessors */
	/* description: Corel port definition file */
	COREL_PORT_DEFINITION_FILE = 4584,

	/* category: wordprocessors */
	/* description: Corel print queue parameters */
	COREL_PRINT_QUEUE_PARAMETERS = 4585,

	/* category: wordprocessors */
	/* description: Corel compressed file */
	COREL_COMPRESSED_FILE = 4586,

	/* category: wordprocessors */
	/* description: Corel loadable file: Unknown filetype %d */
	COREL_LOADABLE_FILE_UNKNOWN_FILETYPE_DD = 4587,

	/* category: wordprocessors */
	/* description: Corel Network service msg file */
	COREL_NETWORK_SERVICE_MSG_FILE = 4588,

	/* category: wordprocessors */
	/* description: Corel Async gateway login msg */
	COREL_ASYNC_GATEWAY_LOGIN_MSG = 4589,

	/* category: wordprocessors */
	/* description: Corel GroupWise message file */
	COREL_GROUPWISE_MESSAGE_FILE = 4590,

	/* category: wordprocessors */
	/* description: Corel Network service: Unknown filetype %d */
	COREL_NETWORK_SERVICE_UNKNOWN_FILETYPE_DD = 4591,

	/* category: wordprocessors */
	/* description: GroupWise admin domain database */
	GROUPWISE_ADMIN_DOMAIN_DATABASE = 4592,

	/* category: wordprocessors */
	/* description: GroupWise admin host database */
	GROUPWISE_ADMIN_HOST_DATABASE = 4593,

	/* category: wordprocessors */
	/* description: GroupWise admin remote host database */
	GROUPWISE_ADMIN_REMOTE_HOST_DATABASE = 4594,

	/* category: wordprocessors */
	/* description: GroupWise admin ADS deferment data file */
	GROUPWISE_ADMIN_ADS_DEFERMENT_DATA_FILE = 4595,

	/* category: wordprocessors */
	/* description: GroupWise: Unknown filetype %d */
	GROUPWISE_UNKNOWN_FILETYPE_DD = 4596,

	/* category: wordprocessors */
	/* description: IntelliTAG (SGML) compiled DTD */
	INTELLITAG_SGML_COMPILED_DTD = 4597,

	/* category: wordprocessors */
	/* description: IntelliTAG: Unknown filetype %d */
	INTELLITAG_UNKNOWN_FILETYPE_DD = 4598,

	/* category: wordprocessors */
	/* description: Unknown Corel/Wordperfect product %d, */
	UNKNOWN_COREL_WORDPERFECT_PRODUCT_DD = 4599,

	/* category: wordprocessors */
	/* description: Hangul (Korean) Word Processor File 3.0 */
	HANGUL_KOREAN_WORD_PROCESSOR_FILE_3_0 = 4600,

	/* category: wordprocessors */
	/* description: Hangul (Korean) Word Processor File 2000 */
	HANGUL_KOREAN_WORD_PROCESSOR_FILE_2000 = 4601,

	/* category: wordprocessors */
	/* description: Ted Neslson's CosmicBook hypertext file */
	TED_NESLSON_S_COSMICBOOK_HYPERTEXT_FILE = 4602,

	/* category: wordprocessors */
	/* description: AmigaWriter file */
	AMIGAWRITER_FILE = 4603,

	/* category: wordprocessors */
	/* description: ChiWriter file */
	CHIWRITER_FILE = 4604,

	/* category: wordprocessors */
	/* description: Intel Quark Express Document (English) */
	INTEL_QUARK_EXPRESS_DOCUMENT_ENGLISH = 4605,

	/* category: wordprocessors */
	/* description: Intel Quark Express Document (Korean) */
	INTEL_QUARK_EXPRESS_DOCUMENT_KOREAN = 4606,

	/* category: wordprocessors */
	/* description: Motorola Quark Express Document (English) */
	MOTOROLA_QUARK_EXPRESS_DOCUMENT_ENGLISH = 4607,

	/* category: wordprocessors */
	/* description: Motorola Quark Express Document (Korean) */
	MOTOROLA_QUARK_EXPRESS_DOCUMENT_KOREAN = 4608,

	/* category: wordprocessors */
	/* description: Adobe InDesign */
	ADOBE_INDESIGN = 4609,

	/* category: wordprocessors */
	/* description: Adobe InDesign Document */
	ADOBE_INDESIGN_DOCUMENT = 4610,

	/* category: wordprocessors */
	/* description: Just System Word Processor Ichitaro v4 */
	JUST_SYSTEM_WORD_PROCESSOR_ICHITARO_V4 = 4611,

	/* category: wordprocessors */
	/* description: Just System Word Processor Ichitaro v5 */
	JUST_SYSTEM_WORD_PROCESSOR_ICHITARO_V5 = 4612,

	/* category: wordprocessors */
	/* description: Just System Word Processor Ichitaro v6 */
	JUST_SYSTEM_WORD_PROCESSOR_ICHITARO_V6 = 4613,

	/* category: wordprocessors */
	/* description: Freemind document */
	FREEMIND_DOCUMENT = 4614,

	/* category: wordprocessors */
	/* description: Freeplane document */
	FREEPLANE_DOCUMENT = 4615,

	/* category: wordprocessors */
	/* description: Scribus Document */
	SCRIBUS_DOCUMENT = 4616,

	/* category: wordprocessors */
	/* description: gfxboot compiled html help file */
	GFXBOOT_COMPILED_HTML_HELP_FILE = 4617,

	/* category: wsdl */
	/* description: PHP WSDL cache, */
	PHP_WSDL_CACHE = 4618,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, */
	YANAGISAWA_PIC_IMAGE_FILE = 4619,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, model: X68000, */
	YANAGISAWA_PIC_IMAGE_FILE_MODEL_X68000 = 4620,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, model: PC-88VA, */
	YANAGISAWA_PIC_IMAGE_FILE_MODEL_PC_88VA = 4621,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, model: FM-TOWNS, */
	YANAGISAWA_PIC_IMAGE_FILE_MODEL_FM_TOWNS = 4622,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, model: MAC, */
	YANAGISAWA_PIC_IMAGE_FILE_MODEL_MAC = 4623,

	/* category: x68000 */
	/* description: Yanagisawa PIC image file, model: Generic, */
	YANAGISAWA_PIC_IMAGE_FILE_MODEL_GENERIC = 4624,

	/* category: xdelta */
	/* description: XDelta binary patch file 0.14 */
	XDELTA_BINARY_PATCH_FILE_0_14 = 4625,

	/* category: xdelta */
	/* description: XDelta binary patch file 0.18 */
	XDELTA_BINARY_PATCH_FILE_0_18 = 4626,

	/* category: xdelta */
	/* description: XDelta binary patch file 0.20 */
	XDELTA_BINARY_PATCH_FILE_0_20 = 4627,

	/* category: xdelta */
	/* description: XDelta binary patch file 1.0 */
	XDELTA_BINARY_PATCH_FILE_1_0 = 4628,

	/* category: xdelta */
	/* description: XDelta binary patch file 1.0.4 */
	XDELTA_BINARY_PATCH_FILE_1_0_4 = 4629,

	/* category: xdelta */
	/* description: XDelta binary patch file 1.1 */
	XDELTA_BINARY_PATCH_FILE_1_1 = 4630,

	/* category: xdelta */
	/* description: VCDIFF binary diff */
	VCDIFF_BINARY_DIFF = 4631,

	/* category: xenix */
	/* description: core file (Xenix) */
	CORE_FILE_XENIX = 4632,

	/* category: xenix */
	/* description: 8086 relocatable (Microsoft) */
	A_8086_RELOCATABLE_MICROSOFT = 4633,

	/* category: xenix */
	/* description: x.out */
	X_OUT = 4634,

	/* category: xenix */
	/* description: Microsoft a.out */
	MICROSOFT_A_OUT = 4635,

	/* category: xenix */
	/* description: old Microsoft 8086 x.out */
	OLD_MICROSOFT_8086_X_OUT = 4636,

	/* category: xenix */
	/* description: b.out */
	B_OUT = 4637,

	/* category: xenix */
	/* description: XENIX 8086 relocatable or 80286 small model */
	XENIX_8086_RELOCATABLE_OR_80286_SMALL_MODEL = 4638,

	/* category: xilinx */
	/* description: Xilinx BIT data */
	XILINX_BIT_DATA = 4639,

	/* category: xilinx */
	/* description: Xilinx RAW bitstream (.BIN) */
	XILINX_RAW_BITSTREAM_BIN = 4640,

	/* category: xo65 */
	/* description: xo65 object, */
	XO65_OBJECT = 4641,

	/* category: xo65 */
	/* description: xo65 object, with debug info */
	XO65_OBJECT_WITH_DEBUG_INFO = 4642,

	/* category: xo65 */
	/* description: xo65 object, no debug info */
	XO65_OBJECT_NO_DEBUG_INFO = 4643,

	/* category: xo65 */
	/* description: xo65 library, */
	XO65_LIBRARY = 4644,

	/* category: xo65 */
	/* description: o65 */
	O65 = 4645,

	/* category: xo65 */
	/* description: o65 executable, */
	O65_EXECUTABLE = 4646,

	/* category: xo65 */
	/* description: o65 object, */
	O65_OBJECT = 4647,

	/* category: xwindows */
	/* description: Compiled XKB Keymap: lsb, */
	COMPILED_XKB_KEYMAP_LSB = 4648,

	/* category: xwindows */
	/* description: Compiled XKB Keymap: lsb, obsolete */
	COMPILED_XKB_KEYMAP_LSB_OBSOLETE = 4649,

	/* category: xwindows */
	/* description: Compiled XKB Keymap: msb, */
	COMPILED_XKB_KEYMAP_MSB = 4650,

	/* category: xwindows */
	/* description: Compiled XKB Keymap: msb, obsolete */
	COMPILED_XKB_KEYMAP_MSB_OBSOLETE = 4651,

	/* category: xwindows */
	/* description: xfsdump archive */
	XFSDUMP_ARCHIVE = 4652,

	/* category: xwindows */
	/* description: Jaleo XFS file */
	JALEO_XFS_FILE = 4653,

	/* category: xwindows */
	/* description: Jaleo XFS file - [%d - */
	JALEO_XFS_FILE_DD = 4654,

	/* category: xwindows */
	/* description: Jaleo XFS fileYUV422] */
	JALEO_XFS_FILEYUV422 = 4655,

	/* category: xwindows */
	/* description: Jaleo XFS fileRGB24] */
	JALEO_XFS_FILERGB24 = 4656,

	/* category: xwindows */
	/* description: Xcursor data */
	XCURSOR_DATA = 4657,

	/* category: yara */
	/* description: YARA 3.x compiled rule set */
	YARA_3_X_COMPILED_RULE_SET = 4658,

	/* category: yara */
	/* description: YARA 3.x compiled rule set created with version 3.3.0 */
	YARA_3_X_COMPILED_RULE_SET_CREATED_WITH_VERSION_3_3_0 = 4659,

	/* category: yara */
	/* description: YARA 3.x compiled rule set created with version 3.4.0 */
	YARA_3_X_COMPILED_RULE_SET_CREATED_WITH_VERSION_3_4_0 = 4660,

	/* category: yara */
	/* description: YARA 3.x compiled rule set created with version 3.5.0 */
	YARA_3_X_COMPILED_RULE_SET_CREATED_WITH_VERSION_3_5_0 = 4661,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE = 4662,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: NONE, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_NONE = 4663,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: META, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_META = 4664,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: ZFS, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_ZFS = 4665,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: ZVOL, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_ZVOL = 4666,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: OTHER, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_OTHER = 4667,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: ANY, */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_ANY = 4668,

	/* category: zfs */
	/* description: ZFS shapshot (big-endian machine), type: UNKNOWN (%u), */
	ZFS_SHAPSHOT_BIG_ENDIAN_MACHINE_TYPE_UNKNOWN_UU = 4669,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE = 4670,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: NONE, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_NONE = 4671,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: META, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_META = 4672,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: ZFS, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_ZFS = 4673,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: ZVOL, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_ZVOL = 4674,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: OTHER, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_OTHER = 4675,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: ANY, */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_ANY = 4676,

	/* category: zfs */
	/* description: ZFS shapshot (little-endian machine), type: UNKNOWN (%u), */
	ZFS_SHAPSHOT_LITTLE_ENDIAN_MACHINE_TYPE_UNKNOWN_UU = 4677,

	/* category: zilog */
	/* description: object file (z8000 a.out) */
	OBJECT_FILE_Z8000_A_OUT = 4678,

	/* category: zilog */
	/* description: pure object file (z8000 a.out) */
	PURE_OBJECT_FILE_Z8000_A_OUT = 4679,

	/* category: zilog */
	/* description: separate object file (z8000 a.out) */
	SEPARATE_OBJECT_FILE_Z8000_A_OUT = 4680,

	/* category: zilog */
	/* description: overlay object file (z8000 a.out) */
	OVERLAY_OBJECT_FILE_Z8000_A_OUT = 4681,

	/* category: zyxel */
	/* description: ZyXEL voice data */
	ZYXEL_VOICE_DATA = 4682,

	/* category: zyxel */
	/* description: ZyXEL voice data - CELP encoding */
	ZYXEL_VOICE_DATA_CELP_ENCODING = 4683,

	/* category: zyxel */
	/* description: ZyXEL voice data - ADPCM2 encoding */
	ZYXEL_VOICE_DATA_ADPCM2_ENCODING = 4684,

	/* category: zyxel */
	/* description: ZyXEL voice data - ADPCM3 encoding */
	ZYXEL_VOICE_DATA_ADPCM3_ENCODING = 4685,

	/* category: zyxel */
	/* description: ZyXEL voice data - ADPCM4 encoding */
	ZYXEL_VOICE_DATA_ADPCM4_ENCODING = 4686,

	/* category: zyxel */
	/* description: ZyXEL voice data - New ADPCM3 encoding */
	ZYXEL_VOICE_DATA_NEW_ADPCM3_ENCODING = 4687,

	/* category: zyxel */
	/* description: ZyXEL voice data with resync */
	ZYXEL_VOICE_DATA_WITH_RESYNC = 4688,


	/* TYPE GUESTED FROM FILE SYSTEM STAT */
	/* Most of types guested from file system are special os files */

	/* category: hard filesystem */
	/* description: empty file */
	FS_EMPTY = 100000,

	/* category: hard filesystem */
	/* description: directory */
	FS_DIRECTORY = 100001,

	/* category: hard filesystem */
	/* description: char device file */
	FS_CHAR_DEVICE = 100002,
	
	/* category: hard filesystem */
	/* description: block device file */
	FS_BLOCK_DEVICE = 100003,
	
	/* category: hard filesystem */
	/* description: FIFO file */
	FS_FIFO = 100004,
	
	/* category: hard filesystem */
	/* description: door */
	FS_DOOR_FILE = 100005,

	/* category: hard filesystem */
	/* description: symlink */
	FS_SYMLINK = 100006,

	/* category: hard filesystem */
	/* description: socket */
	FS_SOCKET = 100007,


	/* TYPE GUESTED FROM FILES WITHOUT READ PERMISSION */
	/* These type will be returned if no read permission */

	/* category: no read permission */
	/* description: no read permission file  */
	NO_READ_PERM_FILE = 100100,

	/* category: no read permission */
	/* description: no read permission writable file  */
	NO_READ_PERM_WRITABLE_FILE = 100101,

	/* category: no read permission */
	/* description: no read permission executable file */
	NO_READ_PERM_EXECUTABLE_FILE = 100102,

	/* category: no read permission */
	/* description: no read permission writable executable file */
	NO_READ_PERM_WRITABLE_EXECUTABLE_FILE = 100103,


	/* TYPE GUESTED THROUGH HARD RULES */

	/* category: complex hard rules */
	/* description: physical device driver */
	FAPPTYP_PHYSICAL_DEVICE_DRIVER = 100201,

	/* category: complex hard rules */
	/* description: virtual device driver */
	FAPPTYP_VIRTUAL_DEVICE_DRIVER = 100202,

	/* category: complex hard rules */
	/* description: DLL */
	FAPPTYP_DLLFAPPTYP_DLL_FILE = 100203,

	/* category: complex hard rules */
	/* description: windows executable */
	FAPPTYP_WINDOWS_EXECUTABLE = 100204,

	/* category: complex hard rules */
	/* description: dos executable */
	FAPPTYP_DOS_EXECUTABLE = 100205,

	/* category: complex hard rules */
	/* description: bound executable */
	FAPPTYP_BOUND_EXECUTABLE = 100206,

	/* category: complex hard rules */
	/* description: pm executable */
	FAPPTYP_PM_EXECUTABLE = 100207,

	/* category: complex hard rules */
	/* description: OS/2 executable */
	FAPPTYP_OS_2_EXECUTABLE = 100208,

	/* category: complex hard rules */
	/* description: old unix tar file */
	OLD_UNIX_TAR = 100209,

	/* category: complex hard rules */
	/* description: unix std (POSIX) tar file */
	UNIX_STD_POSIX_TAR = 100210,

	/* category: complex hard rules */
	/* description: GNU tar file */
	GNU_TAR = 100211,

	/* category: complex hard rules */
	/* description: json file */
	JSON_DATA = 100212,

	/* category: complex hard rules */
	/* description: Hangul (Korean) Word Processor File 5.x */
	HANGUL_WORD_PROCESSOR_FILE_5_X = 100213,

	/* category: complex hard rules */
	/* description: Composite Document File V2 Document */
	COMPOSITE_DOCUMENT_FILE_V2_DOCUMENT = 100214,
	

	/* TEXT TYPE */

	/* category: ascii text */
	/* description: ascii text */
	TEXT_ASCII_UNICODE = 100300,

	/* category: ascii text */
	/* description: utf7 text */
	TEXT_UTF7_UNICODE = 100301,
	
	/* category: ascii text */
	/* description: utf8-bom text */
	TEXT_UTF8_BOM_UNICODE = 100302,

	/* category: ascii text */
	/* description: utf8 text */
	TEXT_UTF8_UNICODE = 100303,

	/* category: ascii text */
	/* description: utf16-le text */
	TEXT_UTF16_LE_UNICODE = 100304,

	/* category: ascii text */
	/* description: utf16-be text */
	TEXT_UTF16_BE_UNICODE = 100305,

	/* category: ascii text */
	/* description: iso-8859-1 text */
	TEXT_ISO_8859_1_UNICODE = 100306,

	/* category: ascii text */
	/* description: non-iso extended text */
	TEXT_NON_ISO_EXTENDED_ASCII = 100307,

	/* category: ascii text */
	/* description: ebcdic text */
	TEXT_EBCDIC = 100308,

	/* category: ascii text */
	/* description: ebcdic international text */
	TEXT_EBCDIC_INTERNATIONAL = 100309

};

#endif /* FILE_TYPE_H */
