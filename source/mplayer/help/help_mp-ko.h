// Fully sync'ed with help_mp-en.h 1.120
// Translated by: DongCheon Park <dcpark@kaist.ac.kr>

// ========================= MPlayer help ===========================

static const char help_text[]=
"์ฌ์ฉ๋ฒ:   mplayer [์ ํ?์ฌํญ] [url|๊ฒฝ๋ก/]ํ์?ผ๋ช\n"
"\n"
"๊ธฐ๋ณธ ์ ํ?์ฌํญ: (์ ์ฒด ๋ชฉ๋ก?์? man ํ์?ด์ง ์ฐธ์กฐ)\n"
" -vo <drv[:dev]>  ๋น๋์ค ์ถ๋ ฅ ๋๋?ผ์?ด๋ฒ ๋ฐ? ์ฅ์น ์ ํ? (๋ชฉ๋ก?๋ณด๊ธฐ๋ '-vo help')\n"
" -ao <drv[:dev]>  ์ค๋์ค ์ถ๋ ฅ ๋๋?ผ์?ด๋ฒ ๋ฐ? ์ฅ์น ์ ํ? (๋ชฉ๋ก?๋ณด๊ธฐ๋ '-ao help')\n"
#ifdef CONFIG_VCD
" vcd://<trackno>  (S)VCD (Super Video CD) ํธ๋ ์ฌ์? (์ฅ์น๋ก๋ถํฐ, ๋ง์ดํธ ์์?ด)\n"
#endif
#ifdef CONFIG_DVDREAD
" dvd://<titleno>  ์?ผ๋ฐ ํ์?ผ์?ด ์๋ ์ฅ์น๋ก๋ถํฐ DVD ํ์?ดํ ์ฌ์?\n"
" -alang/-slang    DVD ์ค๋์ค/์?๋ง ์ธ์ด ์ ํ? (๋? ๊ธ์?์? ๊ตญ๊ฐ ์ฝ๋)\n"
#endif
" -ss <timepos>    ํน์  ์์น๋ก ์ฐพ์๊ฐ๊ธฐ (์ด ๋?๋ ์:๋ถ:์ด)\n"
" -nosound         ์๋ฆฌ ์ฌ์? ์ํจ\n"
" -fs              ์ ์ฒดํ๋ฉด ์ฌ์? (๋?๋ -vm, -zoom, ์?์ธํ ์ฌํญ์? man ํ์?ด์ง)\n"
" -x <x> -y <y>    ํ๋ฉด์? <x>*<y>ํด์?๋?๋ก ์ค์  (-vm์?ด๋ -zoom๊ณผ ํจ๊ป ์ฌ์ฉํจ)\n"
" -sub <file>      ์ฌ์ฉํ  ์?๋ง ํ์?ผ ์ง์  (-subfps, -subdelay๋? ์ฐธ๊ณ ํ  ๊ฒ)\n"
" -playlist <file> ์ฌ์?๋ชฉ๋ก? ํ์?ผ ์ง์ \n"
" -vid x -aid y    ์ฌ์?ํ  ๋น๋์ค(x) ์ ์ค๋์ค(y) ์คํธ๋ฆผ ์ ํ?\n"
" -fps x -srate y  ๋น๋์ค(x fps)์ ์ค๋์ค(y Hz) ๋น์จ ๋ณ๊ฒฝ\n"
" -pp <quality>    ํํ์ฒ๋ฆฌ ํํฐ ์ฌ์ฉ (์?์ธํ ์ฌํญ์? man ํ์?ด์ง ์ฐธ์กฐ)\n"
" -framedrop       ํ๋ ์ ๊ฑด๋๋ฐ๊ธฐ ์ฌ์ฉ (๋?๋ฆฐ ์ปดํจํฐ์ฉ ์ ํ?์ฌํญ)\n"
"\n"
"๊ธฐ๋ณธ ์กฐ์ ํค: (์ ์ฒด ์กฐ์ ํค ๋ชฉ๋ก?์? man ํ์?ด์ง ์ฐธ์กฐ, input.conf๋? ํ์?ธํ  ๊ฒ)\n"
" <-  ๋?๋  ->     10์ด ๋ค๋ก/์์ผ๋ก ์?ด๋?\n"
" up ๋?๋ down     1๋ถ ๋ค๋ก/์์ผ๋ก ์?ด๋?\n"
" pgup ๋?๋ pgdown 10๋ถ ๋ค๋ก/์์ผ๋ก ์?ด๋?\n"
" < ๋?๋ >         ์ฌ์?๋ชฉ๋ก?์?์ ๋ค๋ก/์์ผ๋ก ์?ด๋?\n"
" p ๋?๋ SPACE     ์ ์ ๋ฉ์ถค (์๋ฌดํค๋ ๋๋ฅด๋ฉด ๊ณ์?)\n"
" q ๋?๋ ESC       ์ฌ์?์? ๋ฉ์ถ๊ณ  ํ๋ก๊ทธ๋จ์? ๋??๋\n"
" + ๋?๋ -         +/- 0.1์ด์ฉ ์ค๋์ค ์ง์ฐ ์กฐ์ \n"
" o                OSD๋ชจ๋ ๋ณ๊ฒฝ:  ์์?/ํ?์์ค/ํ?์์ค+ํ์?ด๋จธ\n"
" * ๋?๋ /         PCM ์?๋์? ๋์/๋ฎ์ถค\n"
" z ๋?๋ x         +/- 0.1์ด์ฉ ์?๋ง ์ง์ฐ ์กฐ์ \n"
" r ๋?๋ t         ์?๋ง ์์น๋ฅผ ์๋ก/์๋๋ก ์กฐ์ , -vf expand๋? ์ฐธ๊ณ ํ  ๊ฒ\n"
"\n"
" * * * ๋? ์?์ธํ (๊ณ ๊ธ) ์ ํ?์ฌํญ ๋ฐ? ์กฐ์ ํค๋ MAN ํ์?ด์ง๋ฅผ ์ฐธ์กฐํ์ธ์. * * *\n"
"\n";

// ========================= MPlayer messages ===========================

// mplayer.c:

#define MSGTR_Exiting "\n์ข๋ฃํฉ๋๋ค.\n"
#define MSGTR_ExitingHow "\n์ข๋ฃํฉ๋๋ค... (%s)\n"
#define MSGTR_Exit_quit "์ข๋ฃ"
#define MSGTR_Exit_eof "ํ์?ผ์? ๋??"
#define MSGTR_Exit_error "์น๋ช์ ? ์ค๋ฅ"
#define MSGTR_IntBySignal "\nMPlayer๊ฐ %d์๊ทธ๋?์? ์?ํด ์?ธํฐ๋ฝํธ๋?์์ต๋๋ค. - ๋ชจ๋: %s\n"
#define MSGTR_NoHomeDir "ํ๋๋ ํ ๋ฆฌ๋ฅผ ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_GetpathProblem "get_path(\"config\") ๋ฌธ์  ๋ฐ์?\n"
#define MSGTR_CreatingCfgFile "์ค์ ํ์?ผ์? ๋ง๋ญ๋๋ค.: %s\n"
#define MSGTR_CantLoadFont "ํ?ฐํธ๋ฅผ ์?ฝ์ด ๋ค์?ผ ์ ์์ต๋๋ค.: %s\n"
#define MSGTR_CantLoadSub "์?๋ง์? ์?ฝ์ด ๋ค์?ผ ์ ์์ต๋๋ค.: %s\n"
#define MSGTR_DumpSelectedStreamMissing "dump: ์น๋ช์ ? : ์ ํ?๋? ์คํธ๋ฆผ์?ด ์์ต๋๋ค!\n"
#define MSGTR_CantOpenDumpfile "dumpํ์?ผ์? ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_CoreDumped "Core dumped :)\n"
#define MSGTR_FPSnotspecified "ํค๋?์? FPS๊ฐ ์ง์ ๋?์ง ์์๊ฑฐ๋ ์ ํจํ์ง ์์ต๋๋ค. -fps ์ต์์? ์ฌ์ฉํ์ธ์.\n"
#define MSGTR_TryForceAudioFmtStr "์ค๋์ค ์ฝ๋?ฑ ๋๋?ผ์?ด๋ฒ ์งํฉ %s๋ฅผ ์๋?ํ๊ณ  ์์ต๋๋ค...\n"
#define MSGTR_CantFindAudioCodec "์ค๋์ค ํ์? 0x%X๋ฅผ ์ํ ์ฝ๋?ฑ์? ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_TryForceVideoFmtStr "๋น๋์ค ์ฝ๋?ฑ ๋๋?ผ์?ด๋ฒ ์งํฉ %s๋ฅผ ์๋?ํ๊ณ  ์์ต๋๋ค...\n"
#define MSGTR_CantFindVideoCodec "์ ํ?ํ -vo ๋ฐ? ๋น๋์ค ํ์? 0x%X๊ณผ ์?ผ์นํ๋ ์ฝ๋?ฑ์? ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_VOincompCodec "์ ํ?ํ ๋น๋์ค ์ถ๋ ฅ ์ฅ์น๋ ์?ด ์ฝ๋?ฑ๊ณผ ํธํ๋?์ง ์์ต๋๋ค.\n"
#define MSGTR_CannotInitVO "์น๋ช์ ? ์ค๋ฅ: ๋น๋์ค ๋๋?ผ์?ด๋ฒ๋ฅผ ์ด๊ธฐํํ  ์ ์์ต๋๋ค.\n"
#define MSGTR_CannotInitAO "์ค๋์ค ์ฅ์น๋ฅผ ์ด๊ฑฐ๋ ์ด๊ธฐํํ  ์ ์์ต๋๋ค. -> ์๋ฆฌ์์?\n"
#define MSGTR_StartPlaying "์ฌ์?์? ์์ํฉ๋๋ค...\n"

