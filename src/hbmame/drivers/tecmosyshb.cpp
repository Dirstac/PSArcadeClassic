// Proyecto Shadows Arcade Classic+
// copyright-holders:Gaston90
#include "../mame/drivers/tecmosys.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( tkdenshohc01 )
	ROM_REGION( 0x600000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "aeprge-2_hc01.pal", 0x00000, 0x80000, CRC(56ce787e) SHA1(3fee1acd962246b7f15fc9f578702207836a8e54) )
	ROM_LOAD16_BYTE( "aeprgo-2_hc01.pau", 0x00001, 0x80000, CRC(dc0e29f2) SHA1(7234faeda7cc625bf5eb4d75f8524f8dc9b55c6b) )

	ROM_REGION( 0x040000, "audiocpu", 0 )
	ROM_LOAD( "aesprg-2.z1", 0x000000, 0x020000, CRC(43550ab6) SHA1(2580129ef8ebd9295249175de4ba985c752e06fe) )
	ROM_RELOAD(              0x020000, 0x020000)

	ROM_REGION( 0x2200, "cpu2", ROMREGION_ERASE00 )
	ROM_LOAD( "tkdensho_68hc11a8.rom",    0x0000, 0x2000, NO_DUMP )
	ROM_LOAD( "tkdensho_68hc11a8.eeprom", 0x2000, 0x0200, NO_DUMP )

	ROM_REGION( 0x4000000, "sprites", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD_SWAP( "ae100h.ah1",    0x0000000, 0x0400000, CRC(06be252b) SHA1(08d1bb569fd2e66e2c2f47da7780b31945232e62) )
	ROM_LOAD32_WORD_SWAP( "ae100.al1",     0x0000002, 0x0400000, CRC(009cdff4) SHA1(fd88f07313d14fd4429b09a1e8d6b595df3b98e5) )
	ROM_LOAD32_WORD_SWAP( "ae101h.bh1",    0x0800000, 0x0400000, CRC(f2469eff) SHA1(ba49d15cc7949437ba9f56d9b425a5f0e62137df) )
	ROM_LOAD32_WORD_SWAP( "ae101.bl1",     0x0800002, 0x0400000, CRC(db7791bb) SHA1(1fe40b747b7cee7a9200683192b1d60a735a0446) )
	ROM_LOAD32_WORD_SWAP( "ae102h.ch1",    0x1000000, 0x0200000, CRC(f9d2a343) SHA1(d141ac0b20be587e77a576ef78f15d269d9c84e5) )
	ROM_LOAD32_WORD_SWAP( "ae102.cl1",     0x1000002, 0x0200000, CRC(681be889) SHA1(8044ca7cbb325e6dcadb409f91e0c01b88a1bca7) )
	ROM_LOAD32_WORD_SWAP( "ae104.el1",     0x2000002, 0x0400000, CRC(e431b798) SHA1(c2c24d4f395bba8c78a45ecf44009a830551e856) )
	ROM_LOAD32_WORD_SWAP( "ae105.fl1",     0x2800002, 0x0400000, CRC(b7f9ebc1) SHA1(987f664072b43a578b39fa6132aaaccc5fe5bfc2) )
	ROM_LOAD32_WORD_SWAP( "ae106.gl1",     0x3000002, 0x0200000, CRC(7c50374b) SHA1(40865913125230122072bb13f46fb5fb60c088ea) )

	ROM_REGION( 0x080000, "layer0", 0 )
	ROM_LOAD( "ae300w36.bd1",  0x000000, 0x080000, CRC(e829f29e) SHA1(e56bfe2669ed1d1ae394c644def426db129d97e3) )

	ROM_REGION( 0x100000, "layer1", 0 )
	ROM_LOAD( "ae200w74.ba1",  0x000000, 0x100000, CRC(c1645041) SHA1(323670a6aa2a4524eb968cc0b4d688098ffeeb12) )

	ROM_REGION( 0x100000, "layer2", 0 )
	ROM_LOAD( "ae201w75.bb1",  0x000000, 0x100000, CRC(3f63bdff) SHA1(0d3d57fdc0ec4bceef27c11403b3631d23abadbf) )

	ROM_REGION( 0x100000, "layer3", 0 )
	ROM_LOAD( "ae202w76.bc1",  0x000000, 0x100000, CRC(5cc857ca) SHA1(2553fb5220433acc15dfb726dc064fe333e51d88) )

	ROM_REGION( 0x400000, "ymz", 0 )
	ROM_LOAD( "ae400t23.ya1", 0x000000, 0x200000, CRC(c6ffb043) SHA1(e0c6c5f6b840f63c9a685a2c3be66efa4935cbeb) )
	ROM_LOAD( "ae401t24.yb1", 0x200000, 0x200000, CRC(d83f1a73) SHA1(412b7ac9ff09a984c28b7d195330d78c4aac3dc5) )

	ROM_REGION( 0x80000, "oki", 0 )
	ROM_LOAD( "ae500w07.ad1", 0x00000, 0x80000, CRC(3734f92c) SHA1(048555b5aa89eaf983305c439ba08d32b4a1bb80) )
ROM_END

ROM_START( tkdenshohc02 )
	ROM_REGION( 0x600000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "aeprge-2_hc02.pal", 0x00000, 0x80000, CRC(60f63f74) SHA1(f927b41d74e8fddec3c22746dbf40ce931a26b1b) )
	ROM_LOAD16_BYTE( "aeprgo-2_hc02.pau", 0x00001, 0x80000, CRC(85d5a27f) SHA1(b5e47a30dfcce6de8a8e4eccdd6708fa3e4d351c) )

	ROM_REGION( 0x040000, "audiocpu", 0 )
	ROM_LOAD( "aesprg-2.z1", 0x000000, 0x020000, CRC(43550ab6) SHA1(2580129ef8ebd9295249175de4ba985c752e06fe) )
	ROM_RELOAD(              0x020000, 0x020000)

	ROM_REGION( 0x2200, "cpu2", ROMREGION_ERASE00 )
	ROM_LOAD( "tkdensho_68hc11a8.rom",    0x0000, 0x2000, NO_DUMP )
	ROM_LOAD( "tkdensho_68hc11a8.eeprom", 0x2000, 0x0200, NO_DUMP )

	ROM_REGION( 0x4000000, "sprites", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD_SWAP( "ae100h.ah1",    0x0000000, 0x0400000, CRC(06be252b) SHA1(08d1bb569fd2e66e2c2f47da7780b31945232e62) )
	ROM_LOAD32_WORD_SWAP( "ae100.al1",     0x0000002, 0x0400000, CRC(009cdff4) SHA1(fd88f07313d14fd4429b09a1e8d6b595df3b98e5) )
	ROM_LOAD32_WORD_SWAP( "ae101h.bh1",    0x0800000, 0x0400000, CRC(f2469eff) SHA1(ba49d15cc7949437ba9f56d9b425a5f0e62137df) )
	ROM_LOAD32_WORD_SWAP( "ae101.bl1",     0x0800002, 0x0400000, CRC(db7791bb) SHA1(1fe40b747b7cee7a9200683192b1d60a735a0446) )
	ROM_LOAD32_WORD_SWAP( "ae102h.ch1",    0x1000000, 0x0200000, CRC(f9d2a343) SHA1(d141ac0b20be587e77a576ef78f15d269d9c84e5) )
	ROM_LOAD32_WORD_SWAP( "ae102.cl1",     0x1000002, 0x0200000, CRC(681be889) SHA1(8044ca7cbb325e6dcadb409f91e0c01b88a1bca7) )
	ROM_LOAD32_WORD_SWAP( "ae104.el1",     0x2000002, 0x0400000, CRC(e431b798) SHA1(c2c24d4f395bba8c78a45ecf44009a830551e856) )
	ROM_LOAD32_WORD_SWAP( "ae105.fl1",     0x2800002, 0x0400000, CRC(b7f9ebc1) SHA1(987f664072b43a578b39fa6132aaaccc5fe5bfc2) )
	ROM_LOAD32_WORD_SWAP( "ae106.gl1",     0x3000002, 0x0200000, CRC(7c50374b) SHA1(40865913125230122072bb13f46fb5fb60c088ea) )

	ROM_REGION( 0x080000, "layer0", 0 )
	ROM_LOAD( "ae300w36.bd1",  0x000000, 0x080000, CRC(e829f29e) SHA1(e56bfe2669ed1d1ae394c644def426db129d97e3) )

	ROM_REGION( 0x100000, "layer1", 0 )
	ROM_LOAD( "ae200w74.ba1",  0x000000, 0x100000, CRC(c1645041) SHA1(323670a6aa2a4524eb968cc0b4d688098ffeeb12) )

	ROM_REGION( 0x100000, "layer2", 0 )
	ROM_LOAD( "ae201w75.bb1",  0x000000, 0x100000, CRC(3f63bdff) SHA1(0d3d57fdc0ec4bceef27c11403b3631d23abadbf) )

	ROM_REGION( 0x100000, "layer3", 0 )
	ROM_LOAD( "ae202w76.bc1",  0x000000, 0x100000, CRC(5cc857ca) SHA1(2553fb5220433acc15dfb726dc064fe333e51d88) )

	ROM_REGION( 0x400000, "ymz", 0 )
	ROM_LOAD( "ae400t23.ya1", 0x000000, 0x200000, CRC(c6ffb043) SHA1(e0c6c5f6b840f63c9a685a2c3be66efa4935cbeb) )
	ROM_LOAD( "ae401t24.yb1", 0x200000, 0x200000, CRC(d83f1a73) SHA1(412b7ac9ff09a984c28b7d195330d78c4aac3dc5) )

	ROM_REGION( 0x80000, "oki", 0 )
	ROM_LOAD( "ae500w07.ad1", 0x00000, 0x80000, CRC(3734f92c) SHA1(048555b5aa89eaf983305c439ba08d32b4a1bb80) )
ROM_END

ROM_START( tkdenshohc03 )
	ROM_REGION( 0x600000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "aeprge-2_hc03.pal", 0x00000, 0x80000, CRC(e0c230ab) SHA1(4f7b3952d0d1b31a6a087fc09f7e995baf633cb5) )
	ROM_LOAD16_BYTE( "aeprgo-2_hc03.pau", 0x00001, 0x80000, CRC(92af28b0) SHA1(bb768a2105c390c6bb7c5540c64fdc12d81ffabb) )

	ROM_REGION( 0x040000, "audiocpu", 0 )
	ROM_LOAD( "aesprg-2.z1", 0x000000, 0x020000, CRC(43550ab6) SHA1(2580129ef8ebd9295249175de4ba985c752e06fe) )
	ROM_RELOAD(              0x020000, 0x020000)

	ROM_REGION( 0x2200, "cpu2", ROMREGION_ERASE00 )
	ROM_LOAD( "tkdensho_68hc11a8.rom",    0x0000, 0x2000, NO_DUMP )
	ROM_LOAD( "tkdensho_68hc11a8.eeprom", 0x2000, 0x0200, NO_DUMP )

	ROM_REGION( 0x4000000, "sprites", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD_SWAP( "ae100h.ah1",    0x0000000, 0x0400000, CRC(06be252b) SHA1(08d1bb569fd2e66e2c2f47da7780b31945232e62) )
	ROM_LOAD32_WORD_SWAP( "ae100.al1",     0x0000002, 0x0400000, CRC(009cdff4) SHA1(fd88f07313d14fd4429b09a1e8d6b595df3b98e5) )
	ROM_LOAD32_WORD_SWAP( "ae101h.bh1",    0x0800000, 0x0400000, CRC(f2469eff) SHA1(ba49d15cc7949437ba9f56d9b425a5f0e62137df) )
	ROM_LOAD32_WORD_SWAP( "ae101.bl1",     0x0800002, 0x0400000, CRC(db7791bb) SHA1(1fe40b747b7cee7a9200683192b1d60a735a0446) )
	ROM_LOAD32_WORD_SWAP( "ae102h.ch1",    0x1000000, 0x0200000, CRC(f9d2a343) SHA1(d141ac0b20be587e77a576ef78f15d269d9c84e5) )
	ROM_LOAD32_WORD_SWAP( "ae102.cl1",     0x1000002, 0x0200000, CRC(681be889) SHA1(8044ca7cbb325e6dcadb409f91e0c01b88a1bca7) )
	ROM_LOAD32_WORD_SWAP( "ae104.el1",     0x2000002, 0x0400000, CRC(e431b798) SHA1(c2c24d4f395bba8c78a45ecf44009a830551e856) )
	ROM_LOAD32_WORD_SWAP( "ae105.fl1",     0x2800002, 0x0400000, CRC(b7f9ebc1) SHA1(987f664072b43a578b39fa6132aaaccc5fe5bfc2) )
	ROM_LOAD32_WORD_SWAP( "ae106.gl1",     0x3000002, 0x0200000, CRC(7c50374b) SHA1(40865913125230122072bb13f46fb5fb60c088ea) )

	ROM_REGION( 0x080000, "layer0", 0 )
	ROM_LOAD( "ae300w36.bd1",  0x000000, 0x080000, CRC(e829f29e) SHA1(e56bfe2669ed1d1ae394c644def426db129d97e3) )

	ROM_REGION( 0x100000, "layer1", 0 )
	ROM_LOAD( "ae200w74.ba1",  0x000000, 0x100000, CRC(c1645041) SHA1(323670a6aa2a4524eb968cc0b4d688098ffeeb12) )

	ROM_REGION( 0x100000, "layer2", 0 )
	ROM_LOAD( "ae201w75.bb1",  0x000000, 0x100000, CRC(3f63bdff) SHA1(0d3d57fdc0ec4bceef27c11403b3631d23abadbf) )

	ROM_REGION( 0x100000, "layer3", 0 )
	ROM_LOAD( "ae202w76.bc1",  0x000000, 0x100000, CRC(5cc857ca) SHA1(2553fb5220433acc15dfb726dc064fe333e51d88) )

	ROM_REGION( 0x400000, "ymz", 0 )
	ROM_LOAD( "ae400t23.ya1", 0x000000, 0x200000, CRC(c6ffb043) SHA1(e0c6c5f6b840f63c9a685a2c3be66efa4935cbeb) )
	ROM_LOAD( "ae401t24.yb1", 0x200000, 0x200000, CRC(d83f1a73) SHA1(412b7ac9ff09a984c28b7d195330d78c4aac3dc5) )

	ROM_REGION( 0x80000, "oki", 0 )
	ROM_LOAD( "ae500w07.ad1", 0x00000, 0x80000, CRC(3734f92c) SHA1(048555b5aa89eaf983305c439ba08d32b4a1bb80) )
ROM_END

/*    YEAR    NAME         PARENT   MACHINE    INPUT                          INIT      MONITOR   COMPANY       FULLNAME FLAGS */
// Hack/Homebrow
GAME( 1996, tkdenshohc01,  tkdensho, tecmosys, tecmosys, tecmosys_state, init_tkdensho,   ROT0,   "hack",       "Toukidenshou (Enable Hidden Characters)", MACHINE_SUPPORTS_SAVE )
GAME( 1996, tkdenshohc02,  tkdensho, tecmosys, tecmosys, tecmosys_state, init_tkdensho,   ROT0,   "DDJ",        "Toukidenshou (Always Have Super Move)", MACHINE_SUPPORTS_SAVE )
GAME( 1996, tkdenshohc03,  tkdensho, tecmosys, tecmosys, tecmosys_state, init_tkdensho,   ROT0,   "DDJ",        "Toukidenshou (Easy Move)", MACHINE_SUPPORTS_SAVE )
