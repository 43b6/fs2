// Room: /open/gsword/room/lake2.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
һ��ͷ紵�����,ϤϤ���ֵĴ������ߵĻ���,��������Ҷ
��Ʈ����,������ķ���������,�����ᵯȥմ�������ϵĻ���Ҷ
,�����⻨Ҷ�е�������,��ȴ�ǳ����е���ս�뷳��....
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"su7",
  "southwest" : __DIR__"lake3.c",
  "northwest" : __DIR__"lake1.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
]));
        set("outdoors","/open/gsword");

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

	setup();
}