#define MSGTR_SystemTooSlow "\n\n"\
"         ************************************************\n"\
"         **** ์ฌ์?ํ๊ธฐ์?๋ ์์คํ์?ด ๋๋ฌด ๋?๋ฆฝ๋๋ค.!  ****\n"\
"         ************************************************\n"\
"๊ฐ๋ฅ์ฑ์๋ ์?์?ธ๊ณผ ๋ฌธ์  ๋ฐ? ๋์ฒ๋ฐฉ์: \n"\
"- ๋๋ถ๋ถ์? ๊ฒฝ์ฐ: ๊นจ์ง/๋ฒ๊ทธ๊ฐ ๋ง์? ์ค๋์ค ๋๋?ผ์?ด๋ฒ\n"\
"  - -ao sdl์? ์๋?ํ๊ฑฐ๋ ALSA 0.5, ํน์? ALSA 0.9์? OSS ์?๋ฎฌ๋ ์?ด์์? ์ฌ์ฉํด๋ณด์ธ์.\n"\
"  - -autosync๋ฅผ์ผ๋ก ์ฌ๋ฌ๊ฐ์ง ๊ฐ์ผ๋ก ์คํํด๋ณด์ธ์. ์์ ๊ฐ์ผ๋ก๋ 30์?ด ์ ?๋นํฉ๋๋ค.\n"\
"- ๋น๋์ค ์ถ๋ ฅ์?ด ๋?๋ฆผ\n"\
"  - ๋ค๋ฅธ -vo driver๋ฅผ ์๋?ํ๊ฑฐ๋ (๋ชฉ๋ก?๋ณด๊ธฐ๋ -vo help), -framedrop์? ์๋?ํด๋ณด์ธ์!\n"\
"- ๋?๋ฆฐ CPU\n"\
"  - ๋?ฉ์น ํ?ฐ DVD๋ DivX๋ฅผ ๋?๋ฆฐ CPU์?์ ์ฌ์?ํ์ง ๋ง์ธ์! -hardframedrop์? ์๋?ํด๋ณด์ธ์.\n"\
"- ๊นจ์ง ํ์?ผ\n"\
"  - -nobps -ni -forceidx -mc 0 ๋ฑ์? ์ฌ๋ฌ๊ฐ์ง ์กฐํฉ์? ์๋?ํด๋ณด์ธ์.\n"\
"- ๋?๋ฆฐ ๋ฏธ๋์ด (NFS/SMB ๋ง์ดํธ, DVD, VCD ๋ฑ)\n"\
"  - -cache 8192๋ฅผ ์๋?ํด๋ณด์ธ์.\n"\
"- non-interleaved AVI ํ์?ผ์? -cache ์ต์์ผ๋ก ์ฌ์?ํ๊ณ  ์๋์?\n"\
"  - -nocache๋ฅผ ์๋?ํด๋ณด์ธ์.\n"\
"๋ฏธ์ธ์กฐ์ /์?๋?ํฅ์? ํ?์? DOCS/HTML/en/video.html๊ณผ DOCS/HTML/en/audio.html์? ์ฐธ์กฐํ์ธ์.\n"\
"์์? ์ด๋ค ์ฌํญ๋? ๋?์์?ด ๋?์ง ์๋๋ค๋ฉด, DOCS/HTML/en/bugreports.html์? ์ฐธ์กฐํ์ธ์.\n\n"

#define MSGTR_NoGui "MPlayer๊ฐ GUI๋ฅผ ์ฌ์ฉํ  ์ ์๋?๋ก? ์ปดํ์?ผ๋?์ง ์์์ต๋๋ค.\n"
#define MSGTR_GuiNeedsX "MPlayer GUI๋ X11์? ํ์๋กํฉ๋๋ค!\n"
#define MSGTR_Playing "%s ์ฌ์? ์ค...\n"
#define MSGTR_NoSound "์ค๋์ค: ์๋ฆฌ์์?\n"
#define MSGTR_FPSforced "FPS๊ฐ %5.3f (ftime: %5.3f)์ผ๋ก ๋ณ๊ฒฝ๋?์์ต๋๋ค.\n"
#define MSGTR_AvailableVideoOutputDrivers "๊ฐ๋ฅํ ๋น๋์ค ์ถ๋ ฅ ๋๋?ผ์?ด๋ฒ:\n"
#define MSGTR_AvailableAudioOutputDrivers "๊ฐ๋ฅํ ์ค๋์ค ์ถ๋ ฅ ๋๋ฆฌ์๋ฒ:\n"
#define MSGTR_AvailableAudioCodecs "๊ฐ๋ฅํ ์ค๋์ค ์ฝ๋?ฑ:\n"
#define MSGTR_AvailableVideoCodecs "๊ฐ๋ฅํ ๋น๋์ค ์ฝ๋?ฑ:\n"
#define MSGTR_AvailableAudioFm "\n๊ฐ๋ฅํ (์ปดํ์?ผ๋?) ์ค๋์ค ์ฝ๋?ฑ ์งํฉ/๋๋?ผ์?ด๋ฒ:\n"
#define MSGTR_AvailableVideoFm "\n๊ฐ๋ฅํ (์ปดํ์?ผ๋?) ๋น๋์ค ์ฝ๋?ฑ ์งํฉ/๋๋?ผ์?ด๋ฒ:\n"
#define MSGTR_AvailableFsType "๊ฐ๋ฅํ ์ ์ฒดํ๋ฉด ๋ ์?ด์ด ๋ณ๊ฒฝ ๋ชจ๋:\n"
#define MSGTR_CannotReadVideoProperties "๋น๋์ค: ์?์ฑ์? ์?ฝ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_NoStreamFound "์คํฐ๋ฆผ์? ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_ErrorInitializingVODevice "์ ํ?ํ ๋น๋์ค ์ถ๋ ฅ (-vo) ์ฅ์น๋ฅผ ์ด๊ฑฐ๋ ์ด๊ธฐํํ  ์ ์์ต๋๋ค.\n"
#define MSGTR_ForcedVideoCodec "๊ฐ์ ๋ก ์ฌ์ฉ๋? ๋น๋์ค ์ฝ๋?ฑ: %s\n"
#define MSGTR_ForcedAudioCodec "๊ฐ์ ๋ก ์ฌ์ฉ๋? ์ค๋์ค ์ฝ๋?ฑ: %s\n"
#define MSGTR_Video_NoVideo "๋น๋์ค: ๋น๋์ค ์์?\n"
#define MSGTR_NotInitializeVOPorVO "\n์น๋ช์ ? ์ค๋ฅ: ๋น๋์ค ํํฐ(-vf) ๋?๋ ๋น๋์ค ์ถ๋ ฅ(-vo)์? ์ด๊ธฐํํ  ์ ์์ต๋๋ค.\n"
#define MSGTR_Paused "  =====  ์ ์๋ฉ์ถค  ====="
#define MSGTR_PlaylistLoadUnable "\n์ฌ์?๋ชฉ๋ก? %s์?(๋ฅผ) ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_Exit_SIGILL_RTCpuSel \
"- MPlayer๊ฐ '์๋ชป๋? ์ฐ์ฐ'์ผ๋ก ์ข๋ฃ๋?์์ต๋๋ค.\n"\
"  ๋ฐํ์ CPU ๊ฐ?์ง ์ฝ๋์? ๋ฒ๊ทธ๊ฐ ์์? ์ง๋? ๋ชจ๋ฆ๋๋ค...\n"\
"  DOCS/HTML/en/bugreports.html์? ์ฐธ์กฐํ์ธ์.\n"
#define MSGTR_Exit_SIGILL \
"- MPlayer๊ฐ '์๋ชป๋? ์ฐ์ฐ'์ผ๋ก ์ข๋ฃ๋?์์ต๋๋ค.\n"\
"  ์ปดํ์?ผ/์ต์ ?ํ๋? CPU์ ๋ค๋ฅธ ๋ชจ๋?ธ์? CPU์?์ ์คํ๋?  ๋\n"\
"  ์ข์ข ์?ผ์ด๋๋ ํ์?์๋๋ค.\n"\
"  ํ์?ธํด ๋ณด์ธ์!\n"
#define MSGTR_Exit_SIGSEGV_SIGFPE \
"- MPlayer๊ฐ ์๋ชป๋? CPU/FPU/RAM์? ์ฌ์ฉ์ผ๋ก ์ข๋ฃ๋?์์ต๋๋ค.\n"\
"  MPlayer๋ฅผ --enable-debug ์ต์์ผ๋ก ๋ค์ ์ปดํ์?ผํ๊ณ , 'gdb' ๋ฐฑํธ๋ ์?ด์ค ๋ฐ?\n"\
"  ๋์ค์ด์๋ธํด๋ณด์ธ์. ์?์ธํ ์ฌํญ์? DOCS/HTML/en/bugreports_what.html#bugreports_crash๋ฅผ ์ฐธ์กฐํ์ธ์.\n"
#define MSGTR_Exit_SIGCRASH \
"- MPlayer๊ฐ ์ ์ ์๋ ์?ด์ ๋ก ์ข๋ฃ๋?์์ต๋๋ค.\n"\
"  MPlayer ์ฝ๋๋ ๋๋?ผ์?ด๋ฒ์? ๋ฒ๊ทธ, ํน์? gcc๋ฒ์ ์? ๋ฌธ์ ์?ผ ์๋? ์์ต๋๋ค.\n"\
"  MPlayer์? ๋ฌธ์ ๋?ผ๊ณ  ์?๊ฐ?ํ๋ค๋ฉด, DOCS/HTML/en/bugreports.html์? ์?ฝ๊ณ  ๊ฑฐ๊ธฐ์๋\n"\
"  ์ค๋ช๋๋ก ํ์๊ธฐ ๋ฐ๋?๋๋ค. ๊ฐ๋ฅํ ๋ฒ๊ทธ๋ฅผ ๋ณด๊ณ ํ  ๋?, ์?ด ์ ๋ณด๋ฅผ ํ?ฌํจํ์ธ์.\n"\
"  ๊ทธ๋ ์ง ์์ผ๋ฉด, ๋?์์ค ๋ฐฉ๋ฒ์?ด ์์ต๋๋ค.\n"


