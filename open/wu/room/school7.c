// Room: /u/d/devils/school7.c

inherit ROOM;

void create()
{
	set("short", "���䳡");
	set("long", @LONG
�����ǹ�������ͽ���书�ĵط�,������ͽ����������,��������һһָ
��,���е������ڴ˱���,��ʤ���Ӳ��ܵõ�����������ָ����
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"school2",
  "south" : __DIR__"school6",
  "north" : __DIR__"school4",
  "east" : __DIR__"school8",
]));

        set("outdoors", "/open/wu");
        setup();
}
