// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "��ջ");
	set("long", @LONG
һ���������ȫ����ĵĿ�ջ���������������¡�ĺܣ�һ
��Ҳ����������Ƨ�����е�����ģ��������⸽��ֻ����ҿ�ջ
�Ĺ�ϵ��....�벻�������С������ƺ��ѳ��˽�����ɽ��������
���������������ɻ��;����οͶ��ᵽ������ЪϢ��˳�����
һЩ�������ص���Ϣ��

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" :__DIR__"v9",
	"up"    :__DIR__"v13",
]));
	set("objects", ([ /* sizeof() == 2 */
	__DIR__"npc/two" : 1,
	__DIR__"npc/pin" : 1,
          ]));
	set("light_up",1);
	set("outdoors",0);

	setup();
}
