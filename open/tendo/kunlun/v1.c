// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
�����ͨ������ɽ�ıؾ�֮·, СС��ʯ��·�ϲ�ʱ���Կ�
�����˴������߹���������Щ��װ�����������ܶ��Ǵ�Զ����
�����͵ظ��������ȡ�����ġ�·�Եķ羰��������ɽ���ӣ���
ʱ����С���ںӱ���ˮ���������Ӧ�����ׯ��Զ�ˡ�

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" :__DIR__"v2",
"south" : "/open/tendo/m4",
]));
	set("outdoors", "1");

	setup();
}
