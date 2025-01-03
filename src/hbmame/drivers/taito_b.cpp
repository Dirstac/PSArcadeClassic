// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/taito_b.cpp"

 /************
 Bubble Buster
***************/

ROM_START( bubbleb ) // same as pbobble except for ic2
	ROM_REGION( 0x80000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "pb-1c18.bin", 0x00000, 0x40000, CRC(5de14f49) SHA1(91d537748f26e19a5c32de4b8dad341750de39ef) )
	ROM_LOAD16_BYTE( "pb-ic2.usa",  0x00001, 0x40000, CRC(b3b7566b) SHA1(455342b6988741f8c83ed97ef1a2d3b885cbc9d1) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "pb-ic27.bin", 0x00000, 0x20000, CRC(26efa4c4) SHA1(795af8f6d23c2cbe2c811ec9ab1f14a4eee3f99e) )

	ROM_REGION( 0x100000, "tc0180vcu", 0 )
	ROM_LOAD( "pb-ic14.bin", 0x00000, 0x80000, CRC(55f90ea4) SHA1(793c79e5b72171124368ad09dd31235252c541f5) )
	ROM_LOAD( "pb-ic9.bin",  0x80000, 0x80000, CRC(3253aac9) SHA1(916d85aa96e2914630833292a0655b0389b4a39b) )

	ROM_REGION( 0x100000, "ymsnd:adpcma", 0 )
	ROM_LOAD( "pb-ic15.bin", 0x000000, 0x100000, CRC(0840cbc4) SHA1(1adbd7aef44fa80832f63dfb8efdf69fd7256a57) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Bubble Buster
GAME( 1994, bubbleb, pbobble, pbobble, pbobble, taitob_state, init_taito_b, ROT0, "Taito Corporation", "Bubble Buster", MACHINE_SUPPORTS_SAVE )
