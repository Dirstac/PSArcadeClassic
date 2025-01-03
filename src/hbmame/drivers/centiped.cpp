// Proyecto Shadows Arcade Classic+
// copyright-holders:Gaston90
#include "../mame/drivers/centiped.cpp"

/**********
 Centipede
************/

ROM_START( astropd2 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION( 0x1000, "gfx1", 0 )
	ROM_LOAD( "astropd2.211", 0x0000, 0x0800, CRC(7bdb6861) SHA1(38e3f1827687e8a93ad66f69bee5a34f5f553fa4) )
	ROM_LOAD( "astropd2.212", 0x0800, 0x0800, CRC(043f9810) SHA1(954e55d6cc464f6f992f615b89b43d6cb29d35a9) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

ROM_START( astroped )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION( 0x1000, "gfx1", 0 )
	ROM_LOAD( "astroped.211", 0x0000, 0x0800, CRC(47992235) SHA1(f200c55327edee86abb82a2c33f75a2cf1abbb1f) )
	ROM_LOAD( "astroped.212", 0x0800, 0x0800, CRC(1f877066) SHA1(7254765394c71bfcca8a1061b0544438f2783218) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

ROM_START( cemescry )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION(0x1000, "gfx1", 0 )
	ROM_LOAD( "cemescry.211", 0x0000, 0x0800, CRC(dad550a7) SHA1(3a5067dac4d5fc5af01a9778654463f37f793606) )
	ROM_LOAD( "cemescry.212", 0x0800, 0x0800, CRC(47982803) SHA1(62b3aa80379fd71eb4efc5994b594b1eb69c0468) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

/* E418 - same as centipdb except for 2 roms */
ROM_START( centipb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "d1",         0x2000, 0x0800, CRC(b17b8e0b) SHA1(01944cf040cf23aeb4c50d4f2e63181e08a07310) )
	ROM_LOAD( "e1",         0x2800, 0x0800, CRC(7684398e) SHA1(eea8e05506a7af2fec55c2689e3caafc62ea524f) )
	ROM_LOAD( "h1",         0x3000, 0x0800, CRC(74580fe4) SHA1(35b8a8675e4e020e234e51c3e4bd4ee5c24b79d2) )
	ROM_LOAD( "centipb.4",      0x3800, 0x0800, CRC(849b1614) SHA1(9060e39ec1d5c66e26c8d28a86818bcc1801c610) )
	ROM_LOAD( "centipb.5",      0x6000, 0x0800, CRC(9d3ad0e5) SHA1(ad7520b3c95d729bfd022553817f868485e9a191) )

	ROM_REGION( 0x1000, "gfx1", 0 )
	ROM_LOAD( "136001-211.f7",  0x0000, 0x0800, CRC(880acfb9) SHA1(6c862352c329776f2f9974a0df9dbe41f9dbc361) )
	ROM_LOAD( "136001-212.hj7", 0x0800, 0x0800, CRC(b1397029) SHA1(974c03d29aeca672fffa4dfc00a06be6a851aacb) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",  0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

ROM_START( killiped )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION(0x1000, "gfx1", 0 )
	ROM_LOAD( "killiped.211", 0x0000, 0x0800, CRC(6115917c) SHA1(ec9d7fc6503647a4bd13894c44584cb308232ecd) )
	ROM_LOAD( "killiped.212", 0x0800, 0x0800, CRC(3d545e5b) SHA1(098f714084ada6ea1f379da9783581bb6be20d2c) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

/**********
 Magic Worm
************/

/* E626 - This dump has a bad "2" rom. Using the one from magworm for now. The coins aren't always detected. */
ROM_START( magworm2 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "magworm2.k0",  0x2000, 0x0800, CRC(22985495) SHA1(ad477b05d9303a03d99d110ff4546d1e5de165bd) )
	ROM_LOAD( "magworm2.k1",  0x2800, 0x0800, CRC(981e1ddc) SHA1(b7ba1d522cb45b646d2b26e06d9531196152722e) )
	ROM_LOAD( "11005-2.k2",   0x3000, 0x0800, CRC(f127f1c3) SHA1(3fddcd6f458ac60eaebacef921b522dd2c7b8141) )
	ROM_LOAD( "magworm2.k3",  0x3800, 0x0800, CRC(95029f45) SHA1(a341cf1a3bf91f24bf3ae87b2f5950228cc9379d) )


	ROM_REGION( 0x1000, "gfx1", 0 )
	ROM_LOAD( "11005-4.c4",  0x0000, 0x0800, CRC(cea64e1a) SHA1(9022102124e1ad93f912ce8bdf85f8a886b0879b) )
	ROM_LOAD( "11005-5.c5",  0x0800, 0x0800, CRC(24558ea5) SHA1(8cd7131e19afd7a96191b1b3c3fba7ae9a140f4b) )
ROM_END

/**********
 Centipede
************/

ROM_START( pacipede )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION(0x1000, "gfx1", 0 )
	ROM_LOAD( "paciped.211", 0x0000, 0x0800, CRC(4d2a94c0) SHA1(6f07f86ec6b8fbd62a63a808b20ced5116765f11) )
	ROM_LOAD( "paciped.212", 0x0800, 0x0800, CRC(10fac52e) SHA1(80c4f9148b5310b81963960ddc8ad4ec3e26217b) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

/**********
 Millipede
************/

ROM_START( silliped )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136013-104.mn1", 0x4000, 0x1000, CRC(40711675) SHA1(b595d6a0f5d3c611ade1b83a94c3b909d2124dc4) )
	ROM_LOAD( "136013-103.l1",  0x5000, 0x1000, CRC(fb01baf2) SHA1(9c1d0bbc20bf25dd21761a311fd1ed80aa029241) )
	ROM_LOAD( "136013-102.jk1", 0x6000, 0x1000, CRC(62e137e0) SHA1(9fe40db55ba1d20d4f11704f7f5df9ff75b87f30) )
	ROM_LOAD( "136013-101.h1",  0x7000, 0x1000, CRC(46752c7d) SHA1(ab06b1fd80271849946f90757b3837b617394929) )

	ROM_REGION( 0x1000, "gfx1", 0 )
	ROM_LOAD( "silliped.106", 0x0000, 0x0800, CRC(b946599e) SHA1(3bd7360c8b4e4bbda0ffcda6b8d5961430073d5c) )
	ROM_LOAD( "silliped.107", 0x0800, 0x0800, CRC(89442fbc) SHA1(450bedd9d09300191bbc31c4cc5b5ca0424661ef) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.e7", 0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) ) /* not used */
ROM_END

/**********
 Centipede
************/

ROM_START( vectiped )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION(0x1000, "gfx1", 0 )
	ROM_LOAD( "vectiped.211", 0x0000, 0x0800, CRC(33eccc59) SHA1(ab456577e4a4392abb35831a20e30e6314502367) )
	ROM_LOAD( "vectiped.212", 0x0800, 0x0800, CRC(bc71790c) SHA1(b5a69ee0cb5861a0b328f478a49d453716a8703d) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

ROM_START( vectrped )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "136001-307.d1",  0x2000, 0x0800, CRC(5ab0d9de) SHA1(8ea6e3304202831aabaf31dbd0f970a7b3bfe421) )
	ROM_LOAD( "136001-308.e1",  0x2800, 0x0800, CRC(4c07fd3e) SHA1(af4fdbf32c23b1864819d620a874e7f205da3cdb) )
	ROM_LOAD( "136001-309.fh1", 0x3000, 0x0800, CRC(ff69b424) SHA1(689fa560d40a384dcbcad7c8095bc12e91875580) )
	ROM_LOAD( "136001-310.j1",  0x3800, 0x0800, CRC(44e40fa4) SHA1(c557db83876afc8ab52047ab1a3c3bfef34d6351) )

	ROM_REGION(0x1000, "gfx1", 0 )
	ROM_LOAD( "vectrped.211", 0x0000, 0x0800, CRC(e65cd908) SHA1(ceb25e4850e5e7cbe2809c465313610b99321269) )
	ROM_LOAD( "vectrped.212", 0x0800, 0x0800, CRC(72616fcb) SHA1(c7617be0f28dbeae662738a0d8bba6c2e12a02aa) )

	ROM_REGION( 0x0100, "proms", 0 )
	ROM_LOAD( "136001-213.p4",   0x0000, 0x0100, CRC(6fa3093a) SHA1(2b7aeca74c1ae4156bf1878453a047330f96f0a8) )
ROM_END

/*    YEAR  NAME       PARENT    MACHINE    INPUT                      INIT     MONITOR COMPANY    FULLNAME FLAGS */
//Centipede
GAME( 2002, astropd2, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Astropede II", MACHINE_SUPPORTS_SAVE )
GAME( 2002, astroped, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Astropede", MACHINE_SUPPORTS_SAVE )
GAME( 1998, cemescry, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Cemescary", MACHINE_SUPPORTS_SAVE )
GAME( 1980, centipb,  centiped, centipdb, centiped, centiped_state, empty_init, ROT270, "bootleg", "Centipede", MACHINE_SUPPORTS_SAVE )
GAME( 1998, killiped, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Killipede", MACHINE_SUPPORTS_SAVE )
//Magic Worm
GAME( 1980, magworm2, centiped, magworm,  magworm,  centiped_state, empty_init, ROT270, "bootleg", "Magic Worm", MACHINE_SUPPORTS_SAVE )
//Centipede
GAME( 2000, pacipede, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Pacipede", MACHINE_SUPPORTS_SAVE )
//Millipede
GAME( 1998, silliped, milliped, milliped, milliped, centiped_state, empty_init, ROT270, "hack",    "Sillipede", MACHINE_SUPPORTS_SAVE )
//Centipede
GAME( 1998, vectiped, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Vectipede", MACHINE_SUPPORTS_SAVE )
GAME( 1998, vectrped, centiped, centiped, centiped, centiped_state, empty_init, ROT270, "hack",    "Vectorpede", MACHINE_SUPPORTS_SAVE )
