inherit ROOM;
void create() {
	set( "short", "$HIC$kalin$HIW$��$HIG$��˿ͷ$NOR$" );
	set( "owner", "taxi" );
	set( "item_desc", ([
		"[0;5;36m��[5mR[5m��[5m��[5m��[5m��[5m��[5m��[0m" : @ITEM

[33mcow...���B...ɫ��[0m[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
[33mcow...���B...ɫ��[0m
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10270 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room44.c",
		"north"     : "/open/clan/hell/room/room43.c",
		"east"      : "/open/clan/hell/room/room54.c",
	]) );
	set( "long", @LONG
    �������ϴε�ף��֮��...kalin��ʧ����...
��ʹ��ʧʹ��...����������ٴ����...
�������ѧ����..�ú�д����....�����Ա���
eq..eq....������..
eq..eq ........�Ұ���...
����ԶԶ����crash...........
��...�ͽ�...                    :)

$HIR$����1..ʹ��(˼)ʹ
����2..��(��)�Ա���
��..���׳�....12/20..(min)����һ��NOR$

  ú��ڤֽ��ʬ��(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