// mencoder.c:

#define MSGTR_UsingPass3ControlFile "pass3 ์ปจํธ๋กค ํ์?ผ์? ์ฌ์ฉํฉ๋๋ค.: %s\n"
#define MSGTR_MissingFilename "\nํ์?ผ์?ด๋ฆ์?ด ์์ต๋๋ค.\n\n"
#define MSGTR_CannotOpenFile_Device "ํ์?ผ/์ฅ์น๋ฅผ ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_CannotOpenDemuxer "ํด์?๊ธฐ๋ฅผ ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_NoAudioEncoderSelected "\n์ ํ?๋? ์ค๋์ค ์?ธ์ฝ๋?(-oac)๊ฐ ์์ต๋๋ค. ํ๋๋ฅผ ์ ํ?ํ๊ฑฐ๋, -nosound ์ต์์? ์ฌ์ฉํ์ธ์. -oac help๋ฅผ ์ฐธ์กฐํ์ธ์!\n"
#define MSGTR_NoVideoEncoderSelected "\n์ ํ?๋? ๋น๋์ค ์?ธ์ฝ๋?(-ovc)๊ฐ ์์ต๋๋ค. ํ๋๋ฅผ ์ ํ?๊ฑฐ๋, -ovc help๋ฅผ ์ฐธ์กฐํ์ธ์!\n"
#define MSGTR_CannotOpenOutputFile "์ถ๋ ฅ ํ์?ผ '%s'์?(๋ฅผ) ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_EncoderOpenFailed "์?ธ์ฝ๋? ์ด๊ธฐ์? ์คํจํ์ต๋๋ค.\n"
#define MSGTR_ForcingOutputFourcc "fourcc๋ฅผ %x [%.4s](์ผ)๋ก ๊ฐ์ ์ถ๋ ฅํฉ๋๋ค.\n"
#define MSGTR_DuplicateFrames "\n%d ํ๋ ์(๋ค)์?ด ์ค๋ณต๋?์์ต๋๋ค!\n"
#define MSGTR_SkipFrame "\nํ๋ ์์? ๊ฑด๋ ๋?๋๋ค!\n"
#define MSGTR_ErrorWritingFile "%s: ํ์?ผ ์ฐ๊ธฐ ์ค๋ฅ๊ฐ ๋ฐ์?ํ์ต๋๋ค.\n"
#define MSGTR_RecommendedVideoBitrate "%s CD์ฉ์ผ๋ก ์ถ์ฒํ  ๋งํ ๋น๋์ค ์ฃผ์ฌ์จ: %d\n"
#define MSGTR_VideoStreamResult "\n๋น๋์ค ์คํธ๋ฆผ: %8.3f kbit/s  (%d B/s)  ํ?ฌ๊ธฐ: %"PRIu64" ๋ฐ์?ดํธ  %5.3f ์ด  %d ํ๋ ์\n"
#define MSGTR_AudioStreamResult "\n์ค๋์ค ์คํธ๋ฆผ: %8.3f kbit/s  (%d B/s)  ํ?ฌ๊ธฐ: %"PRIu64" ๋ฐ์?ดํธ  %5.3f ์ด\n"

// cfg-mencoder.h:

#define MSGTR_MEncoderMP3LameHelp "\n\n"\
" vbr=<0-4>     ๊ฐ๋ณ ๋นํธ๋ ์?ดํธ ๋ฐฉ์?\n"\
"                0: cbr\n"\
"                1: mt\n"\
"                2: rh(๊ธฐ๋ณธ๊ฐ)\n"\
"                3: abr\n"\
"                4: mtrh\n"\
"\n"\
" abr           ํ?๊ท  ๋นํธ๋ ์?ดํธ\n"\
"\n"\
" cbr           ๊ณ ์  ๋นํธ๋ ์?ดํธ\n"\
"               ์?ผ๋ จ์? ABR ํ๋ฆฌ์ ๋ชจ๋๋ค์?์ CBR๋ชจ๋ ๊ฐ์  ์ฌ์ฉํจ.\n"\
"\n"\
" br=<0-1024>   ๋นํธ๋ ์?ดํธ๋ฅผ kBit๋จ์๋ก ์ง์  (CBR ๋ฐ? ABR์?์๋ง)\n"\
"\n"\
" q=<0-9>       ์?์ง (0-์ต๊ณ , 9-์ต์ ) (VBR์?์๋ง)\n"\
"\n"\
" aq=<0-9>      ์ฐ์ฐ ์?์ง (0-์ต๊ณ /๋?๋ฆผ, 9-์ต์ /๋น ๋ฆ)\n"\
"\n"\
" ratio=<1-100> ์์ถ๋ฅ \n"\
"\n"\
" vol=<0-10>    ์ค๋์ค ์๋ ฅ ์?๋ ์กฐ์ \n"\
"\n"\
" mode=<0-3>    (๊ธฐ๋ณธ๊ฐ: ์?๋?)\n"\
"                0: ์คํ๋ ์ค\n"\
"                1: ์กฐ์?ธํธ-์คํ๋ ์ค\n"\
"                2: ๋์ผ์ฑ๋?\n"\
"                3: ๋ชจ๋ธ\n"\
"\n"\
" padding=<0-2>\n"\
"                0: ์ํจ\n"\
"                1: ๋ชจ๋?\n"\
"                2: ์กฐ์ \n"\
"\n"\
" fast          ์?ผ๋ จ์? VBR ํ๋ฆฌ์ ๋ชจ๋๋ค์?์ ๋? ๋น ๋ฅธ ์?ธ์ฝ๋ฉ ์ฌ์ฉ,\n"\
"               ์?์ง์?ด ์กฐ๊ธ ์ ํ๋?๊ณ  ๋นํธ๋ ์?ดํธ๊ฐ ์กฐ๊ธ ๋? ๋์์ง?.\n"\
"\n"\
" preset=<value> ์ต์ ?์? ๊ฐ๋ฅํ ์?์ง ์ธํ๋ค.\n"\
"                 medium: VBR  ์?ธ์ฝ๋ฉ, ์ข์? ์?์ง\n"\
"                 (150-180 kbps ๋นํธ๋ ์?ดํธ ๋ฒ์)\n"\
"                 standard:  VBR ์?ธ์ฝ๋ฉ, ๋์? ์?์ง\n"\
"                 (170-210 kbps ๋นํธ๋ ์?ดํธ ๋ฒ์)\n"\
"                 extreme: VBR ์?ธ์ฝ๋ฉ, ๋งค์ฐ ๋์? ์?์ง\n"\
"                 (200-240 kbps ๋นํธ๋ ์?ดํธ ๋ฒ์)\n"\
"                 insane:  CBR  ์?ธ์ฝ๋ฉ, ๊ฐ์ฅ ๋์? ์?์ง\n"\
"                 (320 kbps ๋นํธ๋ ์?ดํธ ๊ณ ์ )\n"\
"                 <8-320>: ์ฃผ์ด์ง kbps ๋นํธ๋ ์?ดํธ์? ํ?๊ท ์น๋ก ABR ์?ธ์ฝ๋ฉ.\n\n"

