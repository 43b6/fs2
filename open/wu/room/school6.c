// Room: /u/d/devils/school6.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
���ߵ�������ݵĶ����磬��������ݴ�����������͵���ĵط�,����
������ʢ��ˮ��Ͱ��,�������������ڴ˴�����ƽ��һ��һֻ��ˮͰ����
,�����ˮ���....�ٺ�...ϴ��ƨ��׼�������Ӱ�!
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"school5",
  "north" : __DIR__"school7",
]));
set("objects",([
"/open/wu/npc/trainee3" : 2 ,]));

        set("outdoors", "/open/wu");
        setup();
}
