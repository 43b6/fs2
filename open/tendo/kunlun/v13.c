// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����ǿ�ջ�ĵڶ���¥�����Դ�������ؿ�
��������ׯ������ϱ��峺���׵ĺ�ˮ������
���Կ������ϵ��ҵ����º��洬�ϵ��ĵƹ⡣

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"down"  : __DIR__"v12",
]));
	set("objects", ([ /* sizeof() == 2 */
          ]));

	set("light_up",1);
	set("outdoors", "0");

	setup();
}
