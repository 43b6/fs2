inherit ROOM;
void create()
{
	set("short", "�ּ�С·");
	set("long", @LONG
������������һ���ּ��С·�ϣ�С·���Գ����˸��ʵ���������
�ּ䴫�������������С·�������������������ȥ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/tendo/room/tower/make2",
  "west" : "/open/tendo/room/tower/make4",
]));
     set("outdoors",1);
	setup();
}
