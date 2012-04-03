inherit ROOM;
void create() {
	set( "short", "$HIW$�����Է� - $HIC$������$NOR$" );
	set( "object", ([
		"amount10" : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"file1"    : "/open/scholar/obj/icefan",
		"file10"   : "/open/killer/weapon/k_torch",
		"amount1"  : 1,
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
	]) );
	set( "item_desc", ([
		"map" : @ITEM

            --------------------
           |                    |
           |[0;1;35m [1;37m=[1m=[1m [1;35m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1ma[1m��[1m��[1;37m [1m=[1m=[0m |
           |                    |
            --------------------



[0;1;32m��[1mD[1m��[1m��[1;37m [1m-[1m-[0m [0;1;36m��[1m��[1m��[1m_[1m��[1m��[1;37m [1m-[1m-[1m [1;33m��[1mm[1m��[1m��[1m��[1m��[1;37m [1m-[1m-[1m [1;36m��[1m��[1m��[1m��[1m��[1m��[1;37m [1m-[1m-[1m [1;36m��[1mZ[1m��[1m��[1m��[1m��[0m
                       



ITEM,
	]) );
	set( "build", 10148 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room87",
		"east"      : "/open/clan/hell/room/room48.c",
		"out"       : "/open/clan/hell/room/hall.c",
		"up"        : "/open/clan/hell/room/room6.c",
		"west"      : "/open/clan/hell/room/room40",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�ߵ���������������о����˿���������ÿ
��ǰһ�����ͷ·𽫱�˺��һ�㣬Խ���˹����⣬Խ
��ʹ�࣬�ⲻ��һ�����ܴ��ĵط�����
������һ�ŵ�ͼ([0;1;5;32mM[1;5ma[1;5mp[0m)

             [0;1;35m��[1mr[1;31m��[1mC[1m��[1m][1;35m��[1mr[0m [0;1m��[1m��[1m��[1m��[0m

               [0;1m��[1mi[1;36m��[1mm[1m��[1m��[1m��[1m��[1;37m��[1mj[0m




LONG);
	setup();
	replace_program(ROOM);
}
