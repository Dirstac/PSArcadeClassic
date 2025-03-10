// Proyecto Shadows Arcade Classic+
// copyright-holders:Gaston90
#include "../mame/drivers/1942.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( 1942hc01 )
	ROM_REGION( 0x20000, "maincpu", ROMREGION_ERASEFF )
	ROM_LOAD( "srb-03_hc01.m3",  0x00000, 0x4000, CRC(dcec86c9) SHA1(73ee4ca2d861eaa5805b4b8ff7db05cd6f06650a) )
	ROM_LOAD( "srb-04_hc01.m4",  0x04000, 0x4000, CRC(cdd75d78) SHA1(6ee714f9d3dd1a0c9404a8e3c8ca96a74c08e1cf) )
	ROM_LOAD( "srb-05.m5",   0x10000, 0x4000, CRC(d102911c) SHA1(35ba1d82bd901940f61d8619273463d02fc0a952) )
	ROM_LOAD( "srb-06.m6",   0x14000, 0x2000, CRC(466f8248) SHA1(2ccc8fc59962d3001fbc10e8d2f20a254a74f251) )
	ROM_LOAD( "srb-07.m7",   0x18000, 0x4000, CRC(0d31038c) SHA1(b588eaf6fddd66ecb2d9832dc197f286f1ccd846) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "sr-01_hc01",   0x0000, 0x4000, CRC(4ee7ab6b) SHA1(609d2d9124da47d305c15ee034efd64a73adc1c0) )

	ROM_REGION( 0x2000, "gfx1", 0 )
	ROM_LOAD( "sr-02.f2",    0x0000, 0x2000, CRC(6ebca191) SHA1(0dbddadde54a0ab66994c4a8726be05c6ca88a0e) )

	ROM_REGION( 0xc000, "gfx2", 0 )
	ROM_LOAD( "sr-08.a1",    0x0000, 0x2000, CRC(3884d9eb) SHA1(5cbd9215fa5ba5a61208b383700adc4428521aed) )
	ROM_LOAD( "sr-09.a2",    0x2000, 0x2000, CRC(999cf6e0) SHA1(5b8b685038ec98b781908b92eb7fb9506db68544) )
	ROM_LOAD( "sr-10.a3",    0x4000, 0x2000, CRC(8edb273a) SHA1(85fdd4c690ed31e6396e3c16aa02140ee7ea2d61) )
	ROM_LOAD( "sr-11.a4",    0x6000, 0x2000, CRC(3a2726c3) SHA1(187c92ef591febdcbd1d42ab850e0cbb62c00873) )
	ROM_LOAD( "sr-12.a5",    0x8000, 0x2000, CRC(1bd3d8bb) SHA1(ef4dce605eb4dc8035985a415315ec61c21419c6) )
	ROM_LOAD( "sr-13.a6",    0xa000, 0x2000, CRC(658f02c4) SHA1(f087d69e49e38cf3107350cde18fcf85a8fa04f0) )

	ROM_REGION( 0x10000, "gfx3", 0 )
	ROM_LOAD( "sr-14.l1",    0x0000, 0x4000, CRC(2528bec6) SHA1(29f7719f18faad6bd1ec6735cc24e69168361470) )
	ROM_LOAD( "sr-15.l2",    0x4000, 0x4000, CRC(f89287aa) SHA1(136fff6d2a4f48a488fc7c620213761459c3ada0) )
	ROM_LOAD( "sr-16.n1",    0x8000, 0x4000, CRC(024418f8) SHA1(145b8d5d6c8654cd090955a98f6dd8c8dbafe7c1) )
	ROM_LOAD( "sr-17.n2",    0xc000, 0x4000, CRC(e2c7e489) SHA1(d4b5d575c021f58f6966df189df94e08c5b3621c) )

	ROM_REGION( 0x0300, "palproms", 0 )
	ROM_LOAD( "sb-5.e8",     0x0000, 0x0100, CRC(93ab8153) SHA1(a792f24e5c0c3c4a6b436102e7a98199f878ece1) )
	ROM_LOAD( "sb-6.e9",     0x0100, 0x0100, CRC(8ab44f7d) SHA1(f74680a6a987d74b3acb32e6396f20e127874149) )
	ROM_LOAD( "sb-7.e10",    0x0200, 0x0100, CRC(f4ade9a4) SHA1(62ad31d31d183cce213b03168daa035083b2f28e) )

	ROM_REGION( 0x0100, "charprom", 0 )
	ROM_LOAD( "sb-0.f1",     0x0000, 0x0100, CRC(6047d91b) SHA1(1ce025f9524c1033e48c5294ee7d360f8bfebe8d) )

	ROM_REGION( 0x0100, "tileprom", 0 )
	ROM_LOAD( "sb-4.d6",     0x0000, 0x0100, CRC(4858968d) SHA1(20b5dbcaa1a4081b3139e7e2332d8fe3c9e55ed6) )

	ROM_REGION( 0x0100, "sprprom", 0 )
	ROM_LOAD( "sb-8.k3",     0x0000, 0x0100, CRC(f6fad943) SHA1(b0a24ea7805272e8ebf72a99b08907bc00d5f82f) )

	ROM_REGION( 0x0400, "proms", 0 )
	ROM_LOAD( "sb-2.d1",     0x0000, 0x0100, CRC(8bb8b3df) SHA1(49de2819c4c92057fedcb20425282515d85829aa) )
	ROM_LOAD( "sb-3.d2",     0x0100, 0x0100, CRC(3b0c99af) SHA1(38f30ac1e48632634e409f328ee3051b987de7ad) )
	ROM_LOAD( "sb-1.k6",     0x0200, 0x0100, CRC(712ac508) SHA1(5349d722ab6733afdda65f6e0a98322f0d515e86) )
	ROM_LOAD( "sb-9.m11",    0x0300, 0x0100, CRC(4921635c) SHA1(aee37d6cdc36acf0f11ff5f93e7b16e4b12f6c39) )
