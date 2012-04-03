inherit ROOM;
void create() {
	set( "short", "$HIB$葬刀冢$NOR$" );
	set( "owner", "hild" );
	set( "build", 10040 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room90.c",
		"west"      : "/open/clan/sky-wu-chi/room/room87.c",
		"east"      : "/open/clan/sky-wu-chi/room/room80",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
当你来到这里，一股凉意直扑你而来，你看了看四周，原来这里是
传说中葬刀的地方。传说中妖刀有三把，目前现世的为其一，妖刀村雨
。其拥有者必须有极大的功力及血腥气息，否则会被其刀所吞噬原来的
本性，剩下的两把未现世，据长老所说，未现世之两把妖刀比妖刀村雨
威力更为强大，但终究是一个未解的传说．．．
LONG);
	setup();
	replace_program(ROOM);
}
