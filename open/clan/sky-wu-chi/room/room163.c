inherit ROOM;
void create() {
	set( "short", "���" );
	set( "object", ([
		"file5"    : "/obj/gift/bingtang",
		"file6"    : "/obj/gift/hobowdan",
		"amount6"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file9"    : "/open/quests/snake/npc/obj/un_cloth",
		"file4"    : "/obj/gift/unknowdan",
		"amount3"  : 1,
		"file10"   : "/open/killer/obj/k_ring",
		"file8"    : "/open/quests/snake/npc/obj/un_whip",
		"file2"    : "/daemon/class/fighter/armband",
	]) );
	set( "light_up", 1 );
	set( "build", 10960 );
	set( "owner", "herononame" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room166",
	]) );
	set( "long", @LONG
��ǰһ��ʯ�ҵ�ʹ��ͣ���˽Ų���ֻ��������Ŵ�����
���֡���塯��ร�ԭ���ǵ���Ŀ�ĵ��ˣ�ֻ�ǣ�����û����
����Ү���㲻��ί�����������£����������ﻹ����������ɽ
����һ���˿����ٲ����������ţ����ܸ��ǳ����˲��ٺ���
�Ļ������ޣ���Ȼû�������ɣ��ܼ�����˹������Ҳ�㲻���
���ˡ�
LONG);
	setup();
	replace_program(ROOM);
}