ROM_END

ROM_START( 1942hc02 )
	ROM_REGION( 0x20000, "maincpu", ROMREGION_ERASEFF )
	ROM_LOAD( "srb-03_hc02.n3", 0x00000, 0x4000, CRC(c78cdc46) SHA1(50ac4ab7a884b8555f15d959dac2b33e317fcd16) )
	ROM_LOAD( "srb-04_hc02.n4", 0x04000, 0x4000, CRC(863f2f49) SHA1(dbe7d13bcaa3919e1be51ba04fbf50f898e5c76e) )
	ROM_LOAD( "srb-05_hc02.n5", 0x10000, 0x4000, CRC(0da115f9) SHA1(0517c60877a8067fb13c61c63a032a3f5ed16a57) )
	ROM_LOAD( "1-n6.bin",    0x14000, 0x2000, CRC(821c6481) SHA1(06becb6bf8b4bde3a458098498eecad566a87711) )
	ROM_LOAD( "1-n7.bin",    0x18000, 0x4000, CRC(5df525e1) SHA1(70cd2910e2945db76bd6ebfa0ff09a5efadc2d0b) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "sr-01.c11",   0x0000, 0x4000, CRC(bd87f06b) SHA1(821f85cf157f81117eeaba0c3cf0337eac357e58) )

	ROM_REGION( 0x2000, "gfx1", 0 )
	ROM_LOAD( "sr-02_hc02.f2", 0x0000, 0x2000, CRC(b3e1862b) SHA1(736fbef1ef15892ba6ea87be5366abf520e3d5fd) )

	ROM_REGION( 0xc000, "gfx2", 0 )
	ROM_LOAD( "sr-08_hc02.a1", 0x00000, 0x2000, CRC(21f3fee2) SHA1(2eed32063b808fae27255e9b026fb92209cfc214) )
	ROM_LOAD( "sr-09_hc02.a2", 0x02000, 0x2000, CRC(5542beae) SHA1(f37fad84fbeb2f98092bdb2f2a3bc80804392e07) )
	ROM_LOAD( "sr-10_hc02.a3", 0x04000, 0x2000, CRC(118e87ec) SHA1(0b79eee01bd6aef2e85409de16ff9cb032c457cb) )
	ROM_LOAD( "sr-11_hc02.a4", 0x06000, 0x2000, CRC(fc3db895) SHA1(bc469fd6f5634eca77728a24e4e6d83a2074c780) )
	ROM_LOAD( "sr-12_hc02.a5", 0x08000, 0x2000, CRC(4a336de1) SHA1(8359abb42fc9f774350524a7fbf561e6c8799822) )
	ROM_LOAD( "sr-13_hc02.a6", 0x0a000, 0x2000, CRC(1d4a69c9) SHA1(34d3ea5e7666fee1ecd0ac763f3114d9c8d60806) )

	ROM_REGION( 0x10000, "gfx3", 0 )
	ROM_LOAD( "sr-14_hc02.l1", 0x0000, 0x4000, CRC(8408b932) SHA1(bea9d62156c566e7a3ae296e3e411d5542b7544b) )
	ROM_LOAD( "sr-15_hc02.l2", 0x4000, 0x4000, CRC(2218cb80) SHA1(5dd05b59a55804bedf637abb339188e9c9e6037a) )
	ROM_LOAD( "sr-16_hc02.n1", 0x8000, 0x4000, CRC(4d5ed5e5) SHA1(a66e979d8a6ed9cae77c8415130c5f17f8149eda) )
	ROM_LOAD( "sr-17_hc02.n2", 0xc000, 0x4000, CRC(8f4a1688) SHA1(69bab8f167a47eee34dadf56b1727b414f3e6579) )

	ROM_REGION( 0x0300, "palproms", 0 )
	ROM_LOAD( "sb-5.e8",     0x0000, 0x0100, CRC(93ab8153) SHA1(a792f24e5c0c3c4a6b436102e7a98199f878ece1) )
	ROM_LOAD( "sb-6.e9",     0x0100, 0x0100, CRC(8ab44f7d) SHA1(f74680a6a987d74b3acb32e6396f20e127874149) )
	ROM_LOAD( "sb-7.e10",    0x0200, 0x0100, CRC(f4ade9a4) SHA1(62ad31d31d183cce213b03168daa035083b2f28e) )

	ROM_REGION( 0x0100, "charprom", 0 )
	ROM_LOAD( "sb-0.f1",     0x0000, 0x0100, CRC(6047d91b) SHA1(1ce025f9524c1033e48c5294ee7d360f8bfebe8d) )

	ROM_REGION( 0x0100, "tileprom", 0 )
	ROM_LOAD( "sb-4.d6",     0x0000, 0x0100, CRC(4858968d) SHA1(20b5dbcaa1a4081b3139e7e2332d8fe3c9e55ed6) )

	ROM_REGION( 0x0100, "sprprom", 0 )
	ROM_LOAD( "sb-8.k3",     0x0000, 0x0100, CRC(f6fad943) SHA1(b0a24ea7805272e8ebf72a99b08907bc00d5f82f) )

	ROM_REGION( 0x0400, "proms", 0 )
	ROM_LOAD( "sb-2.d1",     0x0000, 0x0100, CRC(8bb8b3df) SHA1(49de2819c4c92057fedcb20425282515d85829aa) )
	ROM_LOAD( "sb-3.d2",     0x0100, 0x0100, CRC(3b0c99af) SHA1(38f30ac1e48632634e409f328ee3051b987de7ad) )
	ROM_LOAD( "sb-1.k6",     0x0200, 0x0100, CRC(712ac508) SHA1(5349d722ab6733afdda65f6e0a98322f0d515e86) )
	ROM_LOAD( "sb-9.m11",    0x0300, 0x0100, CRC(4921635c) SHA1(aee37d6cdc36acf0f11ff5f93e7b16e4b12f6c39) )
ROM_END

/*    YEAR    NAME       PARENT   MACHINE  INPUT                INIT      MONITOR   COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 2015, 1942hc01, 1942, _1942, 1942, _1942_state, driver_init, ROT270, "cmonkey", "1942 (With attract mode in free play)", MACHINE_SUPPORTS_SAVE )
GAME( 1984, 1942hc02, 1942, _1942, 1942, _1942_state, driver_init, ROT270, "Jerky and Chris Moore", "1942 (Galaga X)", MACHINE_SUPPORTS_SAVE )