// open.c, stream.c:
#define MSGTR_CdDevNotfound "CD-ROM ์ฅ์น '%s'๋ฅผ ์ฐพ์? ์ ์์ต๋๋ค!\n"
#define MSGTR_ErrTrackSelect "VCD ํธ๋์? ์ ํ?ํ๋ ๋?์ค ์?๋ฌ๊ฐ ๋ฐ์?ํ์ต๋๋ค."
#define MSGTR_ReadSTDIN "ํ์ค์๋ ฅ(stdin)์ผ๋ก ๋ถํฐ ์?ฝ๊ณ  ์์ต๋๋ค...\n"
#define MSGTR_UnableOpenURL "URL์? ์ด ์ ์์ต๋๋ค.: %s\n"
#define MSGTR_ConnToServer "์๋ฒ์? ์ฐ๊ฒฐ๋?์์ต๋๋ค.: %s\n"
#define MSGTR_FileNotFound "ํ์?ผ์? ์ฐพ์? ์ ์์ต๋๋ค.: '%s'\n"

#define MSGTR_SMBInitError "libsmbclient ๋?ผ์?ด๋ธ๋ฌ๋ฆฌ๋ฅผ ์ด๊ธฐํํ  ์ ์์ต๋๋ค.: %d\n"
#define MSGTR_SMBFileNotFound "lan์ผ๋ก ๋ถํฐ ์ด ์ ์์ต๋๋ค.: '%s'\n"
#define MSGTR_SMBNotCompiled "MPlayer๊ฐ SMB์?ฝ๊ธฐ๋ฅผ ํ  ์ ์๋?๋ก? ์ปดํ์?ผ๋?์ง ์์์ต๋๋ค.\n"

#define MSGTR_CantOpenDVD "DVD ์ฅ์น๋ฅผ ์ด ์ ์์ต๋๋ค.: %s (%s)\n"
#define MSGTR_DVDnumTitles "์?ด DVD์?๋ %d๊ฐ์? ํ์?ดํ์?ด ์์ต๋๋ค.\n"
#define MSGTR_DVDinvalidTitle "์ ํจํ์ง ์์? DVD ํ์?ดํ ๋ฒํธ์๋๋ค.: %d\n"
#define MSGTR_DVDnumChapters "์?ด DVD ํ์?ดํ์?๋ %d๊ฐ์? ์ฑํฐ๊ฐ ์์ต๋๋ค.\n"
#define MSGTR_DVDinvalidChapter "์ ํจํ์ง ์์? DVD ์ฑํฐ ๋ฒํธ์๋๋ค.: %d\n"
#define MSGTR_DVDnumAngles "์?ด DVD ํ์?ดํ์?๋ %d๊ฐ์? ์ต๊ธ์?ด ์์ต๋๋ค.\n"
#define MSGTR_DVDinvalidAngle "์ ํจํ์ง ์์? DVD ์ต๊ธ ๋ฒํธ์๋๋ค.: %d\n"
#define MSGTR_DVDnoIFO "DVD ํ์?ดํ %d๋ฅผ ์ํ IFOํ์?ผ์? ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_DVDnoVOBs "ํ์?ดํ VOBS (VTS_%02d_1.VOB)๋ฅผ ์ด ์ ์์ต๋๋ค.\n"

// demuxer.c, demux_*.c:
#define MSGTR_AudioStreamRedefined "๊ฒฝ๊ณ : ์ค๋์ค ์คํธ๋ฆผ ํค๋? %d๊ฐ ์ฌ์ ์?๋?์์ต๋๋ค.\n"
#define MSGTR_VideoStreamRedefined "๊ฒฝ๊ณ : ๋น๋์ค ์คํธ๋ฆผ ํค๋? %d๊ฐ ์ฌ์ ์?๋?์์ต๋๋ค.\n"
#define MSGTR_TooManyAudioInBuffer "\n๋ฒํ?ผ์? ๋๋ฌด ๋ง์? ์ค๋์ค ํจํท์?ด ์์ต๋๋ค.: (%d in %d bytes)\n"
#define MSGTR_TooManyVideoInBuffer "\n๋ฒํ?ผ์? ๋๋ฌด ๋ง์? ๋น๋์ค ํจํท์?ด ์์ต๋๋ค.: (%d in %d bytes)\n"
#define MSGTR_MaybeNI "non-interleaved ์คํธ๋ฆผ/ํ์?ผ์? ์ฌ์?ํ๊ณ ์๊ฑฐ๋ ์ฝ๋?ฑ์? ๋ฌธ์ ๊ฐ ์๋์?\n" \
                      "AVI ํ์?ผ์? ๊ฒฝ์ฐ, -ni ์ต์์ผ๋ก non-interleaved ๋ชจ๋๋ก ๊ฐ์  ์๋?ํด๋ณด์ธ์.\n"
#define MSGTR_SwitchToNi "\n์๋ชป๋? interleaved AVI ํ์?ผ์? ๋ฐ๊ฒฌํ์ต๋๋ค. -ni ๋ชจ๋๋ก ๋ณ๊ฒฝํฉ๋๋ค...\n"
#define MSGTR_Detected_XXX_FileFormat "%s ํ์?ผ ํ์?์? ๋ฐ๊ฒฌํ์ต๋๋ค.\n"
#define MSGTR_DetectedAudiofile "์ค๋์ค ํ์?ผ์? ๊ฐ?์งํ์์ต๋๋ค.\n"
#define MSGTR_InvalidMPEGES "์ ํจํ์ง ์์? MPEG-ES ์คํธ๋ฆผ??? ์ ์์?์?๊ฒ ๋ฌธ์?ํ์ธ์, ๋ฒ๊ทธ์?ผ์ง๋? ๋ชจ๋ฆ๋๋ค. :(\n"
#define MSGTR_FormatNotRecognized "============= ์ฃ์กํฉ๋๋ค. ์?ด ํ์?ผํ์?์? ์?ธ์?ํ์ง๋ชปํ๊ฑฐ๋ ์ง์?ํ์ง์์ต๋๋ค ===============\n"\
                                  "=== ๋ง์ฝ ์?ด ํ์?ผ์?ด AVI, ASF ๋?๋ MPEG ์คํธ๋ฆผ์?ด๋?ผ๋ฉด, ์ ์์?์?๊ฒ ๋ฌธ์?ํ์ธ์! ===\n"
