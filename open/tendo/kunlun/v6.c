// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
һ��ϡ��ƽ����С���ӣ�������˼�������
�����κʹ�.......

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"v3",
]));
	set("objects", ([ /* sizeof() == 2 */
          __DIR__"npc/man" : 1,
          ]));
	set("outdoors",0);

	setup();
}
