inherit ROOM;
void create() {
	set( "short", "$HIB$��$HIC$ʥ  ʯ  ��$HIB$��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"D"         : "/open/clan/sky-wu-chi/room/room91.c",
		"Y"         : "/open/clan/sky-wu-chi/room/room60.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"Q"         : "/open/clan/sky-wu-chi/room/room48.c",
		"V"         : "/open/clan/sky-wu-chi/room/room64.c",
		"B"         : "/open/clan/sky-wu-chi/room/room19.c",
		"O"         : "/open/clan/sky-wu-chi/room/room93",
		"F"         : "/open/clan/sky-wu-chi/room/room34.c",
		"U"         : "/open/clan/sky-wu-chi/room/room65.c",
		"W"         : "/open/clan/sky-wu-chi/room/room63.c",
		"N"         : "/open/clan/sky-wu-chi/room/room47.c",
		"R"         : "/open/clan/sky-wu-chi/room/room37.c",
		"L"         : "/open/clan/sky-wu-chi/room/room55.c",
		"X"         : "/open/clan/sky-wu-chi/room/room62.c",
		"J"         : "/open/clan/sky-wu-chi/room/room58.c",
		"S"         : "/open/clan/sky-wu-chi/room/room36.c",
		"H"         : "/open/clan/sky-wu-chi/room/room26.c",
		"E"         : "/open/clan/sky-wu-chi/room/room29.c",
		"I"         : "/open/clan/sky-wu-chi/room/room92.c",
		"M"         : "/open/clan/sky-wu-chi/room/room51.c",
		"P"         : "/open/clan/sky-wu-chi/room/room43.c",
		"C"         : "/open/clan/sky-wu-chi/room/room35.c",
		"Z"         : "/open/clan/sky-wu-chi/room/room71.c",
		"G"         : "/open/clan/sky-wu-chi/room/room28.c",
		"K"         : "/open/clan/sky-wu-chi/room/room57.c",
		"T"         : "/open/clan/sky-wu-chi/room/room68.c",
		"A"         : "/open/clan/sky-wu-chi/room/room13.c",
	]) );
	set( "long", @LONG
�ഫ,�Ϲ�ʱ��,��Ϊ���ϵ������˼�,����������,��������,
��ʱ�ж�ʮ��λ[0;1;34m��[1mj[1m��[1mt[1m��[1m��[0mΪ�˵ֿ��������Ū,�ܶ�Ⱥ��ֿ�,��
һλӵ��������а���쵼��,����λ�����ս,�����ǲ�������
��������ʱ�ڹ�ʥ�߾���~~����������,����ȡ����ռ�ĺ�ƽ,
�ڶ�ʮ�����ɹ����ʱ,���������ش���...����ʥ��Ҳ��ų�
�����Ĺ���ʹ���ǻ�Ϊ�ҽ�...��а��Ĵ���<[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m>�ı�����
�����ռ����˶�ʮ��λ��ʥ�ߵ��ź�....�����ñ�����ѧ,������
��ʮ���Ŵ���ʯ...ֻҪ����ĺ���ʥ��֮��...�����Դ��͵�
[0;1;33m��[1mt[1m��[1m��[1m��[1m��[1m��[1m��[0mȥ��....                                ��
LONG);
	setup();
	replace_program(ROOM);
}