#define MSGTR_MissingVideoStream "๋น๋์ค ์คํธ๋ฆผ์? ์ฐพ์ง ๋ชปํ์ต๋๋ค.\n"
#define MSGTR_MissingAudioStream "์ค๋์ค ์คํธ๋ฆผ์? ์ฐพ์ง ๋ชปํ์ต๋๋ค. -> ์๋ฆฌ์์?\n"
#define MSGTR_MissingVideoStreamBug "์ฐพ์? ์ ์๋ ๋น๋์ค ์คํธ๋ฆผ!? ์ ์์?์?๊ฒ ๋ฌธ์?ํ์ธ์, ๋ฒ๊ทธ์?ผ์ง๋? ๋ชจ๋ฆ๋๋ค. :(\n"

#define MSGTR_DoesntContainSelectedStream "demux: ํ์?ผ์? ์ ํ?๋? ์ค๋์ค ๋ฐ? ๋น๋์ค ์คํธ๋ฆผ์?ด ์์ต๋๋ค.\n"

#define MSGTR_NI_Forced "๊ฐ์ ๋ก"
#define MSGTR_NI_Detected "๋ฐ๊ฒฌ๋?จ"
#define MSGTR_NI_Message "%s NON-INTERLEAVED AVI ํ์?ผ ํ์?์๋๋ค.\n"

#define MSGTR_UsingNINI "NON-INTERLEAVED ๊นจ์ง AVI ํ์?ผ ํ์?์? ์ฌ์ฉ์ค์๋๋ค.\n"
#define MSGTR_CouldntDetFNo "(์ ๋ ํ?์์? ์ํ) ํ๋ ์ ์๋ฅผ ๊ฒฐ์ ํ  ์ ์์ต๋๋ค.\n"
#define MSGTR_CantSeekRawAVI "raw AVI ์คํธ๋ฆผ์?์๋ ํ?์ํ  ์ ์์ต๋๋ค. (์?ธ๋?ฑ์ค๊ฐ ํ์ํฉ๋๋ค. -idx ์ค์์น๋ก ์๋?ํด๋ณด์ธ์.)  \n"
#define MSGTR_CantSeekFile "์?ด ํ์?ผ์?์๋ ํ?์ํ  ์ ์์ต๋๋ค.\n"

#define MSGTR_MOVcomprhdr "MOV: ์์ถ๋? ํค๋?๋ (์์ง?) ์ง์?๋?์ง์์ต๋๋ค.\n"
#define MSGTR_MOVvariableFourCC "MOV: ๊ฒฝ๊ณ : ๊ฐ๋ณ์ ?์?ธ FOURCC ๋ฐ๊ฒฌ!?\n"
#define MSGTR_MOVtooManyTrk "MOV: ๊ฒฝ๊ณ : ํธ๋์?ด ๋๋ฌด ๋ง์ต๋๋ค."
#define MSGTR_DetectedTV "TV๋ฅผ ๋ฐ๊ฒฌํ์์ต๋๋ค! ;-)\n"
#define MSGTR_ErrorOpeningOGGDemuxer "ogg ํด์?๊ธฐ๋ฅผ ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_CannotOpenAudioStream "์ค๋์ค ์คํธ๋ฆผ์? ์ด ์ ์์ต๋๋ค.: %s\n"
#define MSGTR_CannotOpenSubtitlesStream "์?๋ง ์คํธ๋ฆผ์? ์ด ์ ์์ต๋๋ค.: %s\n"
#define MSGTR_OpeningAudioDemuxerFailed "์ค๋์ค ํด์?๊ธฐ๋ฅผ ์ฌ๋๋?ฐ ์คํจํ์ต๋๋ค.: %s\n"
#define MSGTR_OpeningSubtitlesDemuxerFailed "์?๋ง ํด์?๊ธฐ๋ฅผ ์ฌ๋๋?ฐ ์คํจํ์ต๋๋ค.: %s\n"
#define MSGTR_TVInputNotSeekable "TV ์๋ ฅ์? ์ฐพ์? ์ ์์ต๋๋ค! (์ฑ๋?์? ๋ฐ๊พธ๊ณ  ํ๋ฉด ๋? ์๋? ์์ต๋๋ค. ;)\n"
#define MSGTR_ClipInfo "ํ?ด๋ฆฝ ์ ๋ณด: \n"

#define MSGTR_LeaveTelecineMode "\ndemux_mpg: 30fps NTSC ํญ๋ชฉ์? ๊ฐ?์งํ์ฌ, ํ๋ ์์?๋?๋ฅผ ๋ฐ๊ฟ๋๋ค.\n"
#define MSGTR_EnterTelecineMode "\ndemux_mpg: 24fps progressive NTSC ํญ๋ชฉ์? ๊ฐ?์งํ์ฌ, ํ๋ ์์?๋?๋ฅผ ๋ฐ๊ฟ๋๋ค.\n"

// dec_video.c & dec_audio.c:
#define MSGTR_CantOpenCodec "์ฝ๋?ฑ์? ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_CantCloseCodec "์ฝ๋?ฑ์? ๋ซ์? ์ ์์ต๋๋ค.\n"

#define MSGTR_MissingDLLcodec "์ค๋ฅ: ์์ฒญํ DirectShow ์ฝ๋?ฑ %s๋ฅผ ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_ACMiniterror "Win32/ACM ์ค๋์ค ์ฝ๋?ฑ์? ์ด๊ฑฐ๋ ์ด๊ธฐํํ  ์ ์์ต๋๋ค. (DLL ํ์?ผ์?ด ์๋์?)\n"
#define MSGTR_MissingLAVCcodec "libavcodec์?์ '%s' ์ฝ๋?ฑ์? ์ฐพ์? ์ ์์ต๋๋ค...\n"

#define MSGTR_MpegNoSequHdr "MPEG: ์น๋ช์ ? ์ค๋ฅ: ์ํ์ค ํค๋?๋ฅผ ์ฐพ๋ ๋?์ค EOF.\n"
#define MSGTR_CannotReadMpegSequHdr "์น๋ช์ ? ์ค๋ฅ: ์ํ์ค ํค๋?๋ฅผ ์?ฝ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_CannotReadMpegSequHdrEx "์น๋ช์ ? ์ค๋ฅ: ์ํ์ค ํค๋? ํ์ฅ์? ์?ฝ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_BadMpegSequHdr "MPEG: ์๋ชป๋? ์ํ์ค ํค๋?์๋๋ค.\n"
#define MSGTR_BadMpegSequHdrEx "MPEG: ์๋ชป๋? ์ํ์ค ํค๋? ํ์ฅ์๋๋ค.\n"

#define MSGTR_ShMemAllocFail "๊ณต์  ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ  ์ ์์ต๋๋ค.\n"
#define MSGTR_CantAllocAudioBuf "์ค๋์ค ์ถ๋ ฅ ๋ฒํ?ผ๋ฅผ ํ ๋นํ  ์ ์์ต๋๋ค.\n"

#define MSGTR_UnknownAudio "์ ์ ์๋ ์ค๋์ค ํ์?์๋๋ค. -> ์๋ฆฌ์์?\n"

#define MSGTR_UsingExternalPP "[PP] ์ธ๋ถ ํํ์ฒ๋ฆฌ ํํฐ๋ฅผ ์ฌ์ฉํฉ๋๋ค. max q = %d\n"
#define MSGTR_UsingCodecPP "[PP] ์ฝ๋?ฑ์? ํํ์ฒ๋ฆฌ๋ฅผ ์ฌ์ฉํฉ๋๋ค. max q = %d\n"
#define MSGTR_VideoCodecFamilyNotAvailableStr "์์ฒญํ ๋น๋์ค ์ฝ๋?ฑ ์งํฉ [%s] (vfm=%s)์?(๋ฅผ) ์ฌ์ฉํ  ์ ์์ต๋๋ค. (์ปดํ์?ผ์์? ๊ฐ๋ฅํ๋?๋ก? ์ค์ ํ์ธ์.)\n"
#define MSGTR_AudioCodecFamilyNotAvailableStr "์์ฒญํ ์ค๋์ค ์ฝํ? ์งํฉ [%s] (afm=%s)์?(๋ฅผ) ์ฌ์ฉํ  ์ ์์ต๋๋ค. (์ปดํ์?ผ์์? ๊ฐ๋ฅํ๋?๋ก? ์ค์ ํ์ธ์.)\n"
#define MSGTR_OpeningVideoDecoder "๋น๋์ค ๋์ฝ๋?๋ฅผ ์ด๊ณ  ์์ต๋๋ค.: [%s] %s\n"
#define MSGTR_OpeningAudioDecoder "์ค๋์ค ๋์ฝ๋?๋ฅผ ์ด๊ณ  ์์ต๋๋ค.: [%s] %s\n"
#define MSGTR_VDecoderInitFailed "๋น๋์ค ๋์ฝ๋? ์ด๊ธฐํ๋ฅผ ์คํจํ์ต๋๋ค. :(\n"
#define MSGTR_ADecoderInitFailed "์ค๋์ค ๋์ฝ๋? ์ด๊ธฐํ๋ฅผ ์คํจํ์ต๋๋ค. :(\n"
#define MSGTR_ADecoderPreinitFailed "์ค๋์ค ๋์ฝ๋? ์ฌ์  ์ด๊ธฐํ๋ฅผ ์คํจํ์ต๋๋ค. :(\n"

