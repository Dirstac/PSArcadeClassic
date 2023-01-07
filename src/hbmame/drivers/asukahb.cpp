// license:BSD-3-Clause
// copyright-holders:Gaston90 (2016-2022)
#include "../mame/drivers/asuka.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( asukahc01 ) //asukac
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b68-13_hc01.ic23", 0x00000, 0x20000, CRC(356a3151) SHA1(a2929a30bcd45962a4fc08a980e82d9914078c29) )
	ROM_LOAD16_BYTE( "b68-12_hc01.ic8",  0x00001, 0x20000, CRC(8bd073d4) SHA1(53453cb0dd4aa606215922ad8363e536524dc0f3) )
	ROM_LOAD16_WORD( "b68-03_hc01.ic30", 0x80000, 0x80000, CRC(3d0d7798) SHA1(a63d9fc043e8ba0b79a7606c17faac406e0b92ec) )

	ROM_REGION( 0x80000, "tc0100scn", 0 )
	ROM_LOAD16_WORD_SWAP( "b68-01_hc01.ic3",  0x00000, 0x80000, CRC(d5dec087) SHA1(1f8888c15cb08c1c0d27ce29cb71106360c9c852) )

	ROM_REGION( 0xa0000, "pc090oj", 0 )
	ROM_LOAD16_WORD_SWAP( "b68-02_hc01.ic6", 0x00000, 0x80000, CRC(09927d23) SHA1(b9761286feaa14c4eb6fc87ec35e7245c318d687) )
	ROM_LOAD16_BYTE     ( "b68-07.ic5", 0x80000, 0x10000, CRC(c113acc8) SHA1(613c61a78df73dcb0b9c9018ae829e865baac772) )
	ROM_LOAD16_BYTE     ( "b68-06.ic4", 0x80001, 0x10000, CRC(f517e64d) SHA1(8be491bfe0f7eed58521de9d31da677acf635c23) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b68-11.ic27", 0x00000, 0x04000, CRC(c378b508) SHA1(1b145fe736b924f298e02532cf9f26cc18b42ca7) )
	ROM_CONTINUE(            0x10000, 0x0c000 )

	ROM_REGION( 0x10000, "msm", 0 )
	ROM_LOAD( "b68-10.ic24", 0x00000, 0x10000, CRC(387aaf40) SHA1(47c583564ef1d49ece15f97221b2e073e8fb0544) )

	ROM_REGION( 0x144, "pals", 0 )
	ROM_LOAD( "b68-04.ic32", 0x00000, 0x144, CRC(9be618d1) SHA1(61ee33c3db448a05ff8f455e77fe17d51106baec) )
	ROM_LOAD( "b68-05.ic43", 0x00000, 0x104, CRC(d6524ccc) SHA1(f3b56253692aebb63278d47832fc27b8b212b59c) )
ROM_END

/*    YEAR  NAME          PARENT       MACHINE         INPUT                   INIT        MONITOR   COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 1988, asukahc01,    asuka,       asuka,          asuka,  asuka_state, empty_init,     ROT270,  "hack",       "Asuka & Asuka (Translation Chinese)", MACHINE_SUPPORTS_SAVE )
