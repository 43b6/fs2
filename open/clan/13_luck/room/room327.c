inherit ROOM;
void create() {
	set( "short", "�ǿ�" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file1"    : "/open/love/obj/cloth1",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/love/obj/cloth1",
	]) );
	set( "owner", "woan" );
	set( "build", 11574 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room159.c",
		"west"      : "/open/clan/13_luck/room/room328",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��[0;1;5;36m��[1;5mP[1;5m��[1;5m��[0m������ҹ�������ǣ������һ��  
��Ҫȫ���綼������������֤���Ⱞ�Ķ��壬��
����Ϩ�����Ҹտ�ʼ��ʶ�㣬�Ҿ�����Զ����ȥ
����˵���ð�ά����ȥ����˵���㺦�µ����飬  
�ǰ�����׹��[0;1;35m��[1my[1m��[1mP[0m����������һ�Ϊ�㣬͵һ��
[35m����[0m����Ϊ����[0;1;34m��[1m��[1m��[1mR[1m��[1m��[1m��[1mH[0m���㣬ϣ��������ǣ�  
���ǿ��ĵ�һ��[0;1;31m��[1my[1m��[1mP[1m��[1mB[0m����˵��[0;1;32m��[1mu[1m��[1m��[0m���㾲����
�������ҵ����Ѿ�[0;1;33m��[1m��[1m��[1m��[1m��[1mP[1m��[1m��[0m���ӽ�����ã�
       
          �����Ĺ��¶�������[0;1;5;36m��[1;5m��[1;5m��[1;5m��[0m

LONG);
	setup();
	replace_program(ROOM);
}