// LIRC:
#define MSGTR_LIRCopenfailed "LIRC ์ง์? ์์์? ์คํจํ์ต๋๋ค.\n"
#define MSGTR_LIRCcfgerr "LIRC ์ค์ ํ์?ผ %s๋ฅผ ์?ฝ๋๋?ฐ ์คํจํ์ต๋๋ค.\n"

// vf.c:
#define MSGTR_CouldNotFindVideoFilter "๋น๋์ค ํํฐ '%s'์?(๋ฅผ) ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_CouldNotOpenVideoFilter "๋น๋์ค ํํฐ '%s'์?(๋ฅผ) ์ด ์ ์์ต๋๋ค.\n"
#define MSGTR_OpeningVideoFilter "๋น๋์ค ํํฐ๋ฅผ ์ด๊ณ  ์์ต๋๋ค.: "
#define MSGTR_CannotFindColorspace "'scale'์? ์๋?ํ์ง๋ง, ๋ง๋ ์ปฌ๋ฌ๊ณต๊ฐ์? ์ฐพ์? ์ ์์ต๋๋ค. :(\n"

// vd.c
#define MSGTR_CodecDidNotSet "VDec: ์ฝ๋?ฑ์?ด sh->disp_w์ sh->disp_h๋ก ์ค์ ๋?์ง ์์์, ๋ค์ ์๋?ํฉ๋๋ค.\n"
#define MSGTR_CouldNotFindColorspace "์ด์ธ๋ฆฌ๋ ์ปฌ๋ฌ๊ณต๊ฐ์? ์ฐพ์? ์ ์์ต๋๋ค. -vf ํ?ฌ๊ธฐ์กฐ์ ๋ก ๋ค์ ์๋?ํฉ๋๋ค...\n"
#define MSGTR_MovieAspectIsSet "ํ๋ฉด๋น์จ์?ด %.2f:1 ์๋๋ค. - ํ๋ฉด๋น์จ์? ์กฐ์ ํ๊ธฐ์ํด ์ฌ์  ํ?ฌ๊ธฐ์กฐ์ ์? ํฉ๋๋ค.\n"
#define MSGTR_MovieAspectUndefined "ํ๋ฉด๋น์จ์?ด ์ ์?๋?์ง ์์์ต๋๋ค. - ์ฌ์  ํ?ฌ๊ธฐ์กฐ์ ์?ด ์ ?์ฉ๋?์ง ์์์ต๋๋ค.\n"

// x11_common.c
#define MSGTR_EwmhFullscreenStateFailed "\nX11: EWMH ์ ์ฒดํ๋ฉด ์?ด๋ฒคํธ๋ฅผ ๋ณด๋ผ ์ ์์ต๋๋ค!\n"


// ====================== GUI messages/buttons ========================

#ifdef CONFIG_GUI

// --- labels ---
#define MSGTR_About "์ ๋ณด"
#define MSGTR_FileSelect "ํ์?ผ ์ ํ?..."
#define MSGTR_SubtitleSelect "์?๋ง ์ ํ?..."
#define MSGTR_OtherSelect "์ ํ?..."
#define MSGTR_AudioFileSelect "์?์ ํ์?ผ ์ ํ?..."
#define MSGTR_FontSelect "๊ธ๊ผด ์ ํ?..."
#define MSGTR_PlayList "์ฌ์?๋ชฉ๋ก?"
#define MSGTR_Equalizer "์?ดํ๋?ผ์?ด์ "
#define MSGTR_SkinBrowser "์คํจ ์ฐพ๊ธฐ"
#define MSGTR_Network "๋คํธ์ํ?ฌ ์คํธ๋ฆฌ๋ฐ?..."
#define MSGTR_Preferences "์ ํ?์ฌํญ"
#define MSGTR_NoMediaOpened "๋ฏธ๋์ด ์์?"
#define MSGTR_NoChapter "์ฑํฐ ์์?"
#define MSGTR_Chapter "์ฑํฐ %d"
#define MSGTR_NoFileLoaded "ํ์?ผ ์์?"

// --- buttons ---
#define MSGTR_Ok "ํ์?ธ"
#define MSGTR_Cancel "์ทจ์"
#define MSGTR_Add "์ถ๊ฐ"
#define MSGTR_Remove "์ญ์ "
#define MSGTR_Clear "์ง์"
#define MSGTR_Config "์ค์ "
#define MSGTR_ConfigDriver "๋๋?ผ์?ด๋ฒ ์ค์ "
#define MSGTR_Browse "์ด๊ธฐ"

// --- error messages ---
#define MSGTR_NEMDB "์ฃ์กํฉ๋๋ค. ๊ทธ๋ฆฌ๊ธฐ ๋ฒํ?ผ๋ฅผ ์ํ ์ถฉ๋ถํ ๋ฉ๋ชจ๋ฆฌ๊ฐ ์์ต๋๋ค."
#define MSGTR_NEMFMR "์ฃ์กํฉ๋๋ค. ๋ฉ๋ด ๋ ๋?๋ง?์? ์ํ ์ถฉ๋ถํ ๋ฉ๋ชจ๋ฆฌ๊ฐ ์์ต๋๋ค."
#define MSGTR_IDFGCVD "์ฃ์กํฉ๋๋ค. GUI ํธํ ๋น๋์ค ์ถ๋ ฅ ๋๋?ผ์?ด๋ฒ๋ฅผ ์ฐพ์ง ๋ชปํ์ต๋๋ค."

// --- skin loader error messages
#define MSGTR_SKIN_ERRORMESSAGE "[์คํจ] ์คํจ ์ค์ ํ์?ผ์? %d๋ฒ์งธ ์ค์? ์ค๋ฅ๊ฐ ์์ต๋๋ค.: %s"
#define MSGTR_SKIN_BITMAP_16bit  "16 ๋นํธ ํน์? ๋? ๋ฎ์? ํ์ง์? ๋นํธ๋งต์? ์ง์?๋?์ง ์์ต๋๋ค. (%s)\n"
#define MSGTR_SKIN_BITMAP_FileNotFound  "ํ์?ผ์? ์ฐพ์? ์ ์์ต๋๋ค. (%s)\n"
#define MSGTR_SKIN_BITMAP_PNGReadError "PNG ์?ฝ๊ธฐ ์ค๋ฅ์๋๋ค. (%s)\n"
#define MSGTR_SKIN_BITMAP_ConversionError "24 ๋นํธ์?์ 32 ๋นํธ๋ก ์ ํ ์ค๋ฅ (%s)\n"
#define MSGTR_SKIN_UnknownMessage "์ ์ ์๋ ๋ฉ์ธ์ง์๋๋ค.: %s\n"
#define MSGTR_SKIN_NotEnoughMemory "๋ฉ๋ชจ๋ฆฌ๊ฐ ๋ถ์กฑํฉ๋๋ค.\n"
#define MSGTR_SKIN_FONT_TooManyFontsDeclared "ํ?ฐํธ๊ฐ ๋๋ฌด ๋ง์?ด ์ ์ธ๋?์ด ์์ต๋๋ค.\n"
#define MSGTR_SKIN_FONT_FontFileNotFound "ํ?ฐํธํ์?ผ์? ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_SKIN_FONT_FontImageNotFound "ํ?ฐํธ ์?ด๋ฏธ์งํ์?ผ์? ์ฐพ์? ์ ์์ต๋๋ค.\n"
#define MSGTR_SKIN_FONT_NonExistentFont "ํ?ฐํธ ์ง์ ์?๊ฐ ์กด์ฌํ์ง ์์ต๋๋ค. (%s)\n"
#define MSGTR_SKIN_UnknownParameter "์ ์ ์๋ ๋งค๊ฐ๋ณ์์๋๋ค. (%s)\n"
#define MSGTR_SKIN_SKINCFG_SkinNotFound "์คํจ์? ์ฐพ์? ์ ์์ต๋๋ค. (%s)\n"
#define MSGTR_SKIN_LABEL "์คํจ:"

