inherit ROOM;
void create() {
	set( "short", "쭳��㳡" );
	set( "owner", "woan" );
	set( "object", ([
		"file5"    : "/open/love/obj/cloth1",
		"amount2"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount8"  : 1,
		"file9"    : "/open/port/obj/wolf_ring",
		"file8"    : "/open/wu/npc/obj/armband",
		"file6"    : "/open/gsword/obj/ring-1",
		"file3"    : "/open/gsword/obj/yau_glove",
		"file4"    : "/open/wu/npc/obj/armband",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 47,
		"amount3"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"amount10" : 1,
		"amount7"  : 1,
		"file10"   : "/open/gsword/obj/yuskirt",
	]) );
	set( "build", 10134 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room326",
		"south"     : "/open/clan/13_luck/room/room98.c",
	]) );
	set( "long", @LONG
�ۼ�[0;1;30m��[1m@[1m��[1m��[1m��[1mL[1m��[1m��[0m��·�ϣ�ֻ��һ̨[0;1;5;36mS[1;5mV[0m����쭳�����������·֮
������һ����Сʱ��������ģ�������̨[0;1;5;36mS[1;5mV[0m���д���������ȴ��
��һ���ӣ���֪����[0;1;34m��[1mt[1m��[1m��[1m��[1mM[1m��[1mh[0m�����͸���̨[0;1;5;36mS[1;5mV[0m��������������ǰ
����ȥ������һ��һ�ѵ�[32m�䶳��[0m�����и�������д�š�
  
             [0;1;5;31m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[0;1;35m��[1mh[1m��[1mh[1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1mq[0m
         
         [0;1;5;36mP[1;5mS[1;5m.[1;5m��[1;5m��[1;5m��[1;5m~[1;5m��[1;5mL[1;5m��[1;5m��[1;5m��[1;5mA[1;5m1[1;5m��[1;5mp[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mt[1;5m��[1;5m��[1;5m��[1;5me[1;5m��[1;5mF[0m

LONG);
	setup();
	replace_program(ROOM);
}
