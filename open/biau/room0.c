// Room: /open/su/room/biau_room1.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
    ��һ��������,��е�һ�����Ͼ����µ�����,û��,�������������ֵ�����,
    ������ĸо���ȫ��ͬ.
    �ڴ���֮��,��������̫ʦ��,����������----�Զ���(Ting-Tan Sau)������--
    ������(Sue-Sue Wang).
    �Ӱ��迴��,���˸ö���ϰ��֮��,����,ǽ��ȴ��һ����ɽˮ,�����ɻ�.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"opening1",
  "north" : __DIR__"room6",
  "east" : __DIR__"room1",

]));
	set("objects", ([ /* sizeof() == 2 */
//  "/u/j/jcder/npc/ting.c" : 1,
  "/u/j/jcder/npc/wang.c" : 1,
]));

	setup();
}