// --- gtk menus
#define MSGTR_MENU_AboutMPlayer "MPlayer ์ ๋ณด"
#define MSGTR_MENU_Open "์ด๊ธฐ..."
#define MSGTR_MENU_PlayFile "ํ์?ผ ์ฌ์?..."
#define MSGTR_MENU_PlayVCD "VCD ์ฌ์?..."
#define MSGTR_MENU_PlayDVD "DVD ์ฌ์?..."
#define MSGTR_MENU_PlayURL "URL ์ฌ์?..."
#define MSGTR_MENU_LoadSubtitle "์?๋ง ์ ํ?..."
#define MSGTR_MENU_DropSubtitle "์?๋ง ์์ฐ..."
#define MSGTR_MENU_LoadExternAudioFile "์?์ ํ์?ผ..."
#define MSGTR_MENU_Playing "์๋?"
#define MSGTR_MENU_Play "์ฌ์?"
#define MSGTR_MENU_Pause "๋ฉ์ถค"
#define MSGTR_MENU_Stop "์ ์ง"
#define MSGTR_MENU_NextStream "๋ค์?"
#define MSGTR_MENU_PrevStream "์?ด์ "
#define MSGTR_MENU_Size "ํ?ฌ๊ธฐ"
#define MSGTR_MENU_NormalSize "๋ณดํต ํ?ฌ๊ธฐ"
#define MSGTR_MENU_DoubleSize "๋?๋ฐฐ ํ?ฌ๊ธฐ"
#define MSGTR_MENU_FullScreen "์ ์ฒด ํ๋ฉด"
#define MSGTR_MENU_DVD "DVD"
#define MSGTR_MENU_VCD "VCD"
#define MSGTR_MENU_PlayDisc "๋์คํ?ฌ ์ด๊ธฐ..."
#define MSGTR_MENU_ShowDVDMenu "DVD ๋ฉ๋ด๋ณด๊ธฐ"
#define MSGTR_MENU_Titles "ํ์?ดํ"
#define MSGTR_MENU_Title "ํ์?ดํ %2d"
#define MSGTR_MENU_None "(์์?)"
#define MSGTR_MENU_Chapters "์ฑํฐ"
#define MSGTR_MENU_Chapter "์ฑํฐ %2d"
#define MSGTR_MENU_AudioLanguages "์ค๋์ค ์ธ์ด"
#define MSGTR_MENU_SubtitleLanguages "์?๋ง ์ธ์ด"
#define MSGTR_MENU_SkinBrowser "์คํจ์ ํ?"
#define MSGTR_MENU_Exit "์ข๋ฃ"
#define MSGTR_MENU_Mute "์?์๊ฑฐ"
#define MSGTR_MENU_Original "์?๋๋๋ก"
#define MSGTR_MENU_AspectRatio "ํ๋ฉด๋น์จ"
#define MSGTR_MENU_AudioTrack "์ค๋์ค ํธ๋"
#define MSGTR_MENU_Track "ํธ๋ %d"
#define MSGTR_MENU_VideoTrack "๋น๋์ค ํธ๋"

// --- equalizer
#define MSGTR_EQU_Audio "์ค๋์ค"
#define MSGTR_EQU_Video "๋น๋์ค"
#define MSGTR_EQU_Contrast "๋๋น: "
#define MSGTR_EQU_Brightness "๋ฐ?๊ธฐ: "
#define MSGTR_EQU_Hue "์์?: "
#define MSGTR_EQU_Saturation "์ฑ๋?: "
#define MSGTR_EQU_Front_Left "์ผ์ชฝ ์"
#define MSGTR_EQU_Front_Right "์ค๋ฅธ์ชฝ ์"
#define MSGTR_EQU_Back_Left "์ผ์ชฝ ๋ค"
#define MSGTR_EQU_Back_Right "์ค๋ฅธ์ชฝ ๋ค"
#define MSGTR_EQU_Center "๊ฐ์ด๋?ฐ"
#define MSGTR_EQU_Bass "๋ฒ ์?ด์ค"
#define MSGTR_EQU_All "๋ชจ๋?"
#define MSGTR_EQU_Channel1 "์ฑ๋? 1:"
#define MSGTR_EQU_Channel2 "์ฑ๋? 2:"
#define MSGTR_EQU_Channel3 "์ฑ๋? 3:"
#define MSGTR_EQU_Channel4 "์ฑ๋? 4:"
#define MSGTR_EQU_Channel5 "์ฑ๋? 5:"
#define MSGTR_EQU_Channel6 "์ฑ๋? 6:"

// --- playlist
#define MSGTR_PLAYLIST_Path "๊ฒฝ๋ก"
#define MSGTR_PLAYLIST_Selected "์ ํ?๋? ํ์?ผ"
#define MSGTR_PLAYLIST_Files "ํ์?ผ"
#define MSGTR_PLAYLIST_DirectoryTree "๋๋ ํ ๋ฆฌ"

// --- preferences
#define MSGTR_PREFERENCES_SubtitleOSD "์?๋ง & OSD"
#define MSGTR_PREFERENCES_Codecs "์ฝ๋?ฑ & ํด์?๊ธฐ"
#define MSGTR_PREFERENCES_Misc "๊ธฐํ"

#define MSGTR_PREFERENCES_None "์์?"
#define MSGTR_PREFERENCES_AvailableDrivers "๊ฐ๋ฅํ ๋๋?ผ์?ด๋ฒ:"
#define MSGTR_PREFERENCES_DoNotPlaySound "์ฌ์ด๋ ์ฌ์? ์ํจ"
#define MSGTR_PREFERENCES_NormalizeSound "์ฌ์ด๋ ํ์คํ"
#define MSGTR_PREFERENCES_EnableEqualizer "์?ดํ๋?ผ์?ด์  ์ฌ์ฉ"
#define MSGTR_PREFERENCES_ExtraStereo "์ธ๋ถ ์คํ๋ ์ค ์ฌ์ฉ"
#define MSGTR_PREFERENCES_Coefficient "๊ณ์:"
#define MSGTR_PREFERENCES_AudioDelay "์ค๋์ค ์ง์ฐ:"
#define MSGTR_PREFERENCES_DoubleBuffer "์?ด์ค ๋ฒํ?ผ๋ง? ์ฌ์ฉ"
#define MSGTR_PREFERENCES_DirectRender "๋ค์?ด๋ ํธ ๋ ๋?๋ง? ์ฌ์ฉ"
#define MSGTR_PREFERENCES_FrameDrop "ํ๋ ์ ๊ฑด๋๋ฐ๊ธฐ ์ฌ์ฉ"
#define MSGTR_PREFERENCES_HFrameDrop "๊ฐ์  ํ๋ ์ ๊ฑด๋๋ฐ๊ธฐ ์ฌ์ฉ(์ํํจ)"
#define MSGTR_PREFERENCES_Flip "์?ด๋ฏธ์ง ์?ํ ๋ฐ์ "
#define MSGTR_PREFERENCES_Panscan "ํฌ์ค์บ: "
#define MSGTR_PREFERENCES_Subtitle "์?๋ง:"
#define MSGTR_PREFERENCES_SUB_Delay "์ง์ฐ: "
#define MSGTR_PREFERENCES_SUB_FPS "FPS:"
#define MSGTR_PREFERENCES_SUB_POS "์์น: "
#define MSGTR_PREFERENCES_SUB_AutoLoad "์?๋?์ผ๋ก ์?๋ง ์ด์ง ์๊ธฐ"
#define MSGTR_PREFERENCES_SUB_Unicode "์ ๋์ฝ๋ ์?๋ง"
#define MSGTR_PREFERENCES_SUB_MPSUB "์ฃผ์ด์ง ์?๋ง์? MPlayer์ฉ ์?๋ง ํ์?์ผ๋ก ๋ฐ๊ฟ"
#define MSGTR_PREFERENCES_SUB_SRT "์ฃผ์ด์ง ์?๋ง์? SRT ํ์?์ผ๋ก ๋ฐ๊ฟ"
#define MSGTR_PREFERENCES_SUB_Overlap "์?๋ง ๊ฒน์นจ ์ผ๊ธฐ"
#define MSGTR_PREFERENCES_Font "๊ธ๊ผด:"
#define MSGTR_PREFERENCES_FontFactor "๊ธ๊ผด ํฉํฐ:"
#define MSGTR_PREFERENCES_PostProcess "ํํ์ฒ๋ฆฌ ์ฌ์ฉ"
#define MSGTR_PREFERENCES_AutoQuality "์?๋? ํ์ง์กฐ์ : "
#define MSGTR_PREFERENCES_NI "non-interleaved AVI ํ์ ์ฌ์ฉ"
#define MSGTR_PREFERENCES_IDX "ํ์ํ ๊ฒฝ์ฐ, ์?ธ๋?ฑ์ค ํ์?ด๋ธ ๋ค์ ๋ง๋ค๊ธฐ"
#define MSGTR_PREFERENCES_VideoCodecFamily "๋น๋์ค ์ฝ๋?ฑ ์งํฉ:"
#define MSGTR_PREFERENCES_AudioCodecFamily "์ค๋์ค ์ฝ๋?ฑ ์งํฉ:"
#define MSGTR_PREFERENCES_FRAME_OSD_Level "OSD ๋ ๋ฒจ"
#define MSGTR_PREFERENCES_FRAME_Subtitle "์?๋ง"
#define MSGTR_PREFERENCES_FRAME_Font "๊ธ๊ผด"
#define MSGTR_PREFERENCES_FRAME_PostProcess "ํํ์ฒ๋ฆฌ"
#define MSGTR_PREFERENCES_FRAME_CodecDemuxer "์ฝ๋?ฑ & ํด์?๊ธฐ"
#define MSGTR_PREFERENCES_FRAME_Cache "์บ?์"
#define MSGTR_PREFERENCES_Message "์ ํ?์ฌํญ๋ค์? ์ ?์ฉํ๋ ค๋ฉด ์ฌ์?๊ธฐ๋ฅผ ๋ค์ ์์ํด์ผ ํฉ๋๋ค!"
#define MSGTR_PREFERENCES_DXR3_VENC "๋น๋์ค ์?ธ์ฝ๋?:"
#define MSGTR_PREFERENCES_DXR3_LAVC "LAVC ์ฌ์ฉ (FFmpeg)"
#define MSGTR_PREFERENCES_FontEncoding1 "์ ๋์ฝ๋"
#define MSGTR_PREFERENCES_FontEncoding2 "์์ ๋ฝ์ด (ISO-8859-1)"
#define MSGTR_PREFERENCES_FontEncoding3 "Euro ํ?ฌํจ ์์ ๋ฝ์ด (ISO-8859-15)"
#define MSGTR_PREFERENCES_FontEncoding4 "์ฌ๋?ผ๋ธ/์ค์ ์ ๋ฝ์ด (ISO-8859-2)"
#define MSGTR_PREFERENCES_FontEncoding5 "์?์คํ๋ํ , ๊ฐ๋ฆฌ์์, ๋ชฐํ, ํฐํค์ด (ISO-8859-3)"
#define MSGTR_PREFERENCES_FontEncoding6 "๊ณ ๋ ๋ฐํธ ๋ฌธ์?์ (ISO-8859-4)"
#define MSGTR_PREFERENCES_FontEncoding7 "ํค๋ฆด ์?๋ชจ (ISO-8859-5)"
#define MSGTR_PREFERENCES_FontEncoding8 "์๋?์ด (ISO-8859-6)"
#define MSGTR_PREFERENCES_FontEncoding9 "ํ๋ ๊ทธ๋ฆฌ์ค์ด (ISO-8859-7)"
#define MSGTR_PREFERENCES_FontEncoding10 "ํฐํค์ด (ISO-8859-9)"
#define MSGTR_PREFERENCES_FontEncoding11 "๋ฐํธ์ด (ISO-8859-13)"
#define MSGTR_PREFERENCES_FontEncoding12 "์ผํธ์ด (ISO-8859-14)"
#define MSGTR_PREFERENCES_FontEncoding13 "ํ๋ธ๋ฆฌ์ด (ISO-8859-8)"
#define MSGTR_PREFERENCES_FontEncoding14 "๋ฌ์์์ด (KOI8-R)"
#define MSGTR_PREFERENCES_FontEncoding15 "์ฐํ?ฌ๋?ผ์?ด๋, ๋ฒจ๋ก๋ฃจ์์ด (KOI8-U/RU)"
#define MSGTR_PREFERENCES_FontEncoding16 "์ค๊ตญ์ด ๊ฐ์ฒด (CP936)"
#define MSGTR_PREFERENCES_FontEncoding17 "์ค๊ตญ์ด ๋ฒ์ฒด (BIG5)"
#define MSGTR_PREFERENCES_FontEncoding18 "์?ผ๋ณธ์ด (SHIFT-JIS)"
#define MSGTR_PREFERENCES_FontEncoding19 "ํ๊ตญ์ด (CP949)"
#define MSGTR_PREFERENCES_FontEncoding20 "ํ๊ตญ์ด (CP874)"
#define MSGTR_PREFERENCES_FontEncoding21 "๋ฐํธ์ด Windows (CP1251)"
#define MSGTR_PREFERENCES_FontEncoding22 "์ฌ๋?ผ๋ธ/์ค์ ์ ๋ฝ์ด Windows (CP1250)"
#define MSGTR_PREFERENCES_FontNoAutoScale "์?๋? ํ?ฌ๊ธฐ์กฐ์  ๋?"
#define MSGTR_PREFERENCES_FontPropWidth "์คํ?ฌ๋ฆฐ์? ๋๋น์? ๋น๋ก"
#define MSGTR_PREFERENCES_FontPropHeight "์คํ?ฌ๋ฆฐ์? ๋์?ด์? ๋น๋ก"
#define MSGTR_PREFERENCES_FontPropDiagonal "์คํ?ฌ๋ฆฐ์? ๋๊ฐ?์ ์? ๋น๋ก"
#define MSGTR_PREFERENCES_FontEncoding "์?ธ์ฝ๋ฉ:"
#define MSGTR_PREFERENCES_FontBlur "ํ??๋ฆผ:"
#define MSGTR_PREFERENCES_FontOutLine "์ธ๊ณฝ์ :"
#define MSGTR_PREFERENCES_FontTextScale "ํ?์คํธ ํ?ฌ๊ธฐ์กฐ์ :"
#define MSGTR_PREFERENCES_FontOSDScale "OSD ํ?ฌ๊ธฐ์กฐ์ :"
#define MSGTR_PREFERENCES_Cache "์บ?์ฌ ์ผ๊ธฐ/๋?๊ธฐ"
#define MSGTR_PREFERENCES_CacheSize "์บ?์ ํ?ฌ๊ธฐ: "
#define MSGTR_PREFERENCES_LoadFullscreen "์ ์ฒดํ๋ฉด์ผ๋ก ์์"
#define MSGTR_PREFERENCES_SaveWinPos "์ฐฝ์? ์์น ์ ์ฅ"
#define MSGTR_PREFERENCES_XSCREENSAVER "X์คํ?ฌ๋ฆฐ์ธ์?ด๋ฒ ์ ์ง"
#define MSGTR_PREFERENCES_PlayBar "์ฌ์?ํ์์ค ์ฌ์ฉ"
#define MSGTR_PREFERENCES_AutoSync "์?๋? ๋?๊ธฐํ ์ผ๊ธฐ/๋?๊ธฐ"
#define MSGTR_PREFERENCES_AutoSyncValue "์?๋? ๋?๊ธฐํ: "
#define MSGTR_PREFERENCES_CDROMDevice "CD-ROM ์ฅ์น:"
#define MSGTR_PREFERENCES_DVDDevice "DVD ์ฅ์น:"
#define MSGTR_PREFERENCES_FPS "๋?์?์? FPS:"
#define MSGTR_PREFERENCES_ShowVideoWindow "์ ์ง ์ค์?ผ ๋ ๋น๋์ค ์ฐฝ ๋ณด์?ด๊ธฐ"

#define MSGTR_ABOUT_UHU "GUI ๊ฐ๋ฐ ์ง์?: UHU Linux\n"

// --- messagebox
#define MSGTR_MSGBOX_LABEL_FatalError "์น๋ช์ ? ์ค๋ฅ!"
#define MSGTR_MSGBOX_LABEL_Error "์ค๋ฅ!"
#define MSGTR_MSGBOX_LABEL_Warning "๊ฒฝ๊ณ !"

#endif
